/*
	Author: Lala14

	Description:
	To-Do

	Parameter(s):
	0: OBJECT - Carrier
	1: OBJECT - To be loaded into first object
	2: NUMBER - Offset for length of object (OPTIONAL)

	Returns:
	NIL
*/
private["_carrier","_obj","_id"];
_carrier = _this select 0;
_obj = _this select 1;
_length = [_this,2,0] call bis_fnc_param;
_cargo = _carrier getVariable ["c130_cargo",[]];
_loadpos = _carrier ModelToWorld [0,-12,-5.5];
if (_loadpos distance _obj > 15) then {
	_carrier setVariable ["c130_cargo",((_carrier getVariable ["c130_cargo",[]]) - [_obj]),true];
} else {
	_carrier setVariable ["c130_cargo",((_carrier getVariable ["c130_cargo",[]]) + [_obj]),true];
	_zoffset = _obj call Lala_C17_fnc_getHeight;
	_yoffset = _length + (boundingBoxReal _obj select 1 select 1);
	if (count _cargo > 0) then {
		{_yoffset = ((boundingBoxReal _x select 1 select 1) - (boundingBoxReal _x select 0 select 1)) + _yoffset}forEach _cargo;
	};
	if (isServer) then {
		_wait = [_obj,_carrier,[0,-12,(-5.55 + _zoffset)],[0,-1 - (boundingBoxReal _obj select 1 select 2),(-4.7 + _zoffset)],0.1,0.01,	180] spawn USAF_C130_fnc_attachToSmooth;
		waitUntil {scriptDone _wait};
		_wait2 = [_obj,_carrier,[0,-1 - (boundingBoxReal _obj select 1 select 2),(-4.7 + _zoffset)],[0,(9 - _yoffset),(-4.7 + _zoffset)],0.1,0.01,	180] spawn USAF_C130_fnc_attachToSmooth;
		waitUntil {scriptDone _wait2};

		_id = _obj addEventHandler ["GetOut", {(_this select 2) moveInCargo (_this select 0 getvariable "carrier")}];
		_obj setVariable ["getoutevh",_id,false]; // remembers the eventhandler so it can be removed again later on
		_obj setVariable ["carrier",_carrier,false]; // tells the eventhandler what plane we're on
	};
};