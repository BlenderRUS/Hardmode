
	//VDV Recon Infantry - Added by Stagler - PLACEHOLDERS AWAITING PROPER UNIFORM AND EQUIPMENT
	
	class rhs_vdv_recon_sergeant : rhs_vdv_rifleman
	{
		_generalMacro = "rhs_vdv_recon_sergeant";
		Author_Macro
		displayName= "$STR_RHS_INF_SERGEANT";
		scope = 0;
		textSingular = "$STR_A3_nameSound_veh_infantry_SF_s"; // COPIED FROM A3 SF VALUES
		textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
		nameSound = "veh_infantry_SF_s";
		vehicleClass = "rhs_vehclass_infantry_recon";
		camouflage = 0.6;	// how dificult to spot - bigger - better spotable
		sensitivity = 3.5;	// sensor sensitivity
		detectSkill = 30;
		
		weapons[] = {
		"rhs_weap_ak74m_gp25",
		"Throw",
		"Put",
		"Rangefinder"
		};
		
		respawnWeapons[] = {
		"rhs_weap_ak74m_gp25",
		"Throw",
		"Put",
		"Rangefinder"
		};
		
		linkedItems[] = {
		"rhs_vydra_3m",
		"rhs_Booniehat_digi",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio", 
		"ItemGPS", 
		"NVGoggles_INDEP"
		
		};
		magazines[] = {
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_mag_rgd5", 
		"rhs_mag_rgd5", 
		"SmokeShell", 
		"SmokeShellGreen", 
		"Chemlight_green", 
		"Chemlight_green",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"O_IR_Grenade"
		};
		
		respawnLinkedItems[] = {
		"rhs_vydra_3m",
		"rhs_Booniehat_digi",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio", 
		"ItemGPS", 
		"NVGoggles_INDEP"
		};
		
		respawnMagazines[] = {
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_mag_rgd5", 
		"rhs_mag_rgd5", 
		"SmokeShell", 
		"SmokeShellGreen", 
		"Chemlight_green", 
		"Chemlight_green",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"O_IR_Grenade"
		};
		
		backpack="rhs_assault_umbts";
		
	};
	
	class rhs_vdv_recon_engineer : rhs_vdv_recon_sergeant
	{
		_generalMacro = "rhs_vdv_recon_engineer";
		Author_Macro
		displayName= "$STR_RHS_INF_ENGINEER";
		
		icon="iconManEngineer";
		picture="pictureRepair";
		
		weapons[] = {
		"rhs_weap_ak74m",
		"Throw",
		"Put"
		};
		
		respawnWeapons[] = {
		"rhs_weap_ak74m",
		"Throw",
		"Put"
		};
		
		linkedItems[] = {
		"rhs_vydra_3m",
		"rhs_Booniehat_digi",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio", 
		"MineDetector", 
		"NVGoggles_INDEP"
		
		};
		magazines[] = {
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_mag_rgd5", 
		"rhs_mag_rgd5",
		"rhs_mag_rgd5",
		"SmokeShell", 
		"SmokeShell", 
		"Chemlight_green",
		"DemoCharge_Remote_Mag"
		};
		
		respawnLinkedItems[] = {
		"rhs_vydra_3m",
		"rhs_Booniehat_digi",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio", 
		"MineDetector", 
		"NVGoggles_INDEP"
		};
		
		respawnMagazines[] = {
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_mag_rgd5", 
		"rhs_mag_rgd5",
		"rhs_mag_rgd5",
		"SmokeShell", 
		"SmokeShell", 
		"Chemlight_green", 
		"DemoCharge_Remote_Mag"
		};
		
		backpack="rhs_assault_umbts_demo";
		
	};
	
	class rhs_vdv_recon_marksman : rhs_vdv_recon_sergeant
	{
		_generalMacro = "rhs_vdv_recon_marksman";
		Author_Macro
		displayName= "$STR_RHS_INF_MARKSMAN";
				
		weapons[] = {
		"rhs_weap_svds_pso1",
		"Throw",
		"Put",
		"Rangefinder"
		};
		
		respawnWeapons[] = {
		"rhs_weap_svds_pso1",
		"Throw",
		"Put",
		"Rangefinder"
		};
		
		linkedItems[] = {
		"rhs_vydra_3m",
		"rhs_Booniehat_digi",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio", 
		"MineDetector", 
		"NVGoggles_INDEP"
		
		};
		magazines[] = {
		"rhs_10Rnd_762x54mmR_7N1", 
		"rhs_10Rnd_762x54mmR_7N1", 
		"rhs_10Rnd_762x54mmR_7N1", 
		"rhs_10Rnd_762x54mmR_7N1", 
		"rhs_10Rnd_762x54mmR_7N1", 
		"rhs_10Rnd_762x54mmR_7N1", 
		"rhs_mag_rgd5", 
		"rhs_mag_rgd5",
		"SmokeShell", 
		"SmokeShellGreen"
		};
		
		respawnLinkedItems[] = {
		"rhs_vydra_3m",
		"rhs_Booniehat_digi",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio", 
		"MineDetector", 
		"NVGoggles_INDEP"
		};
		
		respawnMagazines[] = {
		"rhs_10Rnd_762x54mmR_7N1", 
		"rhs_10Rnd_762x54mmR_7N1", 
		"rhs_10Rnd_762x54mmR_7N1", 
		"rhs_10Rnd_762x54mmR_7N1", 
		"rhs_10Rnd_762x54mmR_7N1", 
		"rhs_10Rnd_762x54mmR_7N1", 
		"rhs_mag_rgd5", 
		"rhs_mag_rgd5",
		"SmokeShell", 
		"SmokeShellGreen"
		};
		
	};
	
	class rhs_vdv_recon_machinegunner : rhs_vdv_recon_sergeant
	{
		_generalMacro = "rhs_vdv_recon_machinegunner";
		Author_Macro
		displayName= "$STR_RHS_INF_machinegunner";
				
		weapons[] = {
		"rhs_weap_pkp",
		"Throw",
		"Put"
		};
		
		respawnWeapons[] = {
		"rhs_weap_pkp",
		"Throw",
		"Put"
		};
		
		linkedItems[] = {
		"rhs_vydra_3m",
		"rhs_Booniehat_digi",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio", 
		"NVGoggles_INDEP"
		
		};
		magazines[] = {
		"rhs_100Rnd_762x54mmR", 
		"rhs_100Rnd_762x54mmR", 
		"rhs_100Rnd_762x54mmR",
		"rhs_mag_rgd5", 
		"rhs_mag_rgd5",
		"SmokeShell", 
		"SmokeShellGreen"
		};
		
		respawnLinkedItems[] = {
		"rhs_vydra_3m",
		"rhs_Booniehat_digi",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio", 
		"NVGoggles_INDEP"
		};
		
		respawnMagazines[] = {
		"rhs_100Rnd_762x54mmR", 
		"rhs_100Rnd_762x54mmR", 
		"rhs_100Rnd_762x54mmR",
		"rhs_mag_rgd5", 
		"rhs_mag_rgd5",
		"SmokeShell", 
		"SmokeShellGreen"
		};
		
		backpack = "rhs_sidorMG";
	};
	
	class rhs_vdv_recon_medic : rhs_vdv_recon_sergeant
	{
		_generalMacro = "rhs_vdv_recon_medic";
		Author_Macro
		displayName= "$STR_RHS_INF_MEDIC";
		
		attendant =1;
		icon="iconManMedic";
		picture="pictureHeal";

		weapons[] = {
		"rhs_weap_ak74m",
		"Throw",
		"Put",
		"Rangefinder"
		};
		
		respawnWeapons[] = {
		"rhs_weap_ak74m",
		"Throw",
		"Put",
		"Rangefinder"
		};
		
		linkedItems[] = {
		"rhs_vydra_3m",
		"rhs_Booniehat_digi",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio", 
		"ItemGPS", 
		"NVGoggles_INDEP"
		
		};
		magazines[] = {
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_mag_rgd5", 
		"rhs_mag_rgd5", 
		"SmokeShell",
		"SmokeShell", 
		"SmokeShell", 
		"SmokeShellGreen", 
		"Chemlight_green"
		};
		
		respawnLinkedItems[] = {
		"rhs_vydra_3m",
		"rhs_Booniehat_digi",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio", 
		"ItemGPS", 
		"NVGoggles_INDEP"
		};
		
		respawnMagazines[] = {
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_mag_rgd5", 
		"rhs_mag_rgd5", 
		"SmokeShell",
		"SmokeShell", 
		"SmokeShell", 
		"SmokeShellGreen", 
		"Chemlight_green"
		};
		
		backpack="rhs_assault_umbts_medic";
		
	};
	
	class rhs_vdv_recon_at : rhs_vdv_recon_sergeant
	{
		_generalMacro = "rhs_vdv_recon_at";
		Author_Macro
		displayName= "$STR_RHS_INF_GRENADIER_RPG";

		weapons[] = {
		"rhs_weap_ak74m",
		"rhs_weap_rpg7_pgo",
		"Throw",
		"Put"
		};
		
		respawnWeapons[] = {
		"rhs_weap_ak74m",
		"rhs_weap_rpg7_pgo",
		"Throw",
		"Put"
		};
		
		linkedItems[] = {
		"rhs_vydra_3m",
		"rhs_booniehat_digi",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio", 
		"NVGoggles_INDEP"
		
		};
		magazines[] = {
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_mag_rgd5", 
		"rhs_mag_rgd5",
		"rhs_mag_rgd5", 
		"SmokeShell",
		"rhs_rpg7_PG7VL_mag"
		};
		
		respawnLinkedItems[] = {
		"rhs_vydra_3m",
		"rhs_booniehat_digi",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"NVGoggles_INDEP"
		};
		
		respawnMagazines[] = {
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_mag_rgd5", 
		"rhs_mag_rgd5",
		"rhs_mag_rgd5", 
		"SmokeShell",
		"rhs_rpg7_PG7VL_mag"
		};
		
		backpack="rhs_rpg";
		
	};
	
	class rhs_vdv_recon_rifleman : rhs_vdv_recon_sergeant
	{
		_generalMacro = "rhs_vdv_recon_rifleman";
		Author_Macro
		displayName= "$STR_RHS_INF_RIFLEMAN";

		weapons[] = {
		"rhs_weap_ak74m",
		"Throw",
		"Put"
		};
		
		respawnWeapons[] = {
		"rhs_weap_ak74m",
		"Throw",
		"Put"
		};
		
		linkedItems[] = {
		"rhs_vydra_3m",
		"rhs_booniehat_digi",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio", 
		"NVGoggles_INDEP"
		
		};
		magazines[] = {
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_mag_rgd5", 
		"rhs_mag_rgd5",
		"rhs_mag_rgd5", 
		"SmokeShell",
		"SmokeShell",
		"ChemLight_Green"
		};
		
		respawnLinkedItems[] = {
		"rhs_vydra_3m",
		"rhs_booniehat_digi",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"NVGoggles_INDEP"
		};
		
		respawnMagazines[] = {
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_30Rnd_545x39_7N10_AK", 
		"rhs_mag_rgd5", 
		"rhs_mag_rgd5",
		"rhs_mag_rgd5", 
		"SmokeShell",
		"SmokeShell",
		"ChemLight_Green"
		};
		
		backpack="rhs_assault_umbts";
		
	};