#include <macros.h>
#include <defines.h>

private ["_vehicle", "_turret", "_magazines", "_maxMagazines", "_return", "_magazinesAllTurrets", "_element"];
_vehicle = _this select 0;
_turret = _this select 1;
_magazines = _this select 2;
_maxMagazines = _this select 3;

_return = true;
_magazinesAllTurrets = magazinesAllTurrets _vehicle;
for "_i" from 0 to ((count _magazinesAllTurrets) - 1) do {
	_element = _magazinesAllTurrets select _i;
	if ((_element select 1) isEqualTo _turret && ((toLower (_element select 0)) in _magazines)) then {
		if ((_element select 2) >= _maxMagazines) exitWith {
			_return = false;
		};
	};
};
_return