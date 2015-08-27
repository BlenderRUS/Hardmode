class CfgVehicles {
	class Car;
	class Car_F: Car {
		class Sounds;
		class HitPoints {
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitBody;
		};
		class NewTurret;
		class Turrets {
			class MainTurret: NewTurret {
				class HitPoints;
			};
		};
		class ViewOptics;
		class ViewPilot;
	};
	class Wheeled_APC_F: Car_F {
		class Sounds: Sounds {
			class Engine;
			class Movement;
		};
		class AnimationSources;
		class EventHandlers;
	};

	// BRDM2
	class Cha_BRDM2_Base : Wheeled_APC_F {
		class ViewOptics
		{
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = "+30";
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = "+100";
			initFov = 0.455;
			minFov = 0.455;
			maxFov = 0.455;
			visionMode[] = {"Normal", NVG};
		};
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				weapons[] = {"rhs_weap_kpvt","rhs_weap_pkt_btr"};
				magazines[] = {"rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250"};
				gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pp61am";
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera3"};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.2;
					maxFov = 0.2;
					visionMode[] = {"Normal", NVG};
				};
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 1;
					minFov = 1;
					maxFov = 1;
				};
			};
		};
	};

	class Cha_BRDM2_ATGM_Base : Cha_BRDM2_Base {
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				magazines[] = {"rhs_mag_9m113_5", "rhs_mag_9m113_5", "rhs_mag_9m113_5"};
				gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_9sh119m1";
				gunnerForceOptics = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.07;
					maxFov = 0.2;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					visionMode[] = {"Normal", NVG};
				};
				class ViewGunner
				{
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/10";
					minFov = "0.7/10";
					maxFov = "1.7/10";
					visionMode[] = {"Normal", NVG};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_9sh119m1";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
			};
		};
	};

	// LAV-25
	class CUP_LAV25_Base: Wheeled_APC_F {
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F","B_crew_F","B_crew_F"};
		transportAmmo = 0;
		supplyRadius = 0;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				ace_fcs_Enabled = 1;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 2500;
				ace_fcs_DistanceInterval = 5;
				
                discreteDistance[] = {};
                discreteDistanceInitIndex = 0;
				weapons[] = {"a3ru_weap_m242_lav25", "a3ru_weap_m240_lav25"};
				magazines[] = {"a3ru_mag_210Rnd_25mm_M242_HEI", "a3ru_mag_210Rnd_25mm_M242_APFSDS", "rhs_mag_762x51_M240_1200"};
				class HitPoints {
					class HitTurret {
						armor = 1;
						minimalHit = 0.2;
						explosionShielding = 0.001;
					};
				};
				class Turrets {
					class CommanderOptics;
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel { explosionShielding = 1; };
			class HitLBWheel: HitLBWheel { explosionShielding = 1; };
			class HitLMWheel: HitLMWheel { explosionShielding = 1; };
			class HitLF2Wheel: HitLF2Wheel {explosionShielding = 1; };
			class HitRFWheel: HitRFWheel { explosionShielding = 1; };
			class HitRBWheel: HitRBWheel { explosionShielding = 1; };
			class HitRMWheel: HitRMWheel { explosionShielding = 1; };
			class HitRF2Wheel: HitRF2Wheel { explosionShielding = 1; };
		};
		class AnimationSources: AnimationSources {
			class recoil_source
			{
				weapon = "a3ru_weap_m242_lav25";
			};
			class muzzle_rot_CUP_M240_veh_W
			{
				weapon = "a3ru_weap_m240_lav25";
			};
			class muzzle_rot_CUP_M242_W
			{
				weapon = "a3ru_weap_m242_lav25";
			};
			class muzzle_hide_CUP_M242_W
			{
				weapon = "a3ru_weap_m242_lav25";
			};
		};
	};
	class CUP_B_LAV25_USMC: CUP_LAV25_Base {
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				weapon = "a3ru_weap_m242_lav25";
			};
		};
	};
	class CUP_B_LAV25M240_USMC: CUP_B_LAV25_USMC {
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				weapon = "a3ru_weap_m242_lav25";
			};
			class ReloadAnim
			{
				weapon = "a3ru_weap_m240_lav25_pintle_2";
			};
			class ReloadMagazine
			{
				weapon = "a3ru_weap_m240_lav25_pintle_2";
			};
			class Revolving
			{
				weapon = "a3ru_weap_m240_lav25_pintle_2";
			};
			class muzzle_rot_CUP_M240_veh3_W
			{
				weapon = "a3ru_weap_m240_lav25_pintle_2";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = {"a3ru_weap_m240_lav25_pintle_2","SmokeLauncher"};
						magazines[] = {"rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","SmokeLauncherMag"};
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor = 1.5;
						minimalHit = 0.2;
						explosionShielding = 0.001;
						material = -1;
						name = "otocvez";
						visual = "otocvez";
						passThrough = 1;
					};
				};
			};
		};
	};
	class CUP_B_LAV25_HQ_USMC: CUP_B_LAV25_USMC {
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"a3ru_weap_m240_lav25_pintle","SmokeLauncher"};
				magazines[] = {"rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","SmokeLauncherMag"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				weapon = "a3ru_weap_m240_lav25_pintle";
			};
			class ReloadMagazine
			{
				weapon = "a3ru_weap_m240_lav25_pintle";
			};
			class Revolving
			{
				weapon = "a3ru_weap_m240_lav25_pintle";
			};
			class muzzle_rot_CUP_M240_veh_W
			{
				weapon = "a3ru_weap_m240_lav25_pintle";
			};
		};
	};
};