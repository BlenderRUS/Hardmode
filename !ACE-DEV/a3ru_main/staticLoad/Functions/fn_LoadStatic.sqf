/*
 * Author: Blender
 *
 * Start progress bar and load magazines to static weapons
 *
 * Argument:
 * 0: Static weapon (Object)
 * 1: Type of magazine in player's inventory (String)
 * 2: Type of magazine in static weapon (String)
 * 3: Load time in seconds (Number)
 * 4: Message to localize (String)
 *
 * Return value:
 * Nothing
 */
 
HMG_Static_fnc_Load_Start = {
	if ((_this select 1) in (magazines ACE_Player)) then { // Check if player still have required magazine
		ACE_Player removeMagazine (_this select 1);
		(_this select 0) addMagazineGlobal (_this select 2);
	};
};

HMG_Static_fnc_Load_Cancel = {
	hint "Action canceled!";
	if (animationState player == "Acts_carFixingWheel") then {
		[ACE_Player, "", 2] call ACE_Common_fnc_doAnimation;
	};
};

//if (!isMultiplayer) then {
//	[_this select 0, _this select 1, _this select 2] call HMG_Static_fnc_Load_Start;
//} else {
	// Do animation
	[ACE_Player, "Acts_carFixingWheel", 1] call ACE_Common_fnc_doAnimation;

	// Display progress bar
	[
		_this select 3,
		[_this select 0, _this select 1, _this select 2],
		{ (_this select 0) call HMG_Static_fnc_Load_Start },
		{ (_this select 0) call HMG_Static_fnc_Load_Cancel },
		localize (_this select 4)
	] call ACE_Common_fnc_progressBar;

	// Reset animation
	(_this select 3) spawn {
		sleep _this;
		if (animationState player == "Acts_carFixingWheel") then {
			[ACE_Player, "", 2] call ACE_Common_fnc_doAnimation;
		};
	};
//};