#include <macros.h>
#include <defines.h>

private ["_vehicle", "_player", "_parameters", "_actions"];
_vehicle = _this select 0;
_player = _this select 1;
_parameters = _this select 2;

if (!alive _vehicle) exitWith {};

_actions = [];

_weapons = weapons _vehicle;

for "_i" from 0 to ((count _weapons) - 1) do {
	_weapon = _weapons select _i;

	// GET SETTINGS
	_maxMagazines = getNumber (configFile >> "CfgWeapons" >> _weapon >> "a3ru_maxMagazines");
	if (_maxMagazines == 0) then { _maxMagazines = X_MAXMAGAZINES };
	_reloadTime = getNumber (configFile >> "CfgWeapons" >> _weapon >> "a3ru_reloadTime");
	if (_reloadTime == 0) then { _reloadTime = X_RELOADTIME };

	if (_weapon != "" && (count (magazines _vehicle) < _maxMagazines)) then {
		_magazines = getArray (configFile >> "CfgWeapons" >> _weapon >> "Magazines");
		for "_i2" from 0 to ((count _magazines) -1) do {
			_magazine = toLower (_magazines select _i2);
			_mag_name = _magazine call FNC(GetMagazineName);
			_loadMethod = [] call FNC(LoadMethodStatic);
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
								{ (_this select 0) call FNC(StartLoadStatic) },
								{ hint "Load canceled!" },
								format["Loading %1...", _this select 3]
							] call A3RU_Misc_fnc_progressBar;
							(_this select 0) spawn FNC(EndAnim);
						}, // STATEMENT
						{true}, // CONDITION
						{},
						[_reloadTime, _magazine, _vehicle, _mag_name, _loadMethod, _maxMagazines] // ARGUMENTS
					] call ace_interact_menu_fnc_createAction,
					[],
					_magazine
				];
			};
		};
	};
};
_actions