//
private ["_veh_mag_inv","_veh_mag_load","_veh2load","_posWeap"];
_veh2load = cursortarget;
HMG_LOAD_START = {
_this spawn {
	removeBackpack player;
	player addweapon "MetisM1";
	};
};
HMG_LOAD_CANCEL = {
};
[15, _this, "HMG_LOAD_START", "Распаковка Метис-М1", "HMG_LOAD_CANCEL"] call AGM_Core_fnc_progressBar;