/*
 * Author: Blender
 *
 * Checks ammo load conditions for static weapons
 *
 * Argument:
 * 0: Static weapon (Object)
 * 1: Type of magazine in player's inventory (String) [Optional]
 * 2: Number of loaded magazines in static weapon (Number)
 * 3: Type of magazine in static weapon (String) [Optional]
 *
 * Return value:
 * Nothing
 */

if ((count _this) == 2) then {
	(count magazines (_this select 0)) < (_this select 1)
} else {
	if ((count _this) == 4) then {
		((_this select 1) in (magazines AGM_Player)) && ((_this select 0) ammo (_this select 3) < (_this select 2))
	} else {
		((_this select 1) in (magazines AGM_Player)) && ((count magazines (_this select 0)) < (_this select 2))
	}
}