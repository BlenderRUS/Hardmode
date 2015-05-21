	//US army 2015 ABCT ocp
	// ARMOR COMPANY, CAB, ABCT 17307R000  5/0/57//62 
	// номенклатура должностей:
	// для танкового взвода:
	// SGT 19K20 GNR/ASST TC 
	// SPC 19K10 CREWMAN 
	// PFC 19K10 LOADER 
	// SSG 19K30 TANK CDR 
	// SFC 19K40 PLT SGT 
	// 1LT 19B00 PLT LDR 
	// для управления танковой роты:
	// SPC 92Y10 SUPPLY SP 
	// SGT 92Y20 SUPPLY NCO 
	// SSG 19K30 MASTER GNR 
	// SGT 25U20 FWD SIG SPT NCO
	// SPC 19K10 DVR 
	// 1SG 19Z5M 1SG 
	// PFC 19K10 LOADER 
	// 1LT 19B00 XO 
	// CPT 19B00 Commander
	class hmg_us_army_ocp_2015_ABCT_GNR : rhsusf_army_ocp_rifleman_1stcav
	{
		displayName= "Gunner/ASST Tank Commander(ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "ItemMap","ItemMicroDAGR"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "ItemMap","ItemMicroDAGR"};
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		respawnMagazines[] = 
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		Backpack = "rhsusf_assault_eagleaiii_ocp";
	};
	
	class hmg_us_army_ocp_2015_ABCT_LOADER : hmg_us_army_ocp_2015_ABCT_GNR
	{
		displayName= "Loader (ocp)";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"};
		linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch"};
		weapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put"};
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"
			};			
	};

	class hmg_us_army_ocp_2015_ABCT_CREWMAN : hmg_us_army_ocp_2015_ABCT_GNR
	{
		displayName= "Crewman (ocp)";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"};
		linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
	};

	class hmg_us_army_ocp_2015_ABCT_TANKCDR : hmg_us_army_ocp_2015_ABCT_LOADER
	{
		displayName= "Tank Commander(ocp)";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		weapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put","Binocular"};
	};
	
	class hmg_us_army_ocp_2015_ABCT_TPLTSGT  : hmg_us_army_ocp_2015_ABCT_TANKCDR
	{
		displayName= "Tank platoon Sergeant (ocp)";
	};

	class hmg_us_army_ocp_2015_ABCT_TPLTLDR : hmg_us_army_ocp_2015_ABCT_TANKCDR
	{
		displayName= "Tank platoon Leader (ocp)";
	};

	class hmg_us_army_ocp_2015_ABCT_SUPPLY_SP  : rhsusf_army_ocp_rifleman_1stcav
	{
		displayName= "Supply SP (ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch","NVGoggles_INDEP","ItemMicroDAGR"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch","NVGoggles_INDEP","ItemMicroDAGR"};
		weapons[] = {"rhs_weap_m4_m320","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put"};
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
		};
		respawnMagazines[] = 
		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
		};
		Backpack = "rhsusf_assault_eagleaiii_ocp_gp";
	};
	
	class hmg_us_army_ocp_2015_ABCT_SUPPLY_NCO  : hmg_us_army_ocp_2015_ABCT_SUPPLY_SP
	{
		displayName= "Supply NCO (ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		weapons[] = {"rhs_weap_m4_m320","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put","Binocular"};
		linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		Backpack = "rhsusf_assault_eagleaiii_ocp_gp";
	};
	
	class hmg_us_army_ocp_2015_ABCT_MASTER_GNR   : hmg_us_army_ocp_2015_ABCT_SUPPLY_NCO
	{
		displayName= "Master Gunner (ocp) ";
		weapons[] = {"CUP_hgun_M9","Throw","Put","RH_pas13ch",};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","RH_pas13ch"};
		linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		magazines[] = 		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		respawnMagazines[] = 
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		engineer = 1;
		icon="iconManEngineer";
		picture="pictureRepair";
		Backpack = "rhsusf_assault_eagleaiii_ocp_ENG";
	};
	
	class hmg_us_army_ocp_2015_ABCT_FWD_SIG_SPT_NCO  : hmg_us_army_ocp_2015_ABCT_SUPPLY_NCO
	{
		displayName= "Forward signal NCO (ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools","ItemcTabHCam","ItemcTabHCam","ItemcTabHCam"};
		linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemcTab","ItemMap"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemcTab","ItemMap"};
		Backpack = "rhsusf_assault_eagleaiii_ocp_gp";
	};
	
	class hmg_us_army_ocp_2015_ABCT_1SG  : hmg_us_army_ocp_2015_ABCT_FWD_SIG_SPT_NCO
	{
		displayName= "First sergeant (ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools","MineDetector","AGM_Clacker",};
		linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemcTab","ItemMap"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemcTab","ItemMap"};
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag"
		};
		respawnMagazines[] = 
		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag"
		};
		Backpack = "rhsusf_assault_eagleaiii_ocp_gp";
	};


	class hmg_us_army_ocp_2015_ABCT_DRV : hmg_us_army_ocp_2015_ABCT_CREWMAN
	{
		displayName= "Driver m113 (ocp)";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","MineDetector"};
		linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMicroDAGR"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMicroDAGR"};
	};
	
	class hmg_us_army_ocp_2015_ABCT_XO : hmg_us_army_ocp_2015_ABCT_TANKCDR
	{
		displayName= "Executive Officer(ocp)";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemcTab"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemcTab"};
		weapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put","Binocular"};
	};
	
	class hmg_us_army_ocp_2015_ABCT_COM : hmg_us_army_ocp_2015_ABCT_XO
	{
		displayName= "Tank Company commander(ocp)";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemcTab"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemcTab"};
		weapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put","Binocular"};
	};
		// RIFLE COMPANY, CAB, ABCT  07207R000  135 челоква
	// номенклатура должностей:
	// для стрелкового отделения:
//SSG 11B3G (SQUAD LEADER)
//SGT 11B2O (TEAM LEADER)
//SP4 11B1O (AUTO RIFLEMAN)
//SP4 11B1O (GRENADIER)
//PFC 11B1O (ANTIARMOR SP)
//PFC 11B1O (RIFLEMAN)
	//VEHICLE SECTION		
//SGT 11B2O (GUNNER)
// SP4 11B1O (IFV DRIVER)
// SFC 11B4O (PLT SGT)
// SSG 11B3O (SECTION LEADER)
	//Rifle PLATOON HQ
//LT 11A00 (PLT LDR)
//PFC 11B1O (RATELO)
	//COMPANY HEADQUARTERS
//CPT 11A00 (Commander)
//SSG 11B3O (MASTER GUNNER)
//LT 11A00 (EXEC OFF)
//SGT 25U2O (FWD SGNL SPT NCO)
//1SG 11Z5M (FIRST SERGEANT)
//SP4 11B1O (CARRIER DRIVER)
class hmg_us_army_ocp_2015_ABCT_RIFLEMAN : rhsusf_army_ocp_rifleman_1stcav
	{
		displayName= "Rifleman (ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr"};
		weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
		};
		respawnMagazines[] = 
		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
		};
		Backpack = "rhsusf_assault_eagleaiii_ocp";
	};
	
class hmg_us_army_ocp_2015_ABCT_ANTIARMOR_SP : hmg_us_army_ocp_2015_ABCT_RIFLEMAN
	{
		displayName= "Antiarmor SP (ocp) ";
		weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","rhs_weap_fgm148"};
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","rhs_weap_fgm148"};
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_fgm148_magazine_AT"
		};
		respawnMagazines[] = 
		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_fgm148_magazine_AT"
		};
		Backpack = "rhsusf_assault_eagleaiii_ocp";
	};
	
	class hmg_us_army_ocp_2015_ABCT_GRENADIER : hmg_us_army_ocp_2015_ABCT_RIFLEMAN
	{
		displayName= "Grenadier (ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr"};
		weapons[] = {"rhs_weap_m4a1_m320","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4a1_m320","Throw","Put"};
		Backpack = "rhsusf_assault_eagleaiii_ocp_gp";
	};
	
	class hmg_us_army_ocp_2015_ABCT_AUTO_RIFLEMAN : hmg_us_army_ocp_2015_ABCT_RIFLEMAN
	{
		displayName= "Auto rifleman (ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","RH_pas13cmg","rhsusf_acc_ELCAN","AGM_SpareBarrel"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_SAW","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_SAW","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr"};
		weapons[] = {"rhs_weap_m249_pip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m249_pip","Throw","Put"};
		magazines[] = 		{
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch"
		};
		respawnMagazines[] = 
		{
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch"
		};
		Backpack = "rhsusf_assault_eagleaiii_ocp_AR";
	};
	
	class hmg_us_army_ocp_2015_ABCT_TEAM_LEADER : hmg_us_army_ocp_2015_ABCT_RIFLEMAN
	{
		displayName= "Team leader (ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","RH_pas13cl","ItemAndroid","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr","ItemMicroDAGR","ItemMap"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr","ItemMicroDAGR","ItemMap"};
		weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Binocular"};
	};
	
	class hmg_us_army_ocp_2015_ABCT_SQUAD_LEADER : hmg_us_army_ocp_2015_ABCT_TEAM_LEADER
	{
		displayName= "Squad leader (ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4", "itemradio","ItemAndroid","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr","ItemMicroDAGR","ItemMap","ItemcTabHCam"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr","ItemMicroDAGR","ItemMap","ItemcTabHCam"};
	};
	
	class hmg_us_army_ocp_2015_ABCT_PLT_SGT : hmg_us_army_ocp_2015_ABCT_SQUAD_LEADER
	{
		displayName= "Platoon sergeant (ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","ItemAndroid","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap", "itemradio"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap", "itemradio"};
		weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Laserdesignator"};
		backpack = "tf_rt1523g_big_rhs";
	};
	
	class hmg_us_army_ocp_2015_ABCT_PLT_LDR : hmg_us_army_ocp_2015_ABCT_PLT_SGT
	{
		displayName= "Platoon leader (ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","ItemAndroid","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMap","ItemcTabHCam", "itemradio"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMap","ItemcTabHCam", "itemradio"};
		weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Laserdesignator"};
		Backpack = "rhsusf_assault_eagleaiii_ocp";
	};
	
	class hmg_us_army_ocp_2015_ABCT_SECTION_LEADER : hmg_us_army_ocp_2015_ABCT_TEAM_LEADER
	{
		displayName= "Section leader (ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","MineDetector","ItemAndroid","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
		weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};
	};
	
	class hmg_us_army_ocp_2015_ABCT_GUNNER : hmg_us_army_ocp_2015_ABCT_RIFLEMAN
	{
		displayName= "IFV gunner (ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
	};
	
	class hmg_us_army_ocp_2015_ABCT_IFV_DRIVER : hmg_us_army_ocp_2015_ABCT_GUNNER
	{
		displayName= "IFV driver (ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4"};
        linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
	};
	
	class hmg_us_army_ocp_2015_ABCT_RATELO : hmg_us_army_ocp_2015_ABCT_RIFLEMAN
	{
		displayName= "Ratelo(ocp) ";
		linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMicroDAGR"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMicroDAGR"};
		Backpack = "tf_rt1523g_big_rhs";
	};
	
	class hmg_us_army_ocp_2015_ABCT_CARRIER_DRIVER : hmg_us_army_ocp_2015_ABCT_DRV
	{
		displayName= "Carrier driver (ocp)";
		weapons[] = {"rhs_weap_m4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put"};
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
			};			
	};
	
	class hmg_us_army_ocp_2015_ABCT_FIRST_SERGEANT  : hmg_us_army_ocp_2015_ABCT_1SG
	{
		displayName= "First sergeant (ocp) ";
		weapons[] = {"rhs_weap_m4","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put","Laserdesignator"};
		backpack = "tf_rt1523g_big_rhs";
	};
	
	class hmg_us_army_ocp_2015_ABCT_FWD_SIG_SPT_NCO_rifle  : hmg_us_army_ocp_2015_ABCT_FWD_SIG_SPT_NCO
	{
		displayName= "Forward signal NCO (ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools","ItemcTabHCam"};
		linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemcTab","ItemMap"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemcTab","ItemMap"};
		weapons[] = {"rhs_weap_m4","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put","Laserdesignator"};
		Backpack = "B_rhsusf_B_BACKPACK";
	};
	
	class hmg_us_army_ocp_2015_ABCT_MASTER_GUNNER : hmg_us_army_ocp_2015_ABCT_MASTER_GNR
	{
		displayName= "Master Gunner (ocp) ";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		magazines[] = 		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		respawnMagazines[] = 
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		engineer = 1;
		icon="iconManEngineer";
		picture="pictureRepair";
		Backpack = "rhsusf_assault_eagleaiii_ocp_ENG";
	};
	
	class hmg_us_army_ocp_2015_ABCT_EXEC_OFF : hmg_us_army_ocp_2015_ABCT_PLT_SGT
	{
		displayName= "EXEC Officer (ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","ItemcTab","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
		weapons[] = {"rhs_weap_m4","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put","Laserdesignator"};
		backpack = "tf_rt1523g_big_rhs";
	};
	
	class hmg_us_army_ocp_2015_ABCT_Commander : hmg_us_army_ocp_2015_ABCT_EXEC_OFF
	{
		displayName= "Rifle company Commander (ocp) ";
		weapons[] = {"CUP_hgun_M9","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","Laserdesignator"};
		magazines[] = 		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		respawnMagazines[] = 
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		Backpack = "rhsusf_assault_eagleaiii_ocp";
	};
	// отдельные юниты HHC, CAB, ABCT		
	// MED TREATMENT PLT		
//SGT 68W2O (EMERG CARE SGT)
//SP4 68W1O (AMB AIDE / DRIVER)
//SP4 68W1O (COMBAT MEDIC)

class hmg_us_army_ocp_2015_ABCT_EMERG_CARE_SGT : hmg_us_army_ocp_2015_ABCT_GNR
	{
		displayName= "Emergency Care Sergeant(ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Medic","ItemCompass","ItemWatch", "ItemMap","ItemMicroDAGR", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Medic","ItemCompass","ItemWatch", "ItemMap","ItemMicroDAGR", "NVGoggles_INDEP"};
		attendant = 1;
		icon = "iconManMedic";
		Backpack = "rhsusf_assault_eagleaiii_ocp_medic";
	};
class hmg_us_army_ocp_2015_ABCT_AMB_AIDE_DRIVER : hmg_us_army_ocp_2015_ABCT_EMERG_CARE_SGT
	{
		displayName= "Ambulance aide / Driver(ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Medic","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Medic","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
		attendant = 1;
		icon = "iconManMedic";
		Backpack = "rhsusf_assault_eagleaiii_ocp_medic";
	};
class hmg_us_army_ocp_2015_ABCT_COMBAT_MEDIC : hmg_us_army_ocp_2015_ABCT_AMB_AIDE_DRIVER
	{
		displayName= "Combat medic(ocp) ";
		attendant = 1;
		icon = "iconManMedic";
		Backpack = "rhsusf_assault_eagleaiii_ocp_medic";
	};
//SNIPER SQUAD		
//SSG 11B30 (SQD LDR) 
//SGT 11B20 (SR SNIPER)
//SPC 11B10 (SNIPER)
class hmg_us_army_ocp_2015_ABCT_sniper_SQD_LDR : hmg_us_army_ocp_2015_ABCT_RIFLEMAN
	{
		displayName= "Sniper squad leader (ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","cw_item_notepad","AGM_CableTie","AGM_MapTools","ItemcTab"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14"};
		backpack = "tf_rt1523g_big_rhs";
	};
	class hmg_us_army_ocp_2015_ABCT_senior_sniper : hmg_us_army_ocp_2015_ABCT_RIFLEMAN
	{
		displayName= "Senior Sniper(ocp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMicroDAGR"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMicroDAGR"};
		weapons[] = {"CUP_hgun_M9","rhs_weap_m4a1_carryhandle","Throw","Put","lerca_1200_black"};
		respawnWeapons[] = {"CUP_hgun_M9","rhs_weap_m4a1_carryhandle","Throw","Put","lerca_1200_black"};
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"
			};			
		backpack = "tf_rt1523g_big_rhs";
	};
	
	class hmg_us_army_ocp_2015_ABCT_SNIPER : hmg_us_army_ocp_2015_ABCT_RIFLEMAN
	{
		displayName= "Sniper (ocp) ";
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch", "rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch", "rhsusf_ANPVS_14"};
		Backpack = "rhsusf_assault_eagleaiii_ocp";
	};
	
// US ARMY ABCT ННС Scout platoon OCP 2015
//LT 02B00 (PLT LDR)
//SFC 19D4O (PLT SGT)
//SSG 19D3O (SECTION LDR)
//SGT 19D2O (CFV GUNNER) 
//SP4 19D1O (CFV DRIVER)
//SGT 19D2O (TEAM LDR)
//SSG 19D3O (SQUAD LDR)
//SP4 19D1O (SCOUT DRIVER)
//SP4 19D1O (SCOUT) javelin
//PFC 19D1O (SCOUT)

class us_army_ocp_2015_sscout : rhsusf_army_ocp_rifleman_1stcav {
			icon = "iconMan";
			items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A","rhsusf_acc_compm4"};
			displayName = "Scout(ocp)";
        	linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles","ItemAndroid"};
			respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles","ItemAndroid"};
			weapons[] = {"rhs_weap_m4a1_m320","Throw","Put","AGM_Vector"};
			respawnWeapons[] = {"rhs_weap_m4a1_m320","Throw","Put","AGM_Vector"};
			magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red"
			};
			Backpack = "rhsusf_assault_eagleaiii_ocp_scout";
};

class us_army_ocp_2015_sscout_driver : us_army_ocp_2015_sscout {
			icon = "iconMan";
			displayName = "Scout driver(ocp)";
			items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A","rhsusf_acc_compm4","RH_pas13cl"};
        	linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemAndroid"};
			respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemAndroid"};
			weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","AGM_Vector"};
			respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","AGM_Vector"};
			Backpack = "rhsusf_assault_eagleaiii_ocp_scoutL";
};

class us_army_ocp_2015_scout : us_army_ocp_2015_sscout{
			icon = "iconManAT";
			displayName = "Scout Javelin (ocp)";
	        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemAndroid"};
			respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemAndroid"};
			weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","rhs_weap_fgm148","AGM_Vector"};
			respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","rhs_weap_fgm148","AGM_Vector"};
			magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"rhs_fgm148_magazine_AT"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"rhs_fgm148_magazine_AT"
			};
			Backpack = "rhsusf_assault_eagleaiii_ocp_scoutL";
};

class us_army_ocp_2015_TLscout : us_army_ocp_2015_sscout_driver{
			icon = "iconManLeader";
			displayName = "Scout team leader (ocp)";
			items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
			linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr","ItemMap","ItemAndroid"};
			respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr","ItemMap","ItemAndroid"};
			weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Laserdesignator"};
			respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Laserdesignator"};
			Backpack = "tf_rt1523g_big_rhs";
};

class us_army_ocp_2015_Lscout : us_army_ocp_2015_TLscout {
			displayName = "Scout Squad leader (ocp)";
			items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","cw_item_notepad","AGM_CableTie","AGM_MapTools","ItemcTab","RH_pas13ch"};
			linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMicroDAGR","ItemMap", "itemradio"};
			respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMicroDAGR","ItemMap", "itemradio"};
			backpack = "tf_rt1523g_big_rhs";
};

class us_army_ocp_2015_PLTSscout : us_army_ocp_2015_Lscout {
			displayName = "Scout platoon sergeant (ocp)";
			backpack = "tf_rt1523g_big_rhs";
};

class us_army_ocp_2015_PLTLscout : us_army_ocp_2015_Lscout {
			icon = "iconMan";
			displayName = "Scout platoon leader (ocp)";
			backpack = "tf_rt1523g_big_rhs";
};

class hmg_us_army_ocp_2015_ABCT_CFV_GNR : hmg_us_army_ocp_2015_ABCT_GNR
	{
		displayName= "CFV Gunner(ocp) ";
	};
	
class hmg_us_army_ocp_2015_ABCT_CFV_CREWMAN : hmg_us_army_ocp_2015_ABCT_CREWMAN
	{
		displayName= "CFV Crewman (ocp)";
	};
class hmg_us_army_ocp_2015_ABCT_SECTION_LDR : hmg_us_army_ocp_2015_ABCT_GNR
	{
		displayName= "Section leader (ocp) ";
		linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "ItemMap","ItemAndroid"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "ItemMap","ItemAndroid"};
		backpack = "tf_rt1523g_big_rhs";
	};	
	
	/// тоже самое нов UCP
	//US army 2015 ABCT ucp
	// ARMOR COMPANY, CAB, ABCT 17307R000  5/0/57//62 
	// номенклатура должностей:
	// для танкового взвода:
	// SGT 19K20 GNR/ASST TC 
	// SPC 19K10 CREWMAN 
	// PFC 19K10 LOADER 
	// SSG 19K30 TANK CDR 
	// SFC 19K40 PLT SGT 
	// 1LT 19B00 PLT LDR 
	// для управления танковой роты:
	// SPC 92Y10 SUPPLY SP 
	// SGT 92Y20 SUPPLY NCO 
	// SSG 19K30 MASTER GNR 
	// SGT 25U20 FWD SIG SPT NCO
	// SPC 19K10 DVR 
	// 1SG 19Z5M 1SG 
	// PFC 19K10 LOADER 
	// 1LT 19B00 XO 
	// CPT 19B00 Commander
	class hmg_us_army_ucp_2015_ABCT_GNR : rhsusf_army_ucp_rifleman_1stcav 
	{
		displayName= "Gunner/ASST Tank Commander(ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "ItemMap","ItemMicroDAGR"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "ItemMap","ItemMicroDAGR"};
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		respawnMagazines[] = 
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		Backpack = "rhsusf_assault_eagleaiii_ucp";
	};
	
	class hmg_us_army_ucp_2015_ABCT_LOADER : hmg_us_army_ucp_2015_ABCT_GNR
	{
		displayName= "Loader (ucp)";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"};
		linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch"};
		weapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put"};
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"
			};			
	};

	class hmg_us_army_ucp_2015_ABCT_CREWMAN : hmg_us_army_ucp_2015_ABCT_GNR
	{
		displayName= "Crewman (ucp)";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"};
		linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
	};

	class hmg_us_army_ucp_2015_ABCT_TANKCDR : hmg_us_army_ucp_2015_ABCT_LOADER
	{
		displayName= "Tank Commander(ucp)";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		weapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put","Binocular"};
	};
	
	class hmg_us_army_ucp_2015_ABCT_TPLTSGT  : hmg_us_army_ucp_2015_ABCT_TANKCDR
	{
		displayName= "Tank platoon Sergeant (ucp)";
	};

	class hmg_us_army_ucp_2015_ABCT_TPLTLDR : hmg_us_army_ucp_2015_ABCT_TANKCDR
	{
		displayName= "Tank platoon Leader (ucp)";
	};

	class hmg_us_army_ucp_2015_ABCT_SUPPLY_SP  : rhsusf_army_ucp_rifleman_1stcav 
	{
		displayName= "Supply SP (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch","NVGoggles_INDEP","ItemMicroDAGR"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch","NVGoggles_INDEP","ItemMicroDAGR"};
		weapons[] = {"rhs_weap_m4_m320","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put"};
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
		};
		respawnMagazines[] = 
		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
		};
		Backpack = "rhsusf_assault_eagleaiii_ucp_gp";
	};
	
	class hmg_us_army_ucp_2015_ABCT_SUPPLY_NCO  : hmg_us_army_ucp_2015_ABCT_SUPPLY_SP
	{
		displayName= "Supply NCO (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		weapons[] = {"rhs_weap_m4_m320","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put","Binocular"};
		linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		Backpack = "rhsusf_assault_eagleaiii_ucp_gp";
	};
	
	class hmg_us_army_ucp_2015_ABCT_MASTER_GNR   : hmg_us_army_ucp_2015_ABCT_SUPPLY_NCO
	{
		displayName= "Master Gunner (ucp) ";
		weapons[] = {"CUP_hgun_M9","Throw","Put","RH_pas13ch",};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","RH_pas13ch"};
		linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		magazines[] = 		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		respawnMagazines[] = 
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		engineer = 1;
		icon="iconManEngineer";
		picture="pictureRepair";
		Backpack = "rhsusf_assault_eagleaiii_ucp_ENG";
	};
	
	class hmg_us_army_ucp_2015_ABCT_FWD_SIG_SPT_NCO  : hmg_us_army_ucp_2015_ABCT_SUPPLY_NCO
	{
		displayName= "Forward signal NCO (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools","ItemcTabHCam","ItemcTabHCam","ItemcTabHCam"};
		linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemcTab","ItemMap"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemcTab","ItemMap"};
		Backpack = "rhsusf_assault_eagleaiii_ucp_gp";
	};
	
	class hmg_us_army_ucp_2015_ABCT_1SG  : hmg_us_army_ucp_2015_ABCT_FWD_SIG_SPT_NCO
	{
		displayName= "First sergeant (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools","MineDetector","AGM_Clacker",};
		linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemcTab","ItemMap"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemcTab","ItemMap"};
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag"
		};
		respawnMagazines[] = 
		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag"
		};
		Backpack = "rhsusf_assault_eagleaiii_ucp_gp";
	};


	class hmg_us_army_ucp_2015_ABCT_DRV : hmg_us_army_ucp_2015_ABCT_CREWMAN
	{
		displayName= "Driver m113 (ucp)";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","MineDetector"};
		linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMicroDAGR"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMicroDAGR"};
	};
	
	class hmg_us_army_ucp_2015_ABCT_XO : hmg_us_army_ucp_2015_ABCT_TANKCDR
	{
		displayName= "Executive Officer(ucp)";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemcTab"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemcTab"};
		weapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put","Binocular"};
	};
	
	class hmg_us_army_ucp_2015_ABCT_COM : hmg_us_army_ucp_2015_ABCT_XO
	{
		displayName= "Tank Company commander(ucp)";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemcTab"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemcTab"};
		weapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put","Binocular"};
	};
		// RIFLE COMPANY, CAB, ABCT  07207R000  135 челоква
	// номенклатура должностей:
	// для стрелкового отделения:
//SSG 11B3G (SQUAD LEADER)
//SGT 11B2O (TEAM LEADER)
//SP4 11B1O (AUTO RIFLEMAN)
//SP4 11B1O (GRENADIER)
//PFC 11B1O (ANTIARMOR SP)
//PFC 11B1O (RIFLEMAN)
	//VEHICLE SECTION		
//SGT 11B2O (GUNNER)
// SP4 11B1O (IFV DRIVER)
// SFC 11B4O (PLT SGT)
// SSG 11B3O (SECTION LEADER)
	//Rifle PLATOON HQ
//LT 11A00 (PLT LDR)
//PFC 11B1O (RATELO)
	//COMPANY HEADQUARTERS
//CPT 11A00 (Commander)
//SSG 11B3O (MASTER GUNNER)
//LT 11A00 (EXEC OFF)
//SGT 25U2O (FWD SGNL SPT NCO)
//1SG 11Z5M (FIRST SERGEANT)
//SP4 11B1O (CARRIER DRIVER)
class hmg_us_army_ucp_2015_ABCT_RIFLEMAN : rhsusf_army_ucp_rifleman_1stcav 
	{
		displayName= "Rifleman (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr"};
		weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
		};
		respawnMagazines[] = 
		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
		};
		Backpack = "rhsusf_assault_eagleaiii_ucp";
	};
	
class hmg_us_army_ucp_2015_ABCT_ANTIARMOR_SP : hmg_us_army_ucp_2015_ABCT_RIFLEMAN
	{
		displayName= "Antiarmor SP (ucp) ";
		weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","rhs_weap_fgm148"};
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","rhs_weap_fgm148"};
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_fgm148_magazine_AT"
		};
		respawnMagazines[] = 
		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_fgm148_magazine_AT"
		};
		Backpack = "rhsusf_assault_eagleaiii_ucp";
	};
	
	class hmg_us_army_ucp_2015_ABCT_GRENADIER : hmg_us_army_ucp_2015_ABCT_RIFLEMAN
	{
		displayName= "Grenadier (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr"};
		weapons[] = {"rhs_weap_m4a1_m320","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4a1_m320","Throw","Put"};
		Backpack = "rhsusf_assault_eagleaiii_ucp_gp";
	};
	
	class hmg_us_army_ucp_2015_ABCT_AUTO_RIFLEMAN : hmg_us_army_ucp_2015_ABCT_RIFLEMAN
	{
		displayName= "Auto rifleman (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","RH_pas13cmg","rhsusf_acc_ELCAN","AGM_SpareBarrel"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_SAW","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_SAW","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr"};
		weapons[] = {"rhs_weap_m249_pip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m249_pip","Throw","Put"};
		magazines[] = 		{
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch"
		};
		respawnMagazines[] = 
		{
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch"
		};
		Backpack = "rhsusf_assault_eagleaiii_ucp_AR";
	};
	
	class hmg_us_army_ucp_2015_ABCT_TEAM_LEADER : hmg_us_army_ucp_2015_ABCT_RIFLEMAN
	{
		displayName= "Team leader (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","RH_pas13cl","ItemAndroid","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr","ItemMicroDAGR","ItemMap"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr","ItemMicroDAGR","ItemMap"};
		weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Binocular"};
	};
	
	class hmg_us_army_ucp_2015_ABCT_SQUAD_LEADER : hmg_us_army_ucp_2015_ABCT_TEAM_LEADER
	{
		displayName= "Squad leader (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4", "itemradio","ItemAndroid","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr","ItemMicroDAGR","ItemMap","ItemcTabHCam"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr","ItemMicroDAGR","ItemMap","ItemcTabHCam"};
	};
	
	class hmg_us_army_ucp_2015_ABCT_PLT_SGT : hmg_us_army_ucp_2015_ABCT_SQUAD_LEADER
	{
		displayName= "Platoon sergeant (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","ItemAndroid","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap", "itemradio"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap", "itemradio"};
		weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Laserdesignator"};
		backpack = "tf_rt1523g_big_rhs";
	};
	
	class hmg_us_army_ucp_2015_ABCT_PLT_LDR : hmg_us_army_ucp_2015_ABCT_PLT_SGT
	{
		displayName= "Platoon leader (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","ItemAndroid","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMap","ItemcTabHCam", "itemradio"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMap","ItemcTabHCam", "itemradio"};
		weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Laserdesignator"};
		Backpack = "rhsusf_assault_eagleaiii_ucp";
	};
	
	class hmg_us_army_ucp_2015_ABCT_SECTION_LEADER : hmg_us_army_ucp_2015_ABCT_TEAM_LEADER
	{
		displayName= "Section leader (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","MineDetector","ItemAndroid","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
		weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};
	};
	
	class hmg_us_army_ucp_2015_ABCT_GUNNER : hmg_us_army_ucp_2015_ABCT_RIFLEMAN
	{
		displayName= "IFV gunner (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
	};
	
	class hmg_us_army_ucp_2015_ABCT_IFV_DRIVER : hmg_us_army_ucp_2015_ABCT_GUNNER
	{
		displayName= "IFV driver (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4"};
        linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
	};
	
	class hmg_us_army_ucp_2015_ABCT_RATELO : hmg_us_army_ucp_2015_ABCT_RIFLEMAN
	{
		displayName= "Ratelo(ucp) ";
		linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMicroDAGR"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMicroDAGR"};
		Backpack = "tf_rt1523g_big_rhs";
	};
	
	class hmg_us_army_ucp_2015_ABCT_CARRIER_DRIVER : hmg_us_army_ucp_2015_ABCT_DRV
	{
		displayName= "Carrier driver (ucp)";
		weapons[] = {"rhs_weap_m4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put"};
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
			};			
	};
	
	class hmg_us_army_ucp_2015_ABCT_FIRST_SERGEANT  : hmg_us_army_ucp_2015_ABCT_1SG
	{
		displayName= "First sergeant (ucp) ";
		weapons[] = {"rhs_weap_m4","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put","Laserdesignator"};
		backpack = "tf_rt1523g_big_rhs";
	};
	
	class hmg_us_army_ucp_2015_ABCT_FWD_SIG_SPT_NCO_rifle  : hmg_us_army_ucp_2015_ABCT_FWD_SIG_SPT_NCO
	{
		displayName= "Forward signal NCO (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools","ItemcTabHCam"};
		linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemcTab","ItemMap"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemcTab","ItemMap"};
		weapons[] = {"rhs_weap_m4","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put","Laserdesignator"};
		Backpack = "B_rhsusf_B_BACKPACK";
	};
	
	class hmg_us_army_ucp_2015_ABCT_MASTER_GUNNER : hmg_us_army_ucp_2015_ABCT_MASTER_GNR
	{
		displayName= "Master Gunner (ucp) ";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		magazines[] = 		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		respawnMagazines[] = 
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		engineer = 1;
		icon="iconManEngineer";
		picture="pictureRepair";
		Backpack = "rhsusf_assault_eagleaiii_ucp_ENG";
	};
	
	class hmg_us_army_ucp_2015_ABCT_EXEC_OFF : hmg_us_army_ucp_2015_ABCT_PLT_SGT
	{
		displayName= "EXEC Officer (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","ItemcTab","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
		weapons[] = {"rhs_weap_m4","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put","Laserdesignator"};
		backpack = "tf_rt1523g_big_rhs";
	};
	
	class hmg_us_army_ucp_2015_ABCT_Commander : hmg_us_army_ucp_2015_ABCT_EXEC_OFF
	{
		displayName= "Rifle company Commander (ucp) ";
		weapons[] = {"CUP_hgun_M9","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","Laserdesignator"};
		magazines[] = 		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		respawnMagazines[] = 
		{
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9"
		};
		Backpack = "rhsusf_assault_eagleaiii_ucp";
	};
	// отдельные юниты HHC, CAB, ABCT		
	// MED TREATMENT PLT		
//SGT 68W2O (EMERG CARE SGT)
//SP4 68W1O (AMB AIDE / DRIVER)
//SP4 68W1O (COMBAT MEDIC)

class hmg_us_army_ucp_2015_ABCT_EMERG_CARE_SGT : hmg_us_army_ucp_2015_ABCT_GNR
	{
		displayName= "Emergency Care Sergeant(ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Medic","ItemCompass","ItemWatch", "ItemMap","ItemMicroDAGR", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Medic","ItemCompass","ItemWatch", "ItemMap","ItemMicroDAGR", "NVGoggles_INDEP"};
		attendant = 1;
		icon = "iconManMedic";
		Backpack = "rhsusf_assault_eagleaiii_ucp_medic";
	};
class hmg_us_army_ucp_2015_ABCT_AMB_AIDE_DRIVER : hmg_us_army_ucp_2015_ABCT_EMERG_CARE_SGT
	{
		displayName= "Ambulance aide / Driver(ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Medic","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Medic","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
		attendant = 1;
		icon = "iconManMedic";
		Backpack = "rhsusf_assault_eagleaiii_ucp_medic";
	};
class hmg_us_army_ucp_2015_ABCT_COMBAT_MEDIC : hmg_us_army_ucp_2015_ABCT_AMB_AIDE_DRIVER
	{
		displayName= "Combat medic(ucp) ";
		attendant = 1;
		icon = "iconManMedic";
		Backpack = "rhsusf_assault_eagleaiii_ucp_medic";
	};
//SNIPER SQUAD		
//SSG 11B30 (SQD LDR) 
//SGT 11B20 (SR SNIPER)
//SPC 11B10 (SNIPER)
class hmg_us_army_ucp_2015_ABCT_sniper_SQD_LDR : hmg_us_army_ucp_2015_ABCT_RIFLEMAN
	{
		displayName= "Sniper squad leader (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","cw_item_notepad","AGM_CableTie","AGM_MapTools","ItemcTab"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14"};
		backpack = "tf_rt1523g_big_rhs";
	};
	class hmg_us_army_ucp_2015_ABCT_senior_sniper : hmg_us_army_ucp_2015_ABCT_RIFLEMAN
	{
		displayName= "Senior Sniper(ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMicroDAGR"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMicroDAGR"};
		weapons[] = {"CUP_hgun_M9","rhs_weap_m4a1_carryhandle","Throw","Put","lerca_1200_black"};
		respawnWeapons[] = {"CUP_hgun_M9","rhs_weap_m4a1_carryhandle","Throw","Put","lerca_1200_black"};
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"
			};			
		backpack = "tf_rt1523g_big_rhs";
	};
	
	class hmg_us_army_ucp_2015_ABCT_SNIPER : hmg_us_army_ucp_2015_ABCT_RIFLEMAN
	{
		displayName= "Sniper (ucp) ";
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "rhsusf_ANPVS_14"};
		Backpack = "rhsusf_assault_eagleaiii_ucp";
	};
	
// US ARMY ABCT ННС Scout platoon ucp 2015
//LT 02B00 (PLT LDR)
//SFC 19D4O (PLT SGT)
//SSG 19D3O (SECTION LDR)
//SGT 19D2O (CFV GUNNER) 
//SP4 19D1O (CFV DRIVER)
//SGT 19D2O (TEAM LDR)
//SSG 19D3O (SQUAD LDR)
//SP4 19D1O (SCOUT DRIVER)
//SP4 19D1O (SCOUT) javelin
//PFC 19D1O (SCOUT)

class us_army_ucp_2015_sscout : rhsusf_army_ucp_rifleman_1stcav {
			icon = "iconMan";
			items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A","rhsusf_acc_compm4"};
			displayName = "Scout(ucp)";
        	linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch", "NVGoggles","ItemAndroid"};
			respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch", "NVGoggles","ItemAndroid"};
			weapons[] = {"rhs_weap_m4a1_m320","Throw","Put","AGM_Vector"};
			respawnWeapons[] = {"rhs_weap_m4a1_m320","Throw","Put","AGM_Vector"};
			magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red"
			};
			Backpack = "rhsusf_assault_eagleaiii_ucp_scout";
};

class us_army_ucp_2015_sscout_driver : us_army_ucp_2015_sscout {
			icon = "iconMan";
			displayName = "Scout driver(ucp)";
			items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A","rhsusf_acc_compm4","RH_pas13cl"};
        	linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemAndroid"};
			respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemAndroid"};
			weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","AGM_Vector"};
			respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","AGM_Vector"};
			Backpack = "rhsusf_assault_eagleaiii_ucp_scoutL";
};

class us_army_ucp_2015_scout : us_army_ucp_2015_sscout{
			icon = "iconManAT";
			displayName = "Scout Javelin (ucp)";
	        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemAndroid"};
			respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemAndroid"};
			weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","rhs_weap_fgm148","AGM_Vector"};
			respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","rhs_weap_fgm148","AGM_Vector"};
			magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"rhs_fgm148_magazine_AT"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"rhs_fgm148_magazine_AT"
			};
			Backpack = "rhsusf_assault_eagleaiii_ucp_scoutL";
};

class us_army_ucp_2015_TLscout : us_army_ucp_2015_sscout_driver{
			icon = "iconManLeader";
			displayName = "Scout team leader (ucp)";
			items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
			linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr","ItemMap","ItemAndroid"};
			respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr","ItemMap","ItemAndroid"};
			weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Laserdesignator"};
			respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Laserdesignator"};
			Backpack = "tf_rt1523g_big_rhs";
};

class us_army_ucp_2015_Lscout : us_army_ucp_2015_TLscout {
			displayName = "Scout squad leader (ucp)";
			items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","cw_item_notepad","AGM_CableTie","AGM_MapTools","ItemcTab","RH_pas13ch"};
			linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMicroDAGR","ItemMap", "itemradio"};
			respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMicroDAGR","ItemMap", "itemradio"};
			backpack = "tf_rt1523g_big_rhs";
};

class us_army_ucp_2015_PLTSscout : us_army_ucp_2015_Lscout {
			displayName = "Scout platoon sergeant (ucp)";
			backpack = "tf_rt1523g_big_rhs";
};

class us_army_ucp_2015_PLTLscout : us_army_ucp_2015_Lscout {
			icon = "iconMan";
			displayName = "Scout platoon leader (ucp)";
			backpack = "tf_rt1523g_big_rhs";
};

class hmg_us_army_ucp_2015_ABCT_CFV_GNR : hmg_us_army_ucp_2015_ABCT_GNR
	{
		displayName= "CFV Gunner(ucp) ";
	};
	
class hmg_us_army_ucp_2015_ABCT_CFV_CREWMAN : hmg_us_army_ucp_2015_ABCT_CREWMAN
	{
		displayName= "CFV Crewman (ucp)";
	};
class hmg_us_army_ucp_2015_ABCT_SECTION_LDR : hmg_us_army_ucp_2015_ABCT_GNR
	{
		displayName= "Section leader (ucp) ";
		linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "ItemMap","ItemAndroid"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "ItemMap","ItemAndroid"};
		backpack = "tf_rt1523g_big_rhs";
	};	