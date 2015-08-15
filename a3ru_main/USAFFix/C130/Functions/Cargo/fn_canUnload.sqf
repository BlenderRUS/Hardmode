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
if (count _cargos <= 0) exitWith { hint "Found nothing to unload." };
_cargo = _cargos select (count (_cargos) - 1);

_loadpos = _carrier ModelToWorld [0,-12,-5.5];
_near = nearestObjects [_loadpos, ["All"], 3];
_near = _near - _cargos;
_obj = _near select 0;
if (!isNil {_obj}) exitWith { hint format ["Please move %1 out of the way!",getText (configFile >> "cfgVehicles" >> typeof _obj >> "displayName")]; };
_carrier setVariable ["c130_cargo_loading",true,true];
_carrier animate ["ramp_top", 1];
_carrier animate ["ramp_bottom", 1];
waitUntil {(_carrier animationPhase "ramp_bottom") == 1};
waitUntil {(_carrier animationPhase "ramp_top") == 1};
_carrier setVariable ["c130_cargo_loading",false,true];
    _veh_name = getText (configFile >> "cfgVehicles" >> typeof _cargo >> "displayName");
    (driver _carrier) vehicleChat format ["%1 unloaded from cargo",_veh_name];
    hint format ["%1 unloaded from cargo",_veh_name];
    [[_carrier, _cargo], "USAF_C130_fnc_unloadCargo"] spawn BIS_fnc_MP;
/*waitUntil {isNil {_carrier getVariable "c130_cargo"}};
_carrier animate ["ramp_top", 0];
_carrier animate ["ramp_bottom", 0];*/