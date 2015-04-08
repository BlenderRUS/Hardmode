//
//if !(isServer) then {
//_unit = _this select 0;
//hint "1111";
HMG_Para_ready = {
removebackpack player;
private ["_chute","_keyDown"];
waituntil {!(IsNull (findDisplay 46))};  
_keyDown = (findDisplay 46) displayAddEventHandler ["KeyDown", "if (_this select 1 == 57) then 
	{
	if (!(isTouchingGround player) and (vehicle player == player)) 
		then { 	player switchCamera 'EXTERNAL';
			player SwitchMove 'AswmPercMrunSnonWnonDf_AswmPercMstpSnonWnonDnon';
			addCamShake [4, 2, 20];
			playSound3D ['@SCS\Sound\Parachute.ogg', player, false, GetPosASL player,5, 1, 250];
			titleText ['', 'White IN', 0.6];
			addCamShake [2, 2, 10];
			_chute = createVehicle ['Steerable_Parachute_F', position player, [], 0, 'Fly'];
			_chute setPos position player;
			player moveIndriver _chute; 
			_chute allowDamage false;
		};
	};"];
};
HMG_Para_over = {
	player addbackpack "B_Parachute";
};

[15, _this, "HMG_Para_ready", "Подготовка парашюта", "HMG_Para_over"] call AGM_Core_fnc_progressBar;
//};

