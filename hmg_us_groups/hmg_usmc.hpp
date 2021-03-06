﻿// отсюда пошли КМПшники в Марпате обр. 2005 года
class hmg_usmc_w_2005 : rhsusf_army_ocp_rifleman
	{
		displayName= "Rifleman (base)";
		uniformClass = "rhs_uniform_FROG01_wd";
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A", "AGM_EarBuds", "AGM_EarBuds" };

		linkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat"};
		backpack = "MEF_Wood_Kitbag";
		class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'US_1stMarineDivision_acu'] call BIS_fnc_setUnitInsignia;";
    };
	};
	class hmg_usmc_w_2005_rifleman : hmg_usmc_w_2005
	{
		displayName = "Rifleman/pointman (Marpat)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP", "tf_anprc154", "tf_microdagr"};
	};
	class hmg_usmc_w_2005_firstaid : hmg_usmc_w_2005_rifleman
	{
		displayName= "Rifleman/firstaid (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds" };
	};	
	class hmg_usmc_w_2005_marksman : hmg_usmc_w_2005_rifleman
	{
		displayName= "Designated marksman (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "RH_m3lr", "rhsusf_acc_anpeq15A", "RH_HBLM", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "RH_m3lr", "rhsusf_acc_anpeq15A", "RH_HBLM", "AGM_EarBuds" };
		weapons[] = {"RH_SAMR","Throw","Put"};
		respawnWeapons[] = {"RH_SAMR","Throw","Put"};
		magazines[] = 		{
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"30Rnd_556x45_Stanag_Tracer_Red"
		};
		respawnMagazines[] =
		{
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"30Rnd_556x45_Stanag_Tracer_Red"
		};
	};	
	class hmg_usmc_w_2005_assar : hmg_usmc_w_2005
	{
		displayName= "Assist. Auto Rifleman (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel", "rhsusf_acc_anpeq15A", "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel", "rhsusf_acc_anpeq15A", "AGM_EarBuds"};
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "tf_anprc154" };
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "tf_anprc154" };
		backpack="MEF_Wood_Kitbag_AR";
	};
	class hmg_usmc_w_2005_AR : hmg_usmc_w_2005_rifleman
	{
		displayName= "Auto Rifleman (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_pas13cmg","AGM_SpareBarrel", "rhsusf_acc_anpeq15A" , "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_pas13cmg","AGM_SpareBarrel", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		linkedItems[] = {"TRYK_V_Sheriff_BA_TCL2","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154" };
		respawnLinkedItems[] = {"TRYK_V_Sheriff_BA_TCL2","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154" };
		weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
		magazines[] = {"rhs_200rnd_556x45_M_SAW",  "rhs_200rnd_556x45_M_SAW", "rhs_200rnd_556x45_T_SAW"};
		respawnMagazines[] = {"rhs_200rnd_556x45_M_SAW",  "rhs_200rnd_556x45_M_SAW", "rhs_200rnd_556x45_T_SAW"};
	};
	class hmg_usmc_w_2005_TL : hmg_usmc_w_2005_rifleman
	{
		displayName= "Team leader (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		weapons[] = {"rhs_weap_m16a4_carryhandle_M203","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203","Throw","Put"};
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatwd","ItemCompass","G_Combat", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatwd","ItemCompass","G_Combat", "rhsusf_ANPVS_14","tf_anprc154","tf_microdagr"};
		backpack="MEF_Wood_Kitbag_TL";
	};
	class hmg_usmc_w_2005_SL : hmg_usmc_w_2005_rifleman
	{
		displayName= "Squad leader (Marpat)";
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip","Throw","Put", "Binocular"}; 
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip","Throw","Put", "Binocular"}; 
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "AGM_EarBuds"};
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatwd","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap","tf_anprc154","tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatwd","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap","tf_anprc154","tf_microdagr"};
	};
	class hmg_usmc_w_2005_messenger : hmg_usmc_w_2005_rifleman
	{
		displayName= "Messenger (Marpat)";
		backpack = "tf_rt1523g_black";
	};
	class hmg_usmc_w_2005_guide : hmg_usmc_w_2005_rifleman
	{
		displayName= "PLT Guide (Marpat)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP", "itemradio","ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP", "itemradio","ItemMap"};
	};
	class hmg_usmc_w_2005_pltsrg : hmg_usmc_w_2005_SL
	{
		displayName= "Platoon sergeant (Marpat)";
		backpack = "tf_rt1523g_black";
	};
	class hmg_usmc_w_2005_PltL : hmg_usmc_w_2005_SL
	{
		displayName= "Platoon commander (Marpat)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS","ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS","ItemMap"};
	};
	class hmg_usmc_w_2005_firsrg : hmg_usmc_w_2005
	{
		displayName= "First sergeant (Marpat)";
		weapons[] = {"CUP_hgun_M9","Throw","Put","Binocular"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","Binocular"};		
        linkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatwd","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatwd","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	};
	class hmg_usmc_w_2005_gunsrg : hmg_usmc_w_2005_firsrg
	{
		displayName= "Gunnery sergeant (Marpat)";
		engineer = 1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};	
	class hmg_usmc_w_2005_execoff : hmg_usmc_w_2005_firsrg
	{
		displayName= "Exec officer (Marpat)";
		linkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
		backpack="tf_rt1523g_black";
	};		
	class hmg_usmc_w_2005_cl : hmg_usmc_w_2005_firsrg
	{
		displayName= "Company commander (Marpat)";
		linkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
	};
	class hmg_usmc_w_2005_MGSL : hmg_usmc_w_2005_SL
	{
		displayName= "MG Section leader (Marpat)";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		linkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap"};
		respawnLinkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	};
	class hmg_usmc_w_2005_mortSL : hmg_usmc_w_2005_SL
	{
		displayName= "Mortar Section leader (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio", "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio", "AGM_EarBuds"};
		linkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP", "ItemMap"};
	};
	class hmg_usmc_w_2005_mg_tl : hmg_usmc_w_2005_SL
	{
		displayName= "MG Team leader (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		linkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
	};
	class hmg_usmc_w_2005_mg : hmg_usmc_w_2005
	{
		displayName= "Gunner (Marpat)";
		weapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240G"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240G"};		
        linkedItems[] = {"TRYK_V_Sheriff_BA_TCL2","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"TRYK_V_Sheriff_BA_TCL2","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		magazines[] = 
			{
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51_m993",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51_m993",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	};
	class hmg_usmc_w_2005_assMG : hmg_usmc_w_2005
	{
		displayName= "Ammunition man (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel", "AGM_EarBuds" };
		backpack = "MEF_Wood_Kitbag_MG";
	};
	class hmg_usmc_w_2005_mortL : hmg_usmc_w_2005
	{
		displayName= "Squad leader/gunner (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds" };
		weapons[] = {"CUP_hgun_M9","Throw","Put", "Rangefinder"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put", "Rangefinder"};		
        linkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	backpack = "RDS_M252_Gun_Bag_FIA";
	};
	class hmg_usmc_w_2005_mortas : hmg_usmc_w_2005
	{
		displayName= "Assistant gunner (Marpat)";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
		backpack = "RDS_M252_Bipod_Bag_FIA";
	};
	class hmg_usmc_w_2005_mortam : hmg_usmc_w_2005
	{
		displayName= "Ammunition man (Marpat)";
		backpack = "m252_ammo_marpat";
	};
	class hmg_usmc_w_2005_assSL : hmg_usmc_w_2005_MGSL
	{
		displayName= "Assault section leader (Marpat)";
	};
	class hmg_usmc_w_2005_assGun : hmg_usmc_w_2005_MGSL
	{
		displayName= "Assault section team leader / Gunner (Marpat)";
		weapons[] = {"CUP_hgun_M9","Throw","Put", "Trixie_SMAW"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put", "Trixie_SMAW"};
		magazines[] = 
			{
				"rhs_mag_an_m14_th3",
				"rhs_mag_an_m14_th3",
				"rhs_mag_an_m14_th3",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"rhs_mag_an_m14_th3",
				"rhs_mag_an_m14_th3",
				"rhs_mag_an_m14_th3",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds" };

		linkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		backpack = "MEF_Wood_Kitbag_SMAW";
	};
	class hmg_usmc_w_2005_assAssGun : hmg_usmc_w_2005
	{
		displayName= "Assault section Assistant Gunner (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag", "rhsusf_acc_anpeq15A", "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag", "rhsusf_acc_anpeq15A", "AGM_EarBuds"};
		backpack = "MEF_Wood_Kitbag_SMAW";
	};
// Corpsman team Marpat	2005
	class hmg_usmc_w_2005_scorp : hmg_usmc_w_2005_sl
	{
		displayName = "Senior corpsman (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools" , "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools" , "AGM_EarBuds"};
		linkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatwd","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap"};
		respawnLinkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatwd","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap"};
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "MEF_Wood_Kitbag_medic";
}
	class hmg_usmc_w_2005_corp : hmg_usmc_w_2005
{
		displayName = "Corpsman (Marpat)";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "MEF_Wood_Kitbag_medic";
}
//Sniper scout team Marpat 2005
	class hmg_usmc_w_2005_scout : hmg_usmc_w_2005
{
		displayName = "Scout (Marpat)";
		weapons[] = {"rhs_weap_m4_m203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4_m203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		magazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
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
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4","CUP_muzzle_snds_M9","AGM_M26_Clacker", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4","CUP_muzzle_snds_M9","AGM_M26_Clacker", "AGM_EarBuds" };

		linkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		backpack = "tf_rt1523g_black";
};
	class hmg_usmc_w_2005_sniper : hmg_usmc_w_2005
{
		displayName = "Sniper (Marpat)";
		weapons[] = {"Trixie_M40A3_NG","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		respawnWeapons[] = {"Trixie_M40A3_NG","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		magazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs10","CUP_muzzle_snds_M9","AGM_Clacker", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs10","CUP_muzzle_snds_M9","AGM_Clacker", "AGM_EarBuds" };

		linkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
};
	class hmg_usmc_w_2005_sniperH : hmg_usmc_w_2005_sniper
{
		displayName = "Sniper (heavy) (Marpat)";
		weapons[] = {"Trixie_M107","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		respawnWeapons[] = {"Trixie_M107","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		magazines[] = 
			{
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"HandGrenade",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"HandGrenade",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4_2","RH_anpvs10","CUP_muzzle_snds_M9","AGM_Clacker", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4_2","RH_anpvs10","CUP_muzzle_snds_M9","AGM_Clacker", "AGM_EarBuds" };

		linkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatwd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
};
//отсюда пошил КМПшники в Марпате Дезерт обр. 2005 года
	class hmg_usmc_d_2005 : rhsusf_army_ocp_rifleman
	{
		displayName= "Rifleman (base)";
		uniformClass = "rhs_uniform_FROG01_d";
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A", "AGM_EarBuds", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A", "AGM_EarBuds", "AGM_EarBuds" };

		linkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "tf_anprc154"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "tf_anprc154"};
		backpack = "MEF_Des_Tactical_empty";
		class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'US_1stMarineDivision_des'] call BIS_fnc_setUnitInsignia;";
    };
	};
	class hmg_usmc_d_2005_rifleman : hmg_usmc_d_2005
	{
		displayName = "Rifleman/pointman (MarpatDesert)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "NVGoggles", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "NVGoggles", "tf_anprc154", "tf_microdagr"};
	};
	class hmg_usmc_d_2005_firstaid : hmg_usmc_d_2005_rifleman
	{
		displayName= "Rifleman/firstaid (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds" };
	};
	class hmg_usmc_d_2005_marksman : hmg_usmc_d_2005_rifleman
	{
		displayName= "Designated marksman (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "RH_m3lr", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "RH_m3lr", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		weapons[] = {"Trixie_M14DMR_Clean_Black","Throw","Put"};
		respawnWeapons[] = {"Trixie_M14DMR_Clean_Black","Throw","Put"};
		magazines[] =
		{
			"Trixie_20x762_Mag",
			"Trixie_20x762_Mag",
			"Trixie_20x762_Mag",
			"Trixie_20x762_Mag",
			"Trixie_20x762_Mag",
			"Trixie_20x762_Mag",
			"Trixie_20x762_Mag",
			"Trixie_20x762_Mag",
			"Trixie_20x762_Mag",
			"Trixie_20x762_Mag"
		};
		respawnMagazines[] =
		{
			"Trixie_20x762_Mag",
			"Trixie_20x762_Mag",
			"Trixie_20x762_Mag",
			"Trixie_20x762_Mag",
			"Trixie_20x762_Mag",
			"Trixie_20x762_Mag",
			"Trixie_20x762_Mag",
			"Trixie_20x762_Mag",
			"Trixie_20x762_Mag",
			"Trixie_20x762_Mag"
		};
	};
	class hmg_usmc_d_2005_assar : hmg_usmc_d_2005_rifleman
	{
		displayName= "Assist. Auto Rifleman (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel", "rhsusf_acc_anpeq15A", "AGM_EarBuds", "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel", "rhsusf_acc_anpeq15A", "AGM_EarBuds", "AGM_EarBuds"};
		backpack="MEF_Des_Tactical_AR";
	};
	class hmg_usmc_d_2005_AR : hmg_usmc_d_2005_rifleman
	{
		displayName= "Auto Rifleman (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_pas13cmg","AGM_SpareBarrel", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_pas13cmg","AGM_SpareBarrel", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		linkedItems[] = {"TRYK_V_Sheriff_BA_TCL2","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_Sheriff_BA_TCL2","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
		magazines[] = {"rhs_200rnd_556x45_M_SAW",  "rhs_200rnd_556x45_M_SAW", "rhs_200rnd_556x45_T_SAW"};
		respawnMagazines[] = {"rhs_200rnd_556x45_M_SAW",  "rhs_200rnd_556x45_M_SAW", "rhs_200rnd_556x45_T_SAW"};
	};
	class hmg_usmc_d_2005_TL : hmg_usmc_d_2005_rifleman
	{
		displayName= "Team leader (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		weapons[] = {"rhs_weap_m16a4_carryhandle_M203","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203","Throw","Put"};
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatd","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatd","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		backpack="MEF_Des_Tactical_TL";
	};
	class hmg_usmc_d_2005_SL : hmg_usmc_d_2005_rifleman
	{
		displayName= "Squad leader (MarpatDesert)";
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip","Throw","Put", "Binocular"}; 
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip","Throw","Put", "Binocular"}; 
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "AGM_EarBuds"};
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "tf_anprc154", "tf_microdagr", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr", "ItemMap"};
	};
	class hmg_usmc_d_2005_messenger : hmg_usmc_d_2005_rifleman
	{
		displayName= "Messenger (MarpatDesert)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
		backpack = "tf_rt1523g_big_rhs";
	};
	class hmg_usmc_d_2005_guide : hmg_usmc_d_2005_rifleman
	{
		displayName= "PLT Guide (MarpatDesert)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "NVGoggles", "itemradio","ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "NVGoggles", "itemradio","ItemMap"};
	};
	class hmg_usmc_d_2005_pltsrg : hmg_usmc_d_2005_SL
	{
		displayName= "Platoon sergeant (MarpatDesert)";
		backpack = "tf_rt1523g_big_rhs";
	
	};
	class hmg_usmc_d_2005_PltL : hmg_usmc_d_2005_SL
	{
		displayName= "Platoon commander (MarpatDesert)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS","ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS","ItemMap"};
	};
	class hmg_usmc_d_2005_firsrg : hmg_usmc_d_2005
	{
		displayName= "First sergeant (MarpatDesert)";
		weapons[] = {"CUP_hgun_M9","Throw","Put","Binocular"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","Binocular"};		
         linkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatd","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatd","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	};
	class hmg_usmc_d_2005_gunsrg : hmg_usmc_d_2005_firsrg
	{
		displayName= "Gunnery sergeant (MarpatDesert)";
		engineer = 1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};	
	class hmg_usmc_d_2005_execoff : hmg_usmc_d_2005_firsrg
	{
		displayName= "Exec officer (MarpatDesert)";
		linkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
		backpack="tf_rt1523g_big_rhs";
	};	
	class hmg_usmc_d_2005_cl : hmg_usmc_d_2005_execoff
	{
		displayName= "Company commander (MarpatDesert)";
		linkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio","ItemMap"};
		respawnLinkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio","ItemMap"};
	};
	class hmg_usmc_d_2005_MGSL : hmg_usmc_d_2005_SL
	{
		displayName= "MG Section leader (MarpatDesert)";
		linkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap"};
		respawnLinkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMap"};
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	};
	class hmg_usmc_d_2005_mortSL : hmg_usmc_d_2005_SL
	{
		displayName= "Mortar Section leader (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio" , "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio" , "AGM_EarBuds"};
		linkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "NVGoggles","ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "NVGoggles", "ItemMap"};
	};
	class hmg_usmc_d_2005_mg_tl : hmg_usmc_d_2005_SL
	{
		displayName= "MG Team leader (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		linkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
	};
	class hmg_usmc_d_2005_mg : hmg_usmc_d_2005
	{
		displayName= "Gunner (MarpatDesert)";
		weapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240G"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240G"};		
        linkedItems[] = {"TRYK_V_Sheriff_BA_TCL2","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
		respawnLinkedItems[] = {"TRYK_V_Sheriff_BA_TCL2","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
		magazines[] = 
			{
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51_m993",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51_m993",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	};
	class hmg_usmc_d_2005_assMG : hmg_usmc_d_2005
	{
		displayName= "Ammunition man (MarpatDesert)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
		backpack = "MEF_Des_Tactical_MG";
	};
	class hmg_usmc_d_2005_mortL : hmg_usmc_d_2005
	{
		displayName= "Squad leader/gunner (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" , "AGM_EarBuds"};
		weapons[] = {"CUP_hgun_M9","Throw","Put", "Rangefinder"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put", "Rangefinder"};		
        linkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
		respawnLinkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	backpack = "RDS_M252_Gun_Bag_FIA";
	};
	class hmg_usmc_d_2005_mortas : hmg_usmc_d_2005
	{
		displayName= "Assistant gunner (MarpatDesert)";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
		backpack = "RDS_M252_Bipod_Bag_FIA";
	};
	class hmg_usmc_d_2005_mortam : hmg_usmc_d_2005
	{
		displayName= "Ammunition man (MarpatDesert)";
		backpack = "m252_ammo_marpatDesert";
	};
	class hmg_usmc_d_2005_assSL : hmg_usmc_d_2005_MGSL
	{
		displayName= "Assault section leader (MarpatDesert)";
	};
	class hmg_usmc_d_2005_assGun : hmg_usmc_d_2005_MGSL
	{
		displayName= "Assault section team leader / Gunner (MarpatDesert)";
		weapons[] = {"CUP_hgun_M9","Throw","Put", "Trixie_SMAW"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put", "Trixie_SMAW"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" , "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds" };

		linkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
		respawnLinkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
		backpack = "MEF_Des_Tactical_SMAW";
	};
	class hmg_usmc_d_2005_assAssGun : hmg_usmc_d_2005
	{
		displayName= "Assault section Assistant Gunner (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag", "rhsusf_acc_anpeq15A", "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag", "rhsusf_acc_anpeq15A", "AGM_EarBuds"};
		backpack = "MEF_Des_Tactical_SMAW";
	};
// Corpsman team MarpatDesert	2005
	class hmg_usmc_d_2005_scorp : hmg_usmc_d_2005_sl
	{
		displayName = "Senior corpsman (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools" , "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools" , "AGM_EarBuds"};
		linkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatd","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap"};
		respawnLinkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatd","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap"};
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "MEF_Des_Tactical_medic";
};
	class hmg_usmc_d_2005_corp : hmg_usmc_d_2005
	{
		displayName = "Corpsman (MarpatDesert)";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "MEF_Des_Tactical_medic";
};
//Sniper scout team MarpatDesert 2005
	class hmg_usmc_d_2005_scout : hmg_usmc_d_2005
	{
		displayName = "Scout (MarpatDesert)";
		weapons[] = {"rhs_weap_m4_m203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4_m203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		magazines[] = 
			{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
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
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4","CUP_muzzle_snds_M9","AGM_M26_Clacker", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4","CUP_muzzle_snds_M9","AGM_M26_Clacker", "AGM_EarBuds" };

		linkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		backpack = "tf_rt1523g_black";
};
	class hmg_usmc_d_2005_sniper : hmg_usmc_d_2005
	{
		displayName = "Sniper (MarpatDesert)";
		weapons[] = {"Trixie_M40A3_NG","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		respawnWeapons[] = {"Trixie_M40A3_NG","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		magazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs10","CUP_muzzle_snds_M9","AGM_Clacker" , "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs10","CUP_muzzle_snds_M9","AGM_Clacker" , "AGM_EarBuds"};

		linkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
};
	class hmg_usmc_d_2005_sniperH : hmg_usmc_d_2005_sniper
	{
		displayName = "Sniper (heavy) (MarpatDesert)";
		weapons[] = {"Trixie_M107_Black","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		respawnWeapons[] = {"Trixie_M107_Black","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		magazines[] = 
			{
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"HandGrenade",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"HandGrenade",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4_2", "RH_anpvs10","CUP_muzzle_snds_M9","AGM_Clacker" , "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4_2", "RH_anpvs10","CUP_muzzle_snds_M9","AGM_Clacker" , "AGM_EarBuds"};

		linkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","rhsusf_lwh_helmet_marpatd","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
};
// отсюда пошли КМПшники в Марпате Snow обр. 2005 года
class hmg_usmc_s_2005 : rhsusf_army_ocp_rifleman
	{
		displayName= "Rifleman (base)";
		uniformClass = "MEF_Wood_IN_SNOW_LS";
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A" , "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A" , "AGM_EarBuds"};

		linkedItems[] = {"TRYK_V_ArmorVest_khk","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat"};
		backpack = "SP_Carryall_White";
		class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'US_1stMarineDivision_acu'] call BIS_fnc_setUnitInsignia;";
    };
	};
	class hmg_usmc_s_2005_rifleman : hmg_usmc_s_2005
	{
		displayName = "Rifleman/pointman (Marpat snow)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP", "tf_anprc154", "tf_microdagr"};
	};
	class hmg_usmc_s_2005_firstaid : hmg_usmc_s_2005_rifleman
	{
		displayName= "Rifleman/firstaid (Marpat snow)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage" , "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage" , "AGM_EarBuds"};
	};	
	class hmg_usmc_s_2005_marksman : hmg_usmc_s_2005_rifleman
	{
		displayName= "Designated marksman (Marpat snow)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "RH_m3lr", "rhsusf_acc_anpeq15A", "RH_HBLM", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "RH_m3lr", "rhsusf_acc_anpeq15A", "RH_HBLM", "AGM_EarBuds" };
		weapons[] = {"RH_SAMR","Throw","Put"};
		respawnWeapons[] = {"RH_SAMR","Throw","Put"};
		magazines[] = 		{
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"30Rnd_556x45_Stanag_Tracer_Red"
		};
		respawnMagazines[] =
		{
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk262",
			"30Rnd_556x45_Stanag_Tracer_Red"
		};
	};	
	class hmg_usmc_s_2005_assar : hmg_usmc_s_2005
	{
		displayName= "Assist. Auto Rifleman (Marpat snow)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel", "AGM_EarBuds" };
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","MEF_Snow_Helmet_LWH","ItemCompass","G_Combat", "tf_anprc154", "tf_microdagr" };
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","MEF_Snow_Helmet_LWH","ItemCompass","G_Combat", "tf_anprc154", "tf_microdagr" };
		backpack="MEF_snow_Kitbag_AR";
	};
	class hmg_usmc_s_2005_AR : hmg_usmc_s_2005_rifleman
	{
		displayName= "Auto Rifleman (Marpat snow)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_pas13cmg","AGM_SpareBarrel", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_pas13cmg","AGM_SpareBarrel", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		linkedItems[] = {"TRYK_V_Sheriff_BA_TCL2","MEF_Snow_Helmet_LWH","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_Sheriff_BA_TCL2","MEF_Snow_Helmet_LWH","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_anprc154", "tf_microdagr"};
		weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
		magazines[] = {"rhs_200rnd_556x45_M_SAW",  "rhs_200rnd_556x45_M_SAW", "rhs_200rnd_556x45_T_SAW"};
		respawnMagazines[] = {"rhs_200rnd_556x45_M_SAW",  "rhs_200rnd_556x45_M_SAW", "rhs_200rnd_556x45_T_SAW"};
	};
	class hmg_usmc_s_2005_TL : hmg_usmc_s_2005_rifleman
	{
		displayName= "Team leader (Marpat snow)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		weapons[] = {"rhs_weap_m16a4_carryhandle_M203","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203","Throw","Put"};
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","MEF_Snow_Helmet_LWH","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","MEF_Snow_Helmet_LWH","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		backpack="MEF_snow_Kitbag_TL";
	};
	class hmg_usmc_s_2005_SL : hmg_usmc_s_2005_rifleman
	{
		displayName= "Squad leader (Marpat snow)";
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip","Throw","Put", "Binocular"}; 
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip","Throw","Put", "Binocular"}; 
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "AGM_EarBuds"};
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "tf_anprc154", "tf_microdagr"};
	};
	class hmg_usmc_s_2005_messenger : hmg_usmc_s_2005_rifleman
	{
		displayName= "Messenger (Marpat snow)";
		backpack = "tf_rt1523g_black";
	};
	class hmg_usmc_s_2005_guide : hmg_usmc_s_2005_rifleman
	{
		displayName= "PLT Guide (Marpat snow)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP", "itemradio","ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP", "itemradio","ItemMap"};
	};
	class hmg_usmc_s_2005_pltsrg : hmg_usmc_s_2005_SL
	{
		displayName= "Platoon sergeant (Marpat snow)";
		backpack = "tf_rt1523g_black";
	};
	class hmg_usmc_s_2005_PltL : hmg_usmc_s_2005_SL
	{
		displayName= "Platoon commander (Marpat snow)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS","ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS","ItemMap"};
	};
	class hmg_usmc_s_2005_firsrg : hmg_usmc_s_2005
	{
		displayName= "First sergeant (Marpat snow)";
		weapons[] = {"CUP_hgun_M9","Throw","Put","Binocular"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","Binocular"};		
        linkedItems[] = {"rhsusf_spc","MEF_Snow_Helmet_LWH","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"rhsusf_spc","MEF_Snow_Helmet_LWH","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	};
	class hmg_usmc_s_2005_gunsrg : hmg_usmc_s_2005_firsrg
	{
		displayName= "Gunnery sergeant (Marpat snow)";
		engineer = 1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};	
	class hmg_usmc_s_2005_execoff : hmg_usmc_s_2005_firsrg
	{
		displayName= "Exec officer (Marpat snow)";
		linkedItems[] = {"rhsusf_spc","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"rhsusf_spc","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
		backpack="tf_rt1523g_black";
	};	
	class hmg_usmc_s_2005_cl : hmg_usmc_s_2005_firsrg
	{
		displayName= "Company commander (Marpat snow)";
		linkedItems[] = {"rhsusf_spc","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"rhsusf_spc","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
	};
	class hmg_usmc_s_2005_MGSL : hmg_usmc_s_2005_SL
	{
		displayName= "MG Section leader (Marpat snow)";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	};
	class hmg_usmc_s_2005_mortSL : hmg_usmc_s_2005_SL
	{
		displayName= "Mortar Section leader (Marpat snow)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "ItemMap", "itemradio", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "ItemMap", "itemradio", "AGM_EarBuds" };
		linkedItems[] = {"TRYK_V_ArmorVest_khk","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
	};
	class hmg_usmc_s_2005_mg_tl : hmg_usmc_s_2005_SL
	{
		displayName= "MG Team leader (Marpat snow)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag", "rhsusf_acc_anpeq15A" , "AGM_EarBuds"};
		linkedItems[] = {"TRYK_V_ArmorVest_khk","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
	};
	class hmg_usmc_s_2005_mg : hmg_usmc_s_2005
	{
		displayName= "Gunner (Marpat snow)";
		weapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240G"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240G"};		
        linkedItems[] = {"TRYK_V_Sheriff_BA_TCL2","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"TRYK_V_Sheriff_BA_TCL2","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		magazines[] = 
			{
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51_m993",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51_m993",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	};
	class hmg_usmc_s_2005_assMG : hmg_usmc_s_2005
	{
		displayName= "Ammunition man (Marpat snow)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" , "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel", "AGM_EarBuds" };
		backpack = "MEF_snow_Kitbag_MG";
	};
	class hmg_usmc_s_2005_mortL : hmg_usmc_s_2005
	{
		displayName= "Squad leader/gunner (Marpat snow)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" , "AGM_EarBuds"};
		weapons[] = {"CUP_hgun_M9","Throw","Put", "Rangefinder"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put", "Rangefinder"};		
        linkedItems[] = {"rhsusf_spc","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"rhsusf_spc","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	backpack = "RDS_M252_Gun_Bag_FIA";
	};
	class hmg_usmc_s_2005_mortas : hmg_usmc_s_2005
	{
		displayName= "Assistant gunner (Marpat snow)";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
		backpack = "RDS_M252_Bipod_Bag_FIA";
	};
		class hmg_usmc_s_2005_mortam : hmg_usmc_s_2005
	{
		displayName= "Ammunition man (Marpat snow)";
		backpack = "m252_ammo_snow";
	};
	class hmg_usmc_s_2005_assSL : hmg_usmc_s_2005_MGSL
	{
		displayName= "Assault section leader (Marpat snow)";
	};	
	class hmg_usmc_s_2005_assGun : hmg_usmc_s_2005_MGSL
	{
		displayName= "Assault section team leader / Gunner (Marpat snow)";
		weapons[] = {"CUP_hgun_M9","Throw","Put", "Trixie_SMAW"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put", "Trixie_SMAW"};
		magazines[] = 
			{
				"rhs_mag_an_m14_th3",
				"rhs_mag_an_m14_th3",
				"rhs_mag_an_m14_th3",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"rhs_mag_an_m14_th3",
				"rhs_mag_an_m14_th3",
				"rhs_mag_an_m14_th3",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds" };

		linkedItems[] = {"rhsusf_spc","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"rhsusf_spc","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		backpack = "MEF_snow_Kitbag_SMAW";
	};	
	class hmg_usmc_s_2005_assAssGun : hmg_usmc_s_2005
	{
		displayName= "Assault section Assistant Gunner (Marpat snow)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag", "AGM_EarBuds" };
		backpack = "MEF_snow_Kitbag_SMAW";
	};
// Corpsman team Marpat snow	2005
	class hmg_usmc_s_2005_scorp : hmg_usmc_s_2005_sl
	{
		displayName = "Senior corpsman (Marpat snow)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools" , "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools" , "AGM_EarBuds"};
		linkedItems[] = {"rhsusf_spc","MEF_Snow_Helmet_LWH","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap"};
		respawnLinkedItems[] = {"rhsusf_spc","MEF_Snow_Helmet_LWH","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap"};
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "MEF_snow_Kitbag_medic";
}
	class hmg_usmc_s_2005_corp : hmg_usmc_s_2005
	{
		displayName = "Corpsman (Marpat snow)";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "MEF_snow_Kitbag_medic";
}
//Sniper scout team Marpat snow 2005
	class hmg_usmc_s_2005_scout : hmg_usmc_s_2005
	{
		displayName = "Scout (Marpat snow)";
		weapons[] = {"rhs_weap_m4_m203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4_m203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		magazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
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
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4","CUP_muzzle_snds_M9","AGM_M26_Clacker", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4","CUP_muzzle_snds_M9","AGM_M26_Clacker" , "AGM_EarBuds"};

		linkedItems[] = {"TRYK_V_ArmorVest_khk2","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		backpack = "tf_rt1523g_black";
};
	class hmg_usmc_s_2005_sniper : hmg_usmc_s_2005
	{
		displayName = "Sniper (Marpat snow)";
		weapons[] = {"Trixie_M40A3_NG","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		respawnWeapons[] = {"Trixie_M40A3_NG","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		magazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs10","CUP_muzzle_snds_M9","AGM_Clacker", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs10","CUP_muzzle_snds_M9","AGM_Clacker", "AGM_EarBuds" };

		linkedItems[] = {"TRYK_V_ArmorVest_khk2","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
};
	class hmg_usmc_s_2005_sniperH : hmg_usmc_s_2005_sniper
	{
		displayName = "Sniper (heavy) (Marpat snow)";
		weapons[] = {"Trixie_M107","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		respawnWeapons[] = {"Trixie_M107","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		magazines[] = 
			{
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"HandGrenade",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"HandGrenade",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4_2","RH_anpvs10","CUP_muzzle_snds_M9","AGM_Clacker", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4_2","RH_anpvs10","CUP_muzzle_snds_M9","AGM_Clacker", "AGM_EarBuds" };

		linkedItems[] = {"TRYK_V_ArmorVest_khk2","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","MEF_Snow_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
}
// КМП 2015	
//Sniper scout team Marpat 2015
	class hmg_usmc_w_2015_scout : hmg_usmc_w_2005
	{
		displayName = "Scout (Marpat)";
		weapons[] = {"rhs_weap_m4_m203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4_m203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		magazines[] = 
			{
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4" ,"CUP_muzzle_snds_M9","AGM_M26_Clacker", "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4" ,"CUP_muzzle_snds_M9","AGM_M26_Clacker", "AGM_EarBuds" };

		linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "itemradio", "ItemMap"};
		backpack = "tf_rt1523g_rhs";
};
	class hmg_usmc_w_2015_scout_mk12 : hmg_usmc_w_2015_scout
	{
		displayName = "Scout (Marpat) (mk12)";
		weapons[] = {"RH_Mk12mod1_wdl","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		respawnWeapons[] = {"RH_Mk12mod1_wdl","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		magazines[] = 
			{
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"HandGrenade",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"HandGrenade",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_m3lr","rhsusf_acc_anpeq15A","RH_spr_mbs_wdl","CUP_muzzle_snds_M9","AGM_M26_Clacker" ,"RH_HBLM_wdl", "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_m3lr","rhsusf_acc_anpeq15A","RH_spr_mbs_wdl","CUP_muzzle_snds_M9","AGM_M26_Clacker" ,"RH_HBLM_wdl", "AGM_EarBuds"};
		backpack = "tf_rt1523g_black";
}
	class hmg_usmc_w_2015_sniper : hmg_usmc_w_2005
	{
		displayName = "Sniper (Marpat)";
		weapons[] = {"Trixie_M40A3_NG","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		respawnWeapons[] = {"Trixie_M40A3_NG","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		magazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs10" ,"CUP_muzzle_snds_M9","AGM_Clacker", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs10" ,"CUP_muzzle_snds_M9","AGM_Clacker", "AGM_EarBuds" };

		linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "itemradio", "ItemMap"};
};
	class hmg_usmc_w_2015_sniperS : hmg_usmc_w_2015_sniper
	{
		displayName = "Sniper (silent) (Marpat)";
		Items[] = {"AGM_Bandage","AGM_Bandage", "RH_m110sd_t", "RH_anpvs10", "rhsusf_acc_LEUPOLDMK4", "rhsusf_acc_anpeq15A", "RH_TD_ACB","AGM_Clacker" ,"CUP_muzzle_snds_M9", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage","AGM_Bandage", "RH_m110sd_t", "RH_anpvs10", "rhsusf_acc_LEUPOLDMK4", "rhsusf_acc_anpeq15A", "RH_TD_ACB","AGM_Clacker" ,"CUP_muzzle_snds_M9", "AGM_EarBuds" };
		weapons[] = {"RH_m110","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		respawnWeapons[] = {"RH_m110","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		magazines[] = {"CUP_15Rnd_9x19_M9","ClaymoreDirectionalMine_Remote_Mag","HandGrenade","HandGrenade","rhsusf_20Rnd_762x51_m118_special_Mag",  "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m993_Mag", "RH_20Rnd_762x51_LFMJSB", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag"};
		respawnMagazines[] = {"CUP_15Rnd_9x19_M9","ClaymoreDirectionalMine_Remote_Mag","HandGrenade","HandGrenade","rhsusf_20Rnd_762x51_m118_special_Mag",  "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m993_Mag", "RH_20Rnd_762x51_LFMJSB", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag"};
};
	class hmg_usmc_w_2015_sniperH : hmg_usmc_w_2015_sniper
	{
		displayName = "Sniper (heavy) (Marpat)";
		weapons[] = {"Trixie_M107","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		respawnWeapons[] = {"Trixie_M107","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		magazines[] = 
			{
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"HandGrenade",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"HandGrenade",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4_2","RH_anpvs10" ,"ATragMX","CUP_muzzle_snds_M9","AGM_Clacker", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4_2","RH_anpvs10" ,"ATragMX","CUP_muzzle_snds_M9","AGM_Clacker", "AGM_EarBuds" };

		linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "itemradio", "ItemMap"};
};
//Sniper scout team MarpatDesert 2015
	class hmg_usmc_d_2015_scout : hmg_usmc_d_2005
	{
		displayName = "Scout (MarpatDesert)";
		weapons[] = {"rhs_weap_m4_m203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4_m203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		magazines[] = 
			{
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4" ,"CUP_muzzle_snds_M9","AGM_M26_Clacker","ItemcTabHCam" , "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4" ,"CUP_muzzle_snds_M9","AGM_M26_Clacker","ItemcTabHCam" , "AGM_EarBuds"};
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "itemradio", "ItemMap"};
		backpack = "tf_rt1523g_rhs";
};
	class hmg_usmc_d_2015_scout_mk12 : hmg_usmc_d_2015_scout
	{
		displayName = "Scout (MarpatDesert) (mk12)";
		weapons[] = {"RH_Mk12mod1_des","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		respawnWeapons[] = {"RH_Mk12mod1_des","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		magazines[] = 
			{
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"HandGrenade",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"HandGrenade",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_m3lr","rhsusf_acc_anpeq15A","RH_spr_mbs_des","CUP_muzzle_snds_M9","AGM_M26_Clacker" ,"RH_HBLM_des","ItemcTabHCam", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_m3lr","rhsusf_acc_anpeq15A","RH_spr_mbs_des","CUP_muzzle_snds_M9","AGM_M26_Clacker" ,"RH_HBLM_des","ItemcTabHCam", "AGM_EarBuds" };
		backpack = "tf_rt1523g_black";
};
	class hmg_usmc_d_2015_sniper : hmg_usmc_d_2005
	{
		displayName = "Sniper (MarpatDesert)";
		weapons[] = {"Trixie_M40A3_NG","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		respawnWeapons[] = {"Trixie_M40A3_NG","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		magazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs10" ,"CUP_muzzle_snds_M9","AGM_Clacker", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs10" ,"CUP_muzzle_snds_M9","AGM_Clacker", "AGM_EarBuds" };

		linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "itemradio", "ItemMap"};
};
	class hmg_usmc_d_2015_sniperS : hmg_usmc_d_2015_sniper
	{
		displayName = "Sniper (silent) (MarpatDesert)";
		Items[] = {"AGM_Bandage","AGM_Bandage", "RH_m110sd_t", "RH_anpvs10", "rhsusf_acc_LEUPOLDMK4", "rhsusf_acc_anpeq15A", "RH_TD_ACB","AGM_Clacker" ,"CUP_muzzle_snds_M9", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage","AGM_Bandage", "RH_m110sd_t", "RH_anpvs10", "rhsusf_acc_LEUPOLDMK4", "rhsusf_acc_anpeq15A", "RH_TD_ACB","AGM_Clacker" ,"CUP_muzzle_snds_M9", "AGM_EarBuds" };
		weapons[] = {"RH_m110","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		respawnWeapons[] = {"RH_m110","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		magazines[] = {"CUP_15Rnd_9x19_M9","ClaymoreDirectionalMine_Remote_Mag","HandGrenade","HandGrenade","rhsusf_20Rnd_762x51_m118_special_Mag",  "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m993_Mag", "RH_20Rnd_762x51_LFMJSB", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag"};
		respawnMagazines[] = {"CUP_15Rnd_9x19_M9","ClaymoreDirectionalMine_Remote_Mag","HandGrenade","HandGrenade","rhsusf_20Rnd_762x51_m118_special_Mag",  "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m993_Mag", "RH_20Rnd_762x51_LFMJSB", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag"};
};
	class hmg_usmc_d_2015_sniperH : hmg_usmc_d_2015_sniper
	{
		displayName = "Sniper (heavy) (MarpatDesert)";
		weapons[] = {"Trixie_M107_Black","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		respawnWeapons[] = {"Trixie_M107_Black","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		magazines[] = 
			{
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"HandGrenade",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"HandGrenade",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4_2", "RH_anpvs10" ,"CUP_muzzle_snds_M9","AGM_Clacker", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4_2", "RH_anpvs10" ,"CUP_muzzle_snds_M9","AGM_Clacker", "AGM_EarBuds" };

		linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "itemradio", "ItemMap"};
};
// отсюда пошли КМПшники в Марпате обр. 2015 года
	class hmg_usmc_w_2015_rifleman : hmg_usmc_w_2005
	{
		displayName = "Rifleman/pointman (Marpat)";
		Items[] = {"AGM_Bandage","AGM_Bandage", "rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage","AGM_Bandage", "rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		magazines[] = {"RH_30Rnd_556x45_Mk318",  "RH_30Rnd_556x45_Mk318", "RH_30Rnd_556x45_Mk318","RH_30Rnd_556x45_Mk318", "RH_30Rnd_556x45_Mk318", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red"};
		respawnMagazines[] = {"RH_30Rnd_556x45_Mk318",  "RH_30Rnd_556x45_Mk318", "RH_30Rnd_556x45_Mk318","RH_30Rnd_556x45_Mk318", "RH_30Rnd_556x45_Mk318", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red"};
	};
	class hmg_usmc_w_2015_firstaid : hmg_usmc_w_2015_rifleman
	{
		displayName= "Rifleman/firstaid (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
	};
	class hmg_usmc_w_2015_marksman : hmg_usmc_w_2015_rifleman
	{
		displayName= "Designated marksman (Marpat)";
		Items[] = {"AGM_Bandage","AGM_Bandage", "RH_m110sd_t", "RH_anpvs10", "RH_m3lr", "rhsusf_acc_anpeq15A", "RH_TD_ACB", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage","AGM_Bandage", "RH_m110sd_t", "RH_anpvs10", "RH_m3lr", "rhsusf_acc_anpeq15A", "RH_TD_ACB" , "AGM_EarBuds"};
		weapons[] = {"RH_m110","Throw","Put"};
		respawnWeapons[] = {"RH_m110","Throw","Put"};
		magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag",  "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m993_Mag", "RH_20Rnd_762x51_LFMJSB", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag"};
		respawnMagazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag",  "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m993_Mag", "RH_20Rnd_762x51_LFMJSB", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag"};
	};
	class hmg_usmc_w_2015_assar : hmg_usmc_w_2015_rifleman
	{
		displayName= "Assist. Auto Rifleman (Marpat)";
		backpack="MEF_Wood_Kitbag_AAR";
	};
	class hmg_usmc_w_2015_AR : hmg_usmc_w_2015_rifleman
	{
		displayName= "Auto Rifleman (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A", "RH_HBLM", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A", "RH_HBLM", "AGM_EarBuds" };
		weapons[] = {"RH_M27IAR","Throw","Put"};
		respawnWeapons[] = {"RH_M27IAR","Throw","Put"};
		backpack="MEF_Wood_Kitbag_AAR";
	};
	class hmg_usmc_w_2015_TL : hmg_usmc_w_2015_rifleman
	{
		displayName= "Team leader (Marpat)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		weapons[] = {"rhs_weap_m4_m203","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_m203","Throw","Put"};
		backpack="MEF_Wood_Kitbag_TL";
	};
	class hmg_usmc_w_2015_SL : hmg_usmc_w_2015_rifleman
	{
		displayName= "Squad leader (Marpat)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put", "Binocular"};
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "ItemcTabHCam", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "ItemcTabHCam", "AGM_EarBuds" };
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr", "ItemMap", "ItemMicroDAGR"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass", "G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr", "ItemMap", "ItemMicroDAGR"};
	};
	class hmg_usmc_w_2015_messenger : hmg_usmc_w_2015_rifleman
	{
		displayName= "Messenger (Marpat)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		backpack = "tf_rt1523g_black";
	};
	class hmg_usmc_w_2015_pltsrg : hmg_usmc_w_2015_SL
	{
		displayName= "Platoon sergeant (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "AGM_EarBuds" };
		backpack = "tf_rt1523g_black";
	};
	class hmg_usmc_w_2015_PltL : hmg_usmc_w_2015_SL
	{
		displayName= "Platoon commander (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "ItemcTabHCam", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "ItemcTabHCam", "AGM_EarBuds" };
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "ItemAndroid ", "tf_anprc154", "tf_microdagr", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass", "G_Combat", "rhsusf_ANPVS_14", "ItemAndroid ", "tf_anprc154", "tf_microdagr", "ItemMap"};
	};
	class hmg_usmc_w_2015_firsrg : hmg_usmc_w_2015_rifleman
	{
		displayName= "First sergeant (Marpat)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put","Binocular"};		
        linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools", "ItemMicroDAGR"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools", "ItemMicroDAGR"};
	};
	class hmg_usmc_w_2015_LogNCO : hmg_usmc_w_2015_rifleman
	{
		displayName= "Logistics NCO (Marpat)";
	};
	class hmg_usmc_w_2015_PropNCO : hmg_usmc_w_2015_rifleman
	{
		displayName= "Property NCO (Marpat)";
	};
	class hmg_usmc_w_2015_AdminClerk : hmg_usmc_w_2015_rifleman
	{
		displayName= "Administrative Clerk (Marpat)";
	};
	class hmg_usmc_w_2015_IntelSpec : hmg_usmc_w_2015_AR
	{
		displayName= "Intelligence Specialist (Marpat)";
		Backpack = "B_rhsusf_B_BACKPACK";
	};
	class hmg_usmc_w_2015_OpClerk : hmg_usmc_w_2015_rifleman
	{
		displayName= "Operations Clerk (Marpat)";
	};
	class hmg_usmc_w_2015_asOpChief : hmg_usmc_w_2015_firsrg
	{
		displayName= "Assistant Operations Chief (Marpat)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put"};		
	};
	class hmg_usmc_w_2015_opChief : hmg_usmc_w_2015_firsrg
	{
		displayName= "Operations Chief (Marpat)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put"};		
        linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools", "ItemcTab"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools", "ItemcTab"};
	};
	class hmg_usmc_w_2015_gunsrg : hmg_usmc_w_2015_firsrg
	{
		displayName= "Gunnery sergeant (Marpat)";
		engineer = 1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};	
	class hmg_usmc_w_2015_execoff : hmg_usmc_w_2015_firsrg
	{
		displayName= "Exec officer (Marpat)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemAndroid", "ItemMap", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemAndroid", "ItemMap", "itemradio","AGM_MapTools"};
		backpack = "tf_rt1523g_black";
	};	
	class hmg_usmc_w_2015_cl : hmg_usmc_w_2015_firsrg
	{
		displayName= "Company commander (Marpat)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemAndroid", "ItemMap", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemAndroid", "ItemMap", "itemradio","AGM_MapTools"};
	};
	class hmg_usmc_w_2015_mortSL : hmg_usmc_w_2015_SL
	{
		displayName= "Mortar Section leader (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio", "AGM_EarBuds"};
	};
	class hmg_usmc_w_2015_mg_tl : hmg_usmc_w_2015_rifleman
	{
		displayName= "MG Team leader (Marpat)";

	};
	class hmg_usmc_w_2015_mg : hmg_usmc_w_2015_rifleman
	{
		displayName= "Gunner (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_ta648","RH_pas13cmg", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_ta648","RH_pas13cmg", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		weapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240G"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240G"};		
        linkedItems[] = {"TRYK_V_Sheriff_BA_TCL2","H_HelmetB_grass","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_Sheriff_BA_TCL2","H_HelmetB_grass","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		magazines[] = 
			{
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m993",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m993",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	};
	class hmg_usmc_w_2015_assMG : hmg_usmc_w_2015_assar
	{
		displayName= "Ammunition man (Marpat)";
		backpack = "MEF_Wood_Kitbag_MG";
	};
	class hmg_usmc_w_2015_mortL : hmg_usmc_w_2015_rifleman
	{
	displayName= "Mortar Squad leader/Gunner (Marpat)";
	Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "a3ru_rangetable_m252", "AGM_EarBuds"};
	respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "a3ru_rangetable_m252", "AGM_EarBuds"};
	weapons[] = {"rhs_weap_m4_grip","Throw","Put", "Rangefinder"};
	respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put", "Rangefinder"};		
	backpack = "RDS_M252_Gun_Bag_FIA";
	};
	class hmg_usmc_w_2015_mortas : hmg_usmc_w_2015_rifleman
	{
		displayName= "Assistant gunner (Marpat)";
		backpack = "RDS_M252_Bipod_Bag_FIA";
	};
	class hmg_usmc_w_2015_mortam : hmg_usmc_w_2015_rifleman
	{
		displayName= "Ammunition man (Marpat)";
		backpack = "m252_ammo_marpat";
	};
	class hmg_usmc_w_2015_assSL : hmg_usmc_w_2015_SL
	{
		displayName= "Assault section leader (Marpat)";
	};
	class hmg_usmc_w_2015_assGun : hmg_usmc_w_2015_rifleman
	{
		displayName= "Assault section team leader / Gunner (Marpat)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put", "Trixie_SMAW"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put", "Trixie_SMAW"};
		backpack = "MEF_Wood_Kitbag_SMAW";
	};
	class hmg_usmc_w_2015_assAssGun : hmg_usmc_w_2015_rifleman
	{
		displayName= "Assault section Assistant Gunner (Marpat)";
		backpack = "MEF_Wood_Kitbag_SMAW";
	};
// Corpsman team Marpat	2015
	class hmg_usmc_w_2015_scorp : hmg_usmc_w_2015_sl{
		displayName = "Senior corpsman (Marpat)";
		attendant = 1;
		icon = "iconManMedic";
		backpack = "MEF_Wood_Kitbag_medic";
	};
	class hmg_usmc_w_2015_corp : hmg_usmc_w_2015_rifleman{
		displayName = "Corpsman (Marpat)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "MEF_Wood_Kitbag_medic";
	};
//отсюда пошлb КМПшники в Марпате Дезерт обр. 2015 года
class hmg_usmc_d_2015_rifleman : hmg_usmc_w_2015_rifleman
	{
		displayName= "Rifleman/pointman (MarpatDesert)";
		uniformClass = "rhs_uniform_FROG01_d";
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		backpack = "MEF_Des_Tactical_empty";

	};
	class hmg_usmc_d_2015_firstaid : hmg_usmc_d_2015_rifleman
	{
		displayName= "Rifleman/firstaid (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
	};	
	class hmg_usmc_d_2015_marksman : hmg_usmc_d_2015_rifleman
	{
		displayName= "Designated marksman (MarpatDesert)";
		Items[] = {"AGM_Bandage","AGM_Bandage", "RH_m110sd_t", "RH_anpvs10", "RH_m3lr", "rhsusf_acc_anpeq15A", "RH_TD_ACB", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage","AGM_Bandage", "RH_m110sd_t", "RH_anpvs10", "RH_m3lr", "rhsusf_acc_anpeq15A", "RH_TD_ACB", "AGM_EarBuds" };
		weapons[] = {"RH_m110","Throw","Put"};
		respawnWeapons[] = {"RH_m110","Throw","Put"};
		magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag",  "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m993_Mag", "RH_20Rnd_762x51_LFMJSB", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag"};
		respawnMagazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag",  "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m993_Mag", "RH_20Rnd_762x51_LFMJSB", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag"};
	};
	class hmg_usmc_d_2015_assar : hmg_usmc_d_2015_rifleman
	{
		displayName= "Assist. Auto Rifleman (MarpatDesert)";
		backpack="MEF_Des_Tactical_AAR";
	};
	class hmg_usmc_d_2015_AR : hmg_usmc_d_2015_rifleman
	{
		displayName= "Auto Rifleman (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A", "RH_HBLM", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A", "RH_HBLM", "AGM_EarBuds"};
		weapons[] = {"RH_M27IAR","Throw","Put"};
		respawnWeapons[] = {"RH_M27IAR","Throw","Put"};
		backpack="MEF_Des_Tactical_AAR";
	};
	class hmg_usmc_d_2015_TL : hmg_usmc_d_2015_rifleman
	{
		displayName= "Team leader (MarpatDesert)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		weapons[] = {"rhs_weap_m4_m203","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_m203","Throw","Put"};
		backpack="MEF_Des_Tactical_TL";
	};
	class hmg_usmc_d_2015_SL : hmg_usmc_d_2015_rifleman
	{
		displayName= "Squad leader (MarpatDesert)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put", "Binocular"};
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "ItemcTabHCam" , "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "ItemcTabHCam" , "AGM_EarBuds"};
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "ItemMap", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "ItemMap", "tf_anprc154", "tf_microdagr"};
	};
	class hmg_usmc_d_2015_messenger : hmg_usmc_d_2015_rifleman
	{
		displayName= "Messenger (MarpatDesert)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		backpack = "tf_rt1523g_big_rhs";
	};
	class hmg_usmc_d_2015_pltsrg : hmg_usmc_d_2015_SL
	{
		displayName= "Platoon sergeant (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "AGM_EarBuds"};
		backpack = "tf_rt1523g_black";
	};
	class hmg_usmc_d_2015_PltL : hmg_usmc_d_2015_SL
	{
		displayName= "Platoon commander (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "ItemcTabHCam" , "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "ItemcTabHCam" , "AGM_EarBuds"};
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "ItemAndroid ", "tf_anprc154", "tf_microdagr", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemCompass", "G_Combat", "rhsusf_ANPVS_14", "ItemAndroid ", "tf_anprc154", "tf_microdagr", "ItemMap"};
	};
	class hmg_usmc_d_2015_firsrg : hmg_usmc_d_2015_rifleman
	{
		displayName= "First sergeant (MarpatDesert)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put","Binocular"};		
        linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools", "ItemMicroDAGR"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools", "ItemMicroDAGR"};
	};
	class hmg_usmc_d_2015_LogNCO : hmg_usmc_d_2015_rifleman
	{
		displayName= "Logistics NCO (Marpat)";
	};
	class hmg_usmc_d_2015_PropNCO : hmg_usmc_d_2015_rifleman
	{
		displayName= "Property NCO (Marpat)";
	};
	class hmg_usmc_d_2015_AdminClerk : hmg_usmc_d_2015_rifleman
	{
		displayName= "Administrative Clerk (Marpat)";
	};
	class hmg_usmc_d_2015_IntelSpec : hmg_usmc_d_2015_AR
	{
		displayName= "Intelligence Specialist (Marpat)";
		Backpack = "B_rhsusf_B_BACKPACK";
	};
	class hmg_usmc_d_2015_OpClerk : hmg_usmc_d_2015_rifleman
	{
		displayName= "Operations Clerk (Marpat)";
	};
	class hmg_usmc_d_2015_asOpChief : hmg_usmc_d_2015_firsrg
	{
		displayName= "Assistant Operations Chief (Marpat)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put"};		
	};
	class hmg_usmc_d_2015_opChief : hmg_usmc_d_2015_firsrg
	{
		displayName= "Operations Chief (Marpat)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put"};		
        linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools", "ItemcTab"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools", "ItemcTab"};
	};
	class hmg_usmc_d_2015_gunsrg : hmg_usmc_d_2015_firsrg
	{
		displayName= "Gunnery sergeant (MarpatDesert)";
		engineer = 1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};	
	class hmg_usmc_d_2015_execoff : hmg_usmc_d_2015_firsrg
	{
		displayName= "Exec officer (MarpatDesert)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemAndroid", "ItemMap", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemAndroid", "ItemMap", "itemradio","AGM_MapTools"};
		backpack = "tf_rt1523g_black";
	};	
	class hmg_usmc_d_2015_cl : hmg_usmc_d_2015_firsrg
	{
		displayName= "Company commander (MarpatDesert)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemAndroid", "ItemMap", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemAndroid", "ItemMap", "itemradio","AGM_MapTools"};
	};
	class hmg_usmc_d_2015_mortSL : hmg_usmc_d_2015_SL
	{
		displayName= "Mortar Section leader (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio" , "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio" , "AGM_EarBuds"};
	};
	class hmg_usmc_d_2015_mg_tl : hmg_usmc_d_2015_rifleman
	{
		displayName= "MG Team leader (MarpatDesert)";
	};
	class hmg_usmc_d_2015_mg : hmg_usmc_d_2015_rifleman
	{
		displayName= "Gunner (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_ta648","RH_pas13cmg", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_ta648","RH_pas13cmg", "rhsusf_acc_anpeq15A" , "AGM_EarBuds"};
		weapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240G"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240G"};		
        linkedItems[] = {"TRYK_V_Sheriff_BA_TCL2","H_HelmetB_desert","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_Sheriff_BA_TCL2","H_HelmetB_desert","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		magazines[] = 
			{
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m993",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m993",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	};
	class hmg_usmc_d_2015_assMG : hmg_usmc_d_2015_assar
	{
		displayName= "Ammunition man (MarpatDesert)";
		backpack = "MEF_Des_Tactical_MG";
	};
	class hmg_usmc_d_2015_mortL : hmg_usmc_d_2015_rifleman
	{
		displayName= "Mortar Squad leader/Gunner (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "a3ru_rangetable_m252", "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "a3ru_rangetable_m252", "AGM_EarBuds"};
		weapons[] = {"rhs_weap_m4_grip","Throw","Put", "Rangefinder"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put", "Rangefinder"};
		backpack = "RDS_M252_Gun_Bag_FIA";
	};
	class hmg_usmc_d_2015_mortas : hmg_usmc_d_2015_rifleman
	{
		displayName= "Assistant gunner (MarpatDesert)";
		backpack = "RDS_M252_Bipod_Bag_FIA";
	};
	class hmg_usmc_d_2015_mortam : hmg_usmc_d_2015_rifleman
	{
		displayName= "Ammunition man (MarpatDesert)";
		backpack = "m252_ammo_marpatDesert";
	};
	class hmg_usmc_d_2015_assSL : hmg_usmc_d_2015_SL
	{
		displayName= "Assault section leader (MarpatDesert)";
	};
	class hmg_usmc_d_2015_assGun : hmg_usmc_d_2015_rifleman
	{
		displayName= "Assault section team leader / Gunner (MarpatDesert)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put", "Trixie_SMAW"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put", "Trixie_SMAW"};
		backpack = "MEF_Des_Tactical_SMAW";
	};
	class hmg_usmc_d_2015_assAssGun : hmg_usmc_d_2015_rifleman
	{
		displayName= "Assault section Assistant Gunner (MarpatDesert)";
		backpack = "MEF_Des_Tactical_SMAW";
	};
// Corpsman team MarpatDesert 2015
	class hmg_usmc_d_2015_scorp : hmg_usmc_d_2015_sl
	{
		displayName = "Senior corpsman (MarpatDesert)";
		attendant = 1;
		icon = "iconManMedic";
		backpack = "MEF_Des_Tactical_medic";
	};
	class hmg_usmc_d_2015_corp : hmg_usmc_d_2015_rifleman
	{
		displayName = "Corpsman (MarpatDesert)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "MEF_Des_Tactical_medic";
	};
//Sniper scout team Marpat snow 2015
	class hmg_usmc_s_2015_scout : hmg_usmc_s_2005
	{
		displayName = "Scout (Marpat snow)";
		weapons[] = {"rhs_weap_m4_m203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4_m203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		magazines[] = 
			{
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"RH_30Rnd_556x45_Mk318",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4" ,"CUP_muzzle_snds_M9","AGM_M26_Clacker","ItemcTabHCam", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4" ,"CUP_muzzle_snds_M9","AGM_M26_Clacker","ItemcTabHCam", "AGM_EarBuds" };

		linkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "itemradio", "ItemMap"};
		backpack = "tf_rt1523g_black";
};
	class hmg_usmc_s_2015_scout_mk12 : hmg_usmc_s_2015_scout
	{
		displayName = "Scout (Marpat snow) (mk12)";
		weapons[] = {"RH_Mk12mod1_wdl","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		respawnWeapons[] = {"RH_Mk12mod1_wdl","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		magazines[] = 
			{
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"HandGrenade",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"RH_30Rnd_556x45_Mk262",
				"HandGrenade",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_m3lr","rhsusf_acc_anpeq15A","RH_spr_mbs_wdl","CUP_muzzle_snds_M9","AGM_M26_Clacker" ,"RH_HBLM_wdl","ItemcTabHCam", "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_m3lr","rhsusf_acc_anpeq15A","RH_spr_mbs_wdl","CUP_muzzle_snds_M9","AGM_M26_Clacker" ,"RH_HBLM_wdl","ItemcTabHCam", "AGM_EarBuds"};
		backpack = "tf_rt1523g_black";
}
	class hmg_usmc_s_2015_sniper : hmg_usmc_s_2005
	{
		displayName = "Sniper (Marpat snow)";
		weapons[] = {"Trixie_M40A3_NG","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		respawnWeapons[] = {"Trixie_M40A3_NG","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		magazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs10" ,"CUP_muzzle_snds_M9","AGM_Clacker", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs10" ,"CUP_muzzle_snds_M9","AGM_Clacker", "AGM_EarBuds" };

		linkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "itemradio", "ItemMap"};
};
	class hmg_usmc_s_2015_sniperS : hmg_usmc_s_2015_sniper
	{
		displayName = "Sniper (silent) (Marpat snow)";
		Items[] = {"AGM_Bandage","AGM_Bandage", "RH_m110sd_t", "RH_anpvs10", "rhsusf_acc_LEUPOLDMK4", "rhsusf_acc_anpeq15A", "RH_TD_ACB","AGM_Clacker" ,"CUP_muzzle_snds_M9" , "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage","AGM_Bandage", "RH_m110sd_t", "RH_anpvs10", "rhsusf_acc_LEUPOLDMK4", "rhsusf_acc_anpeq15A", "RH_TD_ACB","AGM_Clacker" ,"CUP_muzzle_snds_M9" , "AGM_EarBuds"};
		weapons[] = {"RH_m110","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		respawnWeapons[] = {"RH_m110","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		magazines[] = {"CUP_15Rnd_9x19_M9","ClaymoreDirectionalMine_Remote_Mag","HandGrenade","HandGrenade","rhsusf_20Rnd_762x51_m118_special_Mag",  "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m993_Mag", "RH_20Rnd_762x51_LFMJSB", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag"};
		respawnMagazines[] = {"CUP_15Rnd_9x19_M9","ClaymoreDirectionalMine_Remote_Mag","HandGrenade","HandGrenade","rhsusf_20Rnd_762x51_m118_special_Mag",  "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m993_Mag", "RH_20Rnd_762x51_LFMJSB", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag"};
};
	class hmg_usmc_s_2015_sniperH : hmg_usmc_s_2015_sniper
	{
		displayName = "Sniper (heavy) (Marpat snow)";
		weapons[] = {"Trixie_M107","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		respawnWeapons[] = {"Trixie_M107","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		magazines[] = 
			{
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"HandGrenade",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"HandGrenade",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4_2","RH_anpvs10" ,"ATragMX","CUP_muzzle_snds_M9","AGM_Clacker" , "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4_2","RH_anpvs10" ,"ATragMX","CUP_muzzle_snds_M9","AGM_Clacker" , "AGM_EarBuds"};

		linkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "itemradio", "ItemMap"};
};
// отсюда пошли КМПшники в Марпате snow обр. 2015 года
	class hmg_usmc_s_2015_rifleman : hmg_usmc_s_2005
	{
		displayName = "Rifleman/pointman (Marpat snow)";
		Items[] = {"AGM_Bandage","AGM_Bandage", "rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A" , "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage","AGM_Bandage", "rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A" , "AGM_EarBuds"};
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		magazines[] = {"RH_30Rnd_556x45_Mk318",  "RH_30Rnd_556x45_Mk318", "RH_30Rnd_556x45_Mk318","RH_30Rnd_556x45_Mk318", "RH_30Rnd_556x45_Mk318", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red"};
		respawnMagazines[] = {"RH_30Rnd_556x45_Mk318",  "RH_30Rnd_556x45_Mk318", "RH_30Rnd_556x45_Mk318","RH_30Rnd_556x45_Mk318", "RH_30Rnd_556x45_Mk318", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red"};
	};
	class hmg_usmc_s_2015_firstaid : hmg_usmc_s_2015_rifleman
	{
		displayName= "Rifleman/firstaid (Marpat snow)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A" , "AGM_EarBuds"};
	};
	class hmg_usmc_s_2015_marksman : hmg_usmc_s_2015_rifleman
	{
		displayName= "Designated marksman (Marpat snow)";
		Items[] = {"AGM_Bandage","AGM_Bandage", "RH_m110sd_t", "RH_anpvs10", "RH_m3lr", "rhsusf_acc_anpeq15A", "RH_TD_ACB" , "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage","AGM_Bandage", "RH_m110sd_t", "RH_anpvs10", "RH_m3lr", "rhsusf_acc_anpeq15A", "RH_TD_ACB", "AGM_EarBuds" };
		weapons[] = {"RH_m110","Throw","Put"};
		respawnWeapons[] = {"RH_m110","Throw","Put"};
		magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag",  "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m993_Mag", "RH_20Rnd_762x51_LFMJSB", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag"};
		respawnMagazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag",  "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m993_Mag", "RH_20Rnd_762x51_LFMJSB", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag"};
	};
	class hmg_usmc_s_2015_assar : hmg_usmc_s_2015_rifleman
	{
		displayName= "Assist. Auto Rifleman (Marpat snow)";
		backpack="MEF_snow_Kitbag_AAR";
	};
	class hmg_usmc_s_2015_AR : hmg_usmc_s_2015_rifleman
	{
		displayName= "Auto Rifleman (Marpat snow)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A", "RH_HBLM" , "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A", "RH_HBLM", "AGM_EarBuds" };
		weapons[] = {"RH_M27IAR","Throw","Put"};
		respawnWeapons[] = {"RH_M27IAR","Throw","Put"};
		backpack="MEF_snow_Kitbag_AAR";
	};
	class hmg_usmc_s_2015_TL : hmg_usmc_s_2015_rifleman
	{
		displayName= "Team leader (Marpat snow)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		weapons[] = {"rhs_weap_m4_m203","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_m203","Throw","Put"};
		backpack="MEF_snow_Kitbag_TL";
	};
	class hmg_usmc_s_2015_SL : hmg_usmc_s_2015_rifleman
	{
		displayName= "Squad leader (Marpat snow)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put", "Binocular"};
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A" , "itemradio", "ItemcTabHCam", "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A" , "itemradio", "ItemcTabHCam", "AGM_EarBuds"};
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "ItemMap", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "ItemMap", "tf_anprc154", "tf_microdagr"};
	};
	class hmg_usmc_s_2015_messenger : hmg_usmc_s_2015_rifleman
	{
		displayName= "Messenger (Marpat snow)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		backpack = "tf_rt1523g_black";
	};
	class hmg_usmc_s_2015_pltsrg : hmg_usmc_s_2015_SL
	{
		displayName= "Platoon sergeant (Marpat snow)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A" , "itemradio", "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A" , "itemradio", "AGM_EarBuds"};
		backpack = "tf_rt1523g_black";
	};
	class hmg_usmc_s_2015_PltL : hmg_usmc_s_2015_SL
	{
		displayName= "Platoon commander (Marpat snow)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "ItemcTabHCam" , "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A", "itemradio", "ItemcTabHCam" , "AGM_EarBuds"};
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "ItemAndroid ", "tf_anprc154", "tf_microdagr", "ItemMap"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemCompass", "G_Combat", "rhsusf_ANPVS_14", "ItemAndroid ", "tf_anprc154", "tf_microdagr", "ItemMap"};
	};
	class hmg_usmc_s_2015_firsrg : hmg_usmc_s_2015_rifleman
	{
		displayName= "First sergeant (Marpat snow)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put","Binocular"};		
        linkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools", "ItemMicroDAGR"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools", "ItemMicroDAGR"};
	};
	class hmg_usmc_s_2015_LogNCO : hmg_usmc_s_2015_rifleman
	{
		displayName= "Logistics NCO (Marpat)";
	};
	class hmg_usmc_s_2015_PropNCO : hmg_usmc_s_2015_rifleman
	{
		displayName= "Property NCO (Marpat)";
	};
	class hmg_usmc_s_2015_AdminClerk : hmg_usmc_s_2015_rifleman
	{
		displayName= "Administrative Clerk (Marpat)";
	};
	class hmg_usmc_s_2015_IntelSpec : hmg_usmc_s_2015_AR
	{
		displayName= "Intelligence Specialist (Marpat)";
		Backpack = "B_rhsusf_B_BACKPACK";
	};
	class hmg_usmc_s_2015_OpClerk : hmg_usmc_s_2015_rifleman
	{
		displayName= "Operations Clerk (Marpat)";
	};
	class hmg_usmc_s_2015_asOpChief : hmg_usmc_s_2015_firsrg
	{
		displayName= "Assistant Operations Chief (Marpat)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put"};		
	};
	class hmg_usmc_s_2015_opChief : hmg_usmc_s_2015_firsrg
	{
		displayName= "Operations Chief (Marpat)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put"};		
        linkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools", "ItemcTab"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools", "ItemcTab"};
	};
	class hmg_usmc_s_2015_gunsrg : hmg_usmc_s_2015_firsrg
	{
		displayName= "Gunnery sergeant (Marpat snow)";
		engineer = 1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};	
	class hmg_usmc_s_2015_execoff : hmg_usmc_s_2015_firsrg
	{
		displayName= "Exec officer (Marpat snow)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "ItemMap", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "ItemMap", "itemradio","AGM_MapTools"};
		backpack = "tf_rt1523g_black";
	};	
	class hmg_usmc_s_2015_cl : hmg_usmc_s_2015_firsrg
	{
		displayName= "Company commander (Marpat snow)";
		linkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "ItemMap", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_khk2","SP_ECHHelmet_White1","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "ItemMap", "itemradio","AGM_MapTools"};
	};
	class hmg_usmc_s_2015_mortSL : hmg_usmc_s_2015_SL
	{
		displayName= "Mortar Section leader (Marpat snow)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio" , "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio" , "AGM_EarBuds"};
	};
	class hmg_usmc_s_2015_mg_tl : hmg_usmc_s_2015_rifleman
	{
		displayName= "MG Team leader (Marpat snow)";
	};
	class hmg_usmc_s_2015_mg : hmg_usmc_s_2015_rifleman
	{
		displayName= "Gunner (Marpat snow)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_ta648","RH_pas13cmg", "rhsusf_acc_anpeq15A", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_ta648","RH_pas13cmg", "rhsusf_acc_anpeq15A" , "AGM_EarBuds"};
		weapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240G"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240G"};		
        linkedItems[] = {"TRYK_V_Sheriff_BA_TCL2","SP_ECHHelmet_White1","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"TRYK_V_Sheriff_BA_TCL2","SP_ECHHelmet_White1","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		magazines[] = 
			{
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m993",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m993",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	};
	class hmg_usmc_s_2015_assMG : hmg_usmc_s_2015_assar
	{
		displayName= "Ammunition man (Marpat snow)";
		backpack = "MEF_snow_Kitbag_MG";
	};
	class hmg_usmc_s_2015_mortL : hmg_usmc_s_2015_rifleman
	{
	displayName= "Mortar Squad leader/Gunner (Marpat snow)";
	Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "a3ru_rangetable_m252", "AGM_EarBuds"};
	respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "a3ru_rangetable_m252", "AGM_EarBuds"};
	weapons[] = {"rhs_weap_m4_grip","Throw","Put", "Rangefinder"};
	respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put", "Rangefinder"};		
	backpack = "RDS_M252_Gun_Bag_FIA";
	};
	class hmg_usmc_s_2015_mortas : hmg_usmc_s_2015_rifleman
	{
		displayName= "Assistant gunner (Marpat snow)";
		backpack = "RDS_M252_Bipod_Bag_FIA";
	};
	class hmg_usmc_s_2015_mortam : hmg_usmc_s_2015_rifleman
	{
		displayName= "Ammunition man (Marpat snow)";
		backpack = "m252_ammo_snow";
	};
	class hmg_usmc_s_2015_assSL : hmg_usmc_s_2015_SL
	{
		displayName= "Assault section leader (Marpat snow)";
	};
	class hmg_usmc_s_2015_assGun : hmg_usmc_s_2015_rifleman
	{
		displayName= "Assault section team leader / Gunner (Marpat snow)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put", "Trixie_SMAW"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put", "Trixie_SMAW"};
		backpack = "MEF_Wood_Kitbag_SMAW";
	};
	class hmg_usmc_s_2015_assAssGun : hmg_usmc_s_2015_rifleman
	{
		displayName= "Assault section Assistant Gunner (Marpat snow)";
		backpack = "MEF_snow_Kitbag_SMAW";
	};
// Corpsman team Marpat snow	2015
	class hmg_usmc_s_2015_scorp : hmg_usmc_s_2015_sl
	{
		displayName = "Senior corpsman (Marpat snow)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools" , "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools" , "AGM_EarBuds"};
		linkedItems[] = {"MEF_Vest_Tan_Medical","SP_ECHHelmet_White1","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Medical","SP_ECHHelmet_White1","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "ItemMicroDAGR", "ItemMap"};
		weapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "MEF_snow_Kitbag_medic";
	};
	class hmg_usmc_s_2015_corp : hmg_usmc_s_2015_rifleman
	{
		displayName = "Corpsman (Marpat snow)";
		weapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_grip","Throw","Put"};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "MEF_snow_Kitbag_medic";
	};	
//отсюда пошил КМПшники в вудланде обр. 1995 года
class hmg_usmc_w_1995_rifleman : rhsusf_army_ocp_rifleman
	{
		displayName= "Rifleman";
		uniformClass = "US_1981_Woodland_WorkUniform2";
		weapons[] = {"RH_M16A2","Throw","Put"}; 
		respawnWeapons[] = {"RH_M16A2","Throw","Put"}; 
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" , "AGM_EarBuds"};

		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" };
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" };
		backpack = "US_1981_Woodland_Carryall";
		class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'US_1stMarineDivision_acu'] call BIS_fnc_setUnitInsignia;";
    };
	};
	
	class hmg_usmc_w_1995_assar : hmg_usmc_w_1995_rifleman
	{
		displayName= "Assist. Auto Rifleman (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" , "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" , "AGM_EarBuds"};
		backpack="CUP_B_CivPack_Wdl_AR";
	};

	class hmg_usmc_w_1995_AR : hmg_usmc_w_1995_rifleman
	{
		displayName= "Auto Rifleman (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" , "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" , "AGM_EarBuds"};
		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
		backpack="CUP_B_CivPack_Wdl_AR";
	};

	class hmg_usmc_w_1995_TL : hmg_usmc_w_1995_rifleman
	{
		displayName= "Team leader (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4" , "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4" , "AGM_EarBuds" };
		weapons[] = {"RH_M16A2gl","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2gl","Throw","Put"};
		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		backpack="CUP_B_CivPack_Wdl_TL";
	};
	
	class hmg_usmc_w_1995_SL : hmg_usmc_w_1995_rifleman
	{
		displayName= "Squad leader (Woodland)";
		weapons[] = {"RH_M16A2","Throw","Put", "Binocular"}; 
		respawnWeapons[] = {"RH_M16A2","Throw","Put", "Binocular"}; 
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" ,"AGM_MapTools","ItemSMGR", "AGM_EarBuds"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" ,"AGM_MapTools","ItemSMGR", "AGM_EarBuds"  };
		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap", "itemradio", "tf_microdagr"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP" , "ItemMap", "itemradio", "tf_microdagr"};
	};

	class hmg_usmc_w_1995_messenger : hmg_usmc_w_1995_rifleman
	{
		displayName= "Messenger (Woodland)";
		backpack = "tf_rt1523g_black";
	};

	class hmg_usmc_w_1995_guide : hmg_usmc_w_1995_rifleman
	{
		displayName= "PLT Guide (Woodland)";
		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP" ,"ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP" ,"ItemMap"};
	};

	class hmg_usmc_w_1995_pltsrg : hmg_usmc_w_1995_SL
	{
		displayName= "Platoon sergeant (Woodland)";
		backpack = "tf_rt1523g_black";
	
	};

	class hmg_usmc_w_1995_PltL : hmg_usmc_w_1995_SL
	{
		displayName= "Platoon commander (Woodland)";
		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  ,"ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP" ,"ItemMap"};
	};
	
	class hmg_usmc_w_1995_firsrg : hmg_usmc_w_1995_SL
	{
		displayName= "First sergeant (Woodland)";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};		
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	};
	
	class hmg_usmc_w_1995_gunsrg : hmg_usmc_w_1995_firsrg
	{
		displayName= "Gunnery sergeant (Woodland)";
		engineer = 1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};	
	
	class hmg_usmc_w_1995_execoff : hmg_usmc_w_1995_firsrg
	{
		displayName= "Exec officer (Woodland)";
		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP" , "ItemMap" ,"AGM_MapTools"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP" , "ItemMap" ,"AGM_MapTools"};
		backpack="tf_rt1523g_black";
	};	
		
	class hmg_usmc_w_1995_cl : hmg_usmc_w_1995_execoff
	{
		displayName= "Company commander (Woodland)";
		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP" ,"ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP","ItemMap"};
	};
	
	class hmg_usmc_w_1995_MGSL : hmg_usmc_w_1995_SL
	{
		displayName= "MG Section leader (Woodland)";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	};
	
	class hmg_usmc_w_1995_mortSL : hmg_usmc_w_1995_MGSL
	{
		displayName= "Mortar Section leader (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio", "AGM_EarBuds" };
		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP", "ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP", "ItemMap"};
	};
	
	class hmg_usmc_w_1995_mg_tl : hmg_usmc_w_1995_SL
	{
		displayName= "MG Team leader (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds"   };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" , "AGM_EarBuds"  };
		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
	};
	
	class hmg_usmc_w_1995_mg : hmg_usmc_w_1995_rifleman
	{
		displayName= "Gunner (Woodland)";
		weapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240G"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240G"};		
        linkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		magazines[] = 
			{
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	};

	class hmg_usmc_w_1995_assMG : hmg_usmc_w_1995_assar
	{
		displayName= "Ammunition man (Woodland)";
		backpack = "CUP_B_CivPack_Wdl_MG";
	};
	
	class hmg_usmc_w_1995_mortL : hmg_usmc_w_1995_rifleman
	{
		displayName= "Squad leader/gunner  (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds"  };
		weapons[] = {"CUP_hgun_M9","Throw","Put", "Binocular"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put", "Binocular"};		
        linkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	backpack = "RDS_M252_Gun_Bag_FIA";
	};
	
	class hmg_usmc_w_1995_mortas : hmg_usmc_w_1995_rifleman
	{
		displayName= "Assistant gunner (Woodland)";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
		backpack = "RDS_M252_Bipod_Bag_FIA";
	};
		class hmg_usmc_w_1995_mortam : hmg_usmc_w_1995_rifleman
	{
		displayName= "Ammunition man (Woodland)";
		backpack = "m252_ammo_woodland";
	};
	class hmg_usmc_w_1995_assSL : hmg_usmc_w_1995_MGSL
	{
		displayName= "Assault section leader (Woodland)";
	};
	
	class hmg_usmc_w_1995_assGun : hmg_usmc_w_1995_MGSL
	{
		displayName= "Assault section team leader / Gunner (Woodland)";
		weapons[] = {"CUP_hgun_M9","Throw","Put", "Trixie_SMAW"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put", "Trixie_SMAW"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds" };

		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  };
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  };
		backpack = "CUP_B_CivPack_Wdl_SMAW";
	};
	
	class hmg_usmc_w_1995_assAssGun : hmg_usmc_w_1995_rifleman
	{
		displayName= "Assault section Assistant Gunner (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds"  };
		backpack = "CUP_B_CivPack_Wdl_SMAW";
	};
// Corpsman team Woodland	1995
	class hmg_usmc_w_1995_scorp : hmg_usmc_w_1995_sl{
		displayName = "Senior corpsman (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools" , "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools" , "AGM_EarBuds"};
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "CUP_B_CivPack_Wdl_medic";
};
class hmg_usmc_w_1995_corp : hmg_usmc_w_1995_rifleman{
		displayName = "Corpsman (Woodland)";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "CUP_B_CivPack_Wdl_medic";
};
//Sniper scout team Woodland 1995
class hmg_usmc_w_1995_scout : hmg_usmc_w_1995_rifleman{
		displayName = "Scout (Woodland)";
		weapons[] = {"RH_M16A2gl","Throw","Put", "CUP_hgun_M9", "Binocular"};
		respawnWeapons[] = {"RH_M16A2gl","Throw","Put", "CUP_hgun_M9", "Binocular"};
		magazines[] = 
			{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
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
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_M26_Clacker","AGM_MapTools","ItemSMGR", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_M26_Clacker","AGM_MapTools","ItemSMGR", "AGM_EarBuds" };

		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
		backpack = "tf_rt1523g_black";
};
class hmg_usmc_w_1995_sniper : hmg_usmc_w_1995_rifleman{
		displayName = "Sniper (Woodland)";
		weapons[] = {"Trixie_M40A3_NG","Throw","Put", "CUP_hgun_M9", "Binocular"};
		respawnWeapons[] = {"Trixie_M40A3_NG","Throw","Put", "CUP_hgun_M9", "Binocular"};
		magazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs10","AGM_Clacker", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs10","AGM_Clacker", "AGM_EarBuds" };

		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
};

class hmg_usmc_w_1995_sniperH : hmg_usmc_w_1995_sniper{
		displayName = "Sniper (heavy) (Woodland)";
		weapons[] = {"Trixie_M107_Black","Throw","Put", "CUP_hgun_M9", "Binocular"};
		respawnWeapons[] = {"Trixie_M107_Black","Throw","Put", "CUP_hgun_M9", "Binocular"};
		magazines[] = 
			{
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"HandGrenade",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"HandGrenade",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4_2", "RH_anpvs10","AGM_Clacker", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4_2", "RH_anpvs10","AGM_Clacker", "AGM_EarBuds" };

		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
};
class hmg_usmc_w_1995_sniperR : hmg_usmc_w_1995_sniper{
		displayName = "Sniper (rapid) (Woodland)";
		weapons[] = {"Trixie_M14","Throw","Put", "CUP_hgun_M9", "Binocular"};
		respawnWeapons[] = {"Trixie_M14","Throw","Put", "CUP_hgun_M9", "Binocular"};
		magazines[] = 
			{
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"HandGrenade",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"HandGrenade",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4", "RH_anpvs4","AGM_Clacker", "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4", "RH_anpvs4","AGM_Clacker", "AGM_EarBuds"};

		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
};

	//отсюда пошил КМПшники в дезерте обр. 1995 года
class hmg_usmc_d_1995_rifleman : rhsusf_army_ocp_rifleman
	{
		displayName= "Rifleman (desert)";
		uniformClass = "US_1990_TricolorDesert_WorkUniform2";
		weapons[] = {"RH_M16A2","Throw","Put"}; 
		respawnWeapons[] = {"RH_M16A2","Throw","Put"}; 
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" , "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds" };

		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" };
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" };
		backpack = "US_1990_TricolorDesert_Carryall";
		class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'US_1stMarineDivision_des'] call BIS_fnc_setUnitInsignia;";
    };
	};
	
	class hmg_usmc_d_1995_assar : hmg_usmc_d_1995_rifleman
	{
		displayName= "Assist. Auto Rifleman (desert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel", "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" , "AGM_EarBuds"};
		backpack="CUP_B_CivPack_d_AR";
	};

	class hmg_usmc_d_1995_AR : hmg_usmc_d_1995_rifleman
	{
		displayName= "Auto Rifleman (desert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" , "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" , "AGM_EarBuds"};
		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		weapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m249_pip_L","Throw","Put"};
		backpack="CUP_B_CivPack_d_AR";
	};

	class hmg_usmc_d_1995_TL : hmg_usmc_d_1995_rifleman
	{
		displayName= "Team leader (desert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4", "AGM_EarBuds"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4" , "AGM_EarBuds" };
		weapons[] = {"RH_M16A2gl","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2gl","Throw","Put"};
		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		backpack="CUP_B_CivPack_d_TL";
	};
	
	class hmg_usmc_d_1995_SL : hmg_usmc_d_1995_rifleman
	{
		displayName= "Squad leader (desert)";
		weapons[] = {"RH_M16A2","Throw","Put", "Binocular"}; 
		respawnWeapons[] = {"RH_M16A2","Throw","Put", "Binocular"}; 
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" ,"AGM_MapTools","ItemSMGR" , "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" ,"AGM_MapTools","ItemSMGR", "AGM_EarBuds"  };
		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap", "itemradio", "tf_microdagr"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP" , "ItemMap", "itemradio", "tf_microdagr"};
	};

	class hmg_usmc_d_1995_messenger : hmg_usmc_d_1995_rifleman
	{
		displayName= "Messenger (desert)";
		backpack = "tf_rt1523g_black";
	};

	class hmg_usmc_d_1995_guide : hmg_usmc_d_1995_rifleman
	{
		displayName= "PLT Guide (desert)";
		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP" ,"ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP" ,"ItemMap"};
	};

	class hmg_usmc_d_1995_pltsrg : hmg_usmc_d_1995_SL
	{
		displayName= "Platoon sergeant (desert)";
		backpack = "tf_rt1523g_black";
	
	};

	class hmg_usmc_d_1995_PltL : hmg_usmc_d_1995_SL
	{
		displayName= "Platoon commander (desert)";
		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  ,"ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP" ,"ItemMap"};
	};
	
	class hmg_usmc_d_1995_firsrg : hmg_usmc_d_1995_SL
	{
		displayName= "First sergeant (desert)";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};		
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	};
	
	class hmg_usmc_d_1995_gunsrg : hmg_usmc_d_1995_firsrg
	{
		displayName= "Gunnery sergeant (desert)";
		engineer = 1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};	
	
	class hmg_usmc_d_1995_execoff : hmg_usmc_d_1995_firsrg
	{
		displayName= "Exec officer (desert)";
		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP" , "ItemMap" ,"AGM_MapTools"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP" , "ItemMap" ,"AGM_MapTools"};
		backpack="tf_rt1523g_black";
	};	
		
	class hmg_usmc_d_1995_cl : hmg_usmc_d_1995_execoff
	{
		displayName= "Company commander (desert)";
		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP" ,"ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP","ItemMap"};
	};
	
	class hmg_usmc_d_1995_MGSL : hmg_usmc_d_1995_SL
	{
		displayName= "MG Section leader (desert)";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	};
	
	class hmg_usmc_d_1995_mortSL : hmg_usmc_d_1995_MGSL
	{
		displayName= "Mortar Section leader (desert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio", "AGM_EarBuds" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio", "AGM_EarBuds" };
		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP", "ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP", "ItemMap"};
	};
	
	class hmg_usmc_d_1995_mg_tl : hmg_usmc_d_1995_SL
	{
		displayName= "MG Team leader (desert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" , "AGM_EarBuds"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" , "AGM_EarBuds"  };
		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
	};
	
	class hmg_usmc_d_1995_mg : hmg_usmc_d_1995_rifleman
	{
		displayName= "Gunner (desert)";
		weapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240G"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240G"};		
        linkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		magazines[] = 
			{
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	};

	class hmg_usmc_d_1995_assMG : hmg_usmc_d_1995_assar
	{
		displayName= "Ammunition man (desert)";
		backpack = "CUP_B_CivPack_d_MG";
	};
	
	class hmg_usmc_d_1995_mortL : hmg_usmc_d_1995_rifleman
	{
		displayName= "Squad leader/gunner  (desert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" , "AGM_EarBuds" };
		weapons[] = {"CUP_hgun_M9","Throw","Put", "Binocular"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put", "Binocular"};		
        linkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
	backpack = "RDS_M252_Gun_Bag_FIA";
	};
	
	class hmg_usmc_d_1995_mortas : hmg_usmc_d_1995_rifleman
	{
		displayName= "Assistant gunner (desert)";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
		backpack = "RDS_M252_Bipod_Bag_FIA";
	};
		class hmg_usmc_d_1995_mortam : hmg_usmc_d_1995_rifleman
	{
		displayName= "Ammunition man (desert)";
		backpack = "m252_ammo_desert3";
	};
	class hmg_usmc_d_1995_assSL : hmg_usmc_d_1995_MGSL
	{
		displayName= "Assault section leader (desert)";
	};
	
	class hmg_usmc_d_1995_assGun : hmg_usmc_d_1995_MGSL
	{
		displayName= "Assault section team leader / Gunner (desert)";
		weapons[] = {"CUP_hgun_M9","Throw","Put", "Trixie_SMAW"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put", "Trixie_SMAW"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds" };

		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  };
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  };
		backpack = "CUP_B_CivPack_d_SMAW";
	};
	
	class hmg_usmc_d_1995_assAssGun : hmg_usmc_d_1995_rifleman
	{
		displayName= "Assault section Assistant Gunner (desert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_EarBuds"  };
		backpack = "CUP_B_CivPack_d_SMAW";
	};
// Corpsman team Woodland	1995
	class hmg_usmc_d_1995_scorp : hmg_usmc_d_1995_sl{
		displayName = "Senior corpsman (desert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools" , "AGM_EarBuds"};
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools" , "AGM_EarBuds"};
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "CUP_B_CivPack_d_medic";
};
class hmg_usmc_d_1995_corp : hmg_usmc_d_1995_rifleman{
		displayName = "Corpsman (desert)";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "CUP_B_CivPack_d_medic";
};
//Sniper scout team Woodland 1995
class hmg_usmc_d_1995_scout : hmg_usmc_d_1995_rifleman{
		displayName = "Scout (desert)";
		weapons[] = {"RH_M16A2gl","Throw","Put", "CUP_hgun_M9", "Binocular"};
		respawnWeapons[] = {"RH_M16A2gl","Throw","Put", "CUP_hgun_M9", "Binocular"};
		magazines[] = 
			{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
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
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_M26_Clacker","AGM_MapTools","ItemSMGR", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_M26_Clacker","AGM_MapTools","ItemSMGR", "AGM_EarBuds" };

		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
		backpack = "tf_rt1523g_black";
};
class hmg_usmc_d_1995_sniper : hmg_usmc_d_1995_rifleman{
		displayName = "Sniper (desert)";
		weapons[] = {"Trixie_M40A3_NG","Throw","Put", "CUP_hgun_M9", "Binocular"};
		respawnWeapons[] = {"Trixie_M40A3_NG","Throw","Put", "CUP_hgun_M9", "Binocular"};
		magazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs10","AGM_Clacker", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs10","AGM_Clacker", "AGM_EarBuds" };

		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
};

class hmg_usmc_d_1995_sniperH : hmg_usmc_d_1995_sniper{
		displayName = "Sniper (heavy) (desert)";
		weapons[] = {"Trixie_M107_Black","Throw","Put", "CUP_hgun_M9", "Binocular"};
		respawnWeapons[] = {"Trixie_M107_Black","Throw","Put", "CUP_hgun_M9", "Binocular"};
		magazines[] = 
			{
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"HandGrenade",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"HandGrenade",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4_2", "RH_anpvs10","AGM_Clacker", "AGM_EarBuds" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4_2", "RH_anpvs10","AGM_Clacker", "AGM_EarBuds" };

		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
};
class hmg_usmc_d_1995_sniperR : hmg_usmc_d_1995_sniper{
		displayName = "Sniper (rapid) (desert)";
		weapons[] = {"Trixie_M14","Throw","Put", "CUP_hgun_M9", "Binocular"};
		respawnWeapons[] = {"Trixie_M14","Throw","Put", "CUP_hgun_M9", "Binocular"};
		magazines[] = 
			{
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"HandGrenade",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"HandGrenade",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4", "RH_anpvs4","AGM_Clacker", "AGM_EarBuds"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4", "RH_anpvs4","AGM_Clacker", "AGM_EarBuds"};

		linkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","US_1990_TricolorDesert_PASGTHelmet1","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
};
	//отсюда пошил КМПшники в дезерте обр. 1985 года
class hmg_usmc_d_1985_rifleman : rhsusf_army_ocp_rifleman
	{
		displayName= "Rifleman (desert)";
		uniformClass = "US_1981_DesertChocolateChip_WorkUniform2";
		side = 1;
		weapons[] = {"RH_M16A2","Throw","Put"}; 
		respawnWeapons[] = {"RH_M16A2","Throw","Put"}; 
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };

		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" };
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" };
		backpack = "US_1981_DesertChocolateChip_Carryall";
		class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'US_1stMarineDivision_des'] call BIS_fnc_setUnitInsignia;";
    };
	};
	
	class hmg_usmc_d_1985_assar : hmg_usmc_d_1985_rifleman
	{
		displayName= "Assist. Auto Rifleman (desert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		backpack="CUP_B_CivPack_d6_AR";
	};

	class hmg_usmc_d_1985_AR : hmg_usmc_d_1985_rifleman
	{
		displayName= "Auto Rifleman (desert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		weapons[] = {"hlc_lmg_M249E2","Throw","Put"};
		respawnWeapons[] = {"hlc_lmg_M249E2","Throw","Put"};
		backpack="CUP_B_CivPack_d6_AR";
	};

	class hmg_usmc_d_1985_TL : hmg_usmc_d_1985_rifleman
	{
		displayName= "Team leader (desert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4"  };
		weapons[] = {"RH_M16A2gl","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2gl","Throw","Put"};
		linkedItems[] = {"V_HarnessOGL_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		backpack="CUP_B_CivPack_d6_TL";
	};
	
	class hmg_usmc_d_1985_SL : hmg_usmc_d_1985_rifleman
	{
		displayName= "Squad leader (desert)";
		weapons[] = {"RH_M16A2","Throw","Put" , "Binocular"}; 
		respawnWeapons[] = {"RH_M16A2","Throw","Put" , "Binocular"}; 
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  ,"AGM_CableTie","AGM_MapTools"   };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  ,"AGM_CableTie","AGM_MapTools"   };
		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap", "itemradio", "tf_microdagr"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2" , "ItemMap", "itemradio", "tf_microdagr"};
	};

	class hmg_usmc_d_1985_messenger : hmg_usmc_d_1985_rifleman
	{
		displayName= "Messenger (desert)";
		backpack = "tf_rt1523g_black";
	};

	class hmg_usmc_d_1985_guide : hmg_usmc_d_1985_rifleman
	{
		displayName= "PLT Guide (desert)";
		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2","ItemMap"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2","ItemMap"};
	};

	class hmg_usmc_d_1985_pltsrg : hmg_usmc_d_1985_SL
	{
		displayName= "Platoon sergeant (desert)";
		backpack = "tf_rt1523g_black";
	
	};

	class hmg_usmc_d_1985_PltL : hmg_usmc_d_1985_SL
	{
		displayName= "Platoon commander (desert)";
		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2","ItemMap"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2","ItemMap"};
	};
	
	class hmg_usmc_d_1985_firsrg : hmg_usmc_d_1985_SL
	{
		displayName= "First sergeant (desert)";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};		
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
	};
	
	class hmg_usmc_d_1985_gunsrg : hmg_usmc_d_1985_firsrg
	{
		displayName= "Gunnery sergeant (desert)";
		engineer = 1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};	
	
	class hmg_usmc_d_1985_execoff : hmg_usmc_d_1985_firsrg
	{
		displayName= "Exec officer (desert)";
		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2" , "ItemMap" ,"AGM_MapTools"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2" , "ItemMap" ,"AGM_MapTools"};
		backpack="tf_rt1523g_black";
	};	
		
	class hmg_usmc_d_1985_cl : hmg_usmc_d_1985_execoff
	{
		displayName= "Company commander (desert)";
		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2","ItemMap"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2","ItemMap"};
	};
	
	class hmg_usmc_d_1985_MGSL : hmg_usmc_d_1985_SL
	{
		displayName= "MG Section leader (desert)";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
	};
	
	class hmg_usmc_d_1985_mortSL : hmg_usmc_d_1985_MGSL
	{
		displayName= "Mortar Section leader (desert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio" };
		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
	};
	
	class hmg_usmc_d_1985_mg_tl : hmg_usmc_d_1985_rifleman
	{
		displayName= "MG Team leader (desert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"   };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"   };
		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
	};
	
	class hmg_usmc_d_1985_mg : hmg_usmc_d_1985_rifleman
	{
		displayName= "Gunner (desert)";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put","hlc_lmg_m60"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put","hlc_lmg_m60"};		
        linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		magazines[] = 
			{
				"hlc_100Rnd_762x51_T_M60E4",
				"hlc_100Rnd_762x51_M_M60E4",
				"hlc_100Rnd_762x51_B_M60E4",
				"hlc_100Rnd_762x51_B_M60E4",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"hlc_100Rnd_762x51_T_M60E4",
				"hlc_100Rnd_762x51_M_M60E4",
				"hlc_100Rnd_762x51_B_M60E4",
				"hlc_100Rnd_762x51_B_M60E4",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"			
			};
	};

	class hmg_usmc_d_1985_assMG : hmg_usmc_d_1985_assar
	{
		displayName= "Ammunition man (desert)";
		backpack = "CUP_B_CivPack_d6_MGM60";
	};
	
	class hmg_usmc_d_1985_mortL : hmg_usmc_d_1985_rifleman
	{
		displayName= "Squad leader/gunner (desert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  };
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put", "Binocular"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put", "Binocular"};		
        linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
	backpack = "RDS_M252_Gun_Bag_FIA";
	};
	
	class hmg_usmc_d_1985_mortas : hmg_usmc_d_1985_rifleman
	{
		displayName= "Assistant gunner (desert)";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
		backpack = "RDS_M252_Bipod_Bag_FIA";
	};
		class hmg_usmc_d_1985_mortam : hmg_usmc_d_1985_rifleman
	{
		displayName= "Ammunition man (desert)";
		backpack = "m252_ammo_desert6";
	};
	class hmg_usmc_d_1985_assSL : hmg_usmc_d_1985_MGSL
	{
		displayName= "Assault section leader (desert)";
	};
	
	class hmg_usmc_d_1985_assGun : hmg_usmc_d_1985_MGSL
	{
		displayName= "Assault section team leader / Gunner (desert)";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put", "Trixie_SMAW"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put", "Trixie_SMAW"};
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };

		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  };
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  };
		backpack = "CUP_B_CivPack_d6_SMAW";
	};
	
	class hmg_usmc_d_1985_assAssGun : hmg_usmc_d_1985_rifleman
	{
		displayName= "Assault section Assistant Gunner (desert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  };
		backpack = "CUP_B_CivPack_d6_SMAW";
	};
// Corpsman team desert	1985
	class hmg_usmc_d_1985_scorp : hmg_usmc_d_1985_sl{
		displayName = "Senior corpsman (desert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools" };
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "CUP_B_CivPack_d6_medic";
};
class hmg_usmc_d_1985_corp : hmg_usmc_d_1985_rifleman{
		displayName = "Corpsman (desert)";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "CUP_B_CivPack_d6_medic";
};
//Sniper scout team desert 1985
class hmg_usmc_d_1985_scout : hmg_usmc_d_1985_rifleman{
		displayName = "Scout (desert)";
		weapons[] = {"RH_M16A2gl","Throw","Put", "rhsusf_weap_m1911a1", "Binocular"};
		respawnWeapons[] = {"RH_M16A2gl","Throw","Put", "rhsusf_weap_m1911a1", "Binocular"};
		magazines[] = 
			{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
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
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_M26_Clacker","AGM_MapTools"  };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_M26_Clacker","AGM_MapTools"  };

		linkedItems[] = {"V_HarnessOGL_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  , "ItemMap"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  , "ItemMap"};
		backpack = "tf_rt1523g_black";
};
class hmg_usmc_d_1985_sniper : hmg_usmc_d_1985_rifleman{
		displayName = "Sniper (desert)";
		weapons[] = {"Trixie_M40A3_NG","Throw","Put", "rhsusf_weap_m1911a1", "Binocular"};
		respawnWeapons[] = {"Trixie_M40A3_NG","Throw","Put", "rhsusf_weap_m1911a1", "Binocular"};
		magazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
		respawnMagazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs4","AGM_Clacker"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs4","AGM_Clacker"};

		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
};
class hmg_usmc_d_1985_sniperR : hmg_usmc_d_1985_sniper{
		displayName = "Sniper (rapid) (desert)";
		weapons[] = {"Trixie_M14","Throw","Put", "rhsusf_weap_m1911a1", "Binocular"};
		respawnWeapons[] = {"Trixie_M14","Throw","Put", "rhsusf_weap_m1911a1", "Binocular"};
		magazines[] = 
			{
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"HandGrenade",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"HandGrenade",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4", "RH_anpvs4","AGM_Clacker"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4", "RH_anpvs4","AGM_Clacker"};

		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
};
	//отсюда пошил КМПшники в вудланде обр. 1985 года
class hmg_usmc_w_1985_rifleman : hmg_usmc_w_1995_rifleman
	{
		displayName= "Rifleman";
		side = 1;
		weapons[] = {"RH_M16A2","Throw","Put"}; 
		respawnWeapons[] = {"RH_M16A2","Throw","Put"}; 
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };

		linkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" };
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" };
		backpack = "US_1981_Woodland_Carryall";

	};
	
	class hmg_usmc_w_1985_assar : hmg_usmc_w_1985_rifleman
	{
		displayName= "Assist. Auto Rifleman (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		backpack="CUP_B_CivPack_Wdl_AR";
	};

	class hmg_usmc_w_1985_AR : hmg_usmc_w_1985_rifleman
	{
		displayName= "Auto Rifleman (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		linkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		weapons[] = {"hlc_lmg_M249E2","Throw","Put"};
		respawnWeapons[] = {"hlc_lmg_M249E2","Throw","Put"};
		backpack="CUP_B_CivPack_Wdl_AR";
	};

	class hmg_usmc_w_1985_TL : hmg_usmc_w_1985_rifleman
	{
		displayName= "Team leader (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4"  };
		weapons[] = {"RH_M16A2gl","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2gl","Throw","Put"};
		linkedItems[] = {"V_HarnessOGL_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		backpack="CUP_B_CivPack_Wdl_TL";
	};
	
	class hmg_usmc_w_1985_SL : hmg_usmc_w_1985_rifleman
	{
		displayName= "Squad leader (Woodland)";
		weapons[] = {"RH_M16A2","Throw","Put" , "Binocular"}; 
		respawnWeapons[] = {"RH_M16A2","Throw","Put" , "Binocular"}; 
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  ,"AGM_CableTie","AGM_MapTools"   };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  ,"AGM_CableTie","AGM_MapTools"   };
		linkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap", "itemradio", "tf_microdagr"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2" , "ItemMap", "itemradio", "tf_microdagr"};
	};

	class hmg_usmc_w_1985_messenger : hmg_usmc_w_1985_rifleman
	{
		displayName= "Messenger (Woodland)";
		backpack = "tf_rt1523g_black";
	};

	class hmg_usmc_w_1985_guide : hmg_usmc_w_1985_rifleman
	{
		displayName= "PLT Guide (Woodland)";
		linkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2","ItemMap"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2","ItemMap"};
	};

	class hmg_usmc_w_1985_pltsrg : hmg_usmc_w_1985_SL
	{
		displayName= "Platoon sergeant (Woodland)";
		backpack = "tf_rt1523g_black";
	
	};

	class hmg_usmc_w_1985_PltL : hmg_usmc_w_1985_SL
	{
		displayName= "Platoon commander (Woodland)";
		linkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2","ItemMap"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2","ItemMap"};
	};
	
	class hmg_usmc_w_1985_firsrg : hmg_usmc_w_1985_SL
	{
		displayName= "First sergeant (Woodland)";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};		
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
	};
	
	class hmg_usmc_w_1985_gunsrg : hmg_usmc_w_1985_firsrg
	{
		displayName= "Gunnery sergeant (Woodland)";
		engineer = 1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};	
	
	class hmg_usmc_w_1985_execoff : hmg_usmc_w_1985_firsrg
	{
		displayName= "Exec officer (Woodland)";
		linkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2" , "ItemMap" ,"AGM_MapTools"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2" , "ItemMap" ,"AGM_MapTools"};
		backpack="tf_rt1523g_black";
	};	
		
	class hmg_usmc_w_1985_cl : hmg_usmc_w_1985_execoff
	{
		displayName= "Company commander (Woodland)";
		linkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2","ItemMap"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2","ItemMap"};
	};
	
	class hmg_usmc_w_1985_MGSL : hmg_usmc_w_1985_SL
	{
		displayName= "MG Section leader (Woodland)";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
	};
	
	class hmg_usmc_w_1985_mortSL : hmg_usmc_w_1985_MGSL
	{
		displayName= "Mortar Section leader (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio" };
		linkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
	};
	
	class hmg_usmc_w_1985_mg_tl : hmg_usmc_w_1985_rifleman
	{
		displayName= "MG Team leader (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"   };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"   };
		linkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
	};
	
	class hmg_usmc_w_1985_mg : hmg_usmc_w_1985_rifleman
	{
		displayName= "Gunner (Woodland)";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put","hlc_lmg_m60"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put","hlc_lmg_m60"};		
        linkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		magazines[] = 
			{
				"hlc_100Rnd_762x51_T_M60E4",
				"hlc_100Rnd_762x51_M_M60E4",
				"hlc_100Rnd_762x51_B_M60E4",
				"hlc_100Rnd_762x51_B_M60E4",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"hlc_100Rnd_762x51_T_M60E4",
				"hlc_100Rnd_762x51_M_M60E4",
				"hlc_100Rnd_762x51_B_M60E4",
				"hlc_100Rnd_762x51_B_M60E4",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"			
			};
	};

	class hmg_usmc_w_1985_assMG : hmg_usmc_w_1985_assar
	{
		displayName= "Ammunition man (Woodland)";
		backpack = "CUP_B_CivPack_Wdl_MGM60";
	};
	
	class hmg_usmc_w_1985_mortL : hmg_usmc_w_1985_rifleman
	{
		displayName= "Squad leader/gunner (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  };
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put", "Binocular"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put", "Binocular"};		
        linkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
	backpack = "RDS_M252_Gun_Bag_FIA";
	};
	
	class hmg_usmc_w_1985_mortas : hmg_usmc_w_1985_rifleman
	{
		displayName= "Assistant gunner (Woodland)";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
		backpack = "RDS_M252_Bipod_Bag_FIA";
	};
		class hmg_usmc_w_1985_mortam : hmg_usmc_w_1985_rifleman
	{
		displayName= "Ammunition man (Woodland)";
		backpack = "m252_ammo_woodland";
	};
	class hmg_usmc_w_1985_assSL : hmg_usmc_w_1985_MGSL
	{
		displayName= "Assault section leader (Woodland)";
	};
	
	class hmg_usmc_w_1985_assGun : hmg_usmc_w_1985_MGSL
	{
		displayName= "Assault section team leader / Gunner (Woodland)";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put", "Trixie_SMAW"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put", "Trixie_SMAW"};
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };

		linkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  };
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  };
		backpack = "CUP_B_CivPack_Wdl_SMAW";
	};
	
	class hmg_usmc_w_1985_assAssGun : hmg_usmc_w_1985_rifleman
	{
		displayName= "Assault section Assistant Gunner (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  };
		backpack = "CUP_B_CivPack_Wdl_SMAW";
	};
// Corpsman team Woodland	1985
	class hmg_usmc_w_1985_scorp : hmg_usmc_w_1985_sl{
		displayName = "Senior corpsman (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools" };
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "CUP_B_CivPack_Wdl_medic";
};
class hmg_usmc_w_1985_corp : hmg_usmc_w_1985_rifleman{
		displayName = "Corpsman (Woodland)";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "CUP_B_CivPack_Wdl_medic";
};
//Sniper scout team Woodland 1985
class hmg_usmc_w_1985_scout : hmg_usmc_w_1985_rifleman{
		displayName = "Scout (Woodland)";
		weapons[] = {"RH_M16A2gl","Throw","Put", "rhsusf_weap_m1911a1", "Binocular"};
		respawnWeapons[] = {"RH_M16A2gl","Throw","Put", "rhsusf_weap_m1911a1", "Binocular"};
		magazines[] = 
			{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
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
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_M26_Clacker","AGM_MapTools"  };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_M26_Clacker","AGM_MapTools"  };

		linkedItems[] = {"V_HarnessOGL_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  , "ItemMap"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  , "ItemMap"};
		backpack = "tf_rt1523g_black";
};
class hmg_usmc_w_1985_sniper : hmg_usmc_w_1985_rifleman{
		displayName = "Sniper (Woodland)";
		weapons[] = {"Trixie_M40A3_NG","Throw","Put", "rhsusf_weap_m1911a1", "Binocular"};
		respawnWeapons[] = {"Trixie_M40A3_NG","Throw","Put", "rhsusf_weap_m1911a1", "Binocular"};
		magazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
		respawnMagazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs4","AGM_Clacker"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs4","AGM_Clacker"};

		linkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
};
class hmg_usmc_w_1985_sniperR : hmg_usmc_w_1985_sniper{
		displayName = "Sniper (rapid) (Woodland)";
		weapons[] = {"Trixie_M14","Throw","Put", "rhsusf_weap_m1911a1", "Binocular"};
		respawnWeapons[] = {"Trixie_M14","Throw","Put", "rhsusf_weap_m1911a1", "Binocular"};
		magazines[] = 
			{
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"HandGrenade",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"HandGrenade",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4", "RH_anpvs4","AGM_Clacker"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4", "RH_anpvs4","AGM_Clacker"};

		linkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_Woodland_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
};
	//отсюда пошил КМПшники в дезерте ночном обр. 1985 года
class hmg_usmc_dn_1985_rifleman : rhsusf_army_ocp_rifleman
	{
		displayName= "Rifleman (NightDesert)";
		uniformClass = "US_1983_NightDesert_WorkUniform2";
		side = 1;
		weapons[] = {"RH_M16A2","Throw","Put"}; 
		respawnWeapons[] = {"RH_M16A2","Throw","Put"}; 
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };

		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" };
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" };
		backpack = "US_1981_DesertChocolateChip_Carryall";
		class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'US_1stMarineDivision_acu'] call BIS_fnc_setUnitInsignia;";
    };
	};
	
	class hmg_usmc_dn_1985_assar : hmg_usmc_dn_1985_rifleman
	{
		displayName= "Assist. Auto Rifleman (NightDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		backpack="CUP_B_CivPack_d6_AR";
	};

	class hmg_usmc_dn_1985_AR : hmg_usmc_dn_1985_rifleman
	{
		displayName= "Auto Rifleman (NightDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		weapons[] = {"hlc_lmg_M249E2","Throw","Put"};
		respawnWeapons[] = {"hlc_lmg_M249E2","Throw","Put"};
		backpack="CUP_B_CivPack_d6_AR";
	};

	class hmg_usmc_dn_1985_TL : hmg_usmc_dn_1985_rifleman
	{
		displayName= "Team leader (NightDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4"  };
		weapons[] = {"RH_M16A2gl","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2gl","Throw","Put"};
		linkedItems[] = {"V_HarnessOGL_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		backpack="CUP_B_CivPack_d6_TL";
	};
	
	class hmg_usmc_dn_1985_SL : hmg_usmc_dn_1985_rifleman
	{
		displayName= "Squad leader (NightDesert)";
		weapons[] = {"RH_M16A2","Throw","Put" , "Binocular"}; 
		respawnWeapons[] = {"RH_M16A2","Throw","Put" , "Binocular"}; 
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  ,"AGM_CableTie","AGM_MapTools"   };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  ,"AGM_CableTie","AGM_MapTools"   };
		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap", "itemradio", "tf_microdagr"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2" , "ItemMap", "itemradio", "tf_microdagr"};
	};

	class hmg_usmc_dn_1985_messenger : hmg_usmc_dn_1985_rifleman
	{
		displayName= "Messenger (NightDesert)";
		backpack = "tf_rt1523g_black";
	};

	class hmg_usmc_dn_1985_guide : hmg_usmc_dn_1985_rifleman
	{
		displayName= "PLT Guide (NightDesert)";
		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2","ItemMap"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2","ItemMap"};
	};

	class hmg_usmc_dn_1985_pltsrg : hmg_usmc_dn_1985_SL
	{
		displayName= "Platoon sergeant (NightDesert)";
		backpack = "tf_rt1523g_black";
	
	};

	class hmg_usmc_dn_1985_PltL : hmg_usmc_dn_1985_SL
	{
		displayName= "Platoon commander (NightDesert)";
		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2","ItemMap"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2","ItemMap"};
	};
	
	class hmg_usmc_dn_1985_firsrg : hmg_usmc_dn_1985_SL
	{
		displayName= "First sergeant (NightDesert)";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};		
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
	};
	
	class hmg_usmc_dn_1985_gunsrg : hmg_usmc_dn_1985_firsrg
	{
		displayName= "Gunnery sergeant (NightDesert)";
		engineer = 1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};	
	
	class hmg_usmc_dn_1985_execoff : hmg_usmc_dn_1985_firsrg
	{
		displayName= "Exec officer (NightDesert)";
		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2" , "ItemMap" ,"AGM_MapTools"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2" , "ItemMap" ,"AGM_MapTools"};
		backpack="tf_rt1523g_black";
	};	
		
	class hmg_usmc_dn_1985_cl : hmg_usmc_dn_1985_execoff
	{
		displayName= "Company commander (NightDesert)";
		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2","ItemMap"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2","ItemMap"};
	};
	
	class hmg_usmc_dn_1985_MGSL : hmg_usmc_dn_1985_SL
	{
		displayName= "MG Section leader (NightDesert)";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
	};
	
	class hmg_usmc_dn_1985_mortSL : hmg_usmc_dn_1985_MGSL
	{
		displayName= "Mortar Section leader (NightDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools", "a3ru_rangetable_m252" , "itemradio" };
		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
	};
	
	class hmg_usmc_dn_1985_mg_tl : hmg_usmc_dn_1985_rifleman
	{
		displayName= "MG Team leader (NightDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"   };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"   };
		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
	};
	
	class hmg_usmc_dn_1985_mg : hmg_usmc_dn_1985_rifleman
	{
		displayName= "Gunner (NightDesert)";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put","hlc_lmg_m60"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put","hlc_lmg_m60"};		
        linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		magazines[] = 
			{
				"hlc_100Rnd_762x51_T_M60E4",
				"hlc_100Rnd_762x51_M_M60E4",
				"hlc_100Rnd_762x51_B_M60E4",
				"hlc_100Rnd_762x51_B_M60E4",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"hlc_100Rnd_762x51_T_M60E4",
				"hlc_100Rnd_762x51_M_M60E4",
				"hlc_100Rnd_762x51_B_M60E4",
				"hlc_100Rnd_762x51_B_M60E4",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"			
			};
	};

	class hmg_usmc_dn_1985_assMG : hmg_usmc_dn_1985_assar
	{
		displayName= "Ammunition man (NightDesert)";
		backpack = "CUP_B_CivPack_d6_MGM60";
	};
	
	class hmg_usmc_dn_1985_mortL : hmg_usmc_dn_1985_rifleman
	{
		displayName= "Squad leader/gunner (NightDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  };
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put", "Binocular"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put", "Binocular"};		
        linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
	backpack = "RDS_M252_Gun_Bag_FIA";
	};
	
	class hmg_usmc_dn_1985_mortas : hmg_usmc_dn_1985_rifleman
	{
		displayName= "Assistant gunner (NightDesert)";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
		backpack = "RDS_M252_Bipod_Bag_FIA";
	};
		class hmg_usmc_dn_1985_mortam : hmg_usmc_dn_1985_rifleman
	{
		displayName= "Ammunition man (NightDesert)";
		backpack = "m252_ammo_desert6";
	};
	class hmg_usmc_dn_1985_assSL : hmg_usmc_dn_1985_MGSL
	{
		displayName= "Assault section leader (NightDesert)";
	};
	
	class hmg_usmc_dn_1985_assGun : hmg_usmc_dn_1985_MGSL
	{
		displayName= "Assault section team leader / Gunner (NightDesert)";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put", "Trixie_SMAW"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put", "Trixie_SMAW"};
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };

		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  };
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  };
		backpack = "CUP_B_CivPack_d6_SMAW";
	};
	
	class hmg_usmc_dn_1985_assAssGun : hmg_usmc_dn_1985_rifleman
	{
		displayName= "Assault section Assistant Gunner (NightDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  };
		backpack = "CUP_B_CivPack_d6_SMAW";
	};
// Corpsman team desert	1985
	class hmg_usmc_dn_1985_scorp : hmg_usmc_dn_1985_sl{
		displayName = "Senior corpsman (NightDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_CableTie", "AGM_MapTools" };
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "CUP_B_CivPack_d6_medic";
};
class hmg_usmc_dn_1985_corp : hmg_usmc_dn_1985_rifleman{
		displayName = "Corpsman (NightDesert)";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		magazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "CUP_B_CivPack_d6_medic";
};
//Sniper scout team desert 1985
class hmg_usmc_dn_1985_scout : hmg_usmc_dn_1985_rifleman{
		displayName = "Scout (NightDesert)";
		weapons[] = {"RH_M16A2gl","Throw","Put", "rhsusf_weap_m1911a1", "Binocular"};
		respawnWeapons[] = {"RH_M16A2gl","Throw","Put", "rhsusf_weap_m1911a1", "Binocular"};
		magazines[] = 
			{
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
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
				"HandGrenade",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"HandGrenade",
				"DemoCharge_Remote_Mag",
				"DemoCharge_Remote_Mag",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_M26_Clacker","AGM_MapTools"  };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_M26_Clacker","AGM_MapTools"  };

		linkedItems[] = {"V_HarnessOGL_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  , "ItemMap"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  , "ItemMap"};
		backpack = "tf_rt1523g_black";
};
class hmg_usmc_dn_1985_sniper : hmg_usmc_dn_1985_rifleman{
		displayName = "Sniper (NightDesert)";
		weapons[] = {"Trixie_M40A3_NG","Throw","Put", "rhsusf_weap_m1911a1", "Binocular"};
		respawnWeapons[] = {"Trixie_M40A3_NG","Throw","Put", "rhsusf_weap_m1911a1", "Binocular"};
		magazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};
		respawnMagazines[] = 
			{
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"Trixie_5x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs4","AGM_Clacker"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4","RH_anpvs4","AGM_Clacker"};

		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
};
class hmg_usmc_dn_1985_sniperR : hmg_usmc_dn_1985_sniper{
		displayName = "Sniper (rapid) (NightDesert)";
		weapons[] = {"Trixie_M14","Throw","Put", "rhsusf_weap_m1911a1", "Binocular"};
		respawnWeapons[] = {"Trixie_M14","Throw","Put", "rhsusf_weap_m1911a1", "Binocular"};
		magazines[] = 
			{
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"HandGrenade",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"					
			};
		respawnMagazines[] = 
			{
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"HandGrenade",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP",
				"rhsusf_mag_7x45acp_MHP"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4", "RH_anpvs4","AGM_Clacker"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_LEUPOLDMK4", "RH_anpvs4","AGM_Clacker"};

		linkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
		respawnLinkedItems[] = {"V_HarnessO_brn","US_1981_DesertChocolateChip_PASGTHelmet1","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
};
// классы которые надлежит убить по осени
class hmg_usmc_s_2015_guide : hmg_usmc_s_2015_rifleman
	{
		displayName= "PLT Guide (Marpat snow)";
	};
class hmg_usmc_d_2015_guide : hmg_usmc_d_2015_rifleman
	{
		displayName= "PLT Guide (Marpat snow)";
	};
	class hmg_usmc_w_2015_guide : hmg_usmc_w_2015_rifleman
	{
		displayName= "PLT Guide (Marpat snow)";
	};
	class hmg_usmc_s_2015_MGSL : hmg_usmc_s_2015_SL
	{
		displayName= "MG Section leader (Marpat snow)";
	};
	class hmg_usmc_d_2015_MGSL : hmg_usmc_d_2015_SL
	{
		displayName= "MG Section leader (Marpat snow)";
	};
	class hmg_usmc_w_2015_MGSL : hmg_usmc_w_2015_SL
	{
		displayName= "MG Section leader (Marpat snow)";
	};