//
if (isServer) then {
private ["_vehvar1","_veh"];
_vehvar1 = _this select 0;
_veh = _vehvar1 select 0;
clearitemcargoglobal _veh;
clearweaponcargoglobal _veh;
clearmagazinecargoglobal _veh;
clearbackpackcargoglobal _veh;
if (_veh isKindOF "RDS_2b14_82mm_Base") then { 
	_veh additemcargoglobal ["cw_item_table82mm",1]; _veh additemcargoglobal ["AGM_MapTools",1]; _veh additemcargoglobal ["cw_item_notepad",1];
	} 
else {
	_veh additemcargoglobal ["cw_item_table82mm_252",1]; _veh additemcargoglobal ["AGM_MapTools",1]; _veh additemcargoglobal ["cw_item_notepad",1];
	};

};
