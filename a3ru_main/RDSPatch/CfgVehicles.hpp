class CfgVehicles {
	#define MORTARTABLE(X_TABLE) transportMaxItems = 5; class transportItems { class _xx_##X_TABLE { name = #X_TABLE; count = 1; }; class _xx_AGM_Maptools { name = "AGM_Maptools"; count = 1;};};

	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class MainTurret;
		class AGM_Actions;
	};
	class StaticMGWeapon: StaticWeapon {};
	class StaticATWeapon:StaticWeapon {};
	class StaticAAWeapon:StaticWeapon {};
	class StaticCannon: StaticWeapon {
		class ViewOptics;
	};

	class StaticGrenadeLauncher:StaticWeapon {class ViewOptics;};
	class StaticMortar:StaticWeapon {};

	class RDS_DSHKM_base: StaticMGWeapon {
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

	class RDS_KORD_Base: StaticMGWeapon {
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
	class RDS_M2StaticMG_base;
	class RDS_M2StaticMG_AAF: RDS_M2StaticMG_base { scope = 0; };
	class RDS_M2StaticMG_FIA: RDS_M2StaticMG_AAF { scope = 0; };
	class RDS_M2StaticMG_MiniTripod_base;
	class RDS_M2StaticMG_MiniTripod_AAF: RDS_M2StaticMG_MiniTripod_base { scope = 0; };
	class RDS_M2StaticMG_MiniTripod_FIA: RDS_M2StaticMG_MiniTripod_AAF { scope = 0; };

	class RDS_AGS_base: StaticGrenadeLauncher
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

	/*
	class RDS_MK19_TriPod_base: StaticGrenadeLauncher
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]={ "RHS_MK19" };
				magazines[]=
				{
					"RHS_48Rnd_40mm_MK19",
					"RHS_48Rnd_40mm_MK19",
					"RHS_48Rnd_40mm_MK19",
					"RHS_48Rnd_40mm_MK19"
				};
			};
		};
	};
	*/

	// DISABLING Mk19 (REPLACED BY RHS)
	class RDS_MK19_TriPod_base;
	class RDS_MK19_TriPod_AAF: RDS_MK19_TriPod_base { scope = 0; };
	class RDS_MK19_TriPod_FIA: RDS_MK19_TriPod_AAF { scope = 0; };

	class RDS_TOW_TriPod_base: StaticATWeapon
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

	class RDS_Igla_AA_pod_Base : StaticAAWeapon
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

	class RDS_2b14_82mm_Base: StaticMortar
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerForceOptics = 1;
				maxHorizontalRotSpeed = 0.1;
				maxVerticalRotSpeed = 0.1;
				turretInfoType = "AGM_Artillery_RscWeaponRangeArtilleryCustom";
				gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RDSPatch\2b14\scope";
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
	class RDS_M252_base: RDS_2b14_82mm_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				gunnerAction = "D30_Cargo";
				gunnerOpticsModel = "\RDS_StaticW\2Dscope_D30";
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
	class RDS_D30_base: StaticCannon
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
				gunnerOpticsModel = "\RDS_StaticW\2Dscope_D30";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				turretInfoType="AGM_Artillery_RscWeaponRangeArtilleryCustom";
				magazines[] = {"RDS_1Rnd_122mmHE_D30", "RDS_1Rnd_122mmAT_D30"};
				memoryPointGunnerOptics = "Usti hlavne";
				maxHorizontalRotSpeed = 0.1;
				maxVerticalRotSpeed = 0.1;
			};
		};
		MORTARTABLE(a3ru_rangetable_d30he);
	};
	class RDS_D30_AAF: RDS_D30_base {};
	class RDS_D30_AT_AAF: RDS_D30_AAF { scope = 0; };
	class RDS_D30_AT_FIA: RDS_D30_AT_AAF { scope = 0; };
	class RDS_D30_AT_CSAT: RDS_D30_AT_AAF { scope = 0; };

	class RDS_M119_base: RDS_D30_base
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
				weapons[] = {"RDS_M119"};
				magazines[] = {"RDS_1Rnd_105mmHE_M119","RDS_1Rnd_105mmWP_M119","RDS_1Rnd_105mmLASER_M119","RDS_1Rnd_105mmSMOKE_M119","RDS_1Rnd_105mmILLUM_M119"};
			};
		};
		MORTARTABLE(a3ru_rangetable_m119);
	};
	class RDS_M119A1: RDS_M119_base {
		displayName = "M119A1";
		scope = 2;
		artilleryScanner = 0;
	};
	class RDS_M119A3: RDS_M119_base {
		displayName = "M119A3";
		scope = 2;
		artilleryScanner = 1;
	};
	class RDS_M119_AAF: RDS_M119_base { scope = 0; };
	class RDS_M119_FIA: RDS_M119_AAF { scope = 0; };
	#include "CfgBags.hpp"
};