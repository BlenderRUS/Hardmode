//player setVariable ["HMG_can_lock_box", true];
#define PR(x) private ['x']; x
#define SETVAR(X,Y,Z) X setVariable [Y,Z]; 
PR(_logic) = [_this,0,objNull,[objNull]] call BIS_fnc_param;
PR(_units) = [_this,1,[],[[]]] call BIS_fnc_param;
PR(_activated) = [_this,2,true,[true]] call BIS_fnc_param;
if (_activated) then {
	{ 	waitUntil {!(_x getVariable "HMG_can_lock_box")};
		SETVAR(_x,"HMG_can_lock_box",true) } foreach _units;
	};
