class CfgPatches
{
	class A3RU_RDSPatch
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {
			AGM_Logistics, // D30 & M119 drag remove
			AGM_Artillery, // Mortars optics
			RDS_StaticWeapons_Core,
			rhsusf_c_heavyweapons,
			rhs_c_heavyweapons,
			metis,
			A3_Weapons_F,
			RDS_Tanks // D-30 Optics
		};
		author[] = {"Blender", "Lolkij"};
		authorUrl = "http://www.arma3.ru";
		version = "0.3";
		versionAr[] = {0, 3};
		versionStr = "0.3";
	};
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"