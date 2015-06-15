class CfgPatches {
	class HMG_BRM_PSNR {
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"VTN_FARA_PV_CF","vtn_fara_pv_md", "vtn_fara_pv_tx"};
	};
};

class cfgVehicles
{
	
	class rhs_brm1k_base;
	class rhs_brm1k_FARA : rhs_brm1k_base {
		scope = 2;
		model = "\rhsafrf\addons\rhs_bmp\BRM1K.p3d";
		picture = "\rhsafrf\addons\rhs_bmp\icons\brm1k_i_ca.paa";
		Icon = "\rhsafrf\addons\rhs_bmp\icons\icomap_brm1k_CA.paa";
		author = $STR_RHS_AUTHOR_FULL;
		displayName = "BRM1K-FARA";
		crew = "rhs_vdv_crew";
		armor = 160;
		cost = 10000;
		transportSoldier = 0;
		
		class Library {
			libTextDesc = "Reconnaissance vehicle, based on BMP-1. Weight: 13,3t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 23mm front, 26-33mm mantlet, 19mm sides, 13mm rear Hull:  7-19mm front, 16-18mm sides, 16mm rear Primary armament: 73 mm 2A28 Grom low-pressure smoothbore gun  (20 rounds) penetration: PG-15V HEAT 350mm RHA, Secondary armament: 7.62 mm PKT coaxial general purpose machine gun (2000 rounds)";
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				minElev = -4;
				maxElev = 15;
				initElev = 0;
				startEngine = 0;
				stabilizedInAxes = "StabilizedInAxesNone";
				weapons[] = {"rhs_weap_2a28", "rhs_weap_pkt", "rhs_weap_902a"};
				magazines[] = {"rhs_mag_pg15v_20", "rhs_mag_762x54mm_250", "rhs_mag_762x54mm_250", "rhs_mag_762x54mm_250", "rhs_mag_762x54mm_250", "rhs_mag_762x54mm_250", "rhs_mag_762x54mm_250", "rhs_mag_762x54mm_250", "rhs_mag_762x54mm_250", "rhs_mag_3d17_6"};
				maxHorizontalRotSpeed = 0.54;
				maxVerticalRotSpeed = 0.24;
				gunnerAction = "rhs_bmp2_gunner";
				gunnerInAction = "rhs_bmp2_gunnerIn";
				turretInfoType = "RscWeaponZeroing";
				
				class HitPoints {
					class HitTurret {
						armor = 0.5;
						material = -1;
						name = "vez";
						visual = "MainTurret";
						passThrough = 0;
						minimalHit = 0.14;
						explosionShielding = 0.001;
						radius = 0.25;
					};
					
					class HitGun {
						armor = 0.6;
						material = -1;
						name = "zbran";
						visual = "MainGun";
						passThrough = 0;
						minimalHit = 0.13;
						explosionShielding = 0.001;
						radius = 0.25;
					};
				};
				gunBeg = "Gun_start";
				gunEnd = "Gun_end";
				body = "RHS_BMP1_MainTurret";
				gun = "RHS_BMP1_MainGun";
				
				class OpticsIn {
					class pn22m1 {
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = +110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = +110;
						opticsZoomMin = 0.14;
						opticsZoomMax = 0.14;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.14;
						minFov = 0.14;
						maxFov = 0.14;
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pn22m1";
						gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
					};
					
					class pn22m1n {
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = +110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = +110;
						opticsZoomMin = 0.14;
						opticsZoomMax = 0.14;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.14;
						minFov = 0.14;
						maxFov = 0.14;
						visionMode[] = {NVG};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pn22m1n";
						gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
					};
				};
				
				class Reflectors {};
				
				class Turrets : Turrets {
					class CommanderOptics : CommanderOptics {
						gunnerDoor = "hatchC";
						gunnerName = $STR_POSITION_COMMANDER;
						body = "RHS_BMP1_com_coppula_BMP2";
						gun = RHS_BMP1_OU3_BMP2;
						gunnerOutForceOptics = 0;
						gunnerForceoptics = 1;
						weapons[] = {};
						magazines[] = {};
						animationSourceHatch = "HatchCommander_BMP2";
						animationSourceBody = "obsturret_BMP2";
						animationSourceGun = "obsGun_BMP2";
						memoryPointGunnerOptics = "commanderview";
						memoryPointGunnerOutOptics = "commander_out_view";
						nightVision = 1;
						proxyType = "CPCommander";
						proxyIndex = 1;
						lockWhenDriverOut = 0;
						primaryGunner = 0;
						primaryObserver = 1;
						hasCommander = 1;
						gunBeg = "Mgun_end";
						gunEnd = "Mgun_start";
						gunnerAction = "rhs_bmp2_commander";
						gunnerInAction = "rhs_bmp2_commanderin";
						stabilizedInAxes = "StabilizedInAxesBoth";
						minElev = -4;
						maxElev = 12;
						initElev = 0;
						minTurn = -135;
						maxTurn = 135;
						initTurn = 0;
						gunnerOutOpticsModel = "";
						turretInfoType = "rhs_gui_optic_1d13";
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1d13.p3d";
						soundServo[] = {};
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						startEngine = 0;
						
						class Reflectors {
							class TurretLight {
								color[] = {1200, 900, 650};
								ambient[] = {5, 5, 5};
								position = "G svetlo";
								direction = "konec G svetla";
								hitpoint = "G svetlo";
								selection = "G svetlo";
								size = 1;
								innerAngle = 20;
								outerAngle = 80;
								coneFadeCoef = 8;
								intensity = 1;
								useFlare = 1;
								dayLight = 0;
								flareSize = 1.0;
								
								class Attenuation {
									start = 1.0;
									constant = 0;
									linear = 0;
									quadratic = 0.25;
									hardLimitStart = 200;
									hardLimitEnd = 300;
								};
							};
						};
						aggregateReflectors[] = {{"TurretLight"}};
						armorLights = 0.1;
					};
				};
			};
			
			class NavTurret : NewTurret {
				class ViewGunner;	// External class reference
				gunnerName = $STR_RHS_NAVIGATOR;
				body = "RHS_BMP1_Nav_p";
				gun = "";
				gunnerOutForceOptics = 0;
				gunnerForceoptics = 1;
				weapons[] = {"VTN_SVCH"};
				magazines[] = {};
				animationSourceHatch = "Hatch_nav";
				animationSourceBody = "s_nav_p";
				animationSourceGun = "s_nav_p_vert";
				memoryPointGunnerOptics = "view_nav";
				memoryPointGunnerOutOptics = "";
				nightVision = 1;
				proxyType = "CPGunner";
				proxyIndex = 2;
				lockWhenDriverOut = 0;
				primaryGunner = 0;
				primaryObserver = 0;
				hasCommander = 1;
				gunBeg = "Mgun_end";
				gunEnd = "Mgun_start";
				gunnerAction = "rhs_bmp1_commander";
				gunnerInAction = "rhs_brmk1_commanderin";
				stabilizedInAxes = "StabilizedInAxesNone";
				minElev = -4;
				maxElev = 12;
				initElev = 0;
				minTurn = -85;
				maxTurn = 85;
				initTurn = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpp220a";
				gunnerOpticsColor[] = {1, 1, 1, 1};
				gunnerOpticsEffect[] = {"TankGunnerOptics1", "WeaponsOptics", "OpticsCHAbera3"};
				
				class ViewOptics {
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					opticsZoomMin = 0.166666;
					opticsZoomMax = 0.166666;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = 0.166666;
					minFov = 0.166666;
					maxFov = 0.166666;
				};
				soundServo[] = {};
				outGunnerMayFire = 0;
				inGunnerMayFire = 1;
				startEngine = 0;
			};
			
			class LeftBack : NewTurret {
				body = "lseat_turret";
				gun = "lseat_gun";
				animationSourceBody = "lseat_Turret";
				animationSourceGun = "lseat_Gun";
				animationSourceHatch = "";
				selectionFireAnim = "";
				minElev = 0;
				maxElev = 0;
				initTurn = 120;
				minTurn = 120;
				maxTurn = 120;
				maxHorizontalRotSpeed = 0;
				maxVerticalRotSpeed = 0;
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "$STR_CargoBackLeft";
				commanding = 3;
				gunBeg = "";
				gunEnd = "";
				memoryPointGun = "";
				memoryPointGunnerOptics = "lseat_view";
				gunnerAction = "";
				gunnerInAction = "rhs_BMP2_Gunnerin";
				weapons[] = {};
				magazines[] = {};
				forceHideGunner = 1;
				hasGunner = 0;
				primaryGunner = 0;
				primaryObserver = 0;
				gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
				gunnerOpticsColor[] = {1, 1, 1, 1};
				gunnerForceOptics = 1;
				startEngine = 0;
				
				class ViewOptics {
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = 110;
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = 110;
					opticsZoomMin = 0.7;
					opticsZoomMax = 0.7;
					distanceZoomMin = 20;
					distanceZoomMax = 2000;
					initFov = 0.7;
					minFov = 0.7;
					maxFov = 0.7;
				};
			};
			
			class RightBack : LeftBack {
				body = "rseat_turret";
				gun = "rseat_gun";
				animationSourceBody = "rseat_Turret";
				animationSourceGun = "rseat_Gun";
				initTurn = -120;
				minTurn = -120;
				maxTurn = -120;
				gunnerName = "$STR_CargoBackRight";
				memoryPointGunnerOptics = "rseat_view";
				hasGunner = 0;
				commanding = 2;
			};
		};
		
		class AnimationSources : AnimationSources {
			class PSzNR_5_s {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class ukaz_radar {
				source = "user";
				selection = "mainTurret";
				animPeriod = 2;
			};
		};
		
		class UserActions : UserActions {
			class VTN_Fara_action_start {
				displayName = "Fara turn ON";
				position = "osa_radar";
				showwindow = 0;
				radius = 5;
				onlyForPlayer = "true";
				condition = "(player in this) and (alive this) and !(this getvariable [""VTN_Fara_activated"", false])";
				statement = "if (!isnil 'vtn_fara_radar_start_spawn_id') then {terminate vtn_fara_radar_start_spawn_id}; vtn_fara_radar_start_spawn_id = this spawn fnc_vtn_fara_radar_start; this setvariable ['VTN_Fara_activated', true];";
			};
			
			class VTN_Fara_action_stop : VTN_Fara_action_start {
				displayName = "Fara turn OFF";
				condition = "(player in this) and (alive this) and (this getvariable [""VTN_Fara_activated"", false])";
				statement = "if (!isnil 'vtn_fara_radar_start_spawn_id') then {terminate vtn_fara_radar_start_spawn_id}; [] call fnc_vtn_fara_radar_GC; this setvariable ['VTN_Fara_activated', false];";
			};
			
			class VTN_Fara_action_settings : VTN_Fara_action_start {
				displayName = "Fara Settings";
				condition = "(player in this) and (alive this) and (this getvariable [""VTN_Fara_activated"", false])";
				statement = "createdialog 'VTN_fara_dialog';";
			};			
			class PSzNR_1 {
				displayName = $STR_RHS_PSNR5RADARON_NAME;
				position = "MainTurret";
				onlyforplayer = 0;
				radius = 3.5;
				condition = "(this animationPhase 'RHS_BMP1_PSzNR_5' == 0)";
				statement = "this animate ['RHS_BMP1_PSzNR_5',1]; this animate ['RHS_BMP1_PSzNR_cover',1]; this animate ['RHS_BMP1_PSzNR5_antenna',1]";
			};
			
			class PSzNR_2 {
				displayName = $STR_RHS_PSNR5RADAROFF_NAME;
				position = "MainTurret";
				onlyforplayer = 0;
				radius = 3.5;
				condition = "(this animationPhase 'RHS_BMP1_PSzNR_5' == 1)";
				statement = "this animate ['RHS_BMP1_PSzNR_5',0]; this animate ['RHS_BMP1_PSzNR_cover',0]; this animate ['RHS_BMP1_PSzNR5_antenna',0]";
			};
		};
		smokeLauncherGrenadeCount = 3;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 60;
	};
};