/*
	Author: Lala14

	Description:
	To-Do

	Parameter(s):
	0: OBJECT           - To check see if cargo is found and then the nearest vehicle
	1: BOOL(OPTIONAL)   - Debug

	Returns:
	NIL
*/
_carrier = _this select 0;
_cargo = _carrier getVariable ["c130_cargo",[]];
_loadpos = _carrier ModelToWorld [0,-12,-5.5];
_debug = [_this,1,false] call bis_fnc_param;

//if !(isNil {_cargo}) exitWith { hint "Cargo is already full." };
_near = nearestObjects [_loadpos, ["LandVehicle","Ship","ThingX"], 15];
_obj = _near select 0;
if (_obj isKindOf "Truck_F") exitWith { hint "Cant load trucks" };
if (_debug) then { (driver _carrier) vehicleChat str _obj; hint str _obj };
_bound = boundingBoxReal _obj;
_width = (_bound select 1 select 0) - (_bound select 0 select 0);
_length = (_bound select 1 select 1) - (_bound select 0 select 1);
_height = (_bound select 1 select 2) - (_bound select 0 select 2);
_weight = getMass _obj;
if (_weight == 0) then { _weight = 250; hint "That object doesn't have any weight!\n defaulting to 250kg" };
	if (count _cargo > 0) then {
		{_length = ((boundingBoxReal _x select 1 select 1) - (boundingBoxReal _x select 0 select 1)) + _length; _weight = getMass _x + _weight}forEach _cargo;
	};

if (count _near > 0) then {
	if (_debug) then {
		(driver _carrier) vehicleChat format ["x:%1 y:%2 z:%3",_width,_length,_height];
		hint format ["x:%1 y:%2 z:%3",_width,_length,_height];
		systemChat format ["x:%1 y:%2 z:%3",_width,_length,_height];
	};
	_veh_name = getText (configFile >> "cfgVehicles" >> typeof _obj >> "displayName");
	if ((_width <= 4.1) || (_obj isKindOf "Car_F")) then
	{
		if ((_length <= 12.1) || (_obj isKindOf "Car_F")) then
		//if ((_length <= 11.95)) then
		{
			if ((_height <= 4.35) || (_obj isKindOf "Car_F")) then
			{
				if ((_weight <= 35900)) then
				{
					(driver _carrier) vehicleChat format ["Loading %1 into cargo",_veh_name];
					hint format ["Loading %1 into cargo",_veh_name];
					_carrier setVariable ["c130_cargo_loading",true,true];
					_carrier animate ["ramp_top", 1];
					_carrier animate ["ramp_bottom", 1];
					waitUntil {(_carrier animationPhase "ramp_bottom") == 1};
					waitUntil {(_carrier animationPhase "ramp_top") == 1};
					_carrier setVariable ["c130_cargo_loading",false,true];
					[[_carrier, _obj], "USAF_C130_fnc_loadCargo"] spawn BIS_fnc_MP;
				} else {
					hint format ["Too much weight: %1kg",_weight];
				};
			} else {
				hint format ["Too tall: %1m",_height];
			};
		} else {
			hint format ["Too long: %1m",_length];
		};
	} else {
		hint format ["Too wide: %1m",_width];
	};
} else {
	(driver _carrier) vehicleChat "Nothing in range";
	hint "Nothing in range";
};