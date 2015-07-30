class CfgPatches
{
	class cha_brdm2_fix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "Cha_BRDM2", "rhs_c_heavyweapons", "rhs_optics" };
		version = "0.2";
		versionStr = "0.2";
		versionAr[] = {0, 2};
		author[] = {"Blender", "Lolkij"};
		authorUrl = "http://www.arma3.ru";
		description = "RHS Skalpel ammo, reload time, RHS optics";
	};
};

class CfgWeapons {
	class Missiles_Scalpel;	
	class Cha_BRDM2_AT5_Launcher : Missiles_Scalpel {
		canlock = 0;
		magazines[] = {"Cha_BRDM2_5Rnd_At5", "rhs_mag_9m113_5"};
		displayname = "9M113 Konkurs";
		magazineReloadTime = 300;
	};
};

class CfgMagazines {
	class rhs_mag_9m113_4;
	class rhs_mag_9m113_5: rhs_mag_9m113_4
	{
		count = 5;
	};
};

class CfgVehicles {
	class Car;
	class Car_F : Car {
		class NewTurret;
		class Turrets {
			class MainTurret : NewTurret {
				class HitPoints;
			};
		};
		class ViewPilot;
	};

	class Wheeled_APC_F : Car_F {};
	
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
};