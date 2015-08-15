/*
    Author: Lala14

    Description:
    To-Do

    Parameter(s):
    0: OBJECT - To check see if cargo is found and then the nearest vehicle

    Returns:
    NIL
*/
_veh = _this select 0;
//if (isNil {_veh getVariable "Lala_actionsAdded"}) then {
	_veh addaction ["<t color='#FF0000'>Load cargo</t>", { [(_this select 0)] spawn USAF_C130_fnc_canLoad}, [],1,false,true,"",' (count (vehicle _target getVariable ["c130_cargo",[]]) >= 0) && count(nearestObjects [(_target ModelToWorld [0,-12,-5.5]), ["LandVehicle","Ship","ThingX"], 15] - (vehicle _target getVariable ["c130_cargo",[]])) > 0 && !(vehicle _target getVariable ["c130_cargo_loading",false]) && (getPosATL _target select 2 < 3)'];

	_veh addaction ["<t color='#FF0000'>Unload cargo</t>", { [(_this select 0)] spawn USAF_C130_fnc_canUnload }, [],1,false,true,"",'  (count (vehicle _target getVariable ["c130_cargo",[]]) > 0) && (getPosATL _target select 2 < 3) && !(vehicle _target getVariable ["c130_cargo_loading",false]) && (player == driver _target)'];

	_veh addaction ["<t color='#FF0000'>Lapes current cargo</t>", { [(_this select 0)] spawn USAF_C130_fnc_canLapes }, [],1,false,true,"",' (count (vehicle _target getVariable ["c130_cargo",[]]) > 0) && (getPosATL _target select 2 > 3) && (getPosATL _target select 2 < 15) && !(vehicle _target getVariable ["c130_cargo_loading",false]) && (player == driver _target)'];

	_veh addaction ["<t color='#FF0000'>Drop cargo</t>", { [(_this select 0)] spawn USAF_C130_fnc_canDrop }, [],1,false,true,"",' (count (vehicle _target getVariable ["c130_cargo",[]]) > 0) && (getPosATL _target select 2 > 50) && !(vehicle _target getVariable ["c130_cargo_loading",false]) && (player == driver _target)'];
	//_veh setVariable ["Lala_actionsAdded",true,true];
//};