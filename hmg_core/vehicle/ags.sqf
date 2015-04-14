//
if (isServer) then {
	private ["_vehvar1","_veh"];
	_vehvar1 = _this select 0;
	_veh = _vehvar1 select 0;
	clearItemCargoGlobal _veh;
	clearWeaponcargoGlobal _veh;
	clearMagazineCargoGlobal _veh;
	clearBackpackCargoGlobal _veh;
	_veh addItemCargoGlobal ["cw_item_tableags",1]; _veh addItemCargoGlobal ["AGM_MapTools",1]; _veh addItemCargoGlobal ["cw_item_notepad",1];
};
