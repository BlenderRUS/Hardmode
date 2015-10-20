class CfgPatches {
	class A3RU_Stryker_Patch {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"Delta_strykerpack",
			"A3_Weapons_F",
			"rhsusf_c_m1a1" // MGS Scope from M1A1
		};
	};
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"