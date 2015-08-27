/*
 * Author: Blender
 *
 * Start progress bar and load magazines for vehicles
 *
 * Argument:
 * 0: Vehicle (Object)
 * 1: Type of magazine in player's inventory (String)
 * 2: Type of magazine of vehicle's weapon (String)
 * 3: Load time in seconds (Number)
 * 4: Message to localize (String)
 *
 * Return value:
 * Nothing
 */
 
HMG_Static_fnc_LoadVeh_Start = {
	_veh = _this select 0;
	_mag = _this select 1;
	_vehMag = _this select 2;
	if (_mag in (magazines ACE_Player)) then { // Check if player still have required magazine
		if (!isNull _veh && (ACE_Player distance _veh <= 4)) then { // Check object existence and distance
			ACE_Player removeMagazine _mag;
			_veh addMagazineGlobal _vehMag;
		};
	};
};

HMG_Static_fnc_LoadVeh_Cancel = {
	hint "Action canceled!";
	if (((vehicle ACE_Player) == ACE_Player) && (animationState player == "Acts_carFixingWheel")) then {
		[ACE_Player, "", 2] call ACE_Common_fnc_doAnimation;
	};
};

//if (!isMultiplayer) then {
//	[_this select 0, _this select 1, _this select 2] call HMG_Static_fnc_LoadVeh_Start;
//} else {
	// Do animation
	if ((vehicle ACE_Player) == ACE_Player) then {
		[ACE_Player, "Acts_carFixingWheel", 1] call ACE_Common_fnc_doAnimation;
	};

	// Display progress bar
	[
		_this select 3,
		[_this select 0, _this select 1, _this select 2],
		{ (_this select 0) call HMG_Static_fnc_LoadVeh_Start },
		{ (_this select 0) call HMG_Static_fnc_LoadVeh_Cancel },
		localize (_this select 4)
	] call A3RU_Misc_fnc_progressBar;

	// Reset animation
	(_this select 3) spawn {
		sleep _this;
		if (((vehicle ACE_Player) == ACE_Player) && (animationState player == "Acts_carFixingWheel")) then {
			[ACE_Player, "", 2] call ACE_Common_fnc_doAnimation;
		};
	};
//};