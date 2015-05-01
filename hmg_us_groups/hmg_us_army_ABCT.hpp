	//US army 2015 ABCT
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
	class hmg_us_army_2015_ABCT_GNR : rhsusf_army_ocp_rifleman_1stcav
	{
		displayName= "Gunner/ASST Tank Commander(ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "ItemMap","ItemMicroDAGR"};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "ItemMap","ItemMicroDAGR"};
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
	
	class hmg_us_army_2015_ABCT_LOADER : hmg_us_army_2015_ABCT_GNR
	{
		displayName= "Loader (ocp)";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage"};
		linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch"};
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

	class hmg_us_army_2015_ABCT_CREWMAN : hmg_us_army_2015_ABCT_GNR
	{
		displayName= "Crewman (ocp)";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage"};
		linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
	};

	class hmg_us_army_2015_ABCT_TANKCDR : hmg_us_army_2015_ABCT_LOADER
	{
		displayName= "Tank Commander(ocp)";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		weapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put","Binocular"};
	};
	
	class hmg_us_army_2015_ABCT_TPLTSGT  : hmg_us_army_2015_ABCT_TANKCDR
	{
		displayName= "Tank platoon Sergeant (ocp)";
	};

	class hmg_us_army_2015_ABCT_TPLTLDR : hmg_us_army_2015_ABCT_TANKCDR
	{
		displayName= "Tank platoon Leader (ocp)";
	};

	class hmg_us_army_2015_ABCT_SUPPLY_SP  : rhsusf_army_ocp_rifleman_1stcav
	{
		displayName= "Supply SP (ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage"};
        linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch","NVGoggles_INDEP","ItemMicroDAGR"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch","NVGoggles_INDEP","ItemMicroDAGR"};
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
	
	class hmg_us_army_2015_ABCT_SUPPLY_NCO  : hmg_us_army_2015_ABCT_SUPPLY_SP
	{
		displayName= "Supply NCO (ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		weapons[] = {"rhs_weap_m4_m320","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put","Binocular"};
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		Backpack = "rhsusf_assault_eagleaiii_ocp_gp";
	};
	
	class hmg_us_army_2015_ABCT_MASTER_GNR   : hmg_us_army_2015_ABCT_SUPPLY_NCO
	{
		displayName= "Master Gunner (ocp) ";
		weapons[] = {"CUP_hgun_M9","Throw","Put","RH_pas13ch",};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","RH_pas13ch"};
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
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
	
	class hmg_us_army_2015_ABCT_FWD_SIG_SPT_NCO  : hmg_us_army_2015_ABCT_SUPPLY_NCO
	{
		displayName= "Forward signal NCO (ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools","ItemcTabHCam","ItemcTabHCam","ItemcTabHCam"};
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemcTab","ItemMap"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemcTab","ItemMap"};
		Backpack = "rhsusf_assault_eagleaiii_ocp_gp";
	};
	
	class hmg_us_army_2015_ABCT_1SG  : hmg_us_army_2015_ABCT_FWD_SIG_SPT_NCO
	{
		displayName= "First sergeant (ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools","MineDetector","AGM_Clacker",};
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemcTab","ItemMap"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemcTab","ItemMap"};
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


	class hmg_us_army_2015_ABCT_DRV : hmg_us_army_2015_ABCT_CREWMAN
	{
		displayName= "Driver m113 (ocp)";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","MineDetector"};
		linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMicroDAGR"};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMicroDAGR"};
	};
	
	class hmg_us_army_2015_ABCT_XO : hmg_us_army_2015_ABCT_TANKCDR
	{
		displayName= "Executive Officer(ocp)";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemcTab"};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemcTab"};
		weapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4","CUP_hgun_M9","Throw","Put","Binocular"};
	};
	
	class hmg_us_army_2015_ABCT_COM : hmg_us_army_2015_ABCT_XO
	{
		displayName= "Tank Company commander(ocp)";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemcTab"};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemcTab"};
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
class hmg_us_army_2015_ABCT_RIFLEMAN : rhsusf_army_ocp_rifleman_1stcav
	{
		displayName= "Rifleman (ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4"};
        linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch", "NVGoggles_INDEP","tf_anprc154","tf_microdagr"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch", "NVGoggles_INDEP","tf_anprc154","tf_microdagr"};
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
	
class hmg_us_army_2015_ABCT_ANTIARMOR_SP : hmg_us_army_2015_ABCT_RIFLEMAN
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
	
	class hmg_us_army_2015_ABCT_GRENADIER : hmg_us_army_2015_ABCT_RIFLEMAN
	{
		displayName= "Grenadier (ocp) ";
        linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","tf_anprc154","tf_microdagr"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","tf_anprc154","tf_microdagr"};
		weapons[] = {"rhs_weap_m4a1_m320","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4a1_m320","Throw","Put"};
		Backpack = "rhsusf_assault_eagleaiii_ocp_gp";
	};
	
	class hmg_us_army_2015_ABCT_AUTO_RIFLEMAN : hmg_us_army_2015_ABCT_RIFLEMAN
	{
		displayName= "Auto rifleman (ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","RH_pas13cmg"};
        linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_SAW","ItemCompass","ItemWatch", "NVGoggles_INDEP","tf_anprc154","tf_microdagr"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_SAW","ItemCompass","ItemWatch", "NVGoggles_INDEP","tf_anprc154","tf_microdagr"};
		weapons[] = {"rhs_weap_m249_pip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m249_pip","Throw","Put"};
		magazines[] = 		{
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch"
		};
		respawnMagazines[] = 
		{
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch"
		};
	};
	
	class hmg_us_army_2015_ABCT_TEAM_LEADER : hmg_us_army_2015_ABCT_RIFLEMAN
	{
		displayName= "Team leader (ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","RH_pas13cl","ItemAndroid","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Teamleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","tf_anprc154","tf_microdagr","ItemMicroDAGR","ItemMap"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Teamleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","tf_anprc154","tf_microdagr","ItemMicroDAGR","ItemMap"};
		weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Binocular"};
	};
	
	class hmg_us_army_2015_ABCT_SQUAD_LEADER : hmg_us_army_2015_ABCT_TEAM_LEADER
	{
		displayName= "Squad leader (ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4", "itemradio","ItemAndroid","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","tf_anprc154","tf_microdagr","ItemMicroDAGR","ItemMap","ItemcTabHCam"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","tf_anprc154","tf_microdagr","ItemMicroDAGR","ItemMap","ItemcTabHCam"};
	};
	
	class hmg_us_army_2015_ABCT_PLT_SGT : hmg_us_army_2015_ABCT_SQUAD_LEADER
	{
		displayName= "Platoon sergeant (ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","ItemAndroid","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap", "itemradio"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap", "itemradio"};
		weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Laserdesignator"};
		backpack = "tf_rt1523g_black";
	};
	
	class hmg_us_army_2015_ABCT_PLT_LDR : hmg_us_army_2015_ABCT_PLT_SGT
	{
		displayName= "Platoon leader (ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","ItemAndroid","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemcTabHCam", "itemradio"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemcTabHCam", "itemradio"};
		weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put","Laserdesignator"};
		Backpack = "rhsusf_assault_eagleaiii_ocp";
	};
	
	class hmg_us_army_2015_ABCT_SECTION_LEADER : hmg_us_army_2015_ABCT_TEAM_LEADER
	{
		displayName= "Section leader (ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","MineDetector","ItemAndroid","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
		weapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Throw","Put"};
	};
	
	class hmg_us_army_2015_ABCT_GUNNER : hmg_us_army_2015_ABCT_RIFLEMAN
	{
		displayName= "IFV gunner (ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
	};
	
	class hmg_us_army_2015_ABCT_IFV_DRIVER : hmg_us_army_2015_ABCT_GUNNER
	{
		displayName= "IFV driver (ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4"};
        linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
	};
	
	class hmg_us_army_2015_ABCT_RATELO : hmg_us_army_2015_ABCT_RIFLEMAN
	{
		displayName= "Ratelo(ocp) ";
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMicroDAGR"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMicroDAGR"};
		Backpack = "tf_rt1523g_black";
	};
	
	class hmg_us_army_2015_ABCT_CARRIER_DRIVER : hmg_us_army_2015_ABCT_DRV
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
	
	class hmg_us_army_2015_ABCT_FIRST_SERGEANT  : hmg_us_army_2015_ABCT_1SG
	{
		displayName= "First sergeant (ocp) ";
		weapons[] = {"rhs_weap_m4","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put","Laserdesignator"};
		backpack = "tf_rt1523g_black";
	};
	
	class hmg_us_army_2015_ABCT_FWD_SIG_SPT_NCO_rifle  : hmg_us_army_2015_ABCT_FWD_SIG_SPT_NCO
	{
		displayName= "Forward signal NCO (ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools","ItemcTabHCam"};
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemcTab","ItemMap"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemcTab","ItemMap"};
		weapons[] = {"rhs_weap_m4","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put","Laserdesignator"};
		Backpack = "B_rhsusf_B_BACKPACK";
	};
	
	class hmg_us_army_2015_ABCT_MASTER_GUNNER : hmg_us_army_2015_ABCT_MASTER_GNR
	{
		displayName= "Master Gunner (ocp) ";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemAndroid"};
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
	
	class hmg_us_army_2015_ABCT_EXEC_OFF : hmg_us_army_2015_ABCT_PLT_SGT
	{
		displayName= "EXEC Officer (ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","ItemcTab","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
		weapons[] = {"rhs_weap_m4","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put","Laserdesignator"};
		backpack = "tf_rt1523g_black";
	};
	
	class hmg_us_army_2015_ABCT_Commander : hmg_us_army_2015_ABCT_EXEC_OFF
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