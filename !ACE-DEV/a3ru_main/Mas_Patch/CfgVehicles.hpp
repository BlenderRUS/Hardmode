#define MORTARTABLE(X_TABLE) transportMaxItems = 5; class transportItems { class _xx_##X_TABLE { name = #X_TABLE; count = 1; }; class _xx_AGM_Maptools { name = "AGM_Maptools"; count = 1;};};

class I_mas_DSHKM_base: StaticMGWeapon {
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[]=
			{													
				"rhs_mag_127x108mm_50",
				"rhs_mag_127x108mm_50",
				"rhs_mag_127x108mm_50",
				"rhs_mag_127x108mm_50"
			};
		};
	};
};

class I_mas_KORD_Base: StaticMGWeapon {
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[]=
			{
				"rhs_mag_127x108mm_50",
				"rhs_mag_127x108mm_50",
				"rhs_mag_127x108mm_50",
				"rhs_mag_127x108mm_50"
			};
		};
	};
};

/*
class RDS_M2StaticMG_base: StaticMGWeapon {
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			weapons[] = { "RHS_M2" };
			magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red"};
		};
	};
};
*/

// DISABLING M2 (REPLACED BY RHS)
class I_mas_M2StaticMG_base;
class I_mas_M2StaticMG_MiniTripod_base: I_mas_M2StaticMG_base { scope = 0; };
class I_mas_M2StaticMG_AAF: I_mas_M2StaticMG_base { scope = 0; };

class I_mas_M2StaticMG_MiniTripod_AAF: I_mas_M2StaticMG_MiniTripod_base { scope = 0; };
class B_mas_M2StaticMG_AAF: I_mas_M2StaticMG_AAF { scope = 0; };
class B_mas_M2StaticMG_MiniTripod_AAF: I_mas_M2StaticMG_MiniTripod_AAF { scope = 0; };

class I_mas_AGS_base: StaticGrenadeLauncher
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			minElev=-10;
			maxelev = 70.02;
			minTurn=-90;
			maxTurn=+90;
			initTurn=0;
			turretInfoType="AGM_Artillery_RscWeaponRangeArtilleryCustom";
			class ViewGunner
			{
				initAngleX=5; minAngleX=-30; maxAngleX=+30;
				initAngleY=0; minAngleY=-100; maxAngleY=+100;
				initFov=0.7; minFov=0.25; maxFov=1.1;
			};
			class ViewOptics : ViewOptics
			{
				initFov=0.250; minFov=0.250; maxFov=0.250; // FOV 28 deg
			};
		};
	};
	MORTARTABLE(a3ru_rangetable_ags);
};

// DISABLING Mk19 (REPLACED BY RHS)
class I_mas_MK19_TriPod_base;
class I_mas_MK19_TriPod_AAF: I_mas_MK19_TriPod_base { scope = 0; };
class B_mas_MK19_TriPod_AAF: I_mas_MK19_TriPod_AAF { scope = 0; };

class I_mas_TOW_TriPod_base: StaticATWeapon
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			weapons[] = {"A3ru_weap_TOW_launcher"};
			magazines[] =
			{
				"rhs_mag_1Rnd_TOW",
				"rhs_mag_1Rnd_TOW",
				"rhs_mag_1Rnd_TOW",
				"rhs_mag_1Rnd_TOW",
				"rhs_mag_1Rnd_TOW",
				"rhs_mag_1Rnd_TOW"
			};
		};
	};
};

class I_mas_Igla_AA_pod_Base : StaticAAWeapon
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			weapons[] = {"A3ru_weap_igla"};
			magazines[] =
			{
				"rhs_mag_9k38_rocket",
				"rhs_mag_9k38_rocket"
			};
		};
	};
};

class I_mas_2b14_82mm_Base: StaticMortar
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			gunnerForceOptics = 1;
			maxHorizontalRotSpeed = 0.1;
			maxVerticalRotSpeed = 0.1;
			turretInfoType = "AGM_Artillery_RscWeaponRangeArtilleryCustom";
			gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\Mas_Patch\2b14\scope";
			weapons[]=
			{
				"AGM_Artillery_81mm"
			};
			magazines[]=
			{
				"AGM_8Rnd_81mmShell_HE",
				"AGM_8Rnd_81mmShell_HE",
				"AGM_8Rnd_81mmShell_HE",
				"AGM_8Rnd_81mmShell_HE",
				"8Rnd_82mm_Mo_Smoke_white",
				"8Rnd_82mm_Mo_Flare_white"
			};
			elevationMode = 1;
			minCamElev = -24;
			maxCamElev = 31;
			minElev=-24;
			maxElev=31;
		};
	};
	artilleryScanner = 0;
	MORTARTABLE(a3ru_rangetable_2b14);
};
class I_mas_M252_base: I_mas_2b14_82mm_Base
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class ViewOptics;
			gunnerOpticsModel = "\mas_vehicle\2Dscope_D30";
			turretInfoType="AGM_Artillery_RscWeaponRangeArtilleryCustom";
			gunnerForceOptics = 1;
			maxHorizontalRotSpeed = 0.1;
			maxVerticalRotSpeed = 0.1;
			weapons[]=
			{
				"AGM_Artillery_81mm_252"
			};
			magazines[]=
			{
				"AGM_8Rnd_81mmShell_252_HE",
				"AGM_8Rnd_81mmShell_252_HE",
				"AGM_8Rnd_81mmShell_252_HE",
				"AGM_8Rnd_81mmShell_252_HE",					
				"8Rnd_82mm_Mo_Smoke_white","8Rnd_82mm_Mo_Flare_white"
			};
			elevationMode = 1;
			minCamElev = -24;
			maxCamElev = 31;
			minElev=-24;
			maxElev=31;
		};
	};
	artilleryScanner = 0;
	MORTARTABLE(a3ru_rangetable_m252);
};
class I_mas_D30_base: StaticCannon
{
	class AGM_Actions: AGM_Actions {
		class AGM_DragItem {
			displayName = "$STR_AGM_Drag_StartDrag";
			distance = 0;
			condition = "false";
			conditionShow = "false";
			statement = "false";
		};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			elevationMode = 1;
			turretInfoType="AGM_Artillery_RscWeaponRangeArtilleryCustom";
			magazines[] = {"mas_1Rnd_122mmHE_D30", "mas_1Rnd_122mmAT_D30"};
			//memoryPointGunnerOptics = "Usti hlavne";
			maxHorizontalRotSpeed = 0.1;
			maxVerticalRotSpeed = 0.1;
		};
	};
	artilleryScanner = 0;
	MORTARTABLE(a3ru_rangetable_d30he);
};
class I_mas_D30_AAF: I_mas_D30_base {};
class I_mas_D30_AT_AAF: I_mas_D30_AAF { scope = 0; };
class O_mas_D30_AT_AAF: I_mas_D30_AT_AAF { scope = 0; };

class I_mas_M119_base: I_mas_D30_base
{
	faction = "rhs_faction_usarmy_14";
	crew = "rhsusf_army_ocp_riflemanl";
	typicalCargo[] = {"rhsusf_army_ocp_riflemanl"};
	side = 1;
	class AGM_Actions: AGM_Actions {
		class AGM_DragItem {
			displayName = "$STR_AGM_Drag_StartDrag";
			distance = 0;
			condition = "false";
			conditionShow = "false";
			statement = "false";
		};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			minTurn = -11;
			maxTurn = +11;
			initTurn = 0;
			weapons[] = {"mas_M119"};
			magazines[] = {"mas_1Rnd_105mmHE_M119","mas_1Rnd_105mmWP_M119","mas_1Rnd_105mmLASER_M119","mas_1Rnd_105mmSMOKE_M119","mas_1Rnd_105mmILLUM_M119"};
		};
	};
	MORTARTABLE(a3ru_rangetable_m119);
};
class I_mas_M119A1: I_mas_M119_base {
	displayName = "M119A1";
	scope = 2;
	artilleryScanner = 0;
};
class I_mas_M119A3: I_mas_M119_base {
	displayName = "M119A3";
	scope = 2;
	artilleryScanner = 1;
};
class I_mas_M119_AAF: I_mas_M119_base { scope = 0; };
class B_mas_M119_AAF: I_mas_M119_AAF { scope = 0; };
class I_mas_M119_AT_AAF: I_mas_M119_AAF { scope = 0; };
class B_mas_M119_AT_AAF: I_mas_M119_AT_AAF { scope = 0; };

//#include "CfgBags.hpp"