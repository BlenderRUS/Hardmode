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
		[AGM_Player, "", 2] call AGM_Core_fnc_doAnimation;
	};
};

if (_this select 0) then {
	HMG_Static_fnc_Load_Start = {
		if ("MetisM1" in (weapons AGM_Player)) then {
			AGM_Player removeWeapon "MetisM1";
			AGM_Player addBackpack "RDS_Metis_Gun_Bag";
		}
	};
	_message = "STR_HMG_Static_PackingMetis"
} else {
	HMG_Static_fnc_Load_Start = {
		if ((backpack AGM_Player) == "RDS_Metis_Gun_Bag") then {
			removeBackpack AGM_Player;
			AGM_Player addWeapon "MetisM1";
		};
	};
	_message = "STR_HMG_Static_UnpackingMetis"
};

// Do animation
[AGM_Player, "Acts_carFixingWheel", 1] call AGM_Core_fnc_doAnimation;

// Display progress bar
[10, true, "HMG_Static_fnc_Load_Start", localize _message, "HMG_Static_fnc_Load_Cancel"] call AGM_Core_fnc_progressBar;

// Reset animation
10 spawn {
	sleep _this;
	if (animationState player == "Acts_carFixingWheel") then {
		[AGM_Player, "", 2] call AGM_Core_fnc_doAnimation;
	};
};