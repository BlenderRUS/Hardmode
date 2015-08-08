class CfgPatches
{
	class A3RU_SightsFixes
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 1.36;
		requiredAddons[] = {"rhs_optics", "RDS_Tanks", "Cha_LAV25"};
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
				file = "\x\a3ru\addons\a3ru_main\sightsFixes\Functions\RHS_sight_bmp2.sqf";
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
				file = "\x\a3ru\addons\a3ru_main\sightsFixes\Functions\RDS_sight_T55.sqf";
				description = "FCS for T55";
			};
		};
	};
};

class CfgVehicles {
	class Car_F;
	class Wheeled_APC_F: Car_F {
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints;
			};
		};
		class ViewPilot;
	};
	class Cha_LAV25_Base: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\sightsFixes\Models\scope_LAV_7";
				class ViewOptics;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initFov = 0.234;
						minFov = 0.234;
						maxFov = 0.234;
						//gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\sightsFixes\Models\scope_LAV_7";
					};
					class Narrow: Wide
					{
						initFov = 0.07;
						minFov = 0.07;
						maxFov = 0.07;
						//gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\sightsFixes\Models\scope_LAV_7";
					};
				};
				class Turrets
				{
					class CommanderOptics: NewTurret
					{
						gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\sightsFixes\Models\scope_com2";
					};
				};
			};
		};
	};
};