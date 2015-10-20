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
			rhsusf_c_weapons, A3_Weapons_F // M107 /w 1.52 fix
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

class CfgWeapons {
	class InventoryOpticsItem_Base_F;
	class rhs_acc_sniper_base;
	#include "CfgWeapons\optics.hpp"
};

class CfgVehicles {
	// M107 CLASS FIX
	class rhs_weapon_base;
	class rhs_weapon_M107: rhs_weapon_base
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "Dummy object";
		model = "\a3\weapons_f\DummyItem.p3d";
		class TransportWeapons {};
		class TransportMagazines {};
	};
	//** M107 CLASS FIX
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
	class APC_Tracked_03_base_F;
	class RHS_UH60_Base;
	class Heli_Transport_02_base_F;
	#include "CfgVehicles\no_radar.hpp"
	class SoldierWB;
	class rhsusf_infantry_army_base: SoldierWB {
		modelSides[] = {1,3};
	};
};