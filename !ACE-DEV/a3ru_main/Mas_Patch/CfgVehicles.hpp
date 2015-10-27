#define MORTARTABLE(X_TABLE) transportMaxItems = 5; class transportItems { class _xx_##X_TABLE { name = #X_TABLE; count = 1; }; class _xx_ACE_Maptools { name = "ACE_Maptools"; count = 1;};};

#define X_TURRET(WEAPON1) class Turrets: Turrets { \
		class MainTurret: MainTurret { \
			weapons[] = {#WEAPON1}; \
			magazines[] = {}; \
		}; \
	}

#define X_TURRETMAG class Turrets: Turrets { \
		class MainTurret: MainTurret { \
			magazines[] = {}; \
		}; \
	}

class I_mas_ZU23_base: StaticCannon {};
class I_mas_GMG_base: StaticGrenadeLauncher {};
class I_mas_Metis_Base: StaticATWeapon {};
class I_mas_SPG9_base: StaticATWeapon {};
class I_mas_ZU23_AAF: I_mas_ZU23_base {
	vehicleClass = "Static";
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			weapons[] = {"RHS_weap_AZP23"};
			magazines[] = {};
		};
	};
};

class I_mas_DSHKM_base: StaticMGWeapon {
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			weapons[] = { "rhs_weap_dshkm" };
			magazines[] = {};
		};
	};
};

class I_mas_KORD_Base: StaticMGWeapon {
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			weapons[] = { "rhs_weap_dshkm" };
			magazines[] = {};
		};
	};
};

class I_mas_DSHKM_AAF: I_mas_DSHKM_base {
	vehicleClass = "Static";
};
class I_mas_DSHkM_Mini_TriPod: I_mas_DSHKM_base {
	vehicleClass = "Static";
};
class I_mas_KORD_AAF: I_mas_KORD_Base {
	vehicleClass = "Static";
};
class I_mas_KORD_high_AAF: I_mas_KORD_Base {
	vehicleClass = "Static";
};


// DISABLING M2 (REPLACED BY RHS)
class I_mas_M2StaticMG_base: StaticMGWeapon {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			weapons[] = {"A3RU_weap_M2"};
			magazines[] = {};
		};
	};
};
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
			magazines[] = {};
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

class I_mas_AGS_AAF: I_mas_AGS_base {
	vehicleClass = "Static";
};

class I_mas_GMG_AAF: I_mas_GMG_base {
	vehicleClass = "Static";
};

// DISABLING Mk19 (REPLACED BY RHS)
class I_mas_MK19_TriPod_base;
class I_mas_MK19_TriPod_AAF: I_mas_MK19_TriPod_base { scope = 0; };
class B_mas_MK19_TriPod_AAF: I_mas_MK19_TriPod_AAF { scope = 0; };

class I_mas_Metis_AAF: I_mas_Metis_Base {
	vehicleClass = "Static";
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
};

class I_mas_TOW_TriPod_base: StaticATWeapon
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			weapons[] = {"a3ru_weap_TOW_launcher"};
			magazines[] = {};
		};
	};
};

class I_mas_TOW_TriPod_AAF: I_mas_TOW_TriPod_base {
	vehicleClass = "Static";
};
class I_mas_SPG9_AAF: I_mas_SPG9_base {
	vehicleClass = "Static";
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
};

class I_mas_Igla_AA_pod_Base : StaticAAWeapon
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			weapons[] = {"a3ru_weap_igla"};
			magazines[] = {};
		};
	};
};

class I_mas_Igla_AA_pod_AAF: I_mas_Igla_AA_pod_Base {
	vehicleClass = "Static";
};
class I_mas_Stinger_AA_pod_Base: StaticAAWeapon {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			weapons[] = {"rhs_weap_stinger_Launcher"};
			magazines[] = {};
		};
	};
};
class I_mas_Stinger_AA_pod_AAF: I_mas_Stinger_AA_pod_Base {
	vehicleClass = "Static";
};

class I_mas_2b14_82mm_Base: StaticMortar
{
	model = "x\a3ru\addons\a3ru_main\Mas_Patch\Models\2b14\2b14";
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			cameraDir = "usti hlavne";
			memoryPointGunnerOptics = "gunnerview";
			gunnerForceOptics = 1;
			maxHorizontalRotSpeed = 0.1;
			maxVerticalRotSpeed = 0.1;
			turretInfoType = "AGM_Artillery_RscWeaponRangeArtilleryCustom";
			gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\Mas_Patch\2b14\scope";
			weapons[] = {"AGM_Artillery_81mm"};
			magazines[] = {};
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
			weapons[] = {"AGM_Artillery_81mm_252"};
			magazines[] = {};
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
class I_mas_M252_AAF: I_mas_M252_base {
	vehicleClass = "Static";
};

class I_mas_2b14_82mm_AAF: I_mas_2b14_82mm_Base {
	vehicleClass = "Static";
};

class I_mas_D30_base: StaticCannon
{
	ace_dragging_canCarry = 0;
	ace_dragging_canDrag = 0;
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			weapons[] = {"a3ru_weap_D30"};
			magazines[] = {};
			elevationMode = 1;
			turretInfoType="AGM_Artillery_RscWeaponRangeArtilleryCustom";
			maxHorizontalRotSpeed = 0.1;
			maxVerticalRotSpeed = 0.1;
		};
	};
	artilleryScanner = 0;
	MORTARTABLE(a3ru_rangetable_d30he);
};
class I_mas_D30_AAF: I_mas_D30_base {
	vehicleClass = "Static";
};
class I_mas_D30_AT_AAF: I_mas_D30_AAF { scope = 0; };
class O_mas_D30_AT_AAF: I_mas_D30_AT_AAF { scope = 0; };

class I_mas_M119_base: I_mas_D30_base
{
	faction = "rhs_faction_usarmy_wd";
	crew = "rhsusf_army_ocp_riflemanl";
	typicalCargo[] = {"rhsusf_army_ocp_riflemanl"};
	side = 1;
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			minTurn = -11;
			maxTurn = +11;
			initTurn = 0;
			weapons[] = {"a3ru_weap_M119"};
			magazines[] = {};
			turretInfoType="AGM_Artillery_RscWeaponRangeArtilleryCustom";
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

#include "CfgVehicles\hilux.hpp"
#include "CfgVehicles\hmmwv.hpp"
#include "CfgVehicles\lr.hpp"

//#include "CfgBags.hpp"