class CfgPatches
{
	class A3RU_SabAn2_Patch
	{
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {"sab_An2"};
		author[] = {"Blender"};
		authorUrl = "http://www.arma3.ru";
		version = "0.1";
		versionAr[] = {0, 1};
		versionStr = "0.1";
	};
};

class CfgVehicles {
	class Plane;
	class sab_an2_BASE: Plane {
		radarType = 8;
	};
};