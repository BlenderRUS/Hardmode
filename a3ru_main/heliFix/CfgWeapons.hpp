class CfgWeapons {
	class RocketPods;	// External class reference
	class Missile_AGM_02_Plane_CAS_01_F;	// External class reference
	class Missile_AGM_01_Plane_CAS_02_F;	// External class reference
	class missiles_SCALPEL;	// External class reference
	class Rocket_04_AP_Plane_CAS_01_F;
	class missiles_ASRAAM;
	class gatling_20mm;

	class hard_gatling_20mm : gatling_20mm {
		displayName = "XM-301";
		magazines[] = {"500Rnd_20mm_shells","1000Rnd_20mm_shells","2000Rnd_20mm_shells","300Rnd_20mm_shells"};

	};
	class missiles_igla : missiles_ASRAAM {
		holdsteranimvalue = 1;
		displayName = "IGLA B";
		magazines[] = {"4Rnd_IGLA"};
	};
	class BrimstoneLauncher : missiles_SCALPEL {
		holdsteranimvalue = 1;
		displayName = BRIMSTONE;
		magazines[] = {"4Rnd_Brimstone", "2Rnd_Brimstone", "3Rnd_Brimstone"};
	};
		class Scalpel_L : missiles_SCALPEL {
		holdsteranimvalue = 1;
		displayName = "Scalpel L";
		magazines[] = {"4Rnd_Scalpel_L", "3Rnd_Scalpel_L"};
	};
		class Scalpel_D : missiles_SCALPEL {
		holdsteranimvalue = 1;
		displayName = "Scalpel D";
		magazines[] = {"8Rnd_Scalpel_D", "4Rnd_Scalpel_D", "3Rnd_Scalpel_D"};
	};
	
	class AGM65E2Launcher : Missile_AGM_02_Plane_CAS_01_F {
		displayName = "AGM-65 Maverick E2";
		magazines[] = {"3Rnd_AGM65E2", "6Rnd_AGM65E2"};
	};
	
	class AGM65L2Launcher : Missile_AGM_02_Plane_CAS_01_F {
		displayName = "AGM-65 Maverick L2";
		magazines[] = {"3Rnd_AGM65L2", "6Rnd_AGM65L2"};
	};
	
	class AGM65D2Launcher : Missile_AGM_02_Plane_CAS_01_F {
		displayName = "AGM-65 Maverick D2";
		magazines[] = {"3Rnd_AGM65D2", "6Rnd_AGM65D2"};
	};
	
	class AGM65H2Launcher : Missile_AGM_02_Plane_CAS_01_F {
		displayName = "AGM-65 Maverick H2";
		magazines[] = {"3Rnd_AGM65H2", "6Rnd_AGM65H2"};
	};
		class Rocket_03_AP_Plane_CAS_02_F : Rocket_04_AP_Plane_CAS_01_F {
		magazines[] = {"12Rnd_Rocket_03_AP_F", "20Rnd_Rocket_03_AP_F"};
	};
};
