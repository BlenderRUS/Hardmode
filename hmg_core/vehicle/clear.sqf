//
if (isServer) then {
	private ["_vehvar1","_veh"];
	_veh = _this select 0;
	if !(_veh isKindOf "StaticWeapon") then {

		clearItemCargoGlobal _veh;
		clearWeaponCargoGlobal _veh;
		clearMagazineCargoGlobal _veh;
		clearBackpackCargoGlobal _veh;

		if ((_veh isKindOF "Tank") || (_veh isKindOF "APC_Tracked_02_base_F")) then {
			_veh addItemCargoGlobal ["ToolKit", 1]
		}
	}
}