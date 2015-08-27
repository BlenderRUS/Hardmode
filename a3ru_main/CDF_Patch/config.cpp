class CfgPatches
{
	class A3RU_CDF_Patch
	{
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[] = { "cdf_a3_main_c" };
		author[] = {"Blender"};
		authorUrl = "http://www.arma3.ru";
		version = "0.1";
		versionAr[] = {0, 1};
		versionStr = "0.1";
	};
};

class CfgVehicles {
	#include "disabled_vehicles.hpp"
};