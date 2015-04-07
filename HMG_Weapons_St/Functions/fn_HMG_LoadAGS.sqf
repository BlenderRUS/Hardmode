//
private ["_veh_mag_inv","_veh_mag_load","_veh2load"];
HMG_LOAD_START = {
_this spawn {
	player removemagazine "RDS_29Rnd_30mm_AGS30_out"; cursortarget addmagazineglobal "RDS_29Rnd_30mm_AGS30";
		player playAction "Acts_carFixingWheel";
};
};
HMG_LOAD_CANCEL = {
};
[15, _this, "HMG_LOAD_START", "Заряжаем кассету АГС", "HMG_LOAD_CANCEL"] call AGM_Core_fnc_progressBar;