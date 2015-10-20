#define X_WHEELHP 				armor = 0.7; \
				minimalHit = 0.02; \
				explosionShielding = 4; \
				radius = 0.25; 

class CfgVehicles {
	class Land;	// External class reference
	
	class LandVehicle : Land {
		class HitPoints;	// External class reference
	};
	
	class car_F : LandVehicle {
		class ViewOptics;	// External class reference
		
		class HitPoints {
			class HitBody;	// External class reference
			class HitEngine;	// External class reference
			class HitFuel;	// External class reference
			class HitLFWheel;	// External class reference
			class HitLBWheel;	// External class reference
			class HitLMWheel;	// External class reference
			class HitLF2Wheel;	// External class reference
			class HitRFWheel;	// External class reference
			class HitRBWheel;	// External class reference
			class HitRMWheel;	// External class reference
			class HitRF2Wheel;	// External class reference
			class HitGlass1;	// External class reference
			class HitGlass2;	// External class reference
			class HitGlass3;	// External class reference
			class HitGlass4;	// External class reference
			class HitGlass5;	// External class reference
			class HitGlass6;	// External class reference
		};
		class NewTurret;	// External class reference
		
		class Turrets {
			class MainTurret : NewTurret {
				class HitPoints;	// External class reference
				class ViewGunner;	// External class reference
				class ViewOptics;	// External class reference
			};
		};
		class AnimationSources;	// External class reference
	};
	
	class Wheeled_APC : car_F {};
	
	class StrykerBase_DG1DES : Wheeled_APC {
		armor = 100;
		armorStructural = 2;
		radarType = 8; // No radar
		class HitPoints : HitPoints {
			class HitLFWheel : HitLFWheel {
				X_WHEELHP
			};
			
			class HitLBWheel : HitLBWheel {
				X_WHEELHP
			};
			class HitLMWheel: HitLMWheel
			{
				X_WHEELHP
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				X_WHEELHP
			};
			class HitRFWheel: HitRFWheel
			{
				X_WHEELHP
			};
			class HitRBWheel: HitRBWheel
			{
				X_WHEELHP
			};
			class HitRMWheel: HitRMWheel
			{
				X_WHEELHP
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				X_WHEELHP
			};
			class HitFuel
			{
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 1;
			};
			class HitEngine
			{
				armor = 2;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 1;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class HitPoints {
					class HitTurret {
						armor = 0.8;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 1;
					};
				};	
			};
		};
	};
	class M1126_ICV_BASE_DG1DES: StrykerBase_DG1DES
	{
		armor = 130;
		class Turrets: Turrets
		{
			class ObsTurret: NewTurret
			{
				class HitPoints {
					class HitTurret {
						armor = 0.4;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.14;
						explosionShielding = 0.001;
						radius = 0.08;
					};
					class HitGun {
						armor = 1.2;
						material = -1;
						name = "zbran";
						visual = "";
						passThrough = 0;
						minimalHit = 0.13;
						explosionShielding = 0.001;
						radius = 0.1;
					};
				};	
			};
		};
	};
	class M1126_ICV_M2_DG1_SLATDES: M1126_ICV_BASE_DG1DES
	{
		class Turrets: Turrets
		{
			class ObsTurret: ObsTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000,1100,1200,1300,1400,1500,1600,1700,1800,1900, 2000};
			};
		};
	};
	class M1126_ICV_M2_DG1_NOSLATDES: M1126_ICV_M2_DG1_SLATDES
	{
		class Turrets: Turrets
		{
			class ObsTurret: ObsTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000,1100,1200,1300,1400,1500,1600,1700,1800,1900, 2000};
			};
		};
	};
	class M1126_ICV_M2NEST_DG1_NOSLATDES: M1126_ICV_M2_DG1_NOSLATDES
	{
		class Turrets: Turrets
		{
			class ObsTurret: ObsTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
			};
		};
	};
	class M1126_ICV_M2NEST_DG1_SLATDES: M1126_ICV_M2_DG1_NOSLATDES
	{
		class Turrets: Turrets
		{
			class ObsTurret: ObsTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
			};
		};
	};
	class M1126_ICV_mk19_DG1_SLATDES: M1126_ICV_BASE_DG1DES
	{
		class Turrets : Turrets {
			class ObsTurret : ObsTurret {
				weapons[] = {"RHS_MK19", "SmokeLauncher"};
				magazines[] = {"RHS_48Rnd_40mm_MK19", "RHS_48Rnd_40mm_MK19", "RHS_48Rnd_40mm_MK19", "RHS_48Rnd_40mm_MK19", "RHS_48Rnd_40mm_MK19", "SmokeLauncherMag"};
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
			};
		};
	};
	class M1126_ICV_mk19_DG1_NOSLATDES : M1126_ICV_mk19_DG1_SLATDES {
		class Turrets : Turrets {
			class ObsTurret : ObsTurret {
				weapons[] = {"RHS_MK19", "SmokeLauncher"};
				magazines[] = {"RHS_48Rnd_40mm_MK19", "RHS_48Rnd_40mm_MK19", "RHS_48Rnd_40mm_MK19", "RHS_48Rnd_40mm_MK19", "RHS_48Rnd_40mm_MK19", "SmokeLauncherMag"};
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
			};
		};
	};
	class M1129_MC_DG1_SLATDES: M1126_ICV_mk19_DG1_SLATDES
	{
		scope = 1;
	};
	class M1129_MC_DG1_NOSLATDES: M1129_MC_DG1_SLATDES
	{
		scope = 1;
	};
	class M1135_ATGMV_DG1_SLATDES : StrykerBase_DG1DES {
		armor = 120;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"Rhs_weap_TOW_Launcher", "SmokeLauncher"};
				magazines[] = {"rhs_mag_2Rnd_TOW","rhs_mag_2Rnd_TOW","rhs_mag_2Rnd_TOW","SmokeLauncherMag"};
			};
		};
	};
	class M1135_ATGMV_DG1_NOSLATDES: M1135_ATGMV_DG1_SLATDES
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"Rhs_weap_TOW_Launcher", "SmokeLauncher"};
				magazines[] = {"rhs_mag_2Rnd_TOW","rhs_mag_2Rnd_TOW","rhs_mag_2Rnd_TOW","SmokeLauncherMag"};
			};
		};
	};
	class M1128_MGS_DG1_SLATDES : StrykerBase_DG1DES {
		armor = 120;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"a3ru_weap_m68a1e4","HMG_M2","SmokeLauncher"};
				magazines[] = {"a3ru_mag_10Rnd_105mm_APFSDS_T_Red","a3ru_mag_8Rnd_105mm_HEAT_MP_T_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","SmokeLauncherMag"};
				turretInfoType = "RHS_RscWeaponM1_FCS";
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = "+30";
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = "+100";
						initFov = "0.7/3";
						minFov = 0.3;
						maxFov = 0.3;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {2,3};
						gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A1";
						gunnerOpticsEffect[] = {};
					};
					class Medium: Wide
					{
						gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A1_2";
						initFov = "0.7/10";
						minFov = 0.07;
						maxFov = 0.07;
					};
				};
			};
		};
	};
	class M1128_MGS_DG1_NOSLATDES: M1128_MGS_DG1_SLATDES
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"a3ru_weap_m68a1e4","HMG_M2","SmokeLauncher"};
				magazines[] = {"a3ru_mag_10Rnd_105mm_APFSDS_T_Red","a3ru_mag_8Rnd_105mm_HEAT_MP_T_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","SmokeLauncherMag"};
				turretInfoType = "RHS_RscWeaponM1_FCS";
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = "+30";
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = "+100";
						initFov = "0.7/3";
						minFov = 0.3;
						maxFov = 0.3;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {2,3};
						gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A1";
						gunnerOpticsEffect[] = {};
					};
					class Medium: Wide
					{
						gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A1_2";
						initFov = "0.7/10";
						minFov = 0.07;
						maxFov = 0.07;
					};
				};
			};
		};
	};
	class M1133_MEV_DG1_SLATDES : StrykerBase_DG1DES {
		armor = 120;
	};
	class M1126_ICV_BASE_DG1WOOD : StrykerBase_DG1DES {
		armor = 120;
		class Turrets: Turrets
		{
			class ObsTurret: NewTurret {};
		};
	};
	class M1126_ICV_M2_DG1_SLATWOOD: M1126_ICV_BASE_DG1WOOD
	{
		class Turrets: Turrets
		{
			class ObsTurret: ObsTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000,1100,1200,1300,1400,1500,1600,1700,1800,1900, 2000};
			};
		};
	};
	class M1126_ICV_M2_DG1_NOSLATWOOD: M1126_ICV_M2_DG1_SLATWOOD
	{
		class Turrets: Turrets
		{
			class ObsTurret: ObsTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000,1100,1200,1300,1400,1500,1600,1700,1800,1900, 2000};
			};
		};
	};
	class M1126_ICV_M2NEST_DG1_NOSLATWOOD : M1126_ICV_M2_DG1_NOSLATWOOD {
		class Turrets: Turrets
		{
			class ObsTurret: ObsTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
			};
		};
	};
	class M1126_ICV_M2NEST_DG1_SLATWOOD: M1126_ICV_M2_DG1_NOSLATWOOD
	{
		armor = 120;
		class Turrets : Turrets {
			class ObsTurret : ObsTurret {
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
			};
		};
	};
	class M1126_ICV_mk19_DG1_SLATWOOD: M1126_ICV_BASE_DG1WOOD
	{
		class Turrets: Turrets
		{
			class ObsTurret: ObsTurret
			{
				weapons[] = {"RHS_MK19", "SmokeLauncher"};
				magazines[] = {"RHS_48Rnd_40mm_MK19", "RHS_48Rnd_40mm_MK19", "RHS_48Rnd_40mm_MK19", "RHS_48Rnd_40mm_MK19", "RHS_48Rnd_40mm_MK19", "SmokeLauncherMag"};
				discreteDistance[] = {100, 200, 300, 400, 500, 600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100};
			};
		};
	};
	class M1126_ICV_mk19_DG1_NOSLATWOOD: M1126_ICV_mk19_DG1_SLATWOOD
	{
		class Turrets: Turrets
		{
			class ObsTurret: ObsTurret
			{
				weapons[] = {"RHS_MK19", "SmokeLauncher"};
				magazines[] = {"RHS_48Rnd_40mm_MK19", "RHS_48Rnd_40mm_MK19", "RHS_48Rnd_40mm_MK19", "RHS_48Rnd_40mm_MK19", "RHS_48Rnd_40mm_MK19", "SmokeLauncherMag"};
				discreteDistance[] = {100, 200, 300, 400, 500, 600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100};
			};
		};
	};
	class M1135_ATGMV_DG1_SLATWOOD : StrykerBase_DG1DES
	{
		armor = 120;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"Rhs_weap_TOW_Launcher", "SmokeLauncher"};
				magazines[] = {"rhs_mag_2Rnd_TOW","rhs_mag_2Rnd_TOW","rhs_mag_2Rnd_TOW","SmokeLauncherMag"};
			};
		};
	};
	class M1135_ATGMV_DG1_NOSLATWOOD: M1135_ATGMV_DG1_SLATWOOD
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"Rhs_weap_TOW_Launcher", "SmokeLauncher"};
				magazines[] = {"rhs_mag_2Rnd_TOW","rhs_mag_2Rnd_TOW","rhs_mag_2Rnd_TOW","SmokeLauncherMag"};
			};
		};
	};
	class M1128_MGS_DG1_SLATWOOD: StrykerBase_DG1DES
	{
		armor = 120;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"a3ru_weap_m68a1e4","HMG_M2","SmokeLauncher"};
				magazines[] = {"a3ru_mag_10Rnd_105mm_APFSDS_T_Red","a3ru_mag_8Rnd_105mm_HEAT_MP_T_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","SmokeLauncherMag"};
				turretInfoType = "RHS_RscWeaponM1_FCS";
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = "+30";
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = "+100";
						initFov = "0.7/3";
						minFov = 0.3;
						maxFov = 0.3;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {2,3};
						gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A1";
						gunnerOpticsEffect[] = {};
					};
					class Medium: Wide
					{
						gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A1_2";
						initFov = "0.7/10";
						minFov = 0.07;
						maxFov = 0.07;
					};
				};
			};
		};
	};
	class M1128_MGS_DG1_NOSLATWOOD: M1128_MGS_DG1_SLATWOOD
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"a3ru_weap_m68a1e4","HMG_M2","SmokeLauncher"};
				magazines[] = {"a3ru_mag_10Rnd_105mm_APFSDS_T_Red","a3ru_mag_8Rnd_105mm_HEAT_MP_T_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","SmokeLauncherMag"};
				turretInfoType = "RHS_RscWeaponM1_FCS";
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = "+30";
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = "+100";
						initFov = "0.7/3";
						minFov = 0.3;
						maxFov = 0.3;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {2,3};
						gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A1";
						gunnerOpticsEffect[] = {};
					};
					class Medium: Wide
					{
						gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A1_2";
						initFov = "0.7/10";
						minFov = 0.07;
						maxFov = 0.07;
					};
				};
			};
		};
	};
	class M1133_MEV_DG1_SLATWOOD : StrykerBase_DG1DES
	{
		armor = 120;
	};
};