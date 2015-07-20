if (isDedicated) exitwith {};
if (!(isNil "VOG25P")) exitWith {};
VOG25P = true; // avoid having multiple instances running
/* Ensures the primary display is found */

[] spawn {
	waitUntil { sleep 0.1; !isNull(findDisplay 46) };
	sleep 0.1;
	// a pretty stupid way to do the job, but it works without visible performance impact (tested SP). Any better ideas?
	while {true} do	{
		{
			if ((typeOf _x) == "VOG25P_Range_Ammo") then {
				_x setDamage 1
			};
		} forEach allmines;
		sleep .75;
	};
};