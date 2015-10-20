#include "..\macros.h"

private ["_canRotate", "_owner", "_target", "_player"];
_target = _this select 0;
_player = _this select 1;

_canRotate = false;
if (!isNull _target) then {
	_owner = _target getVariable [QUOTE(VAR(RotateOwner)), objNull];
	if (!isNull _owner && {(_target distance _owner) < 15 && alive _owner && isPlayer _owner}) then {
		_canRotate = false;
	} else {
		if (
			(_player distance _target < 3) &&
			isNull GVAR(RotateObject,objNull) &&
			count (crew _target) == 0
		) then {
			_canRotate = true;
		};
	};
};
_canRotate