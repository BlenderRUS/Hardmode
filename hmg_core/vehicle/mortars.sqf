//
if (isServer) then {
	private ["_vehvar1","_veh"];
	_vehvar1 = _this select 0;
	_veh = _vehvar1 select 0;
	clearItemCargoGlobal _veh;
	clearWeaponCargoGlobal _veh;
	clearMagazineCargoGlobal _veh;
	clearBackpackCargoGlobal _veh;
	if (_veh isKindOF "RDS_2b14_82mm_Base") then { 
		_veh addItemCargoGlobal ["cw_item_table82mm",1]; _veh addItemCargoGlobal ["AGM_MapTools",1]; _veh addItemCargoGlobal ["cw_item_notepad",1];
	} else {
		_veh addItemCargoGlobal ["cw_item_table82mm_252",1]; _veh addItemCargoGlobal ["AGM_MapTools",1]; _veh addItemCargoGlobal ["cw_item_notepad",1];
	};
};
