/*
 * Author: Pride
 *
 * Wake up unit by tapping him to face :D
 *
 * Argument:
 * 0: Yourselft
 * 1: Target
 * Return value:
 * none
 */
private ["_countveh","_typeveh","_positionGr","_positionDrop"];
HMG_VEHDROP_START = {
_this spawn {
	_countveh = player getvariable "HMG_paradrop_veh_count";
	_typeveh = player getvariable "HMG_paradrop_veh_type";
	_positionGr = (mapGridPosition getPos player),
	_positionDrop = getPos player;
	while {_countveh > 0} do {
		_positionDrop = [(_positionDrop select 0)+ 20,(_positionDrop select 1)+ 20,_positionDrop select 2];
		[_positionDrop, 750, _typeveh] call TGM_vd_fnc_spawn;
		sleep 5;
		_countveh = _countveh - 1;
	};
	player setVariable ["HMG_paradrop",0];
	hint format ["Сброс %2 x %3 по координатам %1 осуществен",mapGridPosition getPos player,_countveh,_typeveh];
};
};
HMG_VEHDROP_CANCEL = {
	player setVariable ["HMG_paradrop",1];
};
[30, _this, "HMG_VEHDROP_START", "Запрос техники на текущие координаты", "HMG_VEHDROP_CANCEL"] call AGM_Core_fnc_progressBar;