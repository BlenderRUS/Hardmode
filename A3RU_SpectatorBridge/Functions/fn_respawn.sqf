if (!isNil "a3a_var_cli_preInit") then {
	_this call CSSA3_fnc_init;
} else {
	_this call HIA3_spectator_fnc_respawnSeagull;
};