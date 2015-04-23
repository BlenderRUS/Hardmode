
	class hmg_infantry_mp_base : SoldierEB
	{
		scope = 0;

		Author_Macro
		_generalMacro = "hmg_infantry_mp_base";
		expansion = 1;

		side = 0;
		faction = "group_ru_mp";
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
		uniformClass = "rhs_uniform_flora_patchless";

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


		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put"}; 
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

		linkedItems[] = {"rhs_6b23_6sh92","rhs_6b26_green","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b23_6sh92","rhs_6b26_green","ItemCompass","ItemWatch"};
		hiddenSelections[] = {"camo1", "camo2", "camob"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\flora_co.paa", "rhsafrf\addons\rhs_infantry\data\patches\Shevrons_vmf_co.paa"};
		backpack = "rhs_assault_umbts_empty";
		cost = 100000;
	};

	class hmg_mp_rifleman : hmg_infantry_mp_base
	{
		_generalMacro = "hmg_mp_rifleman";
		scope = 2;
		Author_Macro
		displayName = "Стрелок АК-74М (ВСР-98)";
	};
	
	class hmg_mp_ar : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_ar";
		scope = 2;
		Author_Macro
		displayName = "Пулеметчик (ВСР-98)";
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
	
	class hmg_mp_efreitor : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_efreitor";
		Author_Macro
		displayName= "Старший стрелок АК-74М ГП-25 (ВСР-98)";
		weapons[] = {"rhs_weap_ak74m_gp25_dtk","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_ak74m_gp25_dtk","Throw","Put"}; 
		linkedItems[] = {"rhs_6b23_6sh92_vog_headset","rhs_6b26_green","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr"};
		respawnLinkedItems[] = {"rhs_6b23_6sh92_vog_headset","rhs_6b26_green","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr"};
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
	
	class hmg_mp_gp : hmg_mp_efreitor
	{
		_generalMacro = "hmg_mp_gp";
		Author_Macro
		displayName= "Cтрелок АК-74М ГП-25 (ВСР-98)";
	};
	class hmg_mp_machinegunner : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_machinegunner";
		Author_Macro
		displayName= "Наводчик ПКМ (ВСР-98)";

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
		linkedItems[] = {"rhs_6b23_rifleman","rhs_6b26_green","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b23_rifleman","rhs_6b26_green","ItemCompass","ItemWatch"};
		Items[] = {"FirstAidKit","AGM_SpareBarrel"};
		RespawnItems[] = {"FirstAidKit","AGM_SpareBarrel"};
		weapons[] = {"rhs_weap_pkm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
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

	class hmg_mp_machinegunner_assistant : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_machinegunner_assistant";
		Author_Macro
		displayName= "Номер расчета ПКМ (ВСР-98)";
		Items[] = {"FirstAidKit","AGM_SpareBarrel","AGM_SpareBarrel"};
		respawnItems[] = {"FirstAidKit","AGM_SpareBarrel","AGM_SpareBarrel"};
        linkedItems[] = {"rhs_6b23_6sh92","rhs_6b26_green","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b23_6sh92","rhs_6b26_green","ItemCompass","ItemWatch"};
		backpack="hmg_rif_sidorMG";
	};

	class hmg_mp_at : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_at";
		Author_Macro
		displayName= "Гранатометчик РПГ-7В2 (ВСР-98)";

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
        linkedItems[] = {"rhs_6b23_6sh92","rhs_6b26_green","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b23_6sh92","rhs_6b26_green","ItemCompass","ItemWatch"};
		weapons[] = {"hlc_rifle_aks74u","Throw","Put","rhs_weap_rpg7_pgo"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put","rhs_weap_rpg7_pgo"};
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
	class hmg_mp_aa : hmg_mp_at
	{
		_generalMacro = "hmg_mp_aa";
		Author_Macro
		displayName= "Стрелок ПЗРК (ВСР-98)";

		weapons[] = {"hlc_rifle_aks74u","Throw","Put","rhs_weap_igla"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","rhs_weap_igla"};

		magazines[] = { "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9k38_rocket"};
		respawnMagazines[] = { "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9k38_rocket"};

		backpack="rhs_sidor";

	};

	class hmg_mp_strelok_rpg_assist : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_strelok_rpg_assist";
		Author_Macro
		displayName= "Стрелок - пом. гранатометчика (ВСР-98)";
		linkedItems[] = {"rhs_6b23_6sh92","rhs_6b26_green","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b23_6sh92","rhs_6b26_green","ItemCompass","ItemWatch"};
		backpack="rhs_rpg2";

	};

	class hmg_mp_marksman : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_marksman";
		Author_Macro
		displayName= "Снайпер СВД (ВСР-98)";

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

		Weapons[] = {"rhs_weap_svd","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_svd","Throw","Put"};
		Items[] = {"FirstAidKit","rhs_acc_1pn93_1","rhs_acc_pso1m2"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_1pn93_1","rhs_acc_pso1m2"};
		linkedItems[] = {"rhs_6b23_sniper","rhs_6b26_green","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b23_sniper","rhs_6b26_green","ItemCompass","ItemWatch"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_rgd5","rhs_mag_rgd5", "rhs_mag_rdg2_black"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_rdg2_black"};

	};

	class hmg_mp_officer_armored : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_officer_armored";
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
		
		Items[] = {"FirstAidKit","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		RespawnItems[] = {"FirstAidKit","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
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
			"rhs_mag_rgd5"
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
			"rhs_mag_rgd5"
		};

        linkedItems[] = {"rhs_fieldcap_helm","rhs_6b23_crewofficer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_fieldcap_helm","rhs_6b23_crewofficer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "hmg_rif_sidor";
	};

	class hmg_mp_officer : hmg_mp_officer_armored
	{
		_generalMacro = "hmg_mp_officer";
		Author_Macro
		displayName= "Командир роты (ВСР-98)";
		backpack = "tf_mr3000_rhs";
	};
	
	class hmg_mp_politruk : hmg_mp_officer_armored
	{
		_generalMacro = "hmg_mp_politruk";
		Author_Macro
		displayName= "Заместитель командира по воспитательной работе (ВСР-98)";
	};
	
	class hmg_mp_st_tech : hmg_mp_officer_armored
	{
		_generalMacro = "hmg_mp_st_tech";
		Author_Macro
		displayName= "Старший техник роты (ВСР-98)";
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","CUP_hgun_Makarov"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","CUP_hgun_Makarov"};
		linkedItems[] = {"rhs_6b26_green","rhs_6b23_engineer","ItemCompass","ItemWatch","ItemMap"};
		respawnLinkedItems[] = {"rhs_6b26_green","rhs_6b23_engineer","ItemCompass","ItemWatch","ItemMap"};
		engineer = 1;
		backpack="rhs_assault_umbts_engineer";
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	
	class hmg_mp_strsh : hmg_mp_officer_armored
	{
		_generalMacro = "hmg_mp_strsh";
		Author_Macro
		displayName= "Старшина роты (ВСР-98)";
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","CUP_hgun_Makarov"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","CUP_hgun_Makarov"};
		linkedItems[] = {"rhs_6b26_green","rhs_6b23_crewofficer","ItemCompass","ItemWatch","ItemMap"};
		respawnLinkedItems[] = {"rhs_6b26_green","rhs_6b23_crewofficer","ItemCompass","ItemWatch","ItemMap"};
	};	
	
	class hmg_mp_ko_r : hmg_mp_officer_armored
	{
		_generalMacro = "hmg_mp_ko_r";
		Author_Macro
		displayName= "Командир взвода морской пехоты (ВСР-98)";
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Binocular","CUP_hgun_Makarov"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","Binocular","CUP_hgun_Makarov"};
		linkedItems[] = {"rhs_6b26_green","rhs_6b23_6sh92_radio","ItemCompass","ItemWatch","ItemRadio","AGM_NVG_Gen2","ItemMap"};
		respawnLinkedItems[] = {"rhs_6b26_green","rhs_6b23_6sh92_radio","ItemCompass","ItemWatch","ItemRadio","AGM_NVG_Gen2","ItemMap"};
	};	
	class hmg_mp_ko_gv : hmg_mp_officer_armored
	{
		_generalMacro = "hmg_mp_ko_gv";
		Author_Macro
		displayName= "Командир гранатометного взвода (ВСР-98)";
		Items[] = {"FirstAidKit","cw_item_notepad","AGM_CableTie","AGM_MapTools","cw_item_tableags"};
		RespawnItems[] = {"FirstAidKit","cw_item_notepad","AGM_CableTie","AGM_MapTools","cw_item_tableags"};
		linkedItems[] = {"rhs_6b26_green","rhs_6b23_crewofficer","ItemCompass","ItemWatch","AGM_NVG_Gen2","ItemMap"};
		respawnLinkedItems[] = {"rhs_6b26_green","rhs_6b23_crewofficer","ItemCompass","ItemWatch","AGM_NVG_Gen2","ItemMap"};
		backpack = "tf_mr3000_rhs";
	};	
	class hmg_mp_ko_ptv : hmg_mp_ko_gv
	{
		_generalMacro = "hmg_mp_ko_ptv";
		Author_Macro
		displayName= "Командир противотанкового взвода (ВСР-98)";
		Items[] = {"FirstAidKit","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		RespawnItems[] = {"FirstAidKit","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		backpack = "tf_mr3000_rhs";
	};		
	class hmg_mp_sergeant : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_sergeant";
		Author_Macro
		displayName= "Командир отделения (ВСР-98)";

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
		Items[] = {"FirstAidKit","rhs_acc_1pn93_1","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_1pn93_1","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
        linkedItems[] = {"rhs_6b26_green","rhs_6b23_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr"};
		respawnLinkedItems[] = {"rhs_6b26_green","rhs_6b23_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","tf_pnr1000a", "tf_microdagr"};
	};
	class hmg_mp_sergeant_zkv : hmg_mp_sergeant
	{
		_generalMacro = "hmg_mp_sergeant_zkv";
		Author_Macro
		displayName= "ЗКВ - Командир первого отделения (ВСР-98)";
	};
	class hmg_mp_sergeant_pto : hmg_mp_sergeant
	{
		_generalMacro = "hmg_mp_sergeant_pto";
		Author_Macro
		displayName= "Командир противотанкового отделения (ВСР-98)";
	};
	class hmg_mp_sergeant_kmb : hmg_mp_sergeant
	{
		_generalMacro = "hmg_mp_sergeant_kmb";
		Author_Macro
		displayName= "КБМ - Командир отделения (ВСР-98)";
	};
	class hmg_mp_sergeant_go : hmg_mp_sergeant
	{
		_generalMacro = "hmg_mp_sergeant_go";
		Author_Macro
		displayName= "Командир гранатометного отделения (ВСР-98)";
		Items[] = {"FirstAidKit","cw_item_notepad","AGM_CableTie","AGM_MapTools","cw_item_tableags"};
		RespawnItems[] = {"FirstAidKit","cw_item_notepad","AGM_CableTie","AGM_MapTools","cw_item_tableags"};
	};
	class hmg_mp_kmsv : hmg_mp_officer_armored
	{
		_generalMacro = "hmg_mp_kmsv";
		Author_Macro
		displayName= "Командир взвоода морской пехоты (ВСР-98)";

        linkedItems[] = {"rhs_6b26_green","rhs_6b23_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b26_green","rhs_6b23_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class hmg_mp_engineer_st : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_engineer_st";
		Author_Macro
		displayName= "Старшина ВМТО (ВСР-98)";

        linkedItems[] = {"rhs_6b26_green","rhs_6b23_engineer","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b26_green","rhs_6b23_engineer","ItemCompass","ItemWatch","ItemRadio"};

		engineer=1;
		backpack = "hmg_rif_sidor";
		icon="iconManEngineer";
		picture="pictureRepair";

	};
	
	class hmg_mp_engineer : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_engineer";
		Author_Macro
		displayName= "Стрелок ВМТО (ВСР-98)";


        	linkedItems[] = {"rhs_6b26_green_green_ess","rhs_6b23_engineer","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b26_green_green_ess","rhs_6b23_engineer","ItemCompass","ItemWatch","ItemRadio"};

		engineer=1;
		backpack = "hmg_rif_sidor";
		icon="iconManEngineer";
		picture="pictureRepair";

	};
	class hmg_mp_driver : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_driver";
		Author_Macro
		displayName= "Механик-водитель (ВСР-98)";
		
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"}; 
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"};

        linkedItems[] = {"rhs_tsh4","rhs_6b23","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_6b23","ItemCompass","ItemWatch"};
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
	class hmg_mp_driver_st : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_driver_st";
		Author_Macro
		displayName= "Ст. механик водитель (ВСР-98)";
		Items[] = {"FirstAidKit","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		RespawnItems[] = {"FirstAidKit","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"}; 
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"}; 

        linkedItems[] = {"rhs_tsh4","rhs_6b23_crew","ItemCompass","ItemWatch","ItemMap"};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_6b23_crew","ItemCompass","ItemWatch","ItemMap"};
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
		engineer = 1;
		backpack = "hmg_rif_sidorEng";
		icon="iconManEngineer";
		picture="pictureRepair";

	};
	class hmg_mp_gunner: hmg_mp_rifleman

	{
		_generalMacro = "hmg_mp_gunner";
		Author_Macro
		displayName= "Наводчик оператор БТР (ВСР-98)";
		
		weapons[] = {"rhs_weap_ak74m_folded_dtk","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_ak74m_folded_dtk","Throw","Put"};
		
        linkedItems[] = {"rhs_tsh4","rhs_6b23","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_6b23","ItemCompass","ItemWatch"};
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5"
		};
		backpack = "hmg_rif_sidor";
	};
	
	class hmg_mp_gunner_zkmb: hmg_mp_gunner
	{
		_generalMacro = "hmg_mp_gunner_zkmb";
		Author_Macro
		displayName= "ЗКБМ-наводчик оператор БМП (ВСР-98)";
	};

	class hmg_mp_rifleman_radist : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_rifleman_radist";
		Author_Macro
		displayName= "Радиотелефонист (ВСР-98)";
		backpack = "tf_mr6000l";
	};
	class hmg_mp_rifleman_sbr : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_rifleman_sbr";
		Author_Macro
		displayName= "Оператор СБР (ВСР-98)";
	};
	class hmg_mp_ags_s : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_ags_s";
		Author_Macro
		displayName= "Старший наводчик АГС-30 (ВСР-98)";
		Items[] = {"FirstAidKit","cw_item_tableags"};
		RespawnItems[] = {"FirstAidKit","cw_item_tableags"};
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"}; 
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"}; 
		linkedItems[] = {"rhs_6b26_green","rhs_6b23","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b26_green","rhs_6b23","ItemCompass","ItemWatch"};
		backpack="RDS_AGS30_Gun_Bag_CSAT";
	};
	class hmg_mp_ags_n : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_ags_n";
		Author_Macro
		displayName= "Номер расчета АГС-30 (ВСР-98)";
		linkedItems[] = {"rhs_6b26_green","rhs_6b23","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b26_green","rhs_6b23","ItemCompass","ItemWatch"};
		backpack="RDS_AGS30_Tripod_Bag_CSAT";
	};
	class hmg_mp_metis_s : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_metis_s";
		Author_Macro
		displayName= "Старший оператор (ВСР-98)";
				
		weapons[] = {"hlc_rifle_aks74u","Throw","Put","MetisM1"}; 
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put","MetisM1"}; 
		linkedItems[] = {"rhs_6b26_green","rhs_6b23","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b26_green","rhs_6b23","ItemCompass","ItemWatch"};
		backpack="hmg_metis_ruck2";
	};
	class hmg_mp_metis_n : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_metis_n";
		Author_Macro
		displayName= "Оператор (ВСР-98)";
		linkedItems[] = {"rhs_6b26_green","rhs_6b23","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b26_green","rhs_6b23","ItemCompass","ItemWatch"};
		backpack="hmg_metis_ruck";
	};
	//расчет СПГ-9
	class hmg_mp_spg9_com : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_spg9_com";
		Author_Macro
		displayName= "Командир расчета СПГ-9 (ВСР-98)";
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"}; 
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		linkedItems[] = {"rhs_6b26_green","rhs_6b23","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b26_green","rhs_6b23","ItemCompass","ItemWatch"};
		backpack="RDS_SPG9_Gun_Bag";
	};
	
	class hmg_mp_spg9_nav : hmg_mp_spg9_com
	{
		_generalMacro = "hmg_mp_spg9_nav";
		Author_Macro
		displayName= "Наводчик СПГ-9 (ВСР-98)";
		backpack="RDS_SPG9_Tripod_Bag";
	};
	
		class hmg_mp_spg9_zar : hmg_mp_spg9_com
	{
		_generalMacro = "hmg_mp_spg9_zar";
		Author_Macro
		displayName= "Заряжающий СПГ-9 (ВСР-98)";
		backpack="spg_pg";
	};
	
		class hmg_mp_spg9_pod : hmg_mp_spg9_com
	{
		_generalMacro = "hmg_mp_spg9_pod";
		Author_Macro
		displayName= "Подносчик боеприпасов СПГ-9 (ВСР-98)";
		backpack="spg_og";
	};
	
	/// отседова пошли танкисты, рации ублюдкам выданы пока не будет запилен интерком завязанный на шлем
	class hmg_mp_tank_driver : hmg_mp_driver
	{
		_generalMacro = "hmg_mp_tank_driver";
		Author_Macro
		displayName= "Механик-водитель (ВСР-98)";

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
		backpack = "rhs_assault_umbts_empty";
	};
	class hmg_mp_tank_gunner: hmg_mp_gunner
	{
		_generalMacro = "hmg_mp_tank_gunner";
		Author_Macro
		displayName= "Наводчик (ВСР-98)";
		
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
	class hmg_mp_tank_kommander : hmg_mp_driver
	{
		_generalMacro = "hmg_mp_tank_kommander";
		Author_Macro
		displayName= "Командир танка (ВСР-98)";
		Items[] = {"FirstAidKit","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		RespawnItems[] = {"FirstAidKit","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		weapons[] = {"hlc_rifle_aks74u","CUP_hgun_Makarov","Throw","Put"}; 
		respawnWeapons[] = {"hlc_rifle_aks74u","CUP_hgun_Makarov","Throw","Put"}; 

        linkedItems[] = {"rhs_tsh4","rhs_vest_commander","ItemCompass","ItemWatch","ItemMap","tf_pnr1000a"};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_vest_commander","ItemCompass","ItemWatch","ItemMap","tf_pnr1000a"};
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_8Rnd_9x18_Makarov_M"
		};
		backpack="rhs_assault_umbts_empty";
	};
	class hmg_mp_tank_pltkommander : hmg_mp_tank_kommander
	{
		_generalMacro = "hmg_mp_tank_pltkommander";
		Author_Macro
		displayName= "Командир танка/Командир танкового взвода (ВСР-98)";
		
		weapons[] = {"hlc_rifle_aks74u","CUP_hgun_Makarov","Binocular","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","CUP_hgun_Makarov","Binocular","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		backpack="rhs_assault_umbts_empty";
	};
	class hmg_mp_tank_compkommander : hmg_mp_tank_pltkommander
	{
		_generalMacro = "hmg_tank_compkommander";
		Author_Macro
		displayName= "Командир танка/Командир танковой роты (ВСР-98)";
		backpack="rhs_assault_umbts_empty";
	};
	class hmg_mp_tank_st_tech : hmg_mp_st_tech
	{
		_generalMacro = "hmg_mp_tank_st_tech";
		Author_Macro
		displayName= "Старший техник танковой роты (ВСР-98)";
		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","CUP_hgun_Makarov"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","CUP_hgun_Makarov"};
		linkedItems[] = {"rhs_tsh4","ItemCompass","ItemWatch","ItemMap","tf_pnr1000a"};
		respawnLinkedItems[] = {"rhs_tsh4","ItemCompass","ItemWatch","ItemMap","tf_pnr1000a"};
		engineer = 1;
		backpack="rhs_assault_umbts_engineer";
		icon="iconManEngineer";
		picture="pictureRepair";
	};
		// отсюда пошла минометная батарея мотострелкового батальона, структура восстановленая 
	// номенклатура:
	// Командир батареи
	// Командир взвода управления
	// Старший вычислитель
	// Командир отделения (подвоза б/пр)
	// Командир отделения артиллерийской разведки
	// Разведчик
	// Дальномерщик
	// Заместитель командира взвода - командир отделения связи
	// Старший радиотелефонист
	// Водитель (с рпг)
	// Командир огневого взвода
	// ЗамКомВзвода/Командир миномета
	// Командир миномета
	// Старший наводчик
	// Мастер-Номер расчета
	// Номер расчета
	// Водитель
	
	// отсюда должности огневого взвода
	class hmg_mp_voditel : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_voditel";
		scope = 2;
		Author_Macro
		displayName = "Водитель (ВСР-98)";
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		backpack = "hmg_rif_sidor";
	};
	
	class hmg_mp_nomer_rascheta: hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_nomer_rascheta";
		Author_Macro
		displayName= "Номер расчета (ВСР-98)";
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
        linkedItems[] = {"rhs_6b26_green","rhs_6b23","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b26_green","rhs_6b23","ItemCompass","ItemWatch"};
	};	
	
	class hmg_mp_master_nomer_rascheta: hmg_mp_nomer_rascheta
	{
		_generalMacro = "hmg_mp_master_nomer_rascheta";
		Author_Macro
		displayName= "Мастер - Номер расчета (ВСР-98)";
		engineer = 1;
		backpack="rhs_assault_umbts_engineer";
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	
	class hmg_mp_starshii_navod4ik: hmg_mp_nomer_rascheta
	{
		_generalMacro = "hmg_mp_starshii_navod4ik";
		Author_Macro
		displayName= "Старший наводчик (ВСР-98)";
		backpack="RDS_Podnos_Bipod_Bag_CSAT";
	};	
	
	class hmg_mp_komandir_minometa: hmg_mp_strsh
	{
		_generalMacro = "hmg_mp_komandir_minometa";
		Author_Macro
		displayName= "Командир миномета (ВСР-98)";
		
		Items[] = {"FirstAidKit","cw_item_table82mm","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
		RespawnItems[] = {"FirstAidKit","cw_item_table82mm","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
		weapons[] = {"hlc_rifle_aks74u","Binocular","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Binocular","Throw","Put"};
		backpack="RDS_Podnos_Gun_Bag_CSAT";
	};	
	
	class hmg_mp_zkv_komandir_minometa: hmg_mp_komandir_minometa
	{
		_generalMacro = "hmg_mp_zkv_komandir_minometa";
		Author_Macro
		displayName= "ЗамКом взвода - Командир миномета (ВСР-98)";
	};	
	
	class hmg_mp_voditel_rpg : hmg_mp_at
	{
		_generalMacro = "hmg_mp_voditel_rpg";
		scope = 2;
		Author_Macro
		displayName = "Водитель (ВСР-98)";
		weapons[] = {"hlc_rifle_aks74u","Throw","Put","rhs_weap_rpg7_pgo"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put","rhs_weap_rpg7_pgo"}; //rhs_weap_ak74m_folded_dtk
	};
	
	class hmg_mp_komvzvoda_ognevogo : hmg_mp_officer_armored
	{
		_generalMacro = "hmg_mp_komvzvoda_ognevogo";
		Author_Macro
		displayName= "Командир огневого взвода (ВСР-98)";
		Items[] = {"FirstAidKit","cw_item_table82mm","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
		RespawnItems[] = {"FirstAidKit","cw_item_table82mm","cw_item_notepad","AGM_MapTools","AGM_CableTie"};
	};
	//отсюда должности отделения связи
	class hmg_mp_radist : hmg_mp_rifleman_radist
	{
		_generalMacro = "hmg_mp_radist";
		Author_Macro
		displayName= "Радиотелефонист (ВСР-98)";
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		backpack = "tf_mr3000_rhs";
	};
	class hmg_mp_st_radist : hmg_mp_rifleman_radist
	{
		_generalMacro = "hmg_mp_st_radist";
		Author_Macro
		displayName= "Старший радиотелефонист (ВСР-98)";
		backpack = "tf_mr3000_rhs";
	};
	// отсюда отделение артиллерийской разведки
	class hmg_mp_dalnomershik: hmg_mp_efreitor
	{
		_generalMacro = "hmg_mp_dalnomershik";
		Author_Macro
		displayName= "Дальномерщик (ВСР-98)";
		weapons[] = {"hlc_rifle_aks74u","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put","Rangefinder"};
	};	
	
	class hmg_mp_razved4ik: hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_razved4ik";
		Author_Macro
		displayName= "Разведчик (ВСР-98)";
		linkedItems[] = {"rhs_6b23_6sh92","rhs_6b26_green","ItemCompass","ItemWatch","AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"rhs_6b23_6sh92","rhs_6b26_green","ItemCompass","ItemWatch","AGM_NVG_Gen2"};
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
	};	
	
	class hmg_mp_komot_art_recon_squad : hmg_mp_sergeant
	{
		_generalMacro = "hmg_mp_komot_art_recon_squad";
		Author_Macro
		displayName= "Командир отделения артиллерийской разведки (ВСР-98)";
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
	};
	
	class hmg_mp_komot_podvoza : hmg_mp_sergeant
	{
		_generalMacro = "hmg_mp_komot_podvoza";
		Author_Macro
		displayName= "Командир отделения подвоза боеприпасов (ВСР-98)";
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
	};
	
	class hmg_mp_starshii_vi4islitel : hmg_mp_komot_art_recon_squad
	{
		_generalMacro = "hmg_mp_starshii_vi4islitel";
		Author_Macro
		displayName= "Старший вычислитель (ВСР-98)";
		Items[] = {"FirstAidKit","cw_item_table82mm","cw_item_notepad","AGM_MapTools"};
		RespawnItems[] = {"FirstAidKit","cw_item_table82mm","cw_item_notepad","AGM_MapTools"};
	};
	
	class hmg_mp_komvzvoda_upravlenia : hmg_mp_officer_armored
	{
		_generalMacro = "hmg_mp_komvzvoda_upravlenia";
		Author_Macro
		displayName= "Командир взвода управления (ВСР-98)";
	};
	
	class hmg_mp_komandir_minbatr : hmg_mp_officer
	{
		_generalMacro = "hmg_mp_komandir_minbatr";
		Author_Macro
		displayName= "Командир батареи (ВСР-98)";
	};
	// медицинский пункт батальона 
	// Командир медицинского пункта
	// Старший водитель-санитар
	// Санитарный инструктор
	// Санитар
	// Водитель - санитар
	
	class hmg_mp_medic : hmg_mp_rifleman
	{
		_generalMacro = "hmg_mp_medic";
		Author_Macro
		displayName= "Санитар (ВСР-98)";
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

        linkedItems[] = {"rhs_6b26_green","rhs_6b23_medic","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b26_green","rhs_6b23_medic","ItemCompass","ItemWatch"};
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
	};
	
	class hmg_mp_medic_st : hmg_mp_sergeant
	{
		_generalMacro = "hmg_mp_medic_st";
		Author_Macro
		attendant =1;
		icon="iconManMedic";
		displayName= "Старший водитель-санитар (ВСР-98)";
		Items[] = {"FirstAidKit","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		RespawnItems[] = {"FirstAidKit","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
		linkedItems[] = {"rhs_6b26_green","rhs_6b23_medic","ItemCompass","ItemWatch","ItemMap"};
		respawnLinkedItems[] = {"rhs_6b26_green","rhs_6b23_medic","ItemCompass","ItemWatch","ItemMap"};
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"}; //rhs_weap_ak74m_folded_dtk
		backpack="rhs_assault_umbts_medic";
	};
	
	class hmg_mp_san_instruktor : hmg_mp_medic_st
	{
		_generalMacro = "hmg_mp_san_instruktor";
		Author_Macro
		attendant =1;
		icon="iconManMedic";
		displayName= "Сан. инструктор (ВСР-98)";
	};
	
	class hmg_mp_voditel_sanitar : hmg_mp_voditel
	{
		_generalMacro = "hmg_mp_voditel_sanitar";
		Author_Macro
		attendant =1;
		backpack="rhs_assault_umbts_medic";
		icon="iconManMedic";
		displayName = "Водитель-санитар (ВСР-98)";
		linkedItems[] = {"rhs_6b26_green","rhs_6b23_medic","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b26_green","rhs_6b23_medic","ItemCompass","ItemWatch"};
	};
	
	class hmg_mp_med_leader : hmg_mp_officer_armored
	{
		_generalMacro = "hmg_mp_med_leader";
		Author_Macro
		attendant =1;
		icon="iconManMedic";
		displayName= "Командир медицинского пункта (ВСР-98)";
		linkedItems[] = {"rhs_6b26_green","rhs_6b23_medic","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b26_green","rhs_6b23_medic","ItemMap","ItemCompass","ItemWatch"};
		backpack = "tf_mr3000_rhs";
	};
	