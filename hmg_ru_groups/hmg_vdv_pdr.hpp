
	class hmg_vdv_pdr_base : SoldierEB
	{
		scope = 0;

		Author_Macro
		_generalMacro = "hmg_vdv_pdr_base";
		expansion = 1;

		side = 0;
		faction = "group_ru_vdv_pdr";
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
		uniformClass = "rhs_uniform_vdv_emr";

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
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
			
		};

		Items[] = {"FirstAidKit","ItemSMGR"};
		RespawnItems[] = {"FirstAidKit","ItemSMGR"};

		linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b28_bala","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b28_bala","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		backpack = "hmg_RD";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};

		cost = 100000;
	};
	
		class hmg_vdv_rifleman : hmg_vdv_pdr_base
	{
		_generalMacro = "hmg_vdv_rifleman";
		scope = 2;
		Author_Macro
		displayName = "Стрелок (ЕМР)";
	};
		class hmg_vdv_rifleman_saper : hmg_vdv_rifleman
	{
		_generalMacro = "hmg_vdv_rifleman_saper";
		scope = 2;
		Author_Macro
		displayName = "Стрелок-сапер (ЕМР)";
		engineer = 1;
		backpack = "hmg_RD_saper";
	};
	class hmg_vdv_srifleman : hmg_vdv_rifleman
	{
		_generalMacro = "hmg_vdv_srifleman";
		Author_Macro
		displayName= "Старший стрелок(ЕМР)";
		weapons[] = {"rhs_weap_ak74m_gp25_dtk","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"rhs_weap_ak74m_gp25_dtk","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b28_bala","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b28_bala","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		backpack = "hmg_RD";
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
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
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
			
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
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
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};

	};
	
		class hmg_vdv_gprifleman : hmg_vdv_srifleman
	{
		_generalMacro = "hmg_vdv_gprifleman";
		scope = 2;
		Author_Macro
		displayName = "Стрелок ГП-25 (ЕМР)";
	};
	
	class hmg_vdv_machinegunner : hmg_vdv_rifleman
	{
		_generalMacro = "hmg_vdv_machinegunner";
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
		linkedItems[] = {"rhs_6b23_digi_rifleman","rhs_6b28_bala","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		respawnLinkedItems[] = {"rhs_6b23_digi_rifleman","rhs_6b28_bala","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		Items[] = {"FirstAidKit","rhs_acc_1pn93_1","rhs_acc_1p29","ItemSMGR"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_1pn93_1","rhs_acc_1p29","ItemSMGR"};
		weapons[] = {"rhs_weap_pkp","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkp","Throw","Put"};
		magazines[] =
		{
			"rhs_100Rnd_762x54mmR_green",
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		respawnMagazines[] =
		{
			"rhs_100Rnd_762x54mmR_green",
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		backpack="hmg_RDMG";
		secondaryAmmoCoef = 0.5;
	};

	class hmg_vdv_machinegunner_assistant : hmg_vdv_rifleman
	{
		_generalMacro = "hmg_vdv_machinegunner_assistant";
		Author_Macro
		displayName= "Помощник пулеметчика (ЕМР)";
        linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_scarf","rhs_6b28_bala","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_scarf","rhs_6b28_bala","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		backpack="hmg_RDMG";
	};

	class hmg_vdv_rpg : hmg_vdv_rifleman
	{
		_generalMacro = "hmg_vdv_rpg";
		Author_Macro
		displayName= "Гранатометчик (ЕМР)";

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
		Items[] = {"FirstAidKit", "rhs_acc_1pn93_2","ItemSMGR"};
		respawnItems[] = {"FirstAidKit", "rhs_acc_1pn93_2","ItemSMGR"};
        linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b28_bala","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b28_bala","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};

		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_rpg7_pgo"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_rpg7_pgo"};
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
			
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
			
		};
		backpack="rhs_rpg1";

	};
	class hmg_vdv_aa : hmg_vdv_rpg
	{
		_generalMacro = "hmg_vdv_aa";
		Author_Macro
		displayName= "Стрелок ПЗРК (ЕМР)";

		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_igla"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","rhs_weap_igla"};

		magazines[] = { "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9k38_rocket"};
		respawnMagazines[] = { "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9k38_rocket"};

		backpack="rhs_sidor";

	};

	class hmg_vdv_rpg_assist : hmg_vdv_rifleman
	{
		_generalMacro = "hmg_vdv_rpg_assist";
		Author_Macro
		displayName= "Стрелок - пом. гранатометчика (ЕМР)";
        linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b28_bala","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b28_bala","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};

		backpack="rhs_rpg2";

	};

	class hmg_vdv_sniper_s : hmg_vdv_rifleman
	{
		_generalMacro = "hmg_vdv_sniper_s";
		Author_Macro
		displayName= "Старший стрелок - снайпер (ЕМР)";

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
		
        linkedItems[] = {"rhs_6b23_digi_sniper","rhs_scarf","rhs_6b28_bala","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat","ItemMap"};
		respawnLinkedItems[] = {"rhs_6b23_digi_sniper","rhs_scarf","rhs_6b28_bala","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat","ItemMap"};
		weapons[] = {"rhs_weap_svds","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_svds","Throw","Put","Binocular"};
		Items[] = {"FirstAidKit","rhs_acc_1pn93_1","rhs_acc_pso1m2","cw_item_notepad","AGM_MapTools","AGM_CableTie","ItemSMGR"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_1pn93_1","rhs_acc_pso1m2","cw_item_notepad","AGM_MapTools","AGM_CableTie","ItemSMGR"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1"};
		backpack="hmg_sniper";
	};
	
	class hmg_vdv_sniper_n : hmg_vdv_sniper_s
	{
		_generalMacro = "hmg_vdv_sniper_n";
		Author_Macro
		displayName= "Cнайпер - наблюдатель (ЕМР)";

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
		
        linkedItems[] = {"rhs_6b23_digi_sniper","rhs_scarf","rhs_6b28_bala","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		respawnLinkedItems[] = {"rhs_6b23_digi_sniper","rhs_scarf","rhs_6b28_bala","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		weapons[] = {"rhs_weap_svds","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"rhs_weap_svds","Throw","Put","Rangefinder"};
		backpack="hmg_sniper";
	};

	class hmg_vdv_leader : hmg_vdv_rifleman
	{
		_generalMacro = "hmg_vdv_leader";
		Author_Macro
		displayName= "Командир (ЕМР)";
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
		Items[] = {"FirstAidKit","rhs_acc_1pn93_1","rhs_acc_1p29","cw_item_notepad","AGM_MapTools","AGM_CableTie","ItemSMGR"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_1pn93_1","rhs_acc_1p29","cw_item_notepad","AGM_MapTools","AGM_CableTie","ItemSMGR"};
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_pya","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_pya","Binocular"};
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgd5", 
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgd5", 
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};

        linkedItems[] = {"rhs_fieldcap_helm_digi","rhs_6b23_digi_crewofficer","ItemMap","ItemSMGR","ItemCompass","ItemWatch","G_Combat","ItemRadio"};
		respawnLinkedItems[] = {"rhs_fieldcap_helm_digi","rhs_6b23_digi_crewofficer","ItemSMGR","ItemGPS","ItemCompass","ItemWatch","G_Combat","ItemRadio"};
		backpack = "hmg_RD";
	};

	class hmg_vdv_cl : hmg_vdv_leader
	{
		_generalMacro = "hmg_vdv_cl";
		Author_Macro
		displayName= "Командир Роты ВДВ (ЕМР)";
		backpack = "tf_mr3000_rhs";
	};
	
	class hmg_vdv_s_tech : hmg_vdv_leader
	{
		_generalMacro = "hmg_vdv_s_tech";
		Author_Macro
		displayName= "Старший техник роты (ЕМР)";
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_pya"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_pya"};
		linkedItems[] = {"rhs_6b28_bala","rhs_6b23_digi_engineer","ItemCompass","ItemWatch","ItemMap","G_Combat","tf_pnr1000a", "tf_microdagr"};
		respawnLinkedItems[] = {"rhs_6b28_bala","rhs_6b23_digi_engineer","ItemCompass","ItemWatch","ItemMap","G_Combat","tf_pnr1000a", "tf_microdagr"};
		engineer = 1;
		backpack="hmg_RDEng";
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	
	class hmg_vdv_strsh : hmg_vdv_leader
	{
		_generalMacro = "hmg_vdv_strsh";
		Author_Macro
		displayName= "Старшина роты (ЕМР)";
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Binocular","rhs_weap_pya"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Binocular","rhs_weap_pya"};
		linkedItems[] = {"rhs_6b28_bala","rhs_6b23_digi_6sh92_headset_mapcase","ItemCompass","ItemWatch","G_Combat","ItemMap","tf_pnr1000a", "tf_microdagr"};
		respawnLinkedItems[] = {"rhs_6b28_bala","rhs_6b23_digi_6sh92_headset_mapcase","ItemCompass","ItemWatch","G_Combat","ItemMap","tf_pnr1000a", "tf_microdagr"};
	};	
	
	class hmg_vdv_sl : hmg_vdv_rifleman
	{
		_generalMacro = "hmg_vdv_sl";
		Author_Macro
		displayName= "КБМ-Командир отделения (ЕМР)";

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
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		backpack = "hmg_RD";
		Items[] = {"FirstAidKit","rhs_acc_1pn93_1","rhs_acc_1p29","ItemSMGR","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_1pn93_1","rhs_acc_1p29","ItemSMGR","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
        linkedItems[] = {"rhs_6b28_bala","rhs_6b23_digi_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","G_Combat","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28_bala","rhs_6b23_digi_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","G_Combat","ItemRadio"};
		fsmDanger = "rhsafrf\addons\rhs_c_troops\scripts\dangerCrew.fsm";
	};
	
	class hmg_vdv_s2_zkvo : hmg_vdv_sl
	{
		_generalMacro = "hmg_vdv_s2_zkvo";
		Author_Macro
		displayName= "ЗамКомаВзвода-КБМ-Командир второго отделения (ЕМР)";
		Items[] = {"FirstAidKit","rhs_acc_1pn93_1","rhs_acc_1p29","ItemSMGR"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_1pn93_1","rhs_acc_1p29","ItemSMGR"};
	};
		
	class hmg_vdv_zkro : hmg_vdv_sl
	{
		_generalMacro = "hmg_vdv_zkro";
		Author_Macro
		displayName= "Заместитель командира роты (ЕМР)";
		Items[] = {"FirstAidKit","rhs_acc_1pn93_1","rhs_acc_1p29","ItemSMGR"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_1pn93_1","rhs_acc_1p29","ItemSMGR"};
        linkedItems[] = {"rhs_6b28_bala","rhs_6b23_digi_crewofficer","ItemMap","ItemCompass","ItemWatch","G_Combat","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28_bala","rhs_6b23_digi_crewofficer","ItemMap","ItemCompass","ItemWatch","G_Combat","ItemRadio"};
	};
	
	class hmg_vdv_pdpl : hmg_vdv_leader
	{
		_generalMacro = "hmg_vdv_pdpl";
		Author_Macro
		displayName= "Командир взвода (ЕМР)";
        linkedItems[] = {"rhs_6b28_bala","rhs_6b23_digi_crewofficer","ItemMap","ItemCompass","ItemWatch","G_Combat","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28_bala","rhs_6b23_digi_crewofficer","ItemMap","ItemCompass","ItemWatch","G_Combat","ItemRadio"};
		backpack = "tf_mr3000_rhs";
	};

	class hmg_vdv_driver : hmg_vdv_rifleman
	{
		_generalMacro = "hmg_vdv_driver";
		Author_Macro
		displayName= "Механик водитель (ЕМР)";

        linkedItems[] = {"rhs_tsh4","rhs_6b23_digi","ItemCompass","ItemWatch","G_Combat","tf_pnr1000a", "tf_microdagr"};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_6b23_digi","ItemCompass","ItemWatch","G_Combat","tf_pnr1000a", "tf_microdagr"};
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		fsmDanger = "rhsafrf\addons\rhs_c_troops\scripts\dangerCrew.fsm";
	};
	class hmg_vdv_driver_st : hmg_vdv_rifleman
	{
		_generalMacro = "hmg_vdv_driver_st";
		Author_Macro
		displayName= "Ст. механик водитель (ЕМР)";

        linkedItems[] = {"rhs_tsh4","rhs_6b23_digi","ItemCompass","ItemWatch","G_Combat","tf_pnr1000a", "tf_microdagr","ItemWatch"};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_6b23_digi","ItemCompass","ItemWatch","G_Combat","tf_pnr1000a", "tf_microdagr","ItemWatch"};
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		engineer = 1;
		backpack = "hmg_RDEng";
		icon="iconManEngineer";
		picture="pictureRepair";
		fsmDanger = "rhsafrf\addons\rhs_c_troops\scripts\dangerCrew.fsm";

	};
	class hmg_vdv_gunner: hmg_vdv_driver

	{
		_generalMacro = "hmg_vdv_gunner";
		Author_Macro
		displayName= "ЗКБМ-Наводчик оператор БМД (ЕМР)";
		fsmDanger = "rhsafrf\addons\rhs_c_troops\scripts\dangerCrew.fsm";
        linkedItems[] = {"rhs_tsh4","rhs_6b23_digi","ItemCompass","ItemWatch","G_Combat","tf_pnr1000a", "tf_microdagr"};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_6b23_digi","ItemCompass","ItemWatch","G_Combat","tf_pnr1000a", "tf_microdagr"};
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		backpack = "hmg_RD";
	};
	
	class hmg_vdv_medic : hmg_vdv_rifleman
	{
		_generalMacro = "hmg_vdv_medic";
		Author_Macro
		displayName= "Санитар (ЕМР)";
		attendant =1;
		icon="iconManMedic";
		backpack="hmg_medic_rd";
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

        linkedItems[] = {"rhs_6b28_bala","rhs_6b23_digi_medic","ItemCompass","ItemWatch","G_Combat","tf_pnr1000a", "tf_microdagr"};
		respawnLinkedItems[] = {"rhs_6b28_bala","rhs_6b23_digi_medic","ItemCompass","ItemWatch","G_Combat","tf_pnr1000a", "tf_microdagr"};
		fsmDanger = "rhsafrf\addons\rhs_c_troops\scripts\dangerCrew.fsm";

	};
	class hmg_vdv_medic_dr : hmg_vdv_medic
	{
		_generalMacro = "hmg_vdv_medic_dr";
		Author_Macro
		attendant =1;
		backpack="hmg_medic_rd";
		icon="iconManMedic";
		displayName= "Санитар-водитель (ЕМР)";
        linkedItems[] = {"rhs_tsh4","rhs_6b23_digi_medic","ItemCompass","ItemWatch","G_Combat","tf_pnr1000a", "tf_microdagr"};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_6b23_digi_medic","ItemCompass","ItemWatch","G_Combat","tf_pnr1000a", "tf_microdagr"};		
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		fsmDanger = "rhsafrf\addons\rhs_c_troops\scripts\dangerCrew.fsm";
	};
	
	class hmg_vdv_medic_st : hmg_vdv_medic
	{
		_generalMacro = "hmg_vdv_medic_st";
		Author_Macro
		attendant =1;
		icon="iconManMedic";
		displayName= "КО - сан. инструктор (ЕМР)";
		fsmDanger = "rhsafrf\addons\rhs_c_troops\scripts\dangerCrew.fsm";
		linkedItems[] = {"rhs_6b28_bala","rhs_6b23_digi_medic","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
		respawnLinkedItems[] = {"rhs_6b28_bala","rhs_6b23_digi_medic","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat"};
	};
	class hmg_vdv_rifleman_radist : hmg_vdv_rifleman
	{
		_generalMacro = "hmg_vdv_rifleman_radist";
		Author_Macro
		displayName= "Радиотелефонист (ЕМР)";
		backpack = "tf_mr3000_rhs";
	};
	class hmg_vdv_tmg : hmg_vdv_sl
	{
		_generalMacro = "hmg_vdv_tmg";
		Author_Macro
		displayName= "Командир ГПО - Наводчик пулемета КОРД (ЕМР)";
		backpack="RDS_Kord_Gun_Bag_CSAT";
	};
	class hmg_vdv_tmg_as : hmg_vdv_rifleman
	{
		_generalMacro = "hmg_vdv_tmg_as";
		Author_Macro
		displayName= "Номер расчета пулемета КОРД (ЕМР)";
		backpack="RDS_Kord_Tripod_Bag_CSAT";
	};
		class hmg_vdv_ags_s : hmg_vdv_rifleman
	{
		_generalMacro = "hmg_vdv_ags_s";
		Author_Macro
		displayName= "Наводчик АГС-30 (ЕМР)";
		Items[] = {"FirstAidKit","cw_item_tableags"};
		RespawnItems[] = {"FirstAidKit","cw_item_tableags"};
		backpack="RDS_AGS30_Gun_Bag_CSAT";
	};
	class hmg_vdv_ags_n : hmg_vdv_rifleman
	{
		_generalMacro = "hmg_vdv_ags_n";
		Author_Macro
		displayName= "Номер расчета АГС-30 (ЕМР)";
		backpack="RDS_AGS30_Tripod_Bag_CSAT";
	};
	
	// ПДР 2005
		class hmg_vdv_rifleman_2005 : hmg_vdv_pdr_base
	{
		_generalMacro = "hmg_vdv_rifleman_2005";
		uniformClass = "rhs_uniform_vdv_flora";
		linkedItems[] = {"rhs_6b23_6sh92","rhs_6b26","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b23_6sh92","rhs_6b26","ItemCompass","ItemWatch"};
		scope = 2;
		Author_Macro
		displayName = "Стрелок (ВСР-98)";
	};
	class hmg_vdv_srifleman_2005 : hmg_vdv_rifleman_2005
	{
		_generalMacro = "hmg_vdv_srifleman_2005";
		Author_Macro
		displayName= "Старший стрелок(ВСР-98)";
		Items[] = {"FirstAidKit","rhs_acc_1pn93_1"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_1pn93_1"};
		weapons[] = {"rhs_weap_ak74m_gp25_dtk","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"rhs_weap_ak74m_gp25_dtk","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		linkedItems[] = {"rhs_6b23_6sh92_vog","rhs_6b26","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b23_6sh92_vog","rhs_6b26","ItemCompass","ItemWatch"};
		backpack = "hmg_RD";
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
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
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
			
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
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
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};

	};
	
	class hmg_vdv_ar_2005 : hmg_vdv_rifleman_2005
	{
		_generalMacro = "hmg_vdv_ar_2005";
		Author_Macro
		displayName= "Пулеметчик (ВСР-98)";

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
		Items[] = {"FirstAidKit", "rhs_acc_1pn93_1"};
		respawnItems[] = {"FirstAidKit", "rhs_acc_1pn93_1"};
		weapons[] = {"hlc_rifle_rpk74n","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk74n","Throw","Put"};
		magazines[] =
		{
			"rhs_45Rnd_545X39_7N10_AK",
			"rhs_45Rnd_545X39_7N10_AK",
			"rhs_45Rnd_545X39_7N10_AK",
			"rhs_45Rnd_545X39_AK_Green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		respawnMagazines[] =
		{
			"rhs_45Rnd_545X39_7N10_AK",
			"rhs_45Rnd_545X39_7N10_AK",
			"rhs_45Rnd_545X39_7N10_AK",
			"rhs_45Rnd_545X39_AK_Green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		backpack="hmg_RDAR";
	};

	class hmg_vdv_rpg_2005 : hmg_vdv_rifleman_2005
	{
		_generalMacro = "hmg_vdv_rpg_2005";
		Author_Macro
		displayName= "Гранатометчик (ВСР-98)";
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
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_rpg7_pgo"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_rpg7_pgo"};
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
			
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
			
		};
		backpack="rhs_rpg1";
	};
	
	class hmg_vdv_rpg_assist_2005 : hmg_vdv_rifleman_2005
	{
		_generalMacro = "hmg_vdv_rpg_assist_2005";
		Author_Macro
		displayName= "Стрелок - пом. гранатометчика (ВСР-98)";
		backpack="rhs_rpg2";
	};

	class hmg_vdv_leader_2005 : hmg_vdv_rifleman_2005
	{
		_generalMacro = "hmg_vdv_leader_2005";
		Author_Macro
		displayName= "Командир (ВСР-98)";
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
		
		Items[] = {"FirstAidKit","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
		RespawnItems[] = {"FirstAidKit","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","CUP_hgun_Makarov","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","CUP_hgun_Makarov","Binocular"};
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};

        linkedItems[] = {"rhs_fieldcap_helm","rhs_6b23_crewofficer","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_fieldcap_helm","rhs_6b23_crewofficer","ItemGPS","ItemCompass","ItemWatch"};
		backpack = "hmg_RD";
	};

	class hmg_vdv_cl_2005 : hmg_vdv_leader_2005
	{
		_generalMacro = "hmg_vdv_cl_2005";
		Author_Macro
		displayName= "Командир ПД Роты ВДВ (ВСР-98)";
		backpack = "tf_mr3000_rhs";
	};
	
	class hmg_vdv_s_tech_2005 : hmg_vdv_leader_2005
	{
		_generalMacro = "hmg_vdv_s_tech_2005";
		Author_Macro
		displayName= "Старший техник роты (ВСР-98)";
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put", "CUP_hgun_Makarov"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","CUP_hgun_Makarov"};
		linkedItems[] = {"rhs_6b26","rhs_6b23_engineer","ItemCompass","ItemWatch","ItemMap"};
		respawnLinkedItems[] = {"rhs_6b26","rhs_6b23_engineer","ItemCompass","ItemWatch","ItemMap"};
		engineer = 1;
		backpack="hmg_RDEng";
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	
	class hmg_vdv_strsh_2005 : hmg_vdv_leader_2005
	{
		_generalMacro = "hmg_vdv_strsh_2005";
		Author_Macro
		displayName= "Старшина роты (ВСР-98)";
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Binocular","CUP_hgun_Makarov"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Binocular","CUP_hgun_Makarov"};
		linkedItems[] = {"rhs_6b26","rhs_6b23_crew","ItemWatch","ItemMap","ItemCompass"};
		respawnLinkedItems[] = {"rhs_6b26","rhs_6b23_crew","ItemWatch","ItemMap","ItemCompass"};
	};	
	
	class hmg_vdv_pl_2005 : hmg_vdv_leader_2005
	{
		_generalMacro = "hmg_vdv_pl_2005";
		Author_Macro
		displayName= "Командир ПД взвода (ВСР-98)";
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Binocular","CUP_hgun_Makarov"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Binocular","CUP_hgun_Makarov"};
		linkedItems[] = {"rhs_6b26","rhs_6b23_crew","ItemCompass","ItemMap","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b26","rhs_6b23_crew","ItemCompass","ItemMap","ItemWatch"};
		fsmDanger = "rhsafrf\addons\rhs_c_troops\scripts\dangerCrew.fsm";
		backpack = "tf_mr3000_rhs";
	};	
		
	class hmg_vdv_sl_2005 : hmg_vdv_leader_2005
	{
		_generalMacro = "hmg_vdv_sl_2005";
		Author_Macro
		displayName= "КБМ-Командир ПД отделения (ВСР-98)";

		icon = "iconManLeader";
		cost = 450000;
		sensitivity = 3.2;

		weapons[] = {"rhs_weap_ak74m_gp25_dtk","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25_dtk","Throw","Put","Binocular"};
        linkedItems[] = {"rhs_6b26","rhs_6b23_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","itemradio"};
		respawnLinkedItems[] = {"rhs_6b26","rhs_6b23_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","itemradio"};
		fsmDanger = "rhsafrf\addons\rhs_c_troops\scripts\dangerCrew.fsm";
	};
	
	class hmg_vdv_zkvo_2005 : hmg_vdv_sl_2005
	{
		_generalMacro = "hmg_vdv_zkvo_2005";
		Author_Macro
		displayName= "ЗамКомаВзвода-КБМ-Командир ПД отделения (ВСР-98)";
	};
		
	class hmg_vdv_zkro_2005 : hmg_vdv_leader_2005
	{
		_generalMacro = "hmg_vdv_zkro_2005";
		Author_Macro
		displayName= "Заместитель командира ПД роты (ВСР-98)";
        linkedItems[] = {"rhs_6b26","rhs_6b23_crewofficer","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b26","rhs_6b23_crewofficer","ItemMap","ItemCompass","ItemWatch"};
	};
	
	class hmg_vdv_driver_2005 : hmg_vdv_rifleman_2005
	{
		_generalMacro = "hmg_vdv_driver_2005";
		Author_Macro
		displayName= "Механик водитель (ВСР-98)";

        linkedItems[] = {"rhs_tsh4","rhs_6b23","ItemCompass","ItemWatch","G_Combat","ItemSMGR"};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_6b23","ItemCompass","ItemWatch","G_Combat","ItemSMGR"};
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		backpack = "hmg_RD";
		fsmDanger = "rhsafrf\addons\rhs_c_troops\scripts\dangerCrew.fsm";
	};
	class hmg_vdv_driver_st_2005 : hmg_vdv_rifleman_2005
	{
		_generalMacro = "hmg_vdv_driver_st_2005";
		Author_Macro
		displayName= "Ст. механик водитель (ВСР-98)";

        linkedItems[] = {"rhs_tsh4","rhs_6b23","ItemCompass","ItemWatch","G_Combat","ItemWatch","ItemSMGR"};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_6b23","ItemCompass","ItemWatch","G_Combat","ItemWatch","ItemSMGR"};
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		engineer = 1;
		backpack = "hmg_RD";
		icon="iconManEngineer";
		picture="pictureRepair";
		fsmDanger = "rhsafrf\addons\rhs_c_troops\scripts\dangerCrew.fsm";

	};
	class hmg_vdv_gunner_2005 : hmg_vdv_driver_2005

	{
		_generalMacro = "hmg_vdv_gunner_2005";
		Author_Macro
		displayName= "ЗКБМ-Наводчик оператор БМД (ВСР-98)";
		fsmDanger = "rhsafrf\addons\rhs_c_troops\scripts\dangerCrew.fsm";
        linkedItems[] = {"rhs_tsh4","rhs_6b23","ItemCompass","ItemWatch","G_Combat","ItemSMGR"};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_6b23","ItemCompass","ItemWatch","G_Combat","ItemSMGR"};
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_black",
			"SmokeShellOrange",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow"
		};
		backpack = "hmg_RD";
	};
	
	class hmg_vdv_medic_2005 : hmg_vdv_rifleman_2005
	{
		_generalMacro = "hmg_vdv_medic_2005";
		Author_Macro
		displayName= "Стрелок-санитар (ВСР-98)";
		attendant =1;
		icon="iconManMedic";
		backpack="hmg_medic_rd";
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

        linkedItems[] = {"rhs_6b26","rhs_6b23_medic","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b26","rhs_6b23_medic","ItemCompass","ItemWatch"};
		fsmDanger = "rhsafrf\addons\rhs_c_troops\scripts\dangerCrew.fsm";

	};
	class hmg_vdv_medic_dr_2005 : hmg_vdv_medic_2005
	{
		_generalMacro = "hmg_vdv_medic_dr_2005";
		Author_Macro
		attendant =1;
		backpack="hmg_medic_rd";
		icon="iconManMedic";
		displayName= "Санитар-водитель (ВСР-98)";
        linkedItems[] = {"rhs_tsh4","rhs_6b23_medic","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_6b23_medic","ItemCompass","ItemWatch"};		
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		fsmDanger = "rhsafrf\addons\rhs_c_troops\scripts\dangerCrew.fsm";
	};
	
	class hmg_vdv_medic_st_2005 : hmg_vdv_medic_2005
	{
		_generalMacro = "hmg_vdv_medic_st_2005";
		Author_Macro
		attendant =1;
		icon="iconManMedic";
		displayName= "Санитарный инструктор (ВСР-98)";
		fsmDanger = "rhsafrf\addons\rhs_c_troops\scripts\dangerCrew.fsm";
		linkedItems[] = {"rhs_6b26","rhs_6b23_medic","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat","ItemSMGR"};
		respawnLinkedItems[] = {"rhs_6b26","rhs_6b23_medic","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr","G_Combat","ItemSMGR"};
	};
	class hmg_vdv_rifleman_radist_2005 : hmg_vdv_rifleman_2005
	{
		_generalMacro = "hmg_vdv_rifleman_radist";
		Author_Macro
		displayName= "Радиотелефонист (ВСР-98)";
		backpack = "tf_mr3000_rhs";
	};