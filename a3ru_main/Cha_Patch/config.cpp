class CfgPatches
{
	class A3RU_Cha_Patch
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "CUP_WheeledVehicles_LAV25", "Cha_BRDM2", "rhs_c_heavyweapons", "rhs_optics" };
		version = "0.2";
		versionStr = "0.2";
		versionAr[] = {0, 2};
		author[] = {"Blender", "Lolkij"};
		authorUrl = "http://www.arma3.ru";
		description = "RHS Skalpel ammo, reload time, RHS optics";
	};
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"