//
private ["_veh_mag_inv","_veh_mag_load","_veh2load"];

HMG_LOAD_START = {
_this spawn {
	player removemagazine "TOW_out"; cursortarget addmagazineglobal "rhs_mag_1Rnd_TOW";
		player playAction "Acts_carFixingWheel";
};
};
HMG_LOAD_CANCEL = {
};
[20, _this, "HMG_LOAD_START", "Loading BGM-71D Missile", "HMG_LOAD_CANCEL"] call AGM_Core_fnc_progressBar;