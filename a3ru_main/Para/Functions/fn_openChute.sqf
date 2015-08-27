if (ACE_Player getVariable ["a3ru_para_var_isReady", false]) then {
	if (!(isTouchingGround ACE_Player) && ((vehicle ACE_Player) == ACE_Player)) then {
		ACE_Player setVariable ["a3ru_para_var_isReady", false];
		ACE_Player switchCamera 'EXTERNAL';
		ACE_Player SwitchMove 'AswmPercMrunSnonWnonDf_AswmPercMstpSnonWnonDnon';
		addCamShake [4, 2, 20];
		playSound3D ['@SCS\Sound\Parachute.ogg', ACE_Player, false, GetPosASL ACE_Player,5, 1, 250];
		titleText ['', 'White IN', 0.6];
		addCamShake [2, 2, 10];
		_chute = createVehicle ['Steerable_Parachute_F', position ACE_Player, [], 0, 'Fly'];
		_chute setPos position ACE_Player;
		ACE_Player moveIndriver _chute; 
		_chute allowDamage false;
	};
};