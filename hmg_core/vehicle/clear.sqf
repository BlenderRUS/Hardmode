//
if (isServer) then {
	private ["_vehvar1","_veh"];
	_vehvar1 = _this select 0;
	_veh = _vehvar1 select 0;
	clearitemcargoglobal _veh;
	clearweaponcargoglobal _veh;
	clearmagazinecargoglobal _veh;
	clearbackpackcargoglobal _veh;
	if ((_veh isKindOF "Tank") || (_veh isKindOF "APC_Tracked_02_base_F")) then {_veh additemcargoglobal ["ToolKit",1];} 

};
