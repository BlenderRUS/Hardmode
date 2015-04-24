class CfgPatches
{
	class A3RU_RHS_Sights_Fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 1.36;
		requiredAddons[] = {"rhs_optics", "RDS_Tanks"};
		version = "1.1";
		versionStr = "1.1";
		versionAr[] = {1,1};
		author[] = { "Blender" };
		authorUrl = "http://www.arma3.ru";
		description = "BMD2 & RDS T-55 Sight fixes";
	};
};

class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class Functions
		{
			class sight_bmp2
			{
				file = "\A3RU_RHS_Sights_Fix\Functions\RHS_sight_bmp2.sqf";
				description = "FCS for BMP-2";
			};
		};
	};
	class RDS
	{
		tag = "RDS";
		class functions
		{
			class sight_t55 
			{
				file = "\A3RU_RHS_Sights_Fix\Functions\RDS_sight_T55.sqf";
				description = "FCS for T55";
			};
		};
	};
};