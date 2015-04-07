//
private ["_veh_mag_inv","_veh_mag_load","_veh2load"];
HMG_LOAD_START = {
_this spawn {
	player removemagazine "metis_9m131"; cursortarget addmagazineglobal "metis_9m131";
		player playAction "Acts_carFixingWheel";
};
};
HMG_LOAD_CANCEL = {
};
[15, _this, "HMG_LOAD_START", "Заряжаем ТПК", "HMG_LOAD_CANCEL"] call AGM_Core_fnc_progressBar;