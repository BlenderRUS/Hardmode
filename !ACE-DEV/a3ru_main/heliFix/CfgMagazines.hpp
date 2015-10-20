class CfgMagazines {
	class VehicleMagazine;	// External class reference
	class 8Rnd_LG_scalpel;	// External class reference
	class 6Rnd_Missile_AGM_02_F;	// External class reference
	class 4Rnd_Missile_AGM_01_F;	// External class reference
	class 20Rnd_Rocket_03_AP_F;
	class 4Rnd_AAA_missiles_MI02;
	class 300Rnd_20mm_shells;

	class 500Rnd_20mm_shells : 300Rnd_20mm_shells	{
		ammo = "B_20mm";
		count = 500;
	};
	class 2Rnd_Brimstone : 8Rnd_LG_scalpel {
		ammo = "M_Brimstone_AT";
		count = 2;
	};
		class 3Rnd_Brimstone : 2Rnd_Brimstone {
		count = 3;
	};
		class 4Rnd_Scalpel_L : 8Rnd_LG_scalpel {
		ammo = "Scalpel_L";
		count = 4;
	};
		class 3Rnd_Scalpel_L : 4Rnd_Scalpel_L {
		count = 3;
	};
			class 4Rnd_Scalpel_D : 8Rnd_LG_scalpel {
		ammo = "Scalpel_D";
		count = 4;
	};
		class 3Rnd_Scalpel_D : 4Rnd_Scalpel_D {
		count = 3;
	};
			class 8Rnd_Scalpel_D : 4Rnd_Scalpel_D {
		count = 8;
	};
	class 4Rnd_Brimstone : 2Rnd_Brimstone {
		count = 4;
	};
	
	class 3Rnd_AGM65L2 : 6Rnd_Missile_AGM_02_F {
		ammo = "Missile_AGM65L2";
		count = 3;
	};
	
	class 6Rnd_AGM65L2 : 3Rnd_AGM65L2 {
		count = 6;
	};
	
	class 3Rnd_AGM65E2 : 6Rnd_Missile_AGM_02_F {
		ammo = "Missile_AGM65E2";
		count = 3;
	};
	
	class 6Rnd_AGM65E2 : 3Rnd_AGM65L2 {
		count = 6;
	};
	
	class 3Rnd_AGM65H2 : 6Rnd_Missile_AGM_02_F {
		ammo = "Missile_AGM65H2";
		count = 3;
	};
	
	class 6Rnd_AGM65H2 : 3Rnd_AGM65H2 {
		ammo = "Missile_AGM65H2";
		count = 6;
	};
	
	class 3Rnd_AGM65D2 : 6Rnd_Missile_AGM_02_F {
		ammo = "Missile_AGM65D2";
		count = 3;
	};
	
	class 6Rnd_AGM65D2 : 3Rnd_AGM65D2 {
		ammo = "Missile_AGM65D2";
		count = 6;
	};
	class 12Rnd_Rocket_03_AP_F : 20Rnd_Rocket_03_AP_F {
		count = 12;
	};
	class 4Rnd_IGLA : 4Rnd_AAA_missiles_MI02 {
		ammo = "IGLA_9I39";
		count = 4;
	};
};
