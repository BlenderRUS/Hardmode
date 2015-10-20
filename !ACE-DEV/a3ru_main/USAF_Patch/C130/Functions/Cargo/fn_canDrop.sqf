/*
    Author: Lala14

    Description:
    To-Do

    Parameter(s):
    0: OBJECT - To-Do

    Returns:
    NIL
*/
_carrier = _this select 0;
_cargos = _carrier getVariable ["c130_cargo",[]];
if (count _cargos <= 0) exitWith { hint "Found no cargo to drop." };
_cargo = _cargos select (count (_cargos) - 1);
_carrier setVariable ["c130_cargo_loading",true,true];
_carrier animate ["ramp_top", 1];
_carrier animate ["ramp_bottom", 1];
waitUntil {(_carrier animationPhase "ramp_bottom") == 1};
waitUntil {(_carrier animationPhase "ramp_top") == 1};
_carrier setVariable ["c130_cargo_loading",false,true];
    _veh_name = getText (configFile >> "cfgVehicles" >> typeof _cargo >> "displayName");
    (driver _carrier) vehicleChat format ["%1 dropped from cargo",_veh_name];
	[[_carrier, _cargo], "USAF_C130_fnc_dropCargo"] spawn BIS_fnc_MP;
/*waitUntil {isNil {_carrier getVariable "c130_cargo"}};
_carrier animate ["ramp_top", 0];
_carrier animate ["ramp_bottom", 0];*/