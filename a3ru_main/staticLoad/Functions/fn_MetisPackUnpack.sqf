/*
 * Author: Blender
 *
 * Start progress bar and load magazines to static weapons
 *
 * Argument:
 * 0: Pack/Unpack (Bool)
 * 1: Weapon (Object)
 *
 * Return value:
 * Nothing
 */

private "_message";
HMG_Static_fnc_Load_Cancel = {
	if (animationState player == "Acts_carFixingWheel") then {
		[ACE_Player, "", 2] call ACE_Common_fnc_doAnimation;
	};
};

if (_this select 0) then {
	HMG_Static_fnc_Load_Start = {
		if ("MetisM1" in (weapons ACE_Player)) then {
			ACE_Player removeWeapon "MetisM1";
			ACE_Player addBackpack "RDS_Metis_Gun_Bag";
		}
	};
	_message = "STR_HMG_Static_PackingMetis"
} else {
	HMG_Static_fnc_Load_Start = {
		if ((backpack ACE_Player) == "RDS_Metis_Gun_Bag") then {
			removeBackpack ACE_Player;
			ACE_Player addWeapon "MetisM1";
		};
	};
	_message = "STR_HMG_Static_UnpackingMetis"
};

// Do animation
[ACE_Player, "Acts_carFixingWheel", 1] call ACE_Common_fnc_doAnimation;

// Display progress bar
[10, true, {(_this select 0) call HMG_Static_fnc_Load_Start}, {(_this select 0) call HMG_Static_fnc_Load_Cancel}, localize _message] call ACE_Common_fnc_progressBar;

// Reset animation
10 spawn {
	sleep _this;
	if (animationState player == "Acts_carFixingWheel") then {
		[ACE_Player, "", 2] call ACE_Common_fnc_doAnimation;
	};
};