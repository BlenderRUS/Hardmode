//
if (isServer) then {
private ["_vehvar1","_veh"];
_vehvar1 = _this select 0;
_veh = _vehvar1 select 0;
clearitemcargoglobal _veh;
clearweaponcargoglobal _veh;
clearmagazinecargoglobal _veh;
clearbackpackcargoglobal _veh;
_veh additemcargoglobal ["cw_item_tableags",1]; _veh additemcargoglobal ["AGM_MapTools",1]; _veh additemcargoglobal ["cw_item_notepad",1];

};
