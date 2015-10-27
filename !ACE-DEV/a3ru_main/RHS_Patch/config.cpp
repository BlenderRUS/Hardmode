class CfgPatches
{
	class A3RU_RHS_Patch
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {
			rhs_c_weapons, rhs_c_heavyweapons, rhsusf_c_heavyweapons,
			rhs_c_troops, // For uniform fix
			rhs_c_btr, // Wheel repair removal
			rhs_optics, // BMP-2 Sight fix
			Blastcore_SmokeCS, Blastcore_VEP, // For smoke shells
			rhsusf_c_weapons, A3_Weapons_F, // M107 /w 1.52 fix
			rhsusf_c_fmtv, // M2 replacement
			rhsusf_c_hmmwv, // M2 replacement
			rhsusf_c_m113, // M2 replacement
			rhsusf_c_rg33, // M2 replacement
			rhsusf_c_statics // M2 replacement
		};
		author[] = {"Blender", "Lolkij"};
		authorUrl = "http://www.arma3.ru";
		version = "0.1";
		versionAr[] = {0, 1};
		versionStr = "0.1";
	};
};

#include "CfgCloudlets.hpp"
#include "effects.hpp"
#include "CfgFunctions.hpp"

class CfgAmmo {
	class R_PG32V_F;
	class Sh_125mm_APFSDS;
	class Sh_125mm_HE;
	class B_30mm_AP;
	#include "CfgAmmo\explosive.hpp"
	class rhs_ammo_127x107mm;
	#include "CfgAmmo\kpvt_hit.hpp"
	class B_127x99_Ball;
	#include "CfgAmmo\m2_hit.hpp"
	#include "CfgAmmo\explosion_effects_fix.hpp"
};

class CfgMagazines {
	class VehicleMagazine;
	#include "CfgMagazines.hpp"
};

class CfgWeapons {
	class InventoryOpticsItem_Base_F;
	class rhs_acc_sniper_base;
	#include "CfgWeapons\optics.hpp"
	class CannonCore;
	class DSHKM;
	class RHS_M2;
	class GMG_20mm;
	class rhs_weap_nsvt_effects;
	#include "CfgWeapons.hpp"
};

class CfgVehicles {
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class MainTurret;
	};
	class StaticMGWeapon: StaticWeapon {};
	class StaticATWeapon: StaticWeapon {};
	class StaticAAWeapon: StaticWeapon {};
	class StaticCannon: StaticWeapon {
		class ViewOptics;
	};
	class StaticGrenadeLauncher: StaticWeapon {
		class ViewOptics;
	};
	class Car: LandVehicle {
		class NewTurret;
		class ViewPilot;
		class ViewOptics;
	};
	class Car_F: Car {
		class AnimationSources;
		class HitPoints {
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
		class Turrets {
			class MainTurret: Newturret {
				class HitPoints;
				class ViewOptics: ViewOptics {};
				class ViewGunner: ViewOptics {};
			};
		};
	};
	class Wheeled_APC_F: Car_F {};
	class Truck_F: Car_F {};
	class Truck_01_base_F: Truck_F {};
	class MRAP_01_base_F: Car_F {};

	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class CommanderOptics;
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class rhs_weapon_base;
	#include "CfgVehicles\m107_fix.hpp"
	#include "CfgVehicles\armor_fix.hpp"
	class APC_Tracked_03_base_F;
	class RHS_UH60_Base;
	class Heli_Transport_02_base_F;
	#include "CfgVehicles\no_radar.hpp"
	class SoldierWB;
	#include "CfgVehicles\uniform_fix.hpp"
	class APC_Tracked_02_base_F: Tank_F {};
	#include "CfgVehicles\zsu_canLock.hpp"
	class rhsusf_fmtv_base: Truck_01_base_F {};
	class rhsusf_M1078A1P2_B_wd_fmtv_usarmy: rhsusf_fmtv_base {};
	class rhsusf_hmmwe_base: MRAP_01_base_F {};
	class rhsusf_m998_w_2dr: rhsusf_hmmwe_base {};
	class rhsusf_m998_w_4dr: rhsusf_m998_w_2dr {};
	class rhsusf_m998_w_4dr_halftop: rhsusf_m998_w_4dr {};
	class rhsusf_m998_w_4dr_fulltop: rhsusf_m998_w_4dr_halftop {};
	class rhsusf_m1025_w: rhsusf_m998_w_4dr_fulltop {};
	#include "CfgVehicles.hpp"
};