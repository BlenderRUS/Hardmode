//US army 2005 HBCT ucp
	// TANK COMPANY (XXI), TANK BN, (HBCT) TOE 17377F000   5/0/57//62 
	// номенклатура должностей:
	// для танкового взвода:
	// SGT 19K20 GNR/ASST TC 
	// SPC 19K10 CREWMAN 
	// PFC 19K10 LOADER 
	// SSG 19K30 TANK CDR 
	// SFC 19K40 PLT SGT 
	// 1LT 19B00 PLT LDR 
	// для управления танковой роты:
	// SP4 92Y1O ARMORER
	// SGT 92Y20 SUPPLY NCO 
	// SSG 19K30 MASTER GNR 
	// SGT 74D2O NBC NCO
	// SPC 19K10 DVR 
	// 1SG 19Z5M 1SG 
	// PFC 19K10 LOADER 
	// 1LT 19B00 XO 
	// CPT 19B00 Commander
	class hmg_us_army_ucp_2005_HBCT_GNR : rhsusf_army_ucp_rifleman_1stcav 
	{
		displayName= "Gunner/ASST Tank Commander(ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "ItemMap"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "ItemMap"};
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
	
	class hmg_us_army_ucp_2005_HBCT_LOADER : hmg_us_army_ucp_2005_HBCT_GNR
	{
		displayName= "Loader (ucp)";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"};
		linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch"};
		weapons[] = {"rhs_weap_m4_grip","CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_grip","CUP_hgun_M9","Throw","Put"};
		magazines[] = 		{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"
			};
			respawnMagazines[] = 
			{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"
			};			
	};

	class hmg_us_army_ucp_2005_HBCT_CREWMAN : hmg_us_army_ucp_2005_HBCT_GNR
	{
		displayName= "Crewman (ucp)";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"};
		linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
	};

	class hmg_us_army_ucp_2005_HBCT_TANKCDR : hmg_us_army_ucp_2005_HBCT_LOADER
	{
		displayName= "Tank Commander(ucp)";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemMicroDAGR"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemMicroDAGR"};
		weapons[] = {"rhs_weap_m4_grip","CUP_hgun_M9","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4_grip","CUP_hgun_M9","Throw","Put","Binocular"};
	};
	
	class hmg_us_army_ucp_2005_HBCT_TPLTSGT  : hmg_us_army_ucp_2005_HBCT_TANKCDR
	{
		displayName= "Tank platoon Sergeant (ucp)";
	};

	class hmg_us_army_ucp_2005_HBCT_TPLTLDR : hmg_us_army_ucp_2005_HBCT_TANKCDR
	{
		displayName= "Tank platoon Leader (ucp)";
	};

	class hmg_us_army_ucp_2005_HBCT_ARMORER  : rhsusf_army_ucp_rifleman_1stcav 
	{
		displayName= "Armorer (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch","NVGoggles_INDEP"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_M203","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203","Throw","Put"};
		magazines[] = 		{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red"
		};
		respawnMagazines[] = 
		{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red"
		};
		Backpack = "rhsusf_assault_eagleaiii_ucp_gp";
		engineer = 1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	
	class hmg_us_army_ucp_2005_HBCT_SUPPLY_NCO  : hmg_us_army_ucp_2005_HBCT_ARMORER
	{
		displayName= "Supply NCO (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_M203","Throw","Put","Binocular","RH_pas13ch"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203","Throw","Put","Binocular","RH_pas13ch"};
		linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemMicroDAGR"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemMicroDAGR"};
		Backpack = "rhsusf_assault_eagleaiii_ucp_gp";
	};
	
	class hmg_us_army_ucp_2005_HBCT_MASTER_GNR   : hmg_us_army_ucp_2005_HBCT_TANKCDR
	{
		displayName= "Tank CDR/Master Gunner (ucp) ";
		engineer = 1;
		icon="iconManEngineer";
		picture="pictureRepair";
		Backpack = "rhsusf_assault_eagleaiii_ucp_ENG";
	};
	
	class hmg_us_army_ucp_2005_HBCT_NBC_NCO  : hmg_us_army_ucp_2005_HBCT_ARMORER
	{
		displayName= "NBC NCO (ucp) ";
		Backpack = "rhsusf_assault_eagleaiii_ucp_gp";
	};
	
	class hmg_us_army_ucp_2005_HBCT_1SG  : hmg_us_army_ucp_2005_HBCT_SUPPLY_NCO
	{
		displayName= "First sergeant (ucp) ";
	};


	class hmg_us_army_ucp_2005_HBCT_DRV : hmg_us_army_ucp_2005_HBCT_CREWMAN
	{
		displayName= "Driver m113 (ucp)";
	};
	
	class hmg_us_army_ucp_2005_HBCT_XO : hmg_us_army_ucp_2005_HBCT_TANKCDR
	{
		displayName= "Executive Officer(ucp)";
		weapons[] = {"CUP_hgun_M9","Throw","Put","Binocular"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","Binocular"};
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
	
	class hmg_us_army_ucp_2005_HBCT_COM : hmg_us_army_ucp_2005_HBCT_XO
	{
		displayName= "Tank Company commander(ucp)";
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
//1SG 11Z5M (FIRST SERGEANT)
//SP4 11B1O (CARRIER DRIVER)
class hmg_us_army_ucp_2005_HBCT_RIFLEMAN : rhsusf_army_ucp_rifleman_1stcav 
	{
		displayName= "Rifleman (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "rhsusf_ANPVS_14"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip","Throw","Put"};
		magazines[] = 		{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red"
		};
		respawnMagazines[] = 
		{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red"
		};
		Backpack = "rhsusf_assault_eagleaiii_ucp";
	};
	
class hmg_us_army_ucp_2005_HBCT_ANTIARMOR_SP : hmg_us_army_ucp_2005_HBCT_RIFLEMAN
	{
		displayName= "Antiarmor SP (ucp) ";
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip","Throw","Put","rhs_weap_fgm148"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip","Throw","Put","rhs_weap_fgm148"};
		magazines[] = 		{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"rhs_fgm148_magazine_AT"
		};
		respawnMagazines[] = 
		{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"rhs_fgm148_magazine_AT"
		};
		Backpack = "rhsusf_assault_eagleaiii_ucp";
	};
	
	class hmg_us_army_ucp_2005_HBCT_GRENADIER : hmg_us_army_ucp_2005_HBCT_RIFLEMAN
	{
		displayName= "Grenadier (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch", "rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch", "rhsusf_ANPVS_14"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_M203","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203","Throw","Put"};
		Backpack = "rhsusf_assault_eagleaiii_ucp_gp";
	};
	
	class hmg_us_army_ucp_2005_HBCT_AUTO_RIFLEMAN : hmg_us_army_ucp_2005_HBCT_RIFLEMAN
	{
		displayName= "Auto rifleman (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","AGM_SpareBarrel","RH_pas13cmg","rhsusf_acc_ELCAN"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_SAW","ItemCompass","ItemWatch", "rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_SAW","ItemCompass","ItemWatch", "rhsusf_ANPVS_14"};
		weapons[] = {"hlc_m249_pip1","Throw","Put"};
		respawnWeapons[] = {"hlc_m249_pip1","Throw","Put"};
		magazines[] = 		{
				"rhsusf_200Rnd_556x45_soft_pouch",
				"rhsusf_200Rnd_556x45_soft_pouch",
				"rhsusf_200Rnd_556x45_soft_pouch"
		};
		respawnMagazines[] = 
		{
				"rhsusf_200Rnd_556x45_soft_pouch",
				"rhsusf_200Rnd_556x45_soft_pouch",
				"rhsusf_200Rnd_556x45_soft_pouch"
		};
	};
	
	class hmg_us_army_ucp_2005_HBCT_TEAM_LEADER : hmg_us_army_ucp_2005_HBCT_RIFLEMAN
	{
		displayName= "Team leader (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMap"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMap"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip","Throw","Put","Binocular"};
	};
	
	class hmg_us_army_ucp_2005_HBCT_SQUAD_LEADER : hmg_us_army_ucp_2005_HBCT_TEAM_LEADER
	{
		displayName= "Squad leader (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMicroDAGR","ItemMap","itemradio"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMicroDAGR","ItemMap","itemradio"};
	};
	
	class hmg_us_army_ucp_2005_HBCT_PLT_SGT : hmg_us_army_ucp_2005_HBCT_SQUAD_LEADER
	{
		displayName= "Platoon sergeant (ucp) ";
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap", "itemradio","ItemMicroDAGR"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap", "itemradio","ItemMicroDAGR"};
		weapons[] = {"rhs_weap_m4_grip","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put","Laserdesignator"};
	};
	
	class hmg_us_army_ucp_2005_HBCT_PLT_LDR : hmg_us_army_ucp_2005_HBCT_PLT_SGT
	{
		displayName= "Platoon leader (ucp) ";
	};
	
	class hmg_us_army_ucp_2005_HBCT_SECTION_LEADER : hmg_us_army_ucp_2005_HBCT_TEAM_LEADER
	{
		displayName= "Section leader (ucp) ";
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip","Throw","Put"};
		linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMap"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMap"};
	};
	
	class hmg_us_army_ucp_2005_HBCT_GUNNER : hmg_us_army_ucp_2005_HBCT_RIFLEMAN
	{
		displayName= "IFV gunner (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
	};
	
	class hmg_us_army_ucp_2005_HBCT_IFV_DRIVER : hmg_us_army_ucp_2005_HBCT_GUNNER
	{
		displayName= "IFV driver (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4"};
        linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
	};
	
	class hmg_us_army_ucp_2005_HBCT_RATELO : hmg_us_army_ucp_2005_HBCT_RIFLEMAN
	{
		displayName= "Ratelo(ucp) ";
		linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
		weapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		Backpack = "tf_rt1523g_black";
	};
	
	class hmg_us_army_ucp_2005_HBCT_CARRIER_DRIVER : hmg_us_army_ucp_2005_HBCT_DRV
	{
		displayName= "Carrier driver (ucp)";
		weapons[] = {"rhs_weap_m16a4_carryhandle_M203","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203","Throw","Put"};
		magazines[] = 		{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red"
			};
			respawnMagazines[] = 
			{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red"
			};		
			Backpack = "rhsusf_assault_eagleaiii_ucp_gp";			
	};
	
	class hmg_us_army_ucp_2005_HBCT_FIRST_SERGEANT  : hmg_us_army_ucp_2005_HBCT_1SG
	{
		displayName= "First sergeant (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools","ItemcTab"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_M203","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203","Throw","Put","Laserdesignator"};
		backpack = "rhsusf_assault_eagleaiii_ucp_gp";
	};
	
	class hmg_us_army_ucp_2005_HBCT_MASTER_GUNNER : hmg_us_army_ucp_2005_HBCT_MASTER_GNR
	{
		displayName= "Master Gunner (ucp) ";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap"};
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
	
	class hmg_us_army_ucp_2005_HBCT_EXEC_OFF : hmg_us_army_ucp_2005_HBCT_PLT_SGT
	{
		displayName= "EXEC Officer (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemcTab"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemCompass","ItemWatch", "NVGoggles_INDEP","ItemMap","ItemcTab"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip","Throw","Put","Laserdesignator"};
	};
	
	class hmg_us_army_ucp_2005_HBCT_Commander : hmg_us_army_ucp_2005_HBCT_EXEC_OFF
	{
		displayName= "Rifle company Commander (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","ItemcTab","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
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
		backpack = "tf_rt1523g_black";
	};
	
	// отдельные юниты HHC, CAB, ABCT		
	// MED TREATMENT PLT		
//SGT 68W2O (EMERG CARE SGT)
//SP4 68W1O (AMB AIDE / DRIVER)
//SP4 68W1O (COMBAT MEDIC)

class hmg_us_army_ucp_2005_HBCT_EMERG_CARE_SGT : hmg_us_army_ucp_2005_HBCT_GNR
	{
		displayName= "Emergency Care Sergeant(ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Medic","ItemCompass","ItemWatch", "ItemMap","ItemMicroDAGR", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Medic","ItemCompass","ItemWatch", "ItemMap","ItemMicroDAGR", "NVGoggles_INDEP"};
		attendant = 1;
		icon = "iconManMedic";
		Backpack = "rhsusf_assault_eagleaiii_ucp_medic";
	};
class hmg_us_army_ucp_2005_HBCT_AMB_AIDE_DRIVER : hmg_us_army_ucp_2005_HBCT_EMERG_CARE_SGT
	{
		displayName= "Ambulance aide / Driver(ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Medic","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Medic","ItemCompass","ItemWatch", "NVGoggles_INDEP"};
		attendant = 1;
		icon = "iconManMedic";
		Backpack = "rhsusf_assault_eagleaiii_ucp_medic";
	};
class hmg_us_army_ucp_2005_HBCT_COMBAT_MEDIC : hmg_us_army_ucp_2005_HBCT_AMB_AIDE_DRIVER
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
class hmg_us_army_ucp_2005_HBCT_sniper_SQD_LDR : hmg_us_army_ucp_2005_HBCT_RIFLEMAN
	{
		displayName= "Sniper squad leader (ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","cw_item_notepad","AGM_CableTie","AGM_MapTools","ItemcTab"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14"};
		backpack = "tf_rt1523g_black";
	};
	class hmg_us_army_ucp_2005_HBCT_senior_sniper : hmg_us_army_ucp_2005_HBCT_RIFLEMAN
	{
		displayName= "Senior Sniper(ucp) ";
		items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMicroDAGR"};
		respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMicroDAGR"};
		weapons[] = {"CUP_hgun_M9","rhs_weap_m16a4_carryhandle_grip","Throw","Put","lerca_1200_black"};
		respawnWeapons[] = {"CUP_hgun_M9","rhs_weap_m16a4_carryhandle_grip","Throw","Put","lerca_1200_black"};
		magazines[] = 		{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"
			};
			respawnMagazines[] = 
			{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"
			};			
		backpack = "tf_rt1523g_black";
	};
	
	class hmg_us_army_ucp_2005_HBCT_SNIPER : hmg_us_army_ucp_2005_HBCT_RIFLEMAN
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

class us_army_ucp_2005_HBCT_sscout : rhsusf_army_ucp_rifleman_1stcav {
			icon = "iconMan";
			items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A","rhsusf_acc_compm4"};
			displayName = "Scout(ucp)";
        	linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch", "NVGoggles"};
			respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemCompass","ItemWatch", "NVGoggles"};
			weapons[] = {"rhs_weap_m4_m203S","Throw","Put","AGM_Vector"};
			respawnWeapons[] = {"rhs_weap_m4_m203S","Throw","Put","AGM_Vector"};
			magazines[] = 		{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red"
			};
			respawnMagazines[] = 
			{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red"
			};
			Backpack = "rhsusf_assault_eagleaiii_ucp_scout";
};

class us_army_ucp_2005_HBCT_sscout_driver : us_army_ucp_2005_HBCT_sscout {
			icon = "iconMan";
			displayName = "Scout driver(ucp)";
			items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A","rhsusf_acc_compm4","RH_pas13cl"};
        	linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles"};
			respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles"};
			weapons[] = {"rhs_weap_m4_grip","Throw","Put","AGM_Vector"};
			respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put","AGM_Vector"};
			Backpack = "rhsusf_assault_eagleaiii_ucp_scoutL";
};

class us_army_ucp_2005_HBCT_scout : us_army_ucp_2005_HBCT_sscout{
			icon = "iconManAT";
			displayName = "Scout Javelin (ucp)";
	        linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles" };
			respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles" };
			weapons[] = {"rhs_weap_m4_grip","Throw","Put","rhs_weap_fgm148","AGM_Vector"};
			respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put","rhs_weap_fgm148","AGM_Vector"};
			magazines[] = 		{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"rhs_fgm148_magazine_AT"
			};
			respawnMagazines[] = 
			{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"rhs_fgm148_magazine_AT"
			};
			Backpack = "rhsusf_assault_eagleaiii_ucp_scoutL";
};

class us_army_ucp_2005_HBCT_TLscout : us_army_ucp_2005_HBCT_sscout_driver{
			icon = "iconManLeader";
			displayName = "Scout team leader (ucp)";
			items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
			linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMap" };
			respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMap" };
			weapons[] = {"rhs_weap_m4_grip","Throw","Put","Laserdesignator"};
			respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put","Laserdesignator"};
};

class us_army_ucp_2005_HBCT_Lscout : us_army_ucp_2005_HBCT_TLscout {
			displayName = "Scout squad leader (ucp)";
			items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","cw_item_notepad","AGM_CableTie","AGM_MapTools","ItemcTab","RH_pas13ch"};
			linkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMicroDAGR","ItemMap"};
			respawnLinkedItems[] = {"G_Combat","rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Teamleader","ItemCompass","ItemWatch", "rhsusf_ANPVS_14","ItemMicroDAGR","ItemMap"};
};

class us_army_ucp_2005_HBCT_PLTSscout : us_army_ucp_2005_HBCT_Lscout {
			displayName = "Scout platoon sergeant (ucp)";
};

class us_army_ucp_2005_HBCT_PLTLscout : us_army_ucp_2005_HBCT_Lscout {
			icon = "iconMan";
			displayName = "Scout platoon leader (ucp)";
};

class hmg_us_army_ucp_2005_HBCT_CFV_GNR : hmg_us_army_ucp_2005_HBCT_GNR
	{
		displayName= "CFV Gunner(ucp) ";
	};
	
class hmg_us_army_ucp_2005_HBCT_CFV_CREWMAN : hmg_us_army_ucp_2005_HBCT_CREWMAN
	{
		displayName= "CFV Crewman (ucp)";
	};
class hmg_us_army_ucp_2005_HBCT_SECTION_LDR : hmg_us_army_ucp_2005_HBCT_GNR
	{
		displayName= "Section leader (ucp) ";
		linkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "ItemMap" };
		respawnLinkedItems[] = {"G_Combat","rhsusf_cvc_green_helmet","rhsusf_iotv_ucp","ItemCompass","ItemWatch", "ItemMap" };
	};	