class CfgPatches
{
	class A3RU_CUP_Patch
	{
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {
			CUP_Weapons_RPG18, rhs_c_weapons,
			CUP_Weapons_Metis_AT_13
		};
		author[] = {"Blender"};
		authorUrl = "http://www.arma3.ru";
		version = "0.2";
		versionAr[] = {0, 2};
		versionStr = "0.2";
	};
};

class CfgWeapons
{
	class Launcher_Base_F;
	class CUP_launch_RPG18: Launcher_Base_F
	{
		magazines[] = {"rhs_rpg18_mag"};
		AGM_UsedTube = "CUP_launch_RPG18_used";
	};
	class CUP_launch_RPG18_used: CUP_launch_RPG18
	{
		scope = 1;
		descriptionshort = "Used launcher tube";
		displayname = "$STR_A3RU_CUPtoRHS_rpg18_used";
		weaponInfoType = "RscWeaponZeroing";
		magazines[] = {"rhs_launcher_dummy_mag"};
	};
	class CUP_launch_Metis: Launcher_Base_F
	{
		magazines[] = {"metis_9m131"};
	};
};