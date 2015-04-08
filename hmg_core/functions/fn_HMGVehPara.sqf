//
#define PR(x) private ['x']; x
#define SETVAR(X,Y,Z) X setVariable [Y,Z]; 


private ["_logic", "_units"];
PR(_logic) = [_this,0,objNull,[objNull]] call BIS_fnc_param;
PR(_units) = [_this,1,[],[[]]] call BIS_fnc_param;
PR(_activated) = [_this,2,true,[true]] call BIS_fnc_param;
[] execVM "hmg_core\paradrop\init.sqf";
if (_activated) then {
	{ 
		PR(_getvehtype) = _logic getVariable "Para_Veh_Type";
		PR(_getvehcount) = _logic getVariable "Para_Veh_Count";
		SETVAR(_x,"HMG_paradrop_veh_count",_getvehcount);
		SETVAR(_x,"HMG_paradrop_veh_type",_getvehtype);
		SETVAR(_x,"HMG_Paradrop",1);		
	} foreach _units;
};
