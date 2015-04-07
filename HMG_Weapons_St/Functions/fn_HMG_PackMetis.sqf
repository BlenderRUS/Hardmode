//
private ["_veh_mag_inv","_veh_mag_load","_veh2load","_posWeap"];
_veh2load = cursortarget;
HMG_LOAD_START = {
_this spawn {
	player removeweapon "MetisM1";
	player addbackpack "RDS_Metis_Gun_Bag";
	};
};
HMG_LOAD_CANCEL = {
};
[15, _this, "HMG_LOAD_START", "Упаковка Метис-М1", "HMG_LOAD_CANCEL"] call AGM_Core_fnc_progressBar;