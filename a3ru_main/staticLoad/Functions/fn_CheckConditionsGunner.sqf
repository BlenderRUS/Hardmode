/*
 * Author: Blender
 *
 * Checks ammo load conditions for vehicles
 *
 * Argument:
 * 0: Vehicle (Object)
 * 1: Type of magazine in player's inventory (String) [Optional]
 * 2: Number of loaded magazines in vehicle's weapon (Number)
 * 3: Type of magazine in vehicle's weapon (String) [Optional]
 *
 * Return value:
 * Nothing
 */

if ((count _this) == 2) then {
	(count magazines (_this select 0)) < (_this select 1)
} else {
	if ((count _this) == 4) then {
		((_this select 1) in (magazines AGM_Player)) && ((_this select 0) ammo (_this select 3) < (_this select 2)) && (!isNull (gunner (_this select 0)))
	} else {
		((_this select 1) in (magazines AGM_Player)) && ((count magazines (_this select 0)) < (_this select 2)) && (!isNull (gunner (_this select 0)))
	}
}