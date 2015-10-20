#include "..\macros.h"

private ["_obj", "_dir", "_helper"];
_obj = GVAR(RotateObject,objNull);
_helper = GVAR(Helper,objNull);
if (!isNull _obj) then {
	_dir = getDir _helper;
	deleteVehicle _helper;
	//[[GVAR(RotateObject,objNull), _dir], "(_this select 0) setDir (_this select 1)"] call BIS_fnc_MP;
	if (_this) then {
		_obj setDir _dir;
		_obj setPos (getPos _obj);
	};
	OSVAR(_obj,RotateOwner,objNull,true);
};
disableSerialization;
_display = findDisplay 46;
_display displayRemoveEventHandler ["MouseZChanged", VAR(ZChangeEH)];
_display displayRemoveEventHandler ["KeyDown", VAR(KeyDownEH)];
_display displayRemoveEventHandler ["KeyUp", VAR(KeyUpEH)];
player removeAction VAR(ReleaseEH);
SVAR(RotateObject,nil);
SVAR(ZChangeEH,nil);
SVAR(KeyDownEH,nil);
SVAR(KeyUpEH,nil);
SVAR(ReleaseEH,nil);