﻿// config.bin - 17:18:47 11/20/14, generated in 0.00 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

class CfgPatches {
	class metis {
		units[] = {};
		weapons[] = {"MetisM1"};
		requiredVersion = 1.07;
		requiredAddons[] = {};
	};
};


class cfgWeapons {
	class Launcher_Base_F {
		class WeaponSlotsInfo;	// External class reference
		class GunParticles;	// External class reference
	};
	
	class MetisM1 : Launcher_Base_F {
		scope = 2;
		displayName = "9К115-2 Метис-М1";
		descriptionShort = "ПТРК 9К115-2 Метис-М1 с ТПВ 1ПН86БВИ Мулат-115";
		model = "\metis\sud_gw_metis.p3d";
		picture = "\metis\data\pic\metis_ca";
		handAnim[] = {"OFP2_ManSkeleton", "\metis\data\anim\Metis_new.rtm"};
		modelOptics = "\CUP\Weapons\CUP_Weapons_Metis_AT_13\CUP_2Dscope_Metis";
		weaponInfoType = "RscWeaponZeroing";
		shotPos = "muzzlePos2";
		shotEnd = "muzzleEnd2";
		
		magazines[] = {"metis_9m131"};
		sounds[] = {"StandardSound"};
		
		class BaseSoundModeType {
			weaponSoundEffect = "DefaultRifle";
		};
		
		class StandardSound : BaseSoundModeType {
			begin1[] = {"A3\Sounds_F\weapons\Launcher\rpg32", 1.99526, 1, 900};
			soundBegin[] = {"begin1", 1};
		};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final", 0.562341, 1, 50};
		soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1", 0.316228, 1.5, 700};
		recoil = "launcherBase";
		reloadTime=10.0;
		aiRateOfFire = 7.0;
		aiRateOfFireDistance = 800;
		minRange = 50;
		minRangeProbab = 0.3;
		midRange = 1300;
		midRangeProbab = 0.8;
		maxRange = 2200;
		maxRangeProbab = 0.1;
		canLock = 0;
		dexterity = 1;
		weaponLockDelay = 3.0;
		lockAcquire = 0;
		reloadAction = "ManActReloadAT";		
		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 250;
		};
		jsrs_soundeffect = "JSRS2_Distance_Effects_RPG";
		cameraDir = "";
		class OpticsModes {
			class StepScope {
				opticsID = 1;
				useModelOptics = 1;
				opticsZoomMin = 0.1138;
				opticsZoomMax = 0.1138;
				opticsZoomInit = 0.1138;
				distanceZoomMin = 300;
				distanceZoomMax = 1000;
				cameraDir = "eye";
				discreteDistance[] = {1000};
				discreteDistanceCameraPoint[] = {"OP_eye1"};
				discreteDistanceInitIndex = 0;
				memoryPointCamera = "eye";
				opticsFlare = 0;
				opticsDisablePeripherialVision = 1;
				visionMode[] = {"Normal","Ti"};
				thermalMode[] = {4};
				dexterity=1;
        		opticsPPEffects[] = {};
			};
		};

	        AGM_Bipod = 1;
	};
};
class cfgMagazines {
	class CA_LauncherMagazine;
	class metis_9m131 : CA_LauncherMagazine {
		scope = 2;
		displayName = "Выстрел для 9К115-2";
		displayNameShort = "9М131";
		ammo = "metis_9M115_PTUR";
		type = 6 * 		256;
		picture = "\metis\data\pic\9m115_ca";
		initSpeed = 40;
		maxLeadSpeed = 830;
		descriptionShort = "Выстрел 9М131 тандемный";
		mass = 200;
	};

};
class cfgAmmo {
	class MissileBase;
	class metis_9M115_PTUR : MissileBase {
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";
		hit = 1200;
		indirectHit = 30;
		indirectHitRange = 2;
		cost = 500;
		irLock = 0;
		airLock = 0;
		laserLock = 0;
		manualControl = 1;
		maxControlRange = 2000;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_1", 5.62341, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_2", 5.62341, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		initTime = 0.25;
		trackOversteer = 1;
		trackLead = 0.85;
		timeToLive = 12;
		maneuvrability = 8;
		simulationStep = 0.002;
		airFriction = 0.084;
		sideAirFriction = 0.05;
		maxSpeed = 200;
		thrustTime = 3;
		thrust = 130;
		fuseDistance = 50;
		effectsMissile = "missile2";
		whistleDist = 4;
		weaponLockSystem = 2 + 16;
		
		class CamShakeExplode {
			power = (55*0.2);
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = ((4 + 55^0.5)*8);
		};
		
		class CamShakeHit {
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		
		class CamShakeFire {
			power = (60^0.25);
			duration = "((round (60^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = ((60^0.5)*8);
		};
		
		class CamShakePlayerFire {
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};

};
class cfgVehicles
{
class B_AssaultPack_Base;

class rhs_assault_umbts;
class rhs_sidor;

class hmg_metis_ruck : B_AssaultPack_Base
{
	scope = 2;
	model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_rpg";
	picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_rpg_ca.paa";
	displayName = "ТПК Метис-М1 (2 выстрела)";
	hiddenSelectionsTextures[] = {};
	maximumLoad = 420;
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
	maximumLoad = 220;
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