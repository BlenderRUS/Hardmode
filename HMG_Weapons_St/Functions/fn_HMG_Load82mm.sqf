//
private ["_veh_mag_inv","_veh_mag_load","_veh2load"];
HMG_LOAD_START = {
_this spawn {
		player removemagazine "HMG_Mine_82_out"; cursortarget addmagazineglobal "AGM_8Rnd_81mmShell_HE";
		player playAction "Acts_carFixingWheel";
	};
};
HMG_LOAD_CANCEL = {
};
[7, _this, "HMG_LOAD_START", "Заряжаем ОФ мину", "HMG_LOAD_CANCEL"] call AGM_Core_fnc_progressBar;