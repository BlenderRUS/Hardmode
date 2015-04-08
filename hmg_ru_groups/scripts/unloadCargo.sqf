/*
if vehicle is bmd or bmp3 then unload it crew from "turret" positions
hooked to danger fsm
*/
private["_u","_v","_l"];

_u = _this select 0;
_v = vehicle _u;

if((_v getVariable "Unload") == 1)exitWith{};
_v setVariable ["Unload",1];

_l=[];

if
(
	_v isKindOf "rhs_bmd_base" OR
	_v isKindOf "rhs_bmd4_vdv"
)then
{
	//get list of units to dissembark
	{if(not(isNull (_v turretUnit _x)))then{_l = _l + [_v turretUnit _x]}}foreach [[0,0],[1],[2],[3],[4]];

	if(count _l > 0)then
	{
		//_u globalChat "Unloading cargo!";
		_l orderGetIn false;
		{ unassignVehicle _x;commandGetOut _x} forEach _l;
	};
};


if(_v isKindOf "rhs_bmp3tank_base")then
{
	//get list of units to dissembark
	{if(not(isNull (_v turretUnit _x)))then{_l = _l + [(_v turretUnit _x)]}}foreach [[1],[2]];

	if(count _l > 0)then
	{
		//_u globalChat "Unloading cargo!";
		_l orderGetIn false;
		{ unassignVehicle _x;commandGetOut _x} forEach _l;
	};
};

//3 seconds delay
[_v] spawn {sleep 3;(_this select 0) setVariable ["Unload",0]};