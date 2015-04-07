// config.bin - 15:34:53 02/23/15, generated in 0.00 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled
#define ASSEMBLE_INFO(BAG1,BAG2) class assembleInfo { primary = 0; \
			base = ""; \
			assembleTo = "";\
			dissasembleTo[] = {BAG1, BAG2}; \
			displayName = ""; };

class CfgPatches {
	class hmg_weapons_st {
		requiredaddons[] = {"A3_Data_F", "hlcweapons_aks", "rhs_c_weapons", "A3_Anims_F", "A3_Anims_F_Config_Sdr", "A3_Weapons_F", "asdg_jointrails", "hlcweapons_core","RDS_StaticWeapons_Core","AGM_Core","hmg_core"};
		weapons[] = {""};
		units[] = {};
	};
};
class Extended_PostInit_EventHandlers {
		gun_local_Post_Init = "if (isServer) then {'gun_give_owner' addPublicVariableEventHandler {((_this select 1) select 1) setOwner (owner ((_this select 1) select 0))}}";

};

class cfgFunctions {
	class HMG_Static {
		class HMG_Static {
			file = "hmg_weapons_st\functions";
			class HMG_LoadAGS;
			class HMG_LoadKORD;
			class HMG_Load82mm;
			class HMG_Load81mm;
			class HMG_LoadMetis;
			class HMG_UnpackMetis;
			class HMG_PackMetis;
			class HMG_LoadMk19;
			class HMG_LoadM2;
			class HMG_LoadTOW;
			class HMG_LoadSPG_OG;
			class HMG_LoadSPG_PG;
			class CheckConditions;
		};
	};
};

class cfgMagazines {
	class CA_Magazine;
	class CA_LauncherMagazine;
	class rhs_mag_2Rnd_TOW;
	class rhs_mag_1Rnd_TOW: CA_LauncherMagazine
	{
		scope=2;
		ammo = "rhs_ammo_TOW2_AT";
		displayname = "1 rnd BGM-71E TOW-2A";
		displaynameshort = "1 rnd BGM-71E";
		nameSound="missiles";
		count=1;
		initSpeed=55.71;
	};
	class TOW_out: CA_Magazine
	{
		scope = 2;
		icon = "hmg_weapons_st\tow_static_ca.paa";
		picture = "\hmg_weapons_st\tow_static_ca";
		model = "hmg_weapons_st\tow.p3d";
		displayName = "TOW AT";
		mass = 502;
	};
	class M119_out : CA_Magazine {
		scope = 2;
		icon = "hmg_weapons_st\tow_static_ca.paa";
		picture = "\hmg_weapons_st\tow_static_ca";
		model = "hmg_weapons_st\m119_m1.p3d";
		displayName = "M119 AT";
		mass = 402;
	};
	class metis_9m131 : CA_LauncherMagazine {
		scope = 2;
		count = 1;
		displayName = "Выстрел для 9К115-2";
		displayNameShort = "9М131";
		model = "\hmg_weapons_st\metis_tpk.p3d";
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
		icon = "hmg_weapons_st\m_ags30_ca.paa";
		picture = "\hmg_weapons_st\m_ags30_ca";
		model = "hmg_weapons_st\ace_ags30_mag.p3d";
		displayName = "AGS-30 29rnd";
		ammo=RDS_G_30mm_HE;
		mass = 20;
	};
	class Mk19_cass_out: CA_Magazine
	{
		scope = 2;
		icon = "hmg_weapons_st\m_mk19_ca.paa";
		picture = "\hmg_weapons_st\m_mk19_ca";
		model = "hmg_weapons_st\mk19_box.p3d";
		displayName = "Mk-19 48rnd";
		ammo=RDS_G_30mm_HE;
		mass = 20;
	};
	class M2_cass_out: CA_Magazine
	{
		scope = 2;
		icon = "hmg_weapons_st\m_m2_ca.paa";
		picture = "\hmg_weapons_st\m_m2_ca";
		model = "hmg_weapons_st\m2_box.p3d";
		displayName = "M2 100rnd";
		ammo=RDS_G_30mm_HE;
		mass = 20;
	};

	class RDS_KORD_out: CA_Magazine
	{
		scope = 2;
		icon = "hmg_weapons_st\dshkm_co.paa";
		picture = "\hmg_weapons_st\dshkm_mg_ca";
		model = "hmg_weapons_st\ace_kord_mag.p3d";
		displayName = "KORD MAG";
		mass = 20;
	};
	class PG9_out: CA_Magazine
	{
		scope = 2;
		icon = "hmg_weapons_st\spg9_ca.paa";
		picture = "\hmg_weapons_st\spg9_ca";
		model = "hmg_weapons_st\pg9.p3d";
		displayName = "SPG PG9";
		mass = 20;
	};
	class OG9_out: CA_Magazine
	{
		scope = 2;
		icon = "hmg_weapons_st\spg9_ca.paa";
		picture = "\hmg_weapons_st\spg9_ca";
		model = "hmg_weapons_st\og9.p3d";
		displayName = "SPG OG9";
		mass = 20;
	};

	class HMG_Mine_82_out: CA_Magazine
	{
		scope = 2;
		icon = "hmg_weapons_st\podnos_2b14_ca.paa";
		picture = "\hmg_weapons_st\podnos_2b14_ca";
		model = "hmg_weapons_st\mort82mm_shell.p3d";
		displayName = "2b14 HE";
		mass = 100;
	};
	class HMG_Mine_81_out: CA_Magazine
	{
		scope = 2;
		icon = "hmg_weapons_st\mortar_m251_ca.paa";
		picture = "\hmg_weapons_st\mortar_m251_ca";
		model = "hmg_weapons_st\mort82mm_shell.p3d";
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
	class Launcher_Base_F;
	class MetisM1 : Launcher_Base_F {
		class AGM_Actions {
			class AGM_PackMetis {
				displayName = "Зарядить ТПК";
				condition = "(cursortarget iskindof 'MetisM1') && ((count magazines cursorTarget)<1)";
				statement = "[_player] call HMG_Static_fnc_HMG_PackMetis;";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			};
	};
};
class cfgVehicles {
	class Man;
	class CAManBase : Man {
		class AGM_SelfActions {
				class AGM_Equipment {
					class AGM_UNpackMetis {
						displayName = "Распаковать метис";
						condition = "(backpack _player) isKindOf 'RDS_Metis_Gun_Bag'";
						statement = "[_player] call HMG_Static_fnc_HMG_UnpackMetis;";
						showDisabled = 0;
						enableInside = 1;
						priority = 1;
						};
					class AGM_PackMetis {
						displayName = "Запаковать метис";
						condition = "SecondaryWeapon player == 'MetisM1'";
						statement = "[_player] call HMG_Static_fnc_HMG_PackMetis;";
						showDisabled = 0;
						enableInside = 1;
						priority = 1;
						};

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
	class StaticGrenadeLauncher:StaticWeapon {};
	class RDS_AGS_base: StaticGrenadeLauncher {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadStMag {
				displayName = "Зарядить";
				condition = "[_this select 0, 'RDS_29Rnd_30mm_AGS30_out', 1, 'RDS_AGS30'] call HMG_Static_fnc_CheckConditions";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadAGS;";
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
				displayName = "Зарядить";
				condition = "[_this select 0, 'RDS_KORD_out', 3] call HMG_Static_fnc_CheckConditions";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadKORD;";
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
				displayName = "Зарядить короб 50 х 12.7";
				condition = "[_this select 0, 'RDS_KORD_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "hint str _this; [_player] call HMG_Static_fnc_HMG_LoadKORD;";
				showDisabled = 0;
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
				displayName = "Зарядить короб 50 х 12.7";
				condition = "[_this select 0, 'RDS_KORD_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadKORD;";
				showDisabled = 0;
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
				displayName = "Зарядить ОФ мину";
				condition = "[_this select 0, 'HMG_Mine_82_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_player] call HMG_Static_fnc_HMG_Load82mm;";
				showDisabled = 0;
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
				displayName = "Load HE charge";
				condition = "[_this select 0, 'HMG_Mine_81_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_player] call HMG_Static_fnc_HMG_Load81mm;";
				showDisabled = 0;
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
	class StaticATWeapon:StaticWeapon {};
	class RDS_TOW_TriPod_base: StaticATWeapon {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadTOW {
				displayName = "Load TOW Missle";
				condition = "[_this select 0, 'TOW_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadTOW;";
				showDisabled = 0;
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
		class AGM_Actions : AGM_Actions {
			class AGM_LoadMetis {
				displayName = "Зарядить ТПК";
				condition = "[_this select 0, 'metis_9m131', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadMetis;";
				showDisabled = 0;
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
			class AGM_LoadMK2 {
				displayName = "Load M2 Cassete";
				condition = "[_this select 0, 'M2_cass_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadM2;";
				showDisabled = 0;
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
	class RDS_SPG9_base: StaticATWeapon {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadAGSPG {
				displayName = "Зарядить гранату ПГ-9";
				condition = "[_this select 0, 'PG9_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadSPG_PG;";
				showDisabled = 0;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			class AGM_LoadAGSOG {
				displayName = "Зарядить гранату ОГ-9";
				condition = "[_this select 0, 'OG9_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadSPG_OG;";
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
		class AGM_Actions : AGM_Actions {
			class AGM_LoadMK19 {
				displayName = "Load Mk19 Cassete";
				condition = "[_this select 0, 'Mk19_cass_out', 1] call HMG_Static_fnc_CheckConditions";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadMk19;";
				showDisabled = 0;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			};
			class Turrets: Turrets
			{
				class MainTurret: MainTurret
				{
					weapons[]={RHS_MK19_HMG};
					magazines[]={};
				};
			};



	};
	#include "vehicles.hpp"
	class hmg_ru_box_gren_base;
	class hmg_ru_box_static :hmg_ru_box_gren_base {
		displayName = "Ящик для стационаров";
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
		displayName = "ТПК Метис-М1 (2 выстрела)";
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
		displayName = "ТПК Метис-М1 (1 выстрел)";
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

