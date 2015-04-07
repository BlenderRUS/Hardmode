//
private ["_veh_mag_inv","_veh_mag_load","_veh2load"];
/*	if (!(isNull (gunner cursortarget))) exitWith {hint "Необходимо прогнать оператора!"};
	if (!(local cursortarget)) then  {	
		gun_give_owner = [player, cursortarget];
		publicVariableServer "gun_give_owner";
		_timeout = time;
	};
	if (!(local cursortarget)) exitwith {hint "Можно заряжать!"};
*/
HMG_LOAD_START = {
_this spawn {
		player removemagazine "HMG_Mine_81_out"; cursortarget addmagazineglobal "AGM_8Rnd_81mmShell_252_HE";
		player playAction "Acts_carFixingWheel";
	};
};
HMG_LOAD_CANCEL = {
};
[7, _this, "HMG_LOAD_START", "Loading HE Shell", "HMG_LOAD_CANCEL"] call AGM_Core_fnc_progressBar;