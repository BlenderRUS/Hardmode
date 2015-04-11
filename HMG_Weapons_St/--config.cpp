//@todo Брать имена оружия и БК из классов для упрощения stringable.csv
//
class CfgPatches {
	class HMG_Weapons_St {
		requiredaddons[] = {"A3_Data_F", "hlcweapons_aks", "rhs_c_weapons", "A3_Anims_F", "A3_Anims_F_Config_Sdr", "A3_Weapons_F", "asdg_jointrails", "hlcweapons_core","RDS_StaticWeapons_Core","AGM_Core","hmg_core"};
		weapons[] = {""};
		units[] = {};
	};
};

class CfgFunctions {
	class HMG_Static {
		class HMG_Static {
			file = "HMG_Weapons_St\Functions";
			class CheckConditions;
			class CheckConditionsGunner;
			class LoadStatic;
			class LoadVehicle;
			class MetisPackUnpack;
		};
	};
};

<<<<<<< HEAD
#include "Configs\CfgMagazines.hpp"
#include "Configs\CfgWeapons.hpp"
#include "Configs\CfgVehicles.hpp"
=======
class cfgMagazines {
	class CA_Magazine;
	class CA_LauncherMagazine;
	class rhs_mag_2Rnd_TOW;
	class rhs_mag_1Rnd_TOW: CA_LauncherMagazine
	{
		scope = 2;
		ammo = "rhs_ammo_TOW2_AT";
		displayname = "1 rnd BGM-71E TOW-2A";
		displaynameshort = "1 rnd BGM-71E";
		nameSound = "missiles";
		count = 1;
		initSpeed = 55.71;
	};
	class TOW_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\tow_static_ca.paa";
		picture = "\HMG_Weapons_St\tow_static_ca";
		model = "HMG_Weapons_St\tow.p3d";
		displayName = "TOW AT";
		mass = 502;
	};
	class D30_at_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m119_ca.paa";
		picture = "\HMG_Weapons_St\m119_ca";
		model = "HMG_Weapons_St\m119_m1.p3d";
		displayName = "Кумулятивный снаряд Д-30";
		mass = 502;
	};
	class D30_he_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m119_ca.paa";
		picture = "\HMG_Weapons_St\m119_ca";
		model = "HMG_Weapons_St\m119_m1.p3d";
		displayName = "ОФ снаряд Д-30";
		mass = 502;
	};
	class M119_at_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m119_ca.paa";
		picture = "\HMG_Weapons_St\m119_ca";
		model = "HMG_Weapons_St\m119_m1.p3d";
		displayName = "M119 M1 HE Shell";
		mass = 502;
	};
	class M119_wp_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m119_ca.paa";
		picture = "\HMG_Weapons_St\m119_ca";
		model = "HMG_Weapons_St\m119_m1.p3d";
		displayName = "M119 WP Shell";
		mass = 502;
	};
	class M119_laser_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m119_ca.paa";
		picture = "\HMG_Weapons_St\m119_ca";
		model = "HMG_Weapons_St\m119_m1.p3d";
		displayName = "M119 Laser Guided Shell";
		mass = 502;
	};
	class M119_smoke_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m119_ca.paa";
		picture = "\HMG_Weapons_St\m119_ca";
		model = "HMG_Weapons_St\m119_m1.p3d";
		displayName = "M119 Smoke Shell";
		mass = 502;
	};
	class M119_illum_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m119_ca.paa";
		picture = "\HMG_Weapons_St\m119_ca";
		model = "HMG_Weapons_St\m119_m1.p3d";
		displayName = "M119 Illumination Shell";
		mass = 502;
	};

	class metis_9m131 : CA_LauncherMagazine {
		scope = 2;
		count = 1;
		displayName = "$STR_HMG_Static_Missile_9K115";
		displayNameShort = "9М131";
		model = "\HMG_Weapons_St\metis_tpk.p3d";
		ammo = "metis_9M115_PTUR";
		type = 6 * 		256;
		picture = "\metis\data\pic\9m115_ca";
		initSpeed = 40;
		maxLeadSpeed = 830;
		descriptionShort = "Выстрел 9М131 тандемный";
		mass = 306;
	};

	class 8Rnd_82mm_Mo_shells;
	class AGM_8Rnd_81mmShell_HE: 8Rnd_82mm_Mo_shells {
   	 	count = 1;
		initSpeed = 261;
    		displayName = "2b14 HE";
    		displayNameShort = "HE";
    		ammo = "AGM_81mmShell_AMMO_HE";
  	};
	class AGM_8Rnd_81mmShell_252_HE: 8Rnd_82mm_Mo_shells {
   	 	count = 1;
		initSpeed = 305;
    		displayName = "M252 HE";
    		displayNameShort = "HE";
    		ammo = "AGM_81mmShell_252_AMMO_HE";
  	};
	class RDS_29Rnd_30mm_AGS30_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m_ags30_ca.paa";
		picture = "\HMG_Weapons_St\m_ags30_ca";
		model = "HMG_Weapons_St\ace_ags30_mag.p3d";
		displayName = "AGS-30 29rnd";
		ammo=RDS_G_30mm_HE;
		mass = 20;
	};
	class Mk19_cass_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m_mk19_ca.paa";
		picture = "\HMG_Weapons_St\m_mk19_ca";
		model = "HMG_Weapons_St\mk19_box.p3d";
		displayName = "Mk-19 48rnd";
		ammo=RDS_G_30mm_HE;
		mass = 20;
	};
	class M2_cass_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m_m2_ca.paa";
		picture = "\HMG_Weapons_St\m_m2_ca";
		model = "HMG_Weapons_St\m2_box.p3d";
		displayName = "M2 100rnd";
		ammo=RDS_G_30mm_HE;
		mass = 20;
	};

	class RDS_KORD_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\dshkm_co.paa";
		picture = "\HMG_Weapons_St\dshkm_mg_ca";
		model = "HMG_Weapons_St\ace_kord_mag.p3d";
		displayName = "KORD MAG";
		mass = 20;
	};
	class PG9_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\spg9_ca.paa";
		picture = "\HMG_Weapons_St\spg9_ca";
		model = "HMG_Weapons_St\pg9.p3d";
		displayName = "SPG PG9";
		mass = 20;
	};
	class OG9_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\spg9_ca.paa";
		picture = "\HMG_Weapons_St\spg9_ca";
		model = "HMG_Weapons_St\og9.p3d";
		displayName = "SPG OG9";
		mass = 20;
	};

	class HMG_Mine_82_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\podnos_2b14_ca.paa";
		picture = "\HMG_Weapons_St\podnos_2b14_ca";
		model = "HMG_Weapons_St\mort82mm_shell.p3d";
		displayName = "2b14 HE";
		mass = 100;
	};
	class HMG_Mine_81_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\mortar_m251_ca.paa";
		picture = "\HMG_Weapons_St\mortar_m251_ca";
		model = "HMG_Weapons_St\mort82mm_shell.p3d";
		displayName = "M252 HE";
		mass = 100;
	};
	
};
class CfgWeapons {
	class missiles_titan;
	class Rhs_weap_TOW_Launcher;
	class RocketPods;
	class RHS_MK19;
	class RHS_MK19_HMG: RHS_MK19  {
		magazineReloadTime = 0;
	};
	class RHS_M2;
	class RHS_M2_HMG: RHS_M2  {
		magazineReloadTime = 0;
	};
	class rhs_weap_nsvt;
	class rhs_weap_nsvt_HMG : rhs_weap_nsvt  {
		magazineReloadTime = 0;
	}; 
	
	
	class RDS_SPG9: RocketPods
	{
		magazineReloadTime = 0;	
		scope = 2;
		displayName=$STR_DN_SPG9;
		type = WeaponHardMounted;
		reloadTime = 3;
		modelOptics = "";
		magazines[]={RDS_PG9_AT,RDS_OG9_HE};
		sounds[] = {StandardSound};
 		class StandardSound
 		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] ={"\RDS_StaticW\SPG9\data\RocketLauncher_Shot04_A",db20,1,1100};
			soundBegin[] = {"begin1",1};
		};
		drySound[]={"\RDS_StaticW\SPG9\data\Javelin_dry_v1",db-80,1,10};
		reloadMagazineSound[]={"\RDS_StaticW\SPG9\data\flare_reload",db-70,1,20};
		soundfly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 1, 1.9, 700};
		recoil=launcherBase;
		aiRateOfFire = 10.000000;
		aiRateOfFireDistance = 450;
		minRange = 50;
		midRange = 450;
		maxRange = 800;
		//cursorAim = \ca\Weapons\Data\clear_empty;
		cursor = Rocket; //\ca\UI\Data\cursor_w_rocket_gs;
		cursorSize = 1;

	};
	class Rhs_weap_TOW_Launcher_static : Rhs_weap_TOW_Launcher
	{
		magazineReloadTime = 0;	
		holdsterAnimValue = 1;
		autoReload = 1;
		scope=1;
		displayName="BGM-71 TOW2A Static";
		magazines[]=
		{
			"rhs_mag_1Rnd_TOW"
		};
	};
	class RDS_AT13LauncherSingle: missiles_titan
	{
		displayName = $STR_DN_AT13LAUNCHERSINGLE;
		magazineReloadTime = 0;	
		minRange=10;minRangeProbab=0.6;
		midRange=1000;midRangeProbab=0.7;
		maxRange=2000;maxRangeProbab=0.001;
		reloadTime = 2;
		magazines[]={metis_9m131};
		lockedtargetsound[] = {"\RDS_StaticW\data\alarm_loop1", 0.000316228, 6};
		lockingtargetsound[] = {"\RDS_StaticW\data\alarm_loop1", 0.000316228, 2};
	};
};
class CfgVehicles {
	class Man;
	class CAManBase : Man {
		class AGM_SelfActions {
			class AGM_UnpackMetis {
				displayName = "$STR_HMG_Static_UnpackMetis";
				condition = "(backpack _player) isKindOf 'RDS_Metis_Gun_Bag'";
				statement = "[false] call HMG_Static_fnc_MetisPackUnpack;";
				showDisabled = 0;
				enableInside = 1;
				priority = 1;
			};
			class AGM_PackMetis {
				displayName = "$STR_HMG_Static_PackMetis";
				condition = "SecondaryWeapon player == 'MetisM1'";
				statement = "[true] call HMG_Static_fnc_MetisPackUnpack;";
				showDisabled = 0;
				enableInside = 1;
				priority = 1;
			};
		};
	};
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class MainTurret;
		class AGM_Actions;
	};
	class StaticGrenadeLauncher : StaticWeapon {};
	class StaticCannon : StaticWeapon {};
	class RDS_D30_base: StaticCannon {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadStMagHE {
				displayName = "$STR_HMG_Static_Load_D30_HE";
				condition = "[_this select 0, 'D30_he_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'D30_he_out', 'RDS_30Rnd_122mmHE_D30', 20, 'STR_HMG_Static_Loading_D30_HE'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			class AGM_LoadStMagAT {
				displayName = "$STR_HMG_Static_Load_D30_AT";
				condition = "[_this select 0, 'D30_at_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'D30_at_out', 'RDS_30Rnd_122mmAT_D30', 20, 'STR_HMG_Static_Loading_D30_AT'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
		};
		class Turrets: Turrets	{
			class MainTurret: MainTurret	{
				magazines[]={};
				};
			};

	};
	class RDS_M119_base : RDS_D30_base {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadStMagHE {
				displayName = "$STR_HMG_Static_Load_M119_HE";
				condition = "[_this select 0, 'M119_at_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'M119_at_out', 'RDS_30Rnd_105mmHE_M119', 20, 'STR_HMG_Static_Loading_M119_HE'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			class AGM_LoadStMagWP {
				displayName = "$STR_HMG_Static_Load_M119_WP";
				condition = "[_this select 0, 'M119_wp_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'M119_wp_out', 'RDS_30Rnd_105mmWP_M119', 20, 'STR_HMG_Static_Loading_M119_WP'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			class AGM_LoadStMagLG {
				displayName = "$STR_HMG_Static_Load_M119_LG";
				condition = "[_this select 0, 'M119_laser_out', 1 ] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'M119_laser_out', 'RDS_30Rnd_105mmLASER_M119', 20, 'STR_HMG_Static_Loading_M119_LG'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			class AGM_LoadStMagSM {
				displayName = "$STR_HMG_Static_Load_M119_SM";
				condition = "[_this select 0, 'M119_smoke_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'M119_smoke_out', 'RDS_30Rnd_105mmSMOKE_M119', 20, 'STR_HMG_Static_Loading_M119_SM'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			class AGM_LoadStMagIL {
				displayName = "$STR_HMG_Static_Load_M119_IL";
				condition = "[_this select 0, 'M119_illum_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'M119_illum_out', 'RDS_30Rnd_105mmILLUM_M119', 20, 'STR_HMG_Static_Loading_M119_IL'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};

			};
			class Turrets: Turrets
			{
				class MainTurret: MainTurret
				{
					magazines[]={};
				};
			};
	};
	class RDS_AGS_base: StaticGrenadeLauncher {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadStMag {
				displayName = "$STR_HMG_Static_Load";
				condition = "[_this select 0, 'RDS_29Rnd_30mm_AGS30_out', 1, 'RDS_AGS30'] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'RDS_29Rnd_30mm_AGS30_out', 'RDS_29Rnd_30mm_AGS30', 15, 'STR_HMG_Static_LoadingAGS'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			};
			class Turrets: Turrets
			{
				class MainTurret: MainTurret
				{
					magazines[]={};
				};
			};
		};
	class StaticMGWeapon: StaticWeapon{};
	class RDS_KORD_Base: StaticMGWeapon {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadStMag {
				displayName = "$STR_HMG_Static_Load";
				condition = "[_this select 0, 'RDS_KORD_out', 3] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'RDS_KORD_out', 'rhs_mag_127x108mm_50', 10, 'STR_HMG_Static_LoadingKORD'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			};
			class Turrets: Turrets
			{
				class MainTurret: MainTurret
				{
					magazines[]={};
				};
			};

	};
	class RDS_DSHKM_base: StaticMGWeapon {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadStMag {
				displayName = "$STR_HMG_Static_Load50x127";
				condition = "[_this select 0, 'RDS_KORD_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'RDS_KORD_out', 'rhs_mag_127x108mm_50', 10, 'STR_HMG_Static_LoadingDSHKM'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			};
			class Turrets: Turrets
			{
				class MainTurret: MainTurret
				{
					magazines[]={};
				};
			};

	};
	class rhs_nsv_tripod_base : StaticMGWeapon {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadStMag {
				displayName = "$STR_HMG_Static_Load50x127";
				condition = "[_this select 0, 'RDS_KORD_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'RDS_KORD_out', 'rhs_mag_127x108mm_50', 10, 'STR_HMG_Static_LoadingKORD'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			};
			class Turrets: Turrets
			{
				class MainTurret: MainTurret
				{
					weapons[]={rhs_weap_nsvt_HMG};
					magazines[]={};
				};
			};

	};
	class StaticMortar:StaticWeapon{};
	class RDS_2b14_82mm_Base: StaticMortar {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadMortMagHE {
				displayName = "$STR_HMG_Static_LoadHECharge";
				condition = "[_this select 0, 'HMG_Mine_82_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'HMG_Mine_82_out', 'AGM_8Rnd_81mmShell_HE', 7, 'STR_HMG_Static_LoadingHECharge'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			};
			class Turrets: Turrets
			{
				class MainTurret: MainTurret
				{
					magazines[]={};
				};
			};
	};
	class RDS_M252_base: StaticMortar {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadMortMagHE {
				displayName = "$STR_HMG_Static_LoadHECharge";
				condition = "[_this select 0, 'HMG_Mine_81_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'HMG_Mine_81_out', 'AGM_8Rnd_81mmShell_252_HE', 7, 'STR_HMG_Static_LoadingHECharge'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]={};
			};
		};
	};
	class StaticATWeapon: StaticWeapon {};
	class RDS_TOW_TriPod_base: StaticATWeapon {
		class AGM_Actions: AGM_Actions {
			class AGM_LoadTOW {
				displayName = "$STR_HMG_Static_LoadTOW";
				condition = "[_this select 0, 'TOW_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'TOW_out', 'rhs_mag_1Rnd_TOW', 20, 'STR_HMG_Static_LoadingTOW'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			};
			class Turrets: Turrets
			{
				class MainTurret: MainTurret
				{
					weapons[] = {"Rhs_weap_TOW_Launcher_static"};
					magazines[]={};
				};
			};
	};
	class RDS_Metis_Base: StaticATWeapon {
		class AGM_Actions: AGM_Actions {
			class AGM_LoadMetis {
				displayName = "$STR_HMG_Static_LoadMetis";
				condition = "[_this select 0, 'metis_9m131', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'metis_9m131', 'metis_9m131', 15, 'STR_HMG_Static_LoadingMetis'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]={};
			};
		};
	};
	class rhs_m2staticmg_base : StaticMGWeapon {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadM2 {
				displayName = "$STR_HMG_Static_LoadM2";
				condition = "[_this select 0, 'M2_cass_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'M2_cass_out', 'rhs_mag_100rnd_127x99_mag_Tracer_Red', 10, 'STR_HMG_Static_LoadingM2'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {RHS_M2_HMG};
				magazines[]={};
			};
		};
	};

	class RDS_M2StaticMG_base: StaticMGWeapon {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadM2 {
				displayName = "$STR_HMG_Static_LoadM2";
				condition = "[_this select 0, 'M2_cass_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'M2_cass_out', 'rhs_mag_100rnd_127x99_mag_Tracer_Red', 10, 'STR_HMG_Static_LoadingM2'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]={};
			};
		};
	};

	class RDS_SPG9_base: StaticATWeapon {
		class AGM_Actions: AGM_Actions {
			class AGM_LoadAGSPG {
				displayName = "$STR_HMG_Static_LoadPG9";
				condition = "[_this select 0, 'PG9_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'PG9_out', 'RDS_PG9_AT', 10, 'STR_HMG_Static_LoadingPG9'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 0;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
			};
			class AGM_LoadAGSOG {
				displayName = "$STR_HMG_Static_LoadOG9";
				condition = "[_this select 0, 'OG9_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'OG9_out', 'RDS_OG9_HE', 10, 'STR_HMG_Static_LoadingOG9'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 1;
				priority = 1.5;
				icon = "";  // @todo
				enableInside = 1;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]={};
			};
		};
	};
	class RHS_MK19_TriPod_base: StaticGrenadeLauncher {
		magazinereloadtime = 0;
		class AGM_Actions: AGM_Actions {
			class AGM_LoadMK19 {
				displayName = "$STR_HMG_Static_LoadMk19";
				condition = "[_this select 0, 'Mk19_cass_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_this select 0, 'Mk19_cass_out', 'RHS_48Rnd_40mm_MK19', 15, 'STR_HMG_Static_LoadingMk19'] call HMG_Static_fnc_LoadStatic";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = { RHS_MK19_HMG };
				magazines[] = {};
			};
		};
	};

	#include "vehicles.hpp"

	class hmg_ru_box_gren_base;
	class hmg_ru_box_static: hmg_ru_box_gren_base {
		displayName = "$STR_HMG_Static_Ammobox";
		class TransportMagazines {
			class _xx_RDS_29Rnd_30mm_AGS30_out {
				magazine = "RDS_29Rnd_30mm_AGS30_out";
				count = 30;
			};
			class _xx_RDS_KORD_out {
				magazine = "RDS_KORD_out";
				count = 30;
			};
			class _xx_HMG_Mine_82_out {
				magazine = "HMG_Mine_82_out";
				count = 10;
			};
			class _xx_HMG_Mine_81_out {
				magazine = "HMG_Mine_81_out";
				count = 10;
			};
			class _xx_M2_cass_out {
				magazine = "M2_cass_out";
				count = 10;
			};
			class _xx_Mk19_cass_out {
				magazine = "Mk19_cass_out";
				count = 10;
			};
			class _xx_TOW_out {
				magazine = "TOW_out";
				count = 10;
			};
			class _xx_pg9_out {
				magazine = "PG9_out";
				count = 10;
			};
			class _xx_og9_out {
				magazine = "OG9_out";
				count = 10;
			};
		};
	};  
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	class RDS_DShkM_TripodHigh_Bag: Weapon_Bag_Base
	{
		mass=100;
		maximumLoad = 1500;		
	};
	class B_AssaultPack_Base;
	class hmg_metis_ruck : B_AssaultPack_Base
	{
		scope = 2;
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_rpg";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_rpg_ca.paa";
		displayName = "$STR_HMG_Static_MetisBP_2rnd";
		hiddenSelectionsTextures[] = {};
		maximumLoad = 620;
		mass = 20;
		class TransportMagazines
		{
			class _xx_metis_9m131
			{
				magazine = "metis_9m131";
				count = 2;
			};
		};
	};
	class hmg_metis_ruck2 : B_AssaultPack_Base
	{
		scope = 2;
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_rpg";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_rpg_ca.paa";
		displayName = "$STR_HMG_Static_MetisBP_1rnd";
		hiddenSelectionsTextures[] = {};
		maximumLoad = 310;
		mass = 20;
		class TransportMagazines
		{
			class _xx_metis_9m131
			{
				magazine = "metis_9m131";
				count = 1;
			};
		};
	};	
};
>>>>>>> origin/master

