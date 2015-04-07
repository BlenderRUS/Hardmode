//
private ["_veh_mag_inv","_veh_mag_load","_veh2load"];

HMG_LOAD_START = {
_this spawn {
	player removemagazine "M2_cass_out"; cursortarget addmagazineglobal "rhs_mag_100rnd_127x99_mag_Tracer_Red";
		player playAction "Acts_carFixingWheel";
};
};
HMG_LOAD_CANCEL = {
};
[10, _this, "HMG_LOAD_START", "Loading M2 Cassete", "HMG_LOAD_CANCEL"] call AGM_Core_fnc_progressBar;