#define TIME_PER_LITER 2

private ["_unit", "_vehicle", "_item", "_fuel", "_capacity", "_fuelVehicle", "_time"];

_unit = _this select 0;
_vehicle = _this select 1;

_item = _unit getVariable "ace_dragging_carriedObject";
if (isNil "_item") exitWith {};

_fuel = _item getVariable ["A3RU_var_amountFuel", 20];

_capacity = getNumber (configFile >> "CfgVehicles" >> typeOf _vehicle >> "AGM_fuelCapacity");

_fuelVehicle = fuel _vehicle * _capacity;

_time = TIME_PER_LITER * (_capacity - _fuelVehicle min _fuel) max 2;

[_time, [_unit, _vehicle], { (_this select 0) call A3RU_JerryCan_fnc_refuelVehicleCallback }, {}, localize "STR_AGM_Resupply_RefuelingVehicle"] call ACE_Common_fnc_progressBar;
[_vehicle] call ACE_Common_fnc_closeDialogIfTargetMoves;
