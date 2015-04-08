waituntil {time > 2};
//waituntil {wmt_freezeGrenadeHandler};
#define PR(x) private ['x']; x
PR(_logic) = [_this,0,objNull,[objNull]] call BIS_fnc_param;
PR(_units) = [_this,1,[],[[]]] call BIS_fnc_param;
PR(_activated) = [_this,2,true,[true]] call BIS_fnc_param;
if (_activated) then {
	{ _x removeEventHandler ["Fired", wmt_freezeGrenadeHandler];} foreach _units;
	};
