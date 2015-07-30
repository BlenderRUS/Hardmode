class CfgPatches
{
	class A3RU_RDSPatch
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {
			AGM_Artillery,
			RDS_StaticWeapons_Core,
			rhsusf_c_heavyweapons,
			rhs_c_heavyweapons,
			metis,
			A3_Weapons_F
		};
		author[] = {"Blender", "Lolkij"};
		authorUrl = "http://www.arma3.ru";
		version = "0.2";
		versionAr[] = {0, 2};
		versionStr = "0.2";
	};
};

#include "CfgBags.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"