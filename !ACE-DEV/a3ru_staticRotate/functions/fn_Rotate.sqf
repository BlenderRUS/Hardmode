#include "..\macros.h"

#define ROTATE_ANGLE 15

private ["_angle", "_dir", "_obj"];
if (_this > 0) then {
	_angle = ROTATE_ANGLE;
} else {
	_angle = -ROTATE_ANGLE;
};

_obj = GVAR(Helper,objNull);
if !(isNull _obj) then {
	if (GVAR(CTRLPressed,false)) then {
		_dir = (getDir _obj) + _angle - (getDir GVAR(RotateObject,objNull));
		_obj setDir (_dir call CBA_fnc_SimplifyAngle);
	};
};