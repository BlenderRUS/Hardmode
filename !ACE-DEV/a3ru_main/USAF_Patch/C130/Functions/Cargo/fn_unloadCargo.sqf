/*
    Author: Lala14

    Description:
    To-Do

    Parameter(s):
    0: OBJECT - To check see if cargo is found and then the nearest vehicle
    1: OBJECT - Object that is to be detached

    Returns:
    NIL
*/
private["_carrier","_obj","_id"];
_carrier = _this select 0;
_obj = _this select 1;
_cargo = _carrier getVariable ["c130_cargo",[]];

if (isServer) then {
    _carrier setVariable ["c130_cargo",((_carrier getVariable ["c130_cargo",[]]) - [_obj]),true];
    _zoffset = _obj call Lala_C17_fnc_getHeight;
    _yoffset = (boundingBoxReal _obj select 1 select 1);
    if (count _cargo > 0) then {
        _cargo = _cargo - [_obj];
        {_yoffset = ((boundingBoxReal _x select 1 select 1) - (boundingBoxReal _x select 0 select 1)) + _yoffset}forEach _cargo;
    };
    _carrier setVariable ["c130_cargo_loading",true,true];
        _wait = [_obj,_carrier,[0,(9 - _yoffset),(-4.7 + _zoffset)],[0,-1 - (boundingBoxReal _obj select 1 select 2),(-4.7 + _zoffset)],0.1,0.01,  180] spawn USAF_C130_fnc_attachToSmooth;
        waitUntil {scriptDone _wait};
        _wait2 = [_obj,_carrier,[0,-1 - (boundingBoxReal _obj select 1 select 2),(-4.7 + _zoffset)],[0,-12,(-5.55 + _zoffset)],0.1,0.01, 180] spawn USAF_C130_fnc_attachToSmooth;
        waitUntil {scriptDone _wait2};
    _carrier setVariable ["c130_cargo_loading",false,true];
//};
detach _obj;
_obj setVelocity (velocity _carrier);
//if (isServer) then {
	_id = _obj getVariable "getoutevh";
	_obj removeEventHandler ["GetOut", _id];
};