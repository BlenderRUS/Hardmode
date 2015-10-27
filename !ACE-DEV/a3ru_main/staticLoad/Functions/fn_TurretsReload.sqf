#include <macros.h>
#include <defines.h>

private ["_vehicle", "_player", "_parameters", "_actions", "_turrets"];
_vehicle = _this select 0;
_player = _this select 1;
_parameters = _this select 2;

if (!alive _vehicle) exitWith {};

_actions = [];

_turrets = allTurrets [_vehicle, false];

{
	private ["_weaps_turret", "_weapon", "_maxMagazines", "_magazines", "_magazine"];
	if ((ACE_Player == (vehicle ACE_Player)) || ((ACE_Player != (vehicle ACE_Player)) && (_vehicle turretUnit _x) == ACE_Player)) then {
		_weaps_turret = _vehicle weaponsTurret _x;
		for "_i" from 0 to ((count _weaps_turret) - 1) do {
			_weapon = _weaps_turret select _i;
			_maxMagazines = getNumber (configFile >> "CfgWeapons" >> _weapon >> "a3ru_maxMagazines");
			if (_maxMagazines == 0) then { _maxMagazines = X_MAXMAGAZINES };
			_magazines = [];
			{ _magazines pushBack (toLower _x)} forEach (getArray (configFile >> "CfgWeapons" >> _weapon >> "Magazines"));
			if (_weapon != "" && {[_vehicle, _x, _magazines, _maxMagazines] call FNC(IsTurretEmpty)}) then {
				for "_i2" from 0 to ((count _magazines) -1) do {
					_magazine = _magazines select _i2;
					_mag_name = _magazine call FNC(GetMagazineName);
					_reloadTime = getNumber (configFile >> "CfgWeapons" >> _weapon >> "a3ru_reloadTime");
					if (_reloadTime == 0) then { _reloadTime = X_RELOADTIME };

					// CHOOSE LOADING METHOD
					_loadMethod = [] call FNC(LoadMethod);
					if (_loadMethod > 0) then {
						_actions pushBack
						[
							[
								_magazine, // ACTION
								_mag_name, // DISPLAY STRING
								"a3\ui_f\data\IGUI\RscTitles\MPProgress\respawn_ca.paa", // ICON
								{
									_this = _this select 2;
									[] call FNC(StartAnim);
									[
										_this select 0,
										_this,
										{ (_this select 0) call FNC(StartLoad) },
										{ hint "Load canceled!" },
										format["Loading %1...", _this select 3]
									] call A3RU_Misc_fnc_progressBar;
									(_this select 0) spawn FNC(EndAnim);
								}, // STATEMENT
								{true}, // CONDITION
								{},
								[_reloadTime, _magazine, _vehicle, _mag_name, _x, _loadMethod, _magazines, _maxMagazines] // ARGUMENTS
							] call ace_interact_menu_fnc_createAction,
							[],
							_magazine
						];
					};
				};
			};
		};
	};
} forEach _turrets;
_actions