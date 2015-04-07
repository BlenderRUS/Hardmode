//
private ["_veh_mag_inv","_veh_mag_load","_veh2load"];
HMG_LOAD_START = {
_this spawn {
	player removemagazine "OG9_out"; cursortarget addmagazineglobal "RDS_OG9_HE";
		player playAction "Acts_carFixingWheel";

};
};
HMG_LOAD_CANCEL = {
};
[10, _this, "HMG_LOAD_START", "Заряжаем выстрел ОГ-9", "HMG_LOAD_CANCEL"] call AGM_Core_fnc_progressBar;