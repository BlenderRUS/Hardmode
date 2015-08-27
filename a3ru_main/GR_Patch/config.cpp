class CfgPatches
{
	class A3RU_GR_Patch
	{
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		author[] = {"Blender"};
		authorUrl = "http://www.arma3.ru";
		version = "0.1";
		versionAr[] = {0, 1};
		versionStr = "0.1";
	};
};

class CfgVehicles {
	class GR_Bell412_base;
	class GR_UH1N_base;
	class GR_UH1H_base;
	#include "no_radar.hpp"
};