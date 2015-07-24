#include "macros.h"

class CfgPatches
{
	class A3RU_RHStoBC
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = { rhs_c_weapons, rhsusf_c_weapons, Blastcore_VEP };
		author[] = {"Blender", "Lolkij"};
		authorUrl = "http://www.arma3.ru";
		version = "0.5";
		versionAr[] = {0, 5};
		versionStr = "0.5";
	};
};

#include "CfgAmmo.hpp"
#include "CfgCloudlets.hpp"
#include "Effects.hpp"