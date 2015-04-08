
	class rhs_infantry_vdv_base : rhs_infantry_msv_base
	{
		_generalMacro = "rhs_infantry_vdv_base";

		faction = "rhs_faction_vdv";
		vehicleClass = "rhs_vehclass_infantry";
		displayName= "$STR_RHS_INF_RIFLEMAN";


		accuracy = 2.3;
		sensitivity = 3;
		threat[] = {1,0.1,0.1};
		camouflage = 1.2;
		minFireTime = 7;
		canCarryBackPack = 1;

		model = "\rhsafrf\addons\rhs_infantry\rhs_vdv_emr_base.p3d";

		modelSides[] = {0,3};
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

		linkedItems[] = {"rhs_6b27m_digi","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_digi","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	};

	class rhs_vdv_rifleman : rhs_infantry_vdv_base
	{
		scope = 2;
		_generalMacro = "rhs_vdv_rifleman";
		Author_Macro
		displayName = "$STR_RHS_INF_RIFLEMAN";

        linkedItems[] = {"rhs_6b28","rhs_6b23_digi_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	};

	class rhs_vdv_flora_rifleman : rhs_infantry_vdv_base
	{
		scope = 1;
		_generalMacro = "rhs_vdv_flora_rifleman";
		Author_Macro
		displayName = "$STR_RHS_INF_RIFLEMAN";

		model = "\rhsafrf\addons\rhs_infantry\rhs_vdv_base.p3d";

        linkedItems[] = {"rhs_6b28","rhs_6b23_digi_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	};

	class rhs_vdv_mflora_rifleman : rhs_infantry_vdv_base
	{
		scope = 1;
		_generalMacro = "rhs_vdv_mflora_rifleman";
		Author_Macro
		displayName = "$STR_RHS_INF_RIFLEMAN";

		model = "\rhsafrf\addons\rhs_infantry\rhs_vdv_mf_base.p3d";

        linkedItems[] = {"rhs_6b28","rhs_6b23_digi_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	};

	class rhs_vdv_efreitor : rhs_vdv_rifleman
	{
		_generalMacro = "rhs_vdv_efreitor";
		Author_Macro
		displayName= "$STR_RHS_INF_EFREITOR";


        linkedItems[] = {"rhs_6b28_green","rhs_6b23_digi_6sh92_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28_green","rhs_6b23_digi_6sh92_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	};

	class rhs_vdv_grenadier : rhs_vdv_rifleman
	{
		_generalMacro = "rhs_vdv_grenadier";
		Author_Macro
		displayName= "$STR_RHS_INF_GRENADIER";

		cost = 130000;
		threat[] = {1,0.3,0.1};

        linkedItems[] = {"rhs_6b28_green_ess","rhs_balaclava","rhs_6b23_digi_6sh92_vog","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28_green_ess","rhs_balaclava","rhs_6b23_digi_6sh92_vog","ItemMap","ItemCompass","ItemWatch","ItemRadio"};


		weapons[] = {"rhs_weap_ak74m_gp25","Throw","Put"};
		magazines[] = {
			"rhs_30Rnd_545x39_7N10_AK",
 			"rhs_30Rnd_545x39_7N10_AK",
 			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_GRD40_White",
			"rhs_mag_nspn_red"
		};

		respawnWeapons[] = {"rhs_weap_ak74m_gp25","Throw","Put"};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
 			"rhs_30Rnd_545x39_7N10_AK",
 			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_GRD40_White",
			"rhs_mag_nspn_red"
		};
	};

	class rhs_vdv_machinegunner : rhs_vdv_rifleman
	{
		_generalMacro = "rhs_vdv_machinegunner";
		Author_Macro
		displayName= "$STR_RHS_INF_MACHINEGUNNER";

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

        linkedItems[] = {"rhs_6b28_green_ess","rhs_6b23_digi","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28_green_ess","rhs_6b23_digi","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_pkp","Throw","Put"};
		magazines[] =
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_nspn_red"
		};
		respawnWeapons[] = {"rhs_weap_pkp","Throw","Put"};
		respawnMagazines[] =
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_nspn_red"
		};
		backpack="rhs_sidorMG";
		secondaryAmmoCoef = 0.5;
	};

	class rhs_vdv_machinegunner_assistant : rhs_vdv_rifleman
	{
		_generalMacro = "rhs_vdv_machinegunner_assistant";
		displayName= "$STR_RHS_INF_MACHINEGUNNER_ASSISTANT";


        	linkedItems[] = {"rhs_6b28","rhs_balaclava","rhs_6b23_digi_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_balaclava","rhs_6b23_digi_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack="rhs_sidorMG";
	};

	class rhs_vdv_at : rhs_vdv_rifleman
	{
		_generalMacro = "rhs_vdv_at";
		Author_Macro
		displayName= "$STR_RHS_INF_GRENADIER_RPG";

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

		weapons[] = {"rhs_weap_ak74m","Throw","Put","rhs_weap_rpg7_pgo"};
		respawnWeapons[] = {"rhs_weap_ak74m","Throw","Put","rhs_weap_rpg7_pgo"};

       		linkedItems[] = {"rhs_6b28_green","rhs_6b23_digi_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28_green","rhs_6b23_digi_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

		magazines[] = {"rhs_rpg7_PG7VL_mag",  "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK","rhs_mag_nspn_red"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK","rhs_mag_nspn_red"};

		backpack="rhs_rpg";

	};

	class rhs_vdv_aa : rhs_vdv_at
	{
		_generalMacro = "rhs_vdv_aa";
		Author_Macro
		displayName= "$STR_RHS_INF_AA";


       		linkedItems[] = {"rhs_6b28_ess","rhs_6b23_digi_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28_ess","rhs_6b23_digi_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

		weapons[] = {"rhs_weap_ak74m","Throw","Put","rhs_weap_igla"};
		respawnWeapons[] = {"rhs_weap_ak74m","Throw","rhs_weap_igla"};

		magazines[] = { "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9k38_rocket"};
		respawnMagazines[] = { "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9k38_rocket"};

		backpack="";

	};
	class rhs_vdv_strelok_rpg_assist : rhs_vdv_rifleman
	{
		_generalMacro = "rhs_vdv_strelok_rpg_assist";
		Author_Macro
		displayName= "$STR_RHS_INF_GRENADIER_RPG_ASSISTANT";


        linkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = { "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK","rhs_mag_nspn_red"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = { "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK","rhs_mag_nspn_red"};
		backpack="rhs_rpg";

	};

	class rhs_vdv_marksman : rhs_vdv_rifleman
	{
		_generalMacro = "rhs_vdv_marksman";
		Author_Macro
		displayName= "$STR_RHS_INF_MARKSMAN";

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

        	linkedItems[] = {"rhs_Booniehat_digi","rhs_6b23_digi_sniper","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_Booniehat_digi","rhs_6b23_digi_sniper","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

		weapons[] = {"rhs_weap_svds_pso1","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_svds_pso1","Throw","Put"};

		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1","rhs_mag_nspn_red"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1","rhs_mag_nspn_red"};

	};

	class rhs_vdv_officer_armored : rhs_vdv_rifleman
	{
		_generalMacro = "rhs_vdv_officer_armored";
		Author_Macro
		displayName= "$STR_RHS_INF_OFFICER_ARMORED";

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

		weapons[] = {"rhs_weap_ak74m","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m","Throw","Put","Binocular"};
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspn_red"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspn_red"
		};


        	linkedItems[] = {"rhs_fieldcap_digi","rhs_6b23_digi_crewofficer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_fieldcap_digi","rhs_6b23_digi_crewofficer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	};

	class rhs_vdv_officer : rhs_vdv_officer_armored
	{
		_generalMacro = "rhs_vdv_officer";
		Author_Macro
		displayName= "$STR_RHS_INF_OFFICER";


        	linkedItems[] = {"rhs_fieldcap_digi","rhs_vest_commander","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_fieldcap_digi","rhs_vest_commander","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	};

	class rhs_vdv_sergeant :  rhs_vdv_rifleman
	{
		_generalMacro = "rhs_vdv_sergeant";
		Author_Macro
		displayName= "$STR_RHS_INF_SERGEANT";

		icon = "iconManLeader";
		cost = 450000;
		sensitivity = 3.2;

		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspn_red"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspn_red"
		};


        linkedItems[] = {"rhs_6b28_green","rhs_6b23_digi_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28_green","rhs_6b23_digi_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	};


	class rhs_vdv_junior_sergeant : rhs_vdv_sergeant
	{
		_generalMacro = "rhs_vdv_junior_sergeant";
		Author_Macro
		displayName= "$STR_RHS_INF_JUNIOR_SERGEANT";


        	linkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92_vog_headset","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92_vog_headset","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	};

	class rhs_vdv_engineer : rhs_vdv_rifleman
	{
		_generalMacro = "rhs_vdv_engineer";
		Author_Macro
		displayName= "$STR_RHS_INF_ENGINEER";


       		linkedItems[] = {"rhs_6b28_green_ess","rhs_balaclava","rhs_6b23_digi_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28_green_ess","rhs_balaclava","rhs_6b23_digi_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

		engineer=1;
		backpack="rhs_assault_umbts_engineer";
		icon="iconManEngineer";
		picture="pictureRepair";

	};

	class rhs_vdv_driver_armored : rhs_vdv_rifleman
	{
		_generalMacro = "rhs_vdv_driver_armored";
		Author_Macro
		displayName= "$STR_RHS_INF_DRIVER_ARMORED";
		
		weapons[] = {"rhs_weap_ak74m_folded","Throw","Put"}; //rhs_weap_ak74m_folded
		respawnWeapons[] = {"rhs_weap_ak74m_folded","Throw","Put"}; //rhs_weap_ak74m_folded

		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgd5"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgd5"
		};

        	linkedItems[] = {"rhs_fieldcap_digi","rhs_6b23_digi","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_fieldcap_digi","rhs_6b23_digi","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	};

	class rhs_vdv_driver : rhs_vdv_driver_armored
	{
		_generalMacro = "rhs_vdv_driver";
		Author_Macro
		displayName= "$STR_RHS_INF_DRIVER";

		weapons[] = {"rhs_weap_ak74m_folded","Throw","Put"}; //rhs_weap_ak74m_folded
		respawnWeapons[] = {"rhs_weap_ak74m_folded","Throw","Put"}; //rhs_weap_ak74m_folded

        	linkedItems[] = {"rhs_fieldcap_digi","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_fieldcap_digi","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	};

	class rhs_vdv_medic : rhs_vdv_rifleman
	{
		_generalMacro = "rhs_vdv_medic";
		Author_Macro
		displayName= "$STR_RHS_INF_MEDIC";
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

        	linkedItems[] = {"rhs_6b28","rhs_6b23_digi_medic","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_medic","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class rhs_vdv_LAT : rhs_vdv_rifleman
	{
		_generalMacro = "rhs_vdv_LAT";
		Author_Macro
		displayName= "$STR_RHS_INF_LAT";


        	linkedItems[] = {"rhs_6b28_green","rhs_scarf","rhs_6b23_digi_6sh92_vog","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b28_green","rhs_scarf","rhs_6b23_digi_6sh92_vog","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_ak74m_gp25","Throw","Put","rhs_weap_rpg26"};
		magazines[] = {"rhs_rpg26_mag", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_VOG25", "rhs_VOG25", "rhs_GRD40_White","rhs_mag_nspn_red"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25","Throw","Put","rhs_weap_rpg26"};
		respawnMagazines[] = {"rhs_rpg26_mag", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_VOG25", "rhs_VOG25", "rhs_GRD40_White","rhs_mag_nspn_red"};
	};

	class rhs_vdv_RShG2 : rhs_vdv_LAT
	{
		_generalMacro = "rhs_vdv_RShG2";
		Author_Macro
		displayName= "$STR_RHS_INF_RShG2";

		weapons[] = {"rhs_weap_ak74m_gp25","Throw","Put","rhs_weap_rshg2"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25","Throw","Put","rhs_weap_rpg26"};

		magazines[] = {"rhs_rshg2_mag", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_VOG25", "rhs_VOG25", "rhs_GRD40_White"};
		respawnMagazines[] = {"rhs_rshg2_mag", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_VOG25", "rhs_VOG25", "rhs_GRD40_White"};
	};

	class rhs_vdv_crew : rhs_vdv_rifleman
	{
		_generalMacro = "rhs_vdv_crew";
		Author_Macro
		displayName= "$STR_RHS_INF_CREW";
		weapons[] = {"rhs_weap_ak74m_folded","Throw","Put"}; //rhs_weap_ak74m_folded
		respawnWeapons[] = {"rhs_weap_ak74m_folded","Throw","Put"}; //rhs_weap_ak74m_folded

		magazines[] = 
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_nspn_red"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_nspn_red"
		};


        	linkedItems[] = {"rhs_tsh4_ess","rhs_scarf","rhs_6sh46","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_scarf","rhs_6sh46","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		fsmDanger = "rhsafrf\addons\rhs_c_troops\scripts\dangerCrew.fsm";

	};

	class rhs_vdv_crew_commander : rhs_vdv_crew
	{
		_generalMacro = "rhs_vdv_crew_commander";
		Author_Macro
		displayName= "$STR_RHS_INF_CREW_COMMANDER";
		weapons[] = {"rhs_weap_ak74m_folded","Throw","Put"}; //rhs_weap_ak74m_folded
		respawnWeapons[] = {"rhs_weap_ak74m_folded","Throw","Put"}; //rhs_weap_ak74m_folded


        	linkedItems[] = {"rhs_tsh4","rhs_vest_commander","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_vest_commander","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	};

	class rhs_vdv_armoredcrew : rhs_vdv_crew
	{
		_generalMacro = "rhs_vdv_armoredcrew";
		Author_Macro
		displayName= "$STR_RHS_INF_CREW_ARMORED";
		weapons[] = {"rhs_weap_ak74m_folded","Throw","Put"}; //rhs_weap_ak74m_folded
		respawnWeapons[] = {"rhs_weap_ak74m_folded","Throw","Put"}; //rhs_weap_ak74m_folded


        	linkedItems[] = {"rhs_tsh4_ess","rhs_6b23_digi_crew","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_6b23_digi_crew","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	};

	class rhs_vdv_combatcrew : rhs_vdv_crew
	{
		_generalMacro = "rhs_vdv_combatcrew";
		Author_Macro
		displayName= "$STR_RHS_INF_CREW_COMBAT";
		weapons[] = {"rhs_weap_ak74m_folded","Throw","Put"}; //rhs_weap_ak74m_folded
		respawnWeapons[] = {"rhs_weap_ak74m_folded","Throw","Put"}; //rhs_weap_ak74m_folded


        	linkedItems[] = {"rhs_tsh4_ess","rhs_scarf","rhs_vydra_3m","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_scarf","rhs_vydra_3m","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	};