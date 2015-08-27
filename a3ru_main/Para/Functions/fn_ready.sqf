if ((backpack ACE_Player) isKindOf "B_Parachute") then {
	removeBackpack ACE_Player;
	ACE_Player setVariable ["a3ru_para_var_isReady", true];
	hint parseText format["<t color='#ffff00'>%1</t><br/>%2", localize "STR_A3RU_Para_Title", localize "STR_A3RU_para_prepared"]
};