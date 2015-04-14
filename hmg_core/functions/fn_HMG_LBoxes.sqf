//player setVariable ["HMG_can_lock_box", true];
#define PR(x) private ['x']; x
#define SETVAR(X,Y,Z) X setVariable [Y,Z]; 
PR(_logic) = [_this,0,objNull,[objNull]] call BIS_fnc_param;
PR(_units) = [_this,1,[],[[]]] call BIS_fnc_param;

if (!isDedicated) then {
	if (player in _units) then {
		player setVariable ["HMG_can_lock_box", true];
	};
};