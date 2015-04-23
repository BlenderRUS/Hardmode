
	class hmg_infantry_tank_s_base : SoldierEB
	{
		scope = 0;

		Author_Macro
		_generalMacro = "hmg_infantry_tank_s_base";
		expansion = 1;

		side = 0;
		faction = "group_ru_tank_surp";
		vehicleClass = "rhs_vehclass_infantry";
		displayName= "Стрелок (базовый)";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";

		//portrait = "\rhsafrf\addons\rhs_infantry\data\portraits\combarhead_rhs_common_soldier_ca";
		portrait = "";
		picture = "";
		icon = "iconMan";

		accuracy = 2.3;
		sensitivity = 3;
		threat[] = {1,0.1,0.1};
		camouflage = 1.4;
		minFireTime = 7;
		canCarryBackPack = 1;

		model = "\rhsafrf\addons\rhs_infantry\rhs_msv_base.p3d";

		modelSides[] = {0,3};
		nakedUniform = "U_BasicBody";
		uniformClass = "rhs_uniform_emr_patchless";

		class Wounds
		{
			tex[] = {};
			mat[] = {
				"rhsafrf\addons\rhs_infantry\data\flora.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_w1.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_w2.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_bz.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_bz_w1.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_bz_w2.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_vydra.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_vydra_w1.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_vydra_w2.rvmat",
				"rhsafrf\addons\rhs_infantry\data\6b23.rvmat",
				"rhsafrf\addons\rhs_infantry\data\6b23_w1.rvmat",
				"rhsafrf\addons\rhs_infantry\data\6b23_w2.rvmat"};
		};

		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = "0.3*2.5";
			};
			class HitBody: HitBody
			{
				armor = "0.7*10";
			};
			class HitHands: HitHands
			{
				armor = "0.9*5";
			};
			class HitLegs: HitLegs
			{
				armor = "0.9*5";
			};
		};
		selectionbodywound = "body_injury";

		selectionlarmwound = "l_arm_injury";
		selectionlarmwound1 = "l_arm_injury";
		selectionlarmwound2 = "hl";
		selectionllegwound = "l_leg_injury";
		selectionllegwound1 = "l_leg_injury";
		selectionllegwound2 = "hl";
		selectionrarmwound = "r_arm_injury";
		selectionrarmwound1 = "r_arm_injury";
		selectionrarmwound2 = "hl";
		selectionrlegwound = "r_leg_injury";
		selectionrlegwound1 = "r_leg_injury";
		selectionrlegwound2 = "hl";

		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Googles: UniformSlotInfo
				{
					slotType = 603;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};


		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5"
		};

		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};

		linkedItems[] = {"rhs_6b23_digi_rifleman","rhs_6b28","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		respawnLinkedItems[] = {"rhs_6b23_digi_rifleman","rhs_6b28","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		backpack = "rhs_assault_umbts_empty";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};

		cost = 100000;
	};

	class hmg_tank_s_rifleman : hmg_infantry_tank_s_base
	{
		_generalMacro = "hmg_tank_s_rifleman";
		scope = 2;
		Author_Macro
		displayName = "Стрелок АК-74М (ЕМР)";
	};
	
	class hmg_tank_s_efreitor : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_efreitor";
		Author_Macro
		displayName= "Старший стрелок АК-74М ГП-25 (ЕМР)";
		weapons[] = {"rhs_weap_ak74m_gp25_dtk","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"rhs_weap_ak74m_gp25_dtk","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b28","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b28","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		backpack = "hmg_rif_sidor";
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_VOG25P",
			"rhs_VOG25P",
			"rhs_VOG25P",
			"rhs_VOG25P",
			"rhs_VOG25P",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5"
			
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_VOG25P",
			"rhs_VOG25P",
			"rhs_VOG25P",
			"rhs_VOG25P",
			"rhs_VOG25P",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5"
			
		};

	};
	
	class hmg_tank_s_gp : hmg_tank_s_efreitor
	{
		_generalMacro = "hmg_tank_s_gp";
		Author_Macro
		displayName= "Cтрелок АК-74М ГП-25 (ЕМР)";
	};
	
	class hmg_tank_s_ar : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_ar";
		Author_Macro
		displayName= "Пулеметчик (ЕМР)";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "machinegunner";
		textPlural = "machinegunners";
		nameSound = "veh_infantry_MG_s";
		icon = "iconManMG";
		threat[] = {1,0.1,0.3};

		weapons[] = {"hlc_rifle_rpk74n","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk74n","Throw","Put"};
		magazines[] =
		{
			"rhs_45Rnd_545X39_7N10_AK",
			"rhs_45Rnd_545X39_7N10_AK",
			"rhs_45Rnd_545X39_7N10_AK",
			"rhs_45Rnd_545X39_AK_Green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5"
		};
		respawnMagazines[] =
		{
			"rhs_45Rnd_545X39_7N10_AK",
			"rhs_45Rnd_545X39_7N10_AK",
			"rhs_45Rnd_545X39_7N10_AK",
			"rhs_45Rnd_545X39_AK_Green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5"
		};
		backpack="hmg_rif_sidorAR";
	};
	
	class hmg_tank_s_machinegunner : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_machinegunner";
		Author_Macro
		displayName= "Наводчик ПКП (ЕМР)";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "machinegunner";
		textPlural = "machinegunners";
		nameSound = "veh_infantry_MG_s";
		icon = "iconManMG";
		threat[] = {1,0.1,0.3};
		linkedItems[] = {"rhs_6b23_digi_rifleman","rhs_6b28_bala","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		respawnLinkedItems[] = {"rhs_6b23_digi_rifleman","rhs_6b28_bala","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		Items[] = {"FirstAidKit","rhs_acc_1pn93_1"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_1pn93_1"};
		weapons[] = {"rhs_weap_pkp","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkp","Throw","Put"};
		magazines[] =
		{
			"rhs_100Rnd_762x54mmR_green",
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5"
		};
		respawnMagazines[] =
		{
			"rhs_100Rnd_762x54mmR_green",
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5"
		};
		backpack="hmg_rif_sidorMG";
		secondaryAmmoCoef = 0.5;
	};

	class hmg_tank_s_machinegunner_assistant : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_machinegunner_assistant";
		Author_Macro
		displayName= "Номер расчета ПКП (ЕМР)";
        linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_scarf","rhs_6b28","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_scarf","rhs_6b28","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		backpack="rhs_sidorMG";
	};

	class hmg_tank_s_at : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_at";
		Author_Macro
		displayName= "Гранатометчик РПГ-7В2";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "AT soldier";
		textPlural = "AT soldiers";
		nameSound = "veh_infantry_AT_s";
		threat[] = {1,1,0.8};
		icon="iconManAT";
		Items[] = {"FirstAidKit", "rhs_acc_1pn93_2"};
		respawnItems[] = {"FirstAidKit", "rhs_acc_1pn93_2"};
		linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b28","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b28","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_rpg7_pgo"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_rpg7_pgo"};
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5"
			
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5"
			
		};
		backpack="rhs_rpg1";

	};
	class hmg_tank_s_aa : hmg_tank_s_at
	{
		_generalMacro = "hmg_tank_s_aa";
		Author_Macro
		displayName= "Стрелок ПЗРК (ЕМР)";

		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_igla"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","rhs_weap_igla"};

		magazines[] = { "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9k38_rocket"};
		respawnMagazines[] = { "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9k38_rocket"};

		backpack="rhs_sidor";

	};

	class hmg_tank_s_strelok_rpg_assist : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_strelok_rpg_assist";
		Author_Macro
		displayName= "Стрелок - пом. гранатометчика (ЕМР)";
		linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b28","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b28","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		backpack="rhs_rpg2";

	};

	class hmg_tank_s_marksman : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_marksman";
		Author_Macro
		displayName= "Снайпер СВД (ЕМР)";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "sniper";
		textPlural = "snipers";
		nameSound = "veh_infantry_sniper_s";
		cost = 150000;
		sensitivity = 3.3;

		weapons[] = {"rhs_weap_svds","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_svds","Throw","Put","Binocular"};
		Items[] = {"FirstAidKit","rhs_acc_1pn93_1","rhs_acc_pso1m2"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_1pn93_1","rhs_acc_pso1m2"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1"};

	};

	class hmg_tank_s_officer_armored : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_officer_armored";
		Author_Macro
		displayName= "Офицер (базовый)";


		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_officer_s"};
				speechPlural[] = {"veh_infantry_officer_p"};
			};
		};
		textSingular = "officer";
		textPlural = "officers";
		nameSound = "veh_infantry_officer_s";
		icon = "iconManOfficer";
		camouflage = 1.6;
		sensitivity = 3;

		Items[] = {"FirstAidKit","rhs_acc_1pn93_1","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_1pn93_1","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_pya","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_pya","Binocular"};
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgd5"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgd5"
		};

        linkedItems[] = {"rhs_fieldcap_helm_digi","rhs_6b23_digi_crewofficer","ItemMap","ItemGPS","ItemCompass","ItemWatch","G_Combat","ItemRadio"};
		respawnLinkedItems[] = {"rhs_fieldcap_helm_digi","rhs_6b23_digi_crewofficer","ItemMap","ItemGPS","ItemCompass","ItemWatch","G_Combat","ItemRadio"};
		backpack = "hmg_rif_sidor";
	};

	class hmg_tank_s_officer : hmg_tank_s_officer_armored
	{
		_generalMacro = "hmg_tank_s_officer";
		Author_Macro
		displayName= "Командир роты МС (ЕМР)";
		backpack = "tf_mr3000_rhs";
	};
	
	class hmg_tank_s_st_tech_msr : hmg_tank_s_officer_armored
	{
		_generalMacro = "hmg_tank_s_st_tech_msr";
		Author_Macro
		displayName= "Старший техник роты (ЕМР)";
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_pya"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_pya"};
		linkedItems[] = {"rhs_6b28","rhs_6b23_digi_engineer","ItemCompass","ItemWatch","ItemMap","G_Combat","tf_pnr1000a", "tf_microdagr"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_engineer","ItemCompass","ItemWatch","ItemMap","G_Combat","tf_pnr1000a", "tf_microdagr"};
		engineer = 1;
		backpack="rhs_assault_umbts_engineer";
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	
	class hmg_tank_s_strsh : hmg_tank_s_officer_armored
	{
		_generalMacro = "hmg_tank_s_strsh";
		Author_Macro
		displayName= "Старшина роты (ЕМР)";
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Binocular","rhs_weap_pya"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Binocular","rhs_weap_pya"};
		linkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92_headset_mapcase","ItemCompass","ItemWatch","G_Combat","ItemMap","tf_pnr1000a", "tf_microdagr"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92_headset_mapcase","ItemCompass","ItemWatch","G_Combat","ItemMap","tf_pnr1000a", "tf_microdagr"};
		backpack="FARA_PV_RUCK";
	};	
	
	class hmg_tank_s_ko_r : hmg_tank_s_officer_armored
	{
		_generalMacro = "hmg_tank_s_ko_r";
		Author_Macro
		displayName= "Командир взвода (ЕМР)";
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Binocular","rhs_weap_pya"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Binocular","rhs_weap_pya"};
		linkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92_radio","ItemCompass","ItemMap","ItemWatch","G_Combat","ItemRadio","AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92_radio","ItemCompass","ItemMap","ItemWatch","G_Combat","ItemRadio","AGM_NVG_Gen2"};
		backpack = "tf_mr3000_rhs";
	};	
		
	class hmg_tank_s_sergeant : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_sergeant";
		Author_Macro
		displayName= "Командир отделения (ЕМР)";
		Items[] = {"FirstAidKit","rhs_acc_1pn93_1","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_1pn93_1","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
		icon = "iconManLeader";
		cost = 450000;
		sensitivity = 3.2;

		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Binocular"};
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5"
		};
		backpack = "hmg_rif_sidor";
        linkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","G_Combat","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","G_Combat","ItemRadio"};
	};
	class hmg_tank_sergeant_zkvo : hmg_tank_s_sergeant
	{
		_generalMacro = "hmg_tank_sergeant_zkvo";
		Author_Macro
		displayName= "Заместитель командира взвода (ЕМР)";
	};
	class hmg_tank_s_sergeant_kmb : hmg_tank_s_sergeant
	{
		_generalMacro = "hmg_tank_s_sergeant_kmb";
		Author_Macro
		displayName= "КМБ - Командир отделения (ЕМР)";
		weapons[] = {"rhs_weap_ak74m_gp25_dtk","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25_dtk","Throw","Put","Binocular"};
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_VOG25P",
			"rhs_VOG25P",
			"rhs_VOG25P",
			"rhs_VOG25P",
			"rhs_VOG25P",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_VOG25P",
			"rhs_VOG25P",
			"rhs_VOG25P",
			"rhs_VOG25P",
			"rhs_VOG25P",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5"
		};
		backpack = "hmg_rif_sidor";
	};
	class hmg_tank_s_sergeant_pto : hmg_tank_s_sergeant
	{
		_generalMacro = "hmg_tank_s_sergeant_pto";
		Author_Macro
		displayName= "Командир противотанкового отделения (ЕМР)";
	};
	class hmg_tank_s_ktank : hmg_tank_s_officer_armored
	{
		_generalMacro = "hmg_tank_s_ktank";
		Author_Macro
		displayName= "Командир МСВ (ЕМР)";

        linkedItems[] = {"rhs_6b28","rhs_6b23_digi_crewofficer","ItemMap","ItemCompass","ItemWatch","G_Combat","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_crewofficer","ItemMap","ItemCompass","ItemWatch","G_Combat","ItemRadio"};
		backpack = "tf_mr3000_rhs";
	};

	class hmg_tank_s_engineer_st : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_engineer_st";
		Author_Macro
		displayName= "Старшина ВМТО (ЕМР)";
		Items[] = {"FirstAidKit","rhs_acc_1pn93_1","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_1pn93_1","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
        linkedItems[] = {"rhs_6b28","rhs_6b23_digi_engineer","ItemMap","ItemCompass","ItemWatch","G_Combat","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_engineer","ItemMap","ItemCompass","ItemWatch","G_Combat","ItemRadio"};

		engineer=1;
		backpack = "hmg_rif_sidor";
		icon="iconManEngineer";
		picture="pictureRepair";

	};
	
	class hmg_tank_s_engineer : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_engineer";
		Author_Macro
		displayName= "Стрелок ВМТО (ЕМР)";


        linkedItems[] = {"rhs_6b28","rhs_6b23_digi_engineer","ItemCompass","ItemWatch","G_Combat","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_engineer","ItemCompass","ItemWatch","G_Combat","ItemRadio"};

		engineer=1;
		backpack = "hmg_rif_sidor";
		icon="iconManEngineer";
		picture="pictureRepair";

	};
	class hmg_tank_s_driver_msr : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_driver_msr";
		Author_Macro
		displayName= "Механик-водитель (ЕМР)";
		
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk

        linkedItems[] = {"rhs_tsh4","rhs_6b23_digi_rifleman","ItemCompass","G_Combat","tf_pnr1000a", "tf_microdagr"};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_6b23_digi_rifleman","ItemCompass","G_Combat","tf_pnr1000a", "tf_microdagr"};
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5"
		};
		backpack = "hmg_rif_sidor";
	};
	
	class hmg_tank_s_driver_st : hmg_tank_s_driver_msr
	{
		_generalMacro = "hmg_tank_s_driver_st";
		Author_Macro
		displayName= "Ст. механик-водитель (ЕМР)";
		Items[] = {"FirstAidKit","rhs_acc_1pn93_1","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_1pn93_1","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
        linkedItems[] = {"rhs_tsh4","rhs_6b23_digi_rifleman","ItemCompass","G_Combat","tf_pnr1000a", "tf_microdagr","ItemMap"};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_6b23_digi_rifleman","ItemCompass","G_Combat","tf_pnr1000a", "tf_microdagr","ItemMap"};

		engineer = 1;
		backpack = "hmg_rif_sidorEng";
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	
	class hmg_tank_s_gunner_zkmb: hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_gunner_zkmb";
		Author_Macro
		displayName= "ЗКМБ-наводчик оператор БМП (ЕМР)";
		linkedItems[] = {"rhs_tsh4","rhs_6b23_digi_rifleman","ItemCompass","G_Combat","tf_pnr1000a", "tf_microdagr"};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_6b23_digi_rifleman","ItemCompass","G_Combat","tf_pnr1000a", "tf_microdagr"};
		backpack = "hmg_rif_sidor";
	};
	
	class hmg_tank_s_rifleman_radist : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_rifleman_radist";
		Author_Macro
		displayName= "Радиотелефонист (ЕМР)";
		backpack = "tf_mr6000l";
	};
	class hmg_tank_s_rifleman_sbr : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_rifleman_sbr";
		Author_Macro
		displayName= "Оператор СБР (ЕМР)";
		Items[] = {"FirstAidKit","VTN_FARA_CABLE"};
		RespawnItems[] = {"FirstAidKit","VTN_FARA_CABLE"};
		backpack = "FARA_PV_PULT_RUCK";
	};
	class hmg_tank_s_ags_s : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_ags_s";
		Author_Macro
		displayName= "Старший наводчик АГС-30 (ЕМР)";
		Items[] = {"FirstAidKit","cw_item_tableags"};
		RespawnItems[] = {"FirstAidKit","cw_item_tableags"};
		backpack="RDS_AGS30_Gun_Bag_CSAT";
	};
	class hmg_tank_s_ags_n : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_ags_n";
		Author_Macro
		displayName= "Номер расчета АГС-30 (ЕМР)";
		backpack="RDS_AGS30_Tripod_Bag_CSAT";
	};
		class hmg_tank_s_metis_s : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_metis_s";
		Author_Macro
		displayName= "Старший оператор (ЕМР)";
				
		weapons[] = {"hlc_rifle_aks74u","Throw","Put","MetisM1"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put","MetisM1"}; //rhs_weap_ak74m_folded_dtk

		backpack="hmg_metis_ruck2";
	};
	class hmg_tank_s_metis_n : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_metis_n";
		Author_Macro
		displayName= "Оператор (ЕМР)";
		backpack="hmg_metis_ruck";
	};
		/// отседова пошли танкисты, рации ублюдкам выданы пока не будет запилен интерком завязанный на шлем
	class hmg_tank_s_driver : hmg_tank_s_driver_msr
	{
		_generalMacro = "hmg_tank_s_driver";
		Author_Macro
		displayName= "Механик-водитель (ЕМР)";

        linkedItems[] = {"rhs_tsh4","ItemCompass","ItemWatch","tf_pnr1000a"};
		respawnLinkedItems[] = {"rhs_tsh4","ItemCompass","ItemWatch","tf_pnr1000a"};
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK"
		};
		backpack="rhs_assault_umbts_empty";
	};
	class hmg_tank_s_gunner: hmg_tank_s_driver
	{
		_generalMacro = "hmg_tank_s_gunner";
		Author_Macro
		displayName= "Наводчик (ЕМР)";
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put"};
	};
	class hmg_tank_s_kommander : hmg_tank_s_driver
	{
		_generalMacro = "hmg_tank_s_kommander";
		Author_Macro
		displayName= "Командир танка (ЕМР)";
		Items[] = {"FirstAidKit","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
		RespawnItems[] = {"FirstAidKit","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
		weapons[] = {"hlc_rifle_aks74u","rhs_weap_pya","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","rhs_weap_pya","Throw","Put"}; //rhs_weap_ak74m_folded_dtk

        linkedItems[] = {"rhs_tsh4","rhs_vest_commander","ItemCompass","ItemWatch","ItemMap","tf_pnr1000a"};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_vest_commander","ItemCompass","ItemWatch","ItemMap","tf_pnr1000a"};
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17"
		};
	};
	class hmg_tank_s_pltkommander : hmg_tank_s_kommander
	{
		_generalMacro = "hmg_tank_s_pltkommander";
		Author_Macro
		displayName= "Командир танка/Командир танкового взвода (ЕМР)";
		
		weapons[] = {"hlc_rifle_aks74u","rhs_weap_pya","Binocular","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","rhs_weap_pya","Binocular","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
	};
	class hmg_tank_s_compkommander : hmg_tank_s_pltkommander
	{
		_generalMacro = "hmg_tank_s_compkommander";
		Author_Macro
		displayName= "Командир танка/Командир танковой роты (ЕМР)";
	};
	class hmg_tank_s_st_tech : hmg_tank_s_st_tech_msr
	{
		_generalMacro = "hmg_tank_s_st_tech";
		Author_Macro
		displayName= "Старший техник танковой роты (ЕМР)";
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_pya"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_pya"};
		linkedItems[] = {"rhs_tsh4","ItemCompass","ItemWatch","ItemMap","tf_pnr1000a"};
		respawnLinkedItems[] = {"rhs_tsh4","ItemCompass","ItemWatch","ItemMap","tf_pnr1000a"};
		engineer = 1;
		backpack="rhs_assault_umbts_engineer";
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	// отсюда пошел ГСАБатр мотострелкового батальона, за основу взят штат № 5/060
	// номенклатура:
	// Командир батареи
	// старшина батарей
	// Командир взвода управления
	// Командир отделения / оператор-топогеодезист
	// Разведчик-дальномерщик
	// Командир взвода/старший офицер батареи
	// Водитель-радиотелефонист
	// Водитель-гранатометчик
	// Оператор-топогеодезист
	// ЗамКомВзвода - Командир САУ
	// Командир САУ
	
	// отсюда должности огневого взвода
	
	class hmg_tank_s_strsh_gau : hmg_tank_s_officer_armored
	{
		_generalMacro = "hmg_tank_s_strsh_gau";
		Author_Macro
		displayName= "Старшина ГСАБатр (ЕМР)";
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Binocular","rhs_weap_pya"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Binocular","rhs_weap_pya"};
		linkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92_headset_mapcase","ItemCompass","ItemWatch","G_Combat","ItemMap","tf_pnr1000a", "tf_microdagr"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92_headset_mapcase","ItemCompass","ItemWatch","G_Combat","ItemMap","tf_pnr1000a", "tf_microdagr"};
	};	
	class hmg_tank_s_voditel : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_voditel";
		scope = 2;
		Author_Macro
		displayName = "Водитель (ЕМР)";
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
	};
	
	class hmg_tank_s_nomer_rascheta: hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_nomer_rascheta";
		Author_Macro
		displayName= "Номер расчета (ЕМР)";
        linkedItems[] = {"rhs_6b28","rhs_6b23_digi_rifleman","ItemCompass","ItemWatch","G_Combat"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_rifleman","ItemCompass","ItemWatch","G_Combat"};
	};	
	
	class hmg_tank_s_master_nomer_rascheta: hmg_tank_s_nomer_rascheta
	{
		_generalMacro = "hmg_tank_s_master_nomer_rascheta";
		Author_Macro
		displayName= "Мастер - Номер расчета (ЕМР)";
		engineer = 1;
		backpack="rhs_assault_umbts_engineer";
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	
	class hmg_tank_s_starshii_navod4ik: hmg_tank_s_nomer_rascheta
	{
		_generalMacro = "hmg_tank_s_starshii_navod4ik";
		Author_Macro
		displayName= "Старший наводчик (ЕМР)";
		backpack="RDS_Podnos_Bipod_Bag_CSAT";
	};	
	
	class hmg_tank_s_komandir_minometa: hmg_tank_s_strsh
	{
		_generalMacro = "hmg_tank_s_komandir_minometa";
		Author_Macro
		displayName= "Командир миномета (ЕМР)";

		Items[] = {"FirstAidKit","cw_item_table82mm","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
		RespawnItems[] = {"FirstAidKit","cw_item_table82mm","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
		backpack="RDS_Podnos_Gun_Bag_CSAT";
	};	
	
	class hmg_tank_s_zkv_komandir_minometa: hmg_tank_s_komandir_minometa
	{
		_generalMacro = "hmg_tank_s_zkv_komandir_minometa";
		Author_Macro
		displayName= "ЗамКом взвода - Командир миномета (ЕМР)";
	};	
	
	class hmg_tank_s_voditel_rpg : hmg_tank_s_at
	{
		_generalMacro = "hmg_tank_s_voditel_rpg";
		scope = 2;
		Author_Macro
		displayName = "Водитель (ЕМР)";
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
	};
	
	class hmg_tank_s_komvzvoda_sob : hmg_tank_s_officer_armored
	{
		_generalMacro = "hmg_tank_s_komvzvoda_ognevogo";
		Author_Macro
		displayName= "Командир  взвода - СОБ (ЕМР)";
		Items[] = {"FirstAidKit","cw_item_table82mm","cw_item_notepad","AGM_MapTools","ItemSMGR"};
		RespawnItems[] = {"FirstAidKit","cw_item_table82mm","cw_item_notepad","AGM_MapTools","ItemSMGR"};
	};

	//отсюда должности отделения связи
	class hmg_tank_s_radist : hmg_tank_s_rifleman_radist
	{
		_generalMacro = "hmg_tank_s_radist";
		Author_Macro
		displayName= "Радиотелефонист (ЕМР)";
		backpack = "tf_mr3000_rhs";
	};
	class hmg_tank_s_st_radist : hmg_tank_s_sergeant
	{
		_generalMacro = "hmg_tank_s_st_radist";
		Author_Macro
		displayName= "Старший радиотелефонист (ЕМР)";
		backpack = "tf_mr3000_rhs";
	};
	class hmg_tank_s_voditel_radist : hmg_tank_s_st_radist
	{
		_generalMacro = "hmg_tank_s_voditel_radist";
		Author_Macro
		displayName= "Водитель-радиотелефграфис (ЕМР)";
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
	};
	// отсюда отделение артиллерийской разведки
	class hmg_tank_s_dalnomershik: hmg_tank_s_efreitor
	{
		_generalMacro = "hmg_tank_s_dalnomershik";
		Author_Macro
		displayName= "Разведчик-дальномерщик (ЕМР)";
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Rangefinder"};
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b28","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b28","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","AGM_NVG_Gen2"};
	};	
	
	class hmg_tank_s_komot_art_recon_squad : hmg_tank_s_sergeant
	{
		_generalMacro = "hmg_tank_s_komot_art_recon_squad";
		Author_Macro
		displayName= "Оператор-топогеодезист (ЕМР)";
		Items[] = {"FirstAidKit","ItemSMGR"};
		RespawnItems[] = {"FirstAidKit","ItemSMGR"};
	};
	
	class hmg_tank_s_komot_podvoza : hmg_tank_s_sergeant
	{
		_generalMacro = "hmg_tank_s_komot_podvoza";
		Author_Macro
		displayName= "Командир вычислитель (ЕМР)";
		Items[] = {"FirstAidKit","cw_item_table82mm","cw_item_notepad","AGM_MapTools","ItemSMGR"};
		RespawnItems[] = {"FirstAidKit","cw_item_table82mm","cw_item_notepad","AGM_MapTools","ItemSMGR"};
	};
	
	class hmg_tank_s_starshii_vi4islitel : hmg_tank_s_komot_art_recon_squad
	{
		_generalMacro = "hmg_tank_s_starshii_vi4islitel";
		Author_Macro
		displayName= "Старший вычислитель (ЕМР)";
		Items[] = {"FirstAidKit","cw_item_table82mm","cw_item_notepad","AGM_MapTools","ItemSMGR"};
		RespawnItems[] = {"FirstAidKit","cw_item_table82mm","cw_item_notepad","AGM_MapTools","ItemSMGR"};
	};
	
	class hmg_tank_s_komvzvoda_upravlenia : hmg_tank_s_officer_armored
	{
		_generalMacro = "hmg_tank_s_komvzvoda_upravlenia";
		Author_Macro
		displayName= "Командир взвода управления (ЕМР)";
		Items[] = {"FirstAidKit","cw_item_table82mm","cw_item_notepad","AGM_MapTools","ItemSMGR"};
		RespawnItems[] = {"FirstAidKit","cw_item_table82mm","cw_item_notepad","AGM_MapTools","ItemSMGR"};
	};
	
	class hmg_tank_s_komandir_minbatr : hmg_tank_s_officer
	{
		_generalMacro = "hmg_tank_s_komandir_minbatr";
		Author_Macro
		displayName= "Командир батареи (ЕМР)";
		Items[] = {"FirstAidKit","cw_item_table82mm","cw_item_notepad","AGM_MapTools","ItemSMGR"};
		RespawnItems[] = {"FirstAidKit","cw_item_table82mm","cw_item_notepad","AGM_MapTools","ItemSMGR"};
	};
	class hmg_tank_s_sau_kommander : hmg_tank_s_kommander
	{
		_generalMacro = "hmg_tank_s_sau_kommander";
		Author_Macro
		displayName= "Командир САУ (ЕМР)";
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Binocular"};
	};
	// медицинский взвод батальона 
	// Командир медицинского взвода
	// фельдшер
	// Заместитель командира взвода - санитарный инструктор
	// Командир отделения - санитарный инструктор
	// Санитарный инструктор
	// Санитар
	// Водитель - санитар
	// Механик-водитель - санитар
	
	class hmg_tank_s_medic : hmg_tank_s_rifleman
	{
		_generalMacro = "hmg_tank_s_medic";
		Author_Macro
		displayName= "Санитар (ЕМР)";
		attendant =1;
		icon="iconManMedic";
		backpack="rhs_assault_umbts_medic";
		picture="pictureHeal";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "medic";
		textPlural = "medics";
		nameSound = "veh_infantry_medic_s";

        linkedItems[] = {"rhs_6b28","rhs_6b23_digi_medic","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_medic","ItemCompass","ItemWatch"};
	};
	
	class hmg_tank_s_medic_dr : hmg_tank_s_medic
	{
		_generalMacro = "hmg_tank_s_medic_dr";
		Author_Macro
		attendant =1;
		backpack="rhs_assault_umbts_medic";
		icon="iconManMedic";
		displayName= "Механик-водитель - санитар (ЕМР)";
        linkedItems[] = {"rhs_tsh4","rhs_6b23_digi_medic","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_6b23_digi_medic","ItemCompass","ItemWatch"};		
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
	};
	
	class hmg_tank_s_medic_st : hmg_tank_s_sergeant
	{
		_generalMacro = "hmg_tank_s_medic_st";
		Author_Macro
		attendant =1;
		icon="iconManMedic";
		displayName= "КО - сан. инструктор (ЕМР)";
		linkedItems[] = {"rhs_6b28","rhs_6b23_digi_medic","ItemCompass","ItemWatch","ItemMap"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_medic","ItemCompass","ItemWatch","ItemMap"};
		backpack="rhs_assault_umbts_medic";
	};
	
	class hmg_tank_s_san_instruktor : hmg_tank_s_medic_st
	{
		_generalMacro = "hmg_tank_s_san_instruktor";
		Author_Macro
		attendant =1;
		icon="iconManMedic";
		displayName= "Сан. инструктор (ЕМР)";
	};
	
	class hmg_tank_s_zkv_san_instruktor : hmg_tank_s_medic_st
	{
		_generalMacro = "hmg_tank_s_zkv_san_instruktor";
		Author_Macro
		attendant =1;
		icon="iconManMedic";
		displayName= "ЗамКомВзвода Сан. инструктор (ЕМР)";
	};
	
	class hmg_tank_s_voditel_sanitar : hmg_tank_s_voditel
	{
		_generalMacro = "hmg_tank_s_voditel_sanitar";
		Author_Macro
		attendant =1;
		backpack="rhs_assault_umbts_medic";
		icon="iconManMedic";
		displayName = "Водитель - санитар (ЕМР)";
		linkedItems[] = {"rhs_6b28","rhs_6b23_digi_medic","ItemCompass","ItemWatch","ItemMap"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_medic","ItemCompass","ItemWatch","ItemMap"};
	};
	
	class hmg_tank_s_felsher : hmg_tank_s_officer_armored
	{
		_generalMacro = "hmg_tank_s_felsher";
		Author_Macro
		attendant =1;
		backpack="rhs_assault_umbts_medic";
		icon="iconManMedic";
		displayName= "Фельдшер (ЕМР)";
		linkedItems[] = {"rhs_6b28","rhs_6b23_digi_medic","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_medic","ItemMap","ItemCompass","ItemWatch"};
	};
	
	class hmg_tank_s_med_leader : hmg_tank_s_officer_armored
	{
		_generalMacro = "hmg_tank_s_med_leader";
		Author_Macro
		attendant =1;
		icon="iconManMedic";
		displayName= "Командир медицинского взвода (ЕМР)";
		linkedItems[] = {"rhs_6b28","rhs_6b23_digi_medic","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_medic","ItemMap","ItemCompass","ItemWatch"};
		backpack = "tf_mr3000_rhs";
	};
	
	