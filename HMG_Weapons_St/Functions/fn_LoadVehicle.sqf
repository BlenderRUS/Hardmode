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
 
HMG_Static_fnc_Load_Start = {
	_veh = _this select 0;
	_mag = _this select 1;
	_vehMag = _this select 2;
	if (_mag in (magazines AGM_Player)) then { // Check if player still have required magazine
		if (!isNull _veh && (AGM_Player distance _veh <= 4)) then { // Check object existence and distance
			AGM_Player removeMagazine _mag;
			_veh addMagazineGlobal _vehMag;
		};
	};
};

HMG_Static_fnc_Load_Cancel = {
	if (((vehicle AGM_Player) == AGM_Player) && (animationState player == "Acts_carFixingWheel")) then {
		[AGM_Player, "", 2] call AGM_Core_fnc_doAnimation;
	};
};

// Do animation
if ((vehicle AGM_Player) == AGM_Player) then {
	[AGM_Player, "Acts_carFixingWheel", 1] call AGM_Core_fnc_doAnimation;
};

// Display progress bar
[
	_this select 3,
	[_this select 0, _this select 1, _this select 2],
	"HMG_Static_fnc_Load_Start",
	localize (_this select 4),
	"HMG_Static_fnc_Load_Cancel"
] call AGM_Core_fnc_progressBar;

// Reset animation
(_this select 3) spawn {
	sleep _this;
	if (((vehicle AGM_Player) == AGM_Player) && (animationState player == "Acts_carFixingWheel")) then {
		[AGM_Player, "", 2] call AGM_Core_fnc_doAnimation;
	};
};