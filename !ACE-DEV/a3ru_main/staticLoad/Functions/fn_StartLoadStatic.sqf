#include <macros.h>
#include <defines.h>

private ["_reloadTime", "_magazine", "_vehicle", "_mag_name", "_loadMethod", "_maxMagazines"];
_magazine = _this select 1;
_vehicle = _this select 2;
_mag_name = _this select 3;
_loadMethod = _this select 4;
_maxMagazines = _this select 5;

if (isNull _vehicle) exitWith {
	hint "Cant find vehicle!";
};

if ((count (magazines _vehicle)) >= _maxMagazines) exitWith {
	hint "Weapon is already loaded!";
};

switch (_loadMethod) do {
	case 1: { // PLAYER'S MAGAZINE
		if ((ACE_Player distance _vehicle) < X_DISTANCE) then {
			_magazines = magazinesAmmo ACE_Player;
			for "_i" from 0 to ((count _magazines) - 1) do {
				_mag = _magazines select _i;
				_magClass = _mag select 0;
				_magCount = _mag select 1;
				if (_magClass == _magazine && _magCount > 0) exitWith {
					ACE_Player removeMagazine _magazine;
					
					_vehicle addMagazine [_magazine, _magCount];
					if (needReload _vehicle == 1) then { reload _vehicle };
				};
			};
		};
	};
	case 2: { // MAGAZINE AROUND
		_mag = _magazine call FNC(FindMagazineAround); // HOLDER, COUNT, MAGARRAY, INDEX
		if (count _mag > 0) then {
			_mag_holder = _mag select 0;
			_mag_count = _mag select 1;
			_mag_array = _mag select 2;
			_mag_index = _mag select 3;
			
			// REMOVE WEAPON HOLDER MAGAZINE
			_mag_array deleteAt _mag_index;
			
			if (count _mag_array > 0) then {
				if (
					count (backpackCargo _mag_holder) == 0 &&
					count (weaponCargo _mag_holder) == 0 &&
					count (itemCargo _mag_holder) == 0
				) then {
					_mag_holder addWeaponCargoGlobal ['FakeWeapon',1];
				};
			};
			
			clearMagazineCargoGlobal _mag_holder;
			for "_i" from 0 to ((count _mag_array) - 1) do {
				_element = _mag_array select _i;
				_mag_holder addMagazineAmmoCargo [_element select 0, 1, _element select 1];
			};

			if ("FakeWeapon" in (weaponCargo _mag_holder)) then {
				clearWeaponCargoGlobal _mag_holder;
			};
			
			_vehicle addMagazine [_magazine, _mag_count];
			if (needReload _vehicle == 1) then { reload _vehicle };
		};
	};
	case 3: { // VEHICLE MAGAZINE
		_veh_magz = magazinesAmmoCargo _vehicle;
		for "_i" from 0 to ((count _veh_magz) - 1) do {
			_veh_mag = _veh_magz select _i;
			_veh_magClass = _veh_mag select 0;
			_veh_magCount = _veh_mag select 1;
			if ((_magazine == _veh_magClass) && (_veh_magCount > 0)) exitWith {
				// REMOVE VEHICLE CARGO MAGAZINE
				_veh_magz deleteAt _i;
				clearMagazineCargoGlobal _vehicle;
				for "_i" from 0 to ((count _veh_magz) - 1) do {
					_element = _veh_magz select _i;
					_vehicle addMagazineAmmoCargo [_element select 0, 1, _element select 1];
				};
				
				_vehicle addMagazine [_magazine, _veh_magCount];
				if (needReload _vehicle == 1) then { reload _vehicle };
			};
		};
	};
};