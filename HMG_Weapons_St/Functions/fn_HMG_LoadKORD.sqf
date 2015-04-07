//
private ["_veh_mag_inv","_veh_mag_load","_veh2load"];
HMG_LOAD_START = {
_this spawn {
	player removemagazine "RDS_KORD_out"; cursortarget addmagazineglobal "rhs_mag_127x108mm_50";
		player playAction "Acts_carFixingWheel";
};
};
HMG_LOAD_CANCEL = {
};
[10, _this, "HMG_LOAD_START", "Заряжаем короб 50 х 12.7", "HMG_LOAD_CANCEL"] call AGM_Core_fnc_progressBar;