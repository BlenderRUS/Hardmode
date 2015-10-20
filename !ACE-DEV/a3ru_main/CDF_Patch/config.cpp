class CfgPatches
{
	class A3RU_CDF_Patch
	{
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"cdf_a3_main_c",
			"cdf_a3_vehicles_uaz", // REPLACE RDS WEAPONS
			"mas_cars" // REPLACE RDS WEAPONS TO MAS
		};
		author[] = {"Blender"};
		authorUrl = "http://www.arma3.ru";
		version = "0.1";
		versionAr[] = {0, 1};
		versionStr = "0.1";
	};
};

class CfgVehicles {
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class EventHandlers;
		class AnimationSources;
	};
	class Offroad_01_base_F: Car_F{};
	class RHS_UAZ_Base: Offroad_01_base_F{};
	class CDF_A3_UAZ_Base: RHS_UAZ_Base {
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};
	class CDF_A3_UAZ_MG_Base: CDF_A3_UAZ_Base {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"mas_DSHKM"};
				magazines[] = {"mas_150Rnd_127x107_DSHKM","mas_150Rnd_127x107_DSHKM","mas_150Rnd_127x107_DSHKM","mas_150Rnd_127x107_DSHKM"};
			};
		};
	};
	class CDF_A3_UAZ_AGS30_Base: CDF_A3_UAZ_Base {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"mas_AGS30"};
				magazines[] = {"mas_29Rnd_30mm_AGS30","mas_29Rnd_30mm_AGS30","mas_29Rnd_30mm_AGS30","mas_29Rnd_30mm_AGS30","mas_29Rnd_30mm_AGS30","mas_29Rnd_30mm_AGS30"};
			};
		};
	};
	class CDF_A3_UAZ_SPG9_Base: CDF_A3_UAZ_Base {
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"mas_SPG9"};
				magazines[] = {"mas_OG9_HE","mas_OG9_HE","mas_OG9_HE","mas_OG9_HE","mas_OG9_HE","mas_OG9_HE","mas_OG9_HE","mas_OG9_HE","mas_OG9_HE","mas_OG9_HE","mas_PG9_AT","mas_PG9_AT","mas_PG9_AT","mas_PG9_AT","mas_PG9_AT","mas_PG9_AT","mas_PG9_AT","mas_PG9_AT"};
			};
		};
	};
	#include "disabled_vehicles.hpp"
};