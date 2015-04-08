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
	class hmg_us_army_2015_ABCT_GNR : rhsusf_army_ocp_rifleman
	{
		displayName= "Gunner/ASST Tank Commander(ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "ItemMap"};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "ItemMap"};
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
	};
	
	class hmg_us_army_2015_ABCT_LOADER : hmg_us_army_2015_ABCT_GNR
	{
		displayName= "Loader (ocp)";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage"};
		linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch","tf_anprc154"};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch","tf_anprc154"};
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
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools","ItemAndroid"};
		linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","Binocular","ItemMap"};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp","ItemCompass","ItemWatch", "NVGoggles_INDEP","Binocular","ItemMap"};
	};
	
	class hmg_us_army_2015_ABCT_TPLTSGT  : hmg_us_army_2015_ABCT_TANKCDR
	{
		displayName= "Tank platoon Sergeant (ocp)";
	};

	class hmg_us_army_2015_ABCT_TPLTLDR : hmg_us_army_2015_ABCT_TANKCDR
	{
		displayName= "Tank platoon Leader (ocp)";
	};

	class hmg_us_army_2015_ABCT_SUPPLY_SP  : rhsusf_army_ocp_rifleman
	{
		displayName= "Supply SP (ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage"};
        linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch","ItemMap","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch","ItemMap","NVGoggles_INDEP"};
		weapons[] = {"rhs_weap_m4_m320","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put"};
		magazines[] = 		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE"
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
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE"
		};
	};
	
	class hmg_us_army_2015_ABCT_SUPPLY_NCO  : hmg_us_army_2015_ABCT_SUPPLY_SP
	{
		displayName= "Supply NCO (ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools","ItemAndroid"};
		weapons[] = {"rhs_weap_m4_m320","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put","Binocular"};
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","Binocular","ItemMap"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","Binocular","ItemMap"};
	};
	
	class hmg_us_army_2015_ABCT_MASTER_GNR   : hmg_us_army_2015_ABCT_SUPPLY_NCO
	{
		displayName= "Master Gunner (ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools","ItemAndroid"};
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
	};
	
	class hmg_us_army_2015_ABCT_FWD_SIG_SPT_NCO  : hmg_us_army_2015_ABCT_SUPPLY_SP
	{
		displayName= "Forward signal NCO (ocp) ";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools","ItemcTab"};
		weapons[] = {"rhs_weap_m4_m320","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put","Binocular"};
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","Binocular","ItemMap"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemCompass","ItemWatch", "NVGoggles_INDEP","Binocular","ItemMap"};
	};

	
