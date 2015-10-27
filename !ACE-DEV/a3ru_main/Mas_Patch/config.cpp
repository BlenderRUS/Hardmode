#define X_SCOPE(XSCOPE) scope = XSCOPE; \
scopeCurator = XSCOPE;

class CfgPatches
{
	class A3RU_MAS_PATCH
	{
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"mas_vehicleweapons_Core",
			"mas_apc",
			"mas_brdm",
			"mas_CH47",
			"mas_veh_F_35C",
			"mas_MI8",
			"mas_MI24",
			"mas_tanks",
			"mas_UH1Y",
			"mas_UH60M",
			"A3RU_RHS_Patch"
		};
		author[] = {"Blender"};
		authorUrl = "http://www.arma3.ru";
		version = "0.1";
		versionAr[] = {0, 1};
		versionStr = "0.1";
	};
};

class CfgAmmo {
	#include "CfgAmmo.hpp"
};

class RscInGameUI {
	delete mas_RscWeaponBMP2_FCS; // APC
	delete mas_RscOptics_BMP2; // BRDM
};

class CfgMagazines {
	class Default;
	class VehicleMagazine;
	class CA_LauncherMagazine;
	class 60Rnd_30mm_APFSDS_shells_Tracer_Green;
	class 140Rnd_30mm_MP_shells_Tracer_Green;
	#include "APC\CfgMagazines.hpp"
	#include "BRDM\CfgMagazines.hpp"
	#include "F35\CfgMagazines.hpp"
	
	#include "CfgMagazines.hpp"
	#include "CfgMagazines_AGM.hpp"
};

class Mode_SemiAuto;

class CfgWeapons {
	class cannon_125mm;
	class autocannon_30mm_CTWS;
	class missiles_titan;
	class rockets_Skyfire;
	class missiles_SCALPEL;
	class Mgun;
	class M134_minigun;
	class MissileLauncher;
	class CannonCore;
	class RocketPods;
	#include "APC\CfgWeapons.hpp"
	#include "BRDM\CfgWeapons.hpp"
	#include "CH47\CfgWeapons.hpp"
	#include "F35\CfgWeapons.hpp"
	
	class mortar_155mm_AMOS;
	class GMG_20mm;
	#include "CfgWeapons.hpp"
	#include "CfgWeapons_AGM.hpp"
};

class CfgVehicles {
	class Tank_F;
	class Wheeled_APC_F;
	class Helicopter_Base_H;
	class HelicopterWreck;
	class Plane_Base_F;
	class PlaneWreck;
	#include "APC\CfgVehicles.hpp"
	#include "BRDM\CfgVehicles.hpp"
	#include "CH47\CfgVehicles.hpp"
	#include "F35\CfgVehicles.hpp"
	#include "MI8\CfgVehicles.hpp"
	#include "MI24\CfgVehicles.hpp"
	#include "TANK\CfgVehicles.hpp"
	#include "UH1Y\CfgVehicles.hpp"
	#include "UH60M\CfgVehicles.hpp"
	
	class LandVehicle;
	class Car: LandVehicle {
		class NewTurret;
	};
	class Car_F: Car {
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
	};
	
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class MainTurret;
		class ACE_Actions {
            class ACE_MainActions;
		};
	};
	class StaticMGWeapon: StaticWeapon {};
	class StaticATWeapon:StaticWeapon {};
	class StaticAAWeapon:StaticWeapon {};
	class StaticCannon: StaticWeapon {
		class ViewOptics;
	};

	class StaticGrenadeLauncher:StaticWeapon {class ViewOptics;};
	class StaticMortar:StaticWeapon {};
	#include "CfgVehicles.hpp"
	#include "FIA\CfgVehicles.hpp"
};

class CfgFunctions
{
	class mas
	{
		class functions
		{
			#include "APC\CfgFunctions.hpp"
		};
	};
};