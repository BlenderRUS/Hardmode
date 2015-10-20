private ["_unit", "_target", "_item", "_fuel"];

_unit = _this select 0;
_target = _this select 1;

_item = _unit getVariable ["ace_dragging_carriedObject", objNull];
_fuel = _item getVariable ["A3RU_var_amountFuel", 20];

_item isKindOf "A3RU_item_JerryCan"
&& (alive _target)
&& (speed _target == 0)
&& (fuel _target < 1)
&& (_fuel > 0)