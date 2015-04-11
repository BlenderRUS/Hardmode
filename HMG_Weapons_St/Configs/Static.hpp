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

class RDS_D30_base: StaticCannon {
	class AGM_Actions : AGM_Actions {
		class AGM_LoadStMagHE {
			displayName = "$STR_HMG_Static_Load_D30_HE";
			condition = "[_this select 0, 'D30_he_out', 1] call HMG_Static_fnc_CheckConditions";
			statement = "[_this select 0, 'D30_he_out', 'RDS_30Rnd_122mmHE_D30', 20, 'STR_HMG_Static_Loading_D30_HE'] call HMG_Static_fnc_LoadStatic";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
			};
		class AGM_LoadStMagAT {
			displayName = "$STR_HMG_Static_Load_D30_AT";
			condition = "[_this select 0, 'D30_at_out', 1] call HMG_Static_fnc_CheckConditions";
			statement = "[_this select 0, 'D30_at_out', 'RDS_30Rnd_122mmAT_D30', 20, 'STR_HMG_Static_Loading_D30_AT'] call HMG_Static_fnc_LoadStatic";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
			};
	};
	class Turrets: Turrets	{
		class MainTurret: MainTurret {
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
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
		class AGM_LoadStMagWP {
			displayName = "$STR_HMG_Static_Load_M119_WP";
			condition = "[_this select 0, 'M119_wp_out', 1] call HMG_Static_fnc_CheckConditions";
			statement = "[_this select 0, 'M119_wp_out', 'RDS_30Rnd_105mmWP_M119', 20, 'STR_HMG_Static_Loading_M119_WP'] call HMG_Static_fnc_LoadStatic";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
		class AGM_LoadStMagLG {
			displayName = "$STR_HMG_Static_Load_M119_LG";
			condition = "[_this select 0, 'M119_laser_out', 1 ] call HMG_Static_fnc_CheckConditions";
			statement = "[_this select 0, 'M119_laser_out', 'RDS_30Rnd_105mmLASER_M119', 20, 'STR_HMG_Static_Loading_M119_LG'] call HMG_Static_fnc_LoadStatic";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
		class AGM_LoadStMagSM {
			displayName = "$STR_HMG_Static_Load_M119_SM";
			condition = "[_this select 0, 'M119_smoke_out', 1] call HMG_Static_fnc_CheckConditions";
			statement = "[_this select 0, 'M119_smoke_out', 'RDS_30Rnd_105mmSMOKE_M119', 20, 'STR_HMG_Static_Loading_M119_SM'] call HMG_Static_fnc_LoadStatic";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
		class AGM_LoadStMagIL {
			displayName = "$STR_HMG_Static_Load_M119_IL";
			condition = "[_this select 0, 'M119_illum_out', 1] call HMG_Static_fnc_CheckConditions";
			statement = "[_this select 0, 'M119_illum_out', 'RDS_30Rnd_105mmILLUM_M119', 20, 'STR_HMG_Static_Loading_M119_IL'] call HMG_Static_fnc_LoadStatic";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};

	};
	class Turrets: Turrets {
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
class RDS_KORD_Base: StaticMGWeapon {
	class AGM_Actions : AGM_Actions {
		class AGM_LoadStMag {
			displayName = "$STR_HMG_Static_Load";
			condition = "[_this select 0, 'RDS_KORD_out', 3] call HMG_Static_fnc_CheckConditions";
			statement = "[_this select 0, 'RDS_KORD_out', 'rhs_mag_127x108mm_50', 10, 'STR_HMG_Static_LoadingKORD'] call HMG_Static_fnc_LoadStatic";
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
class RDS_DSHKM_base: StaticMGWeapon {
	class AGM_Actions : AGM_Actions {
		class AGM_LoadStMag {
			displayName = "$STR_HMG_Static_Load50x127";
			condition = "[_this select 0, 'RDS_KORD_out', 1] call HMG_Static_fnc_CheckConditions";
			statement = "[_this select 0, 'RDS_KORD_out', 'rhs_mag_127x108mm_50', 10, 'STR_HMG_Static_LoadingDSHKM'] call HMG_Static_fnc_LoadStatic";
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
			displayName = "$STR_HMG_Static_Load50x127";
			condition = "[_this select 0, 'RDS_KORD_out', 1] call HMG_Static_fnc_CheckConditions";
			statement = "[_this select 0, 'RDS_KORD_out', 'rhs_mag_127x108mm_50', 10, 'STR_HMG_Static_LoadingKORD'] call HMG_Static_fnc_LoadStatic";
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
			displayName = "$STR_HMG_Static_LoadHECharge";
			condition = "[_this select 0, 'HMG_Mine_82_out', 1] call HMG_Static_fnc_CheckConditions";
			statement = "[_this select 0, 'HMG_Mine_82_out', 'AGM_8Rnd_81mmShell_HE', 7, 'STR_HMG_Static_LoadingHECharge'] call HMG_Static_fnc_LoadStatic";
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
			displayName = "$STR_HMG_Static_LoadHECharge";
			condition = "[_this select 0, 'HMG_Mine_81_out', 1] call HMG_Static_fnc_CheckConditions";
			statement = "[_this select 0, 'HMG_Mine_81_out', 'AGM_8Rnd_81mmShell_252_HE', 7, 'STR_HMG_Static_LoadingHECharge'] call HMG_Static_fnc_LoadStatic";
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
class RDS_TOW_TriPod_base: StaticATWeapon {
	class AGM_Actions: AGM_Actions {
		class AGM_LoadTOW {
			displayName = "$STR_HMG_Static_LoadTOW";
			condition = "[_this select 0, 'TOW_out', 1] call HMG_Static_fnc_CheckConditions";
			statement = "[_this select 0, 'TOW_out', 'rhs_mag_1Rnd_TOW', 20, 'STR_HMG_Static_LoadingTOW'] call HMG_Static_fnc_LoadStatic";
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
	class AGM_Actions: AGM_Actions {
		class AGM_LoadMetis {
			displayName = "$STR_HMG_Static_LoadMetis";
			condition = "[_this select 0, 'metis_9m131', 1] call HMG_Static_fnc_CheckConditions";
			statement = "[_this select 0, 'metis_9m131', 'metis_9m131', 15, 'STR_HMG_Static_LoadingMetis'] call HMG_Static_fnc_LoadStatic";
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
		class AGM_LoadM2 {
			displayName = "$STR_HMG_Static_LoadM2";
			condition = "[_this select 0, 'M2_cass_out', 1] call HMG_Static_fnc_CheckConditions";
			statement = "[_this select 0, 'M2_cass_out', 'rhs_mag_100rnd_127x99_mag_Tracer_Red', 10, 'STR_HMG_Static_LoadingM2'] call HMG_Static_fnc_LoadStatic";
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

class RDS_M2StaticMG_base: StaticMGWeapon {
	class AGM_Actions : AGM_Actions {
		class AGM_LoadM2 {
			displayName = "$STR_HMG_Static_LoadM2";
			condition = "[_this select 0, 'M2_cass_out', 1] call HMG_Static_fnc_CheckConditions";
			statement = "[_this select 0, 'M2_cass_out', 'rhs_mag_100rnd_127x99_mag_Tracer_Red', 10, 'STR_HMG_Static_LoadingM2'] call HMG_Static_fnc_LoadStatic";
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
			showDisabled = 0;
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
			weapons[] = { RHS_MK19_HMG };
			magazines[] = {};
		};
	};
};

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

class RDS_DShkM_TripodHigh_Bag: Weapon_Bag_Base
{
	mass=100;
	maximumLoad = 1500;		
};
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