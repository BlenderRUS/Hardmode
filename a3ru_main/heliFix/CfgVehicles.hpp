class CfgVehicles {
	class B_Heli_Transport_01_F;	// External class reference
	class Hard_Heli_Transport_02_base_F : B_Heli_Transport_01_F {
		displayName = "UH-80 Ghost Hawk";
		scope = public;
		author = "Gollob";
		radarType = 0;
		vehicleClass = HARD_VEH_AIR;
	};
	class B_Heli_Light_01_armed_F;	// External class reference
	
	class Hard_Heli_Light_01_armed_F : B_Heli_Light_01_armed_F {
		scope = public;
		author = "Gollob";
		radarType = 0;
		vehicleClass = HARD_VEH_AIR;
	};
	class B_Heli_Light_01_F;	// External class reference
	
	class Hard_B_Heli_Light_01_F : B_Heli_Light_01_F {
		scope = public;
		author = "Gollob";
		radarType = 0;
		vehicleClass = HARD_VEH_AIR;
	};
	class O_Heli_Attack_02_F;	// External class reference
	class Hard_O_Heli_Attack_02_F : O_Heli_Attack_02_F {
		displayName = "Mi-48 Kajman";
		scope = public;
		author = "Gollob";
		vehicleClass = HARD_VEH_AIR;
		irScanRangeMax = 1;
		irScanRangeMin = 1;
		radarType = 2;
		irScanGround = 0;
		irScanToEyeFactor = 1;
		weapons[] = { "CMFlareLauncher", "rockets_Skyfire", "FakeWeapon"};
		magazines[] = {"38Rnd_80mm_rockets", "240Rnd_CMFlare_Chaff_Magazine"};		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				magazines[] = {"250Rnd_30mm_APDS_shells","250Rnd_30mm_HE_shells","8Rnd_Scalpel_D","4Rnd_IGLA"};
				weapons[] = {"gatling_30mm","Scalpel_D","missiles_igla"};
			};
		};
	};
	class Hard_O_Heli_Attack_02_black_F : O_Heli_Attack_02_F {
		displayName = "Mi-48 Kajman (Black)";
		scope = public;
		author = "Gollob";
		vehicleClass = HARD_VEH_AIR;
		irScanRangeMax = 1;
		irScanRangeMin = 1;
		radarType = 2;
		irScanGround = 0;
		irScanToEyeFactor = 1;
		weapons[] = { "CMFlareLauncher", "rockets_Skyfire", "FakeWeapon"};
		magazines[] = {"38Rnd_80mm_rockets", "240Rnd_CMFlare_Chaff_Magazine"};		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				magazines[] = {"250Rnd_30mm_APDS_shells","250Rnd_30mm_HE_shells","8Rnd_Scalpel_D","4Rnd_IGLA"};
				weapons[] = {"gatling_30mm","Scalpel_D","missiles_igla"};
			};
		};
	};

	class B_Heli_Attack_01_F;	// External class reference
	
	class Hard_B_Heli_Attack_01_F : B_Heli_Attack_01_F {
		displayName = "RAH-66 Comanche(CAS)";
		scope = public;
		author = "Gollob";
		vehicleClass = HARD_VEH_AIR;
		irScanRangeMax = 1;
		irScanRangeMin = 1;
		radarType = 4;
		irScanGround = 0;
		irScanToEyeFactor = 1;
		magazines[] = {"24Rnd_missiles", "240Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"missiles_DAR", "CMFlareLauncher", "FakeWeapon"};
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				magazines[] = {"500Rnd_20mm_shells", "4Rnd_Brimstone", "4Rnd_Brimstone", "Laserbatteries"};
				weapons[] = {"hard_gatling_20mm", "BrimstoneLauncher", "Laserdesignator_mounted"};
			};
		};
	};
	
	class Hard_AA_B_Heli_Attack_01_F : B_Heli_Attack_01_F {
		displayName = "RAH-66 Comanche(AA)";
		scope = public;
		author = "Gollob";
		vehicleClass = HARD_VEH_AIR;
		irScanRangeMax = 1;
		irScanRangeMin = 1;
		radarType = 4;
		irScanGround = 0;
		irScanToEyeFactor = 1;
		magazines[] = {"24Rnd_missiles", "240Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"missiles_DAR", "CMFlareLauncher", "FakeWeapon"};
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				magazines[] = {"500Rnd_20mm_shells", "4Rnd_AAA_missiles", "4Rnd_AAA_missiles", "Laserbatteries"};
				weapons[] = {"hard_gatling_20mm", "missiles_ASRAAM", "Laserdesignator_mounted"};
			};
		};
	};
	class O_Heli_Light_02_F;	// External class reference
	
	class Hard_O_Heli_Light_02_F : O_Heli_Light_02_F {
		displayName = "Ka-60 Kasatka";
		scope = public;
		author = "Gollob";
		vehicleClass = HARD_VEH_AIR;
		irScanRangeMax = 100;
		irScanRangeMin = 100;
		radarType = 0;
		allowTabLock = 0;
		irScanGround = false;
		irScanToEyeFactor = 1;
	};
	class Hard_DAR_O_Heli_Light_02_F : O_Heli_Light_02_F {
		displayName = "Ka-60 Kasatka DAR";
		scope = public;
		author = "Gollob";
		vehicleClass = HARD_VEH_AIR;
		irScanRangeMax = 100;
		irScanRangeMin = 100;
		radarType = 0;
		allowTabLock = 0;
		irScanGround = false;
		irScanToEyeFactor = 1;
		weapons[] = {"LMG_Minigun_heli","Rocket_03_AP_Plane_CAS_02_F","CMFlareLauncher"};
		magazines[] = {"2000Rnd_65x39_Belt_Tracer_Green","12Rnd_Rocket_03_AP_F","168Rnd_CMFlare_Chaff_Magazine"};
	};
	class O_Heli_Light_02_unarmed_F;	// External class reference
	
	class Hard_O_Heli_Light_02_unarmed_F : O_Heli_Light_02_unarmed_F {
		displayName = "Ka-60 Kasatka(Black)";
		scope = public;
		author = "Gollob";
		vehicleClass = HARD_VEH_AIR;
		irScanRangeMax = 1000;
		irScanRangeMin = 1000;
		radarType = 0;
		irScanGround = false;
		irScanToEyeFactor = 1;
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"CMFlareLauncher"};
	};
	class I_Heli_light_03_F;	// External class reference
	
	class Hard_I_Heli_light_03_F : I_Heli_light_03_F {
		displayName = "AW159 Wildcat";
		scope = public;
		author = "Gollob";
		vehicleClass = HARD_VEH_AIR;
		irScanRangeMax = 100;
		irScanRangeMin = 100;
		radarType = 0;
		irScanGround = false;
		irScanToEyeFactor = 1;
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"CMFlareLauncher"};

	};
	class I_Heli_light_03_unarmed_F;	// External class reference
	
	class Hard_I_Heli_light_03_unarmed_F : I_Heli_light_03_unarmed_F {
		displayName = "AW159 Wildcat(Green)";
		scope = public;
		author = "Gollob";
		vehicleClass = HARD_VEH_AIR;
		irScanRangeMax = 100;
		irScanRangeMin = 100;
		radarType = 0;
		irScanGround = false;
		irScanToEyeFactor = 1;
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"CMFlareLauncher"};
	};
	class I_Heli_Transport_02_F;	// External class reference
	
	class Hard_I_Heli_Transport_02_F : I_Heli_Transport_02_F {
		displayName = "AW101 Merlin";
		scope = public;
		author = "Gollob";
		vehicleClass = HARD_VEH_AIR;
		irScanRangeMax = 100;
		irScanRangeMin = 100;
		radarType = 0;
		irScanGround = false;
		irScanToEyeFactor = 1;
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"CMFlareLauncher"};

	};
	class Plane;	// External class reference
	
	class UAV : Plane {
		irScanRangeMax = 1;
		irScanRangeMin = 100;
		radarType = 0;
		irScanGround = false;
		irScanToEyeFactor = 1;
	};
	class Helicopter_Base_F;	// External class reference
	
	class UAV_01_base_F : Helicopter_Base_F {
		irScanRangeMax = 1;
		irScanRangeMin = 1;
		radarType = 0;
		irScanGround = false;
		irScanToEyeFactor = 1;
	};
};
