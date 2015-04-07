//
private ["_veh_mag_inv","_veh_mag_load","_veh2load"];
HMG_LOAD_START = {
_this spawn {
	player removemagazine "Mk19_cass_out"; cursortarget addmagazineglobal "RHS_48Rnd_40mm_MK19";
		player playAction "Acts_carFixingWheel";
};
};
HMG_LOAD_CANCEL = {
};
[15, _this, "HMG_LOAD_START", "Loading Mk19 Cassete", "HMG_LOAD_CANCEL"] call AGM_Core_fnc_progressBar;