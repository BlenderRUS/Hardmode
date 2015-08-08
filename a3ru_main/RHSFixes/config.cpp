class CfgPatches
{
	class A3RU_RHSFixes
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = { rhs_c_weapons };
		author[] = {"Blender", "Lolkij"};
		authorUrl = "http://www.arma3.ru";
		version = "0.1";
		versionAr[] = {0, 1};
		versionStr = "0.1";
	};
};

class CfgAmmo {
	class R_PG32V_F;
	#include "CfgAmmo\rpg_explosive.hpp"
};

class CfgVehicles {
	class Car;
	class Car_F: Car
	{
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class Wheeled_APC_F: Car_F {
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
	};
	#include "CfgVehicles\armor_fix.hpp"
};