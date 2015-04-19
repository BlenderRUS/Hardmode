﻿// отсюда пошли КМПшники в Марпате обр. 2005 года
class hmg_usmc_w_2005 : rhsusf_army_ocp_rifleman
	{
		displayName= "Rifleman (base)";
		uniformClass = "rhs_uniform_FROG01_wd";
		weapons[] = {"rhs_weap_m16a4","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_m16a4","Throw","Put"}; 
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A" };

		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat"};
		backpack = "MEF_Wood_Kitbag";

	};
	class hmg_usmc_w_2005_rifleman : hmg_usmc_w_2005
	{
		displayName = "Rifleman/scout (Marpat)";
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP", "tf_anprc154", "tf_microdagr"};
	};
	class hmg_usmc_w_2005_firstaid : hmg_usmc_w_2005_rifleman
	{
		displayName= "Rifleman/firstaid (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };
	};	
	class hmg_usmc_w_2005_marksman : hmg_usmc_w_2005_rifleman
	{
		displayName= "Designated marksman (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "RH_m3lr", "rhsusf_acc_anpeq15A" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "RH_m3lr", "rhsusf_acc_anpeq15A" };
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
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat" };
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat" };
		backpack="MEF_Wood_Kitbag_AR";
	};
	class hmg_usmc_w_2005_AR : hmg_usmc_w_2005_rifleman
	{
		displayName= "Auto Rifleman (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_ANPASM","AGM_SpareBarrel", "rhsusf_acc_anpeq15A" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_ANPASM","AGM_SpareBarrel", "rhsusf_acc_anpeq15A" };
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14" };
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14" };
		weapons[] = {"rhs_weap_m249_pip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m249_pip","Throw","Put"};
		magazines[] = {"rhsusf_100Rnd_556x45_soft_pouch",  "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch","rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch"};
		respawnMagazines[] = {"rhsusf_100Rnd_556x45_soft_pouch",  "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch","rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch"};
	};

	class hmg_usmc_w_2005_TL : hmg_usmc_w_2005_rifleman
	{
		displayName= "Team leader (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4", "rhsusf_acc_anpeq15A" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4", "rhsusf_acc_anpeq15A" };
		weapons[] = {"RH_M16A4gl","Throw","Put"};
		respawnWeapons[] = {"RH_M16A4gl","Throw","Put"};
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14"  };
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14" };
		backpack="MEF_Wood_Kitbag_TL";
	};
	
	class hmg_usmc_w_2005_SL : hmg_usmc_w_2005_rifleman
	{
		displayName= "Squad leader (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag","AGM_MapTools", "rhsusf_acc_anpeq15A" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag","AGM_MapTools", "rhsusf_acc_anpeq15A" };
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "Binocular", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "Binocular", "ItemMap"};
	};

	class hmg_usmc_w_2005_messenger : hmg_usmc_w_2005_rifleman
	{
		displayName= "Messenger (Marpat)";
		backpack = "tf_rt1523g_black";
	};

	class hmg_usmc_w_2005_guide : hmg_usmc_w_2005_rifleman
	{
		displayName= "PLT Guide (Marpat)";
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP", "itemradio", "Binocular","ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP", "itemradio", "Binocular","ItemMap"};
	};

	class hmg_usmc_w_2005_pltsrg : hmg_usmc_w_2005_SL
	{
		displayName= "Platoon sergeant (Marpat)";
		backpack = "tf_rt1523g_black";
	};

	class hmg_usmc_w_2005_PltL : hmg_usmc_w_2005_SL
	{
		displayName= "Platoon commander (Marpat)";
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "Binocular","ItemMap","Binocular"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "Binocular","ItemMap","Binocular"};
	};
	
	class hmg_usmc_w_2005_firsrg : hmg_usmc_w_2005
	{
		displayName= "First sergeant (Marpat)";
		weapons[] = {"CUP_hgun_M9","Throw","Put","Binocular"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","Binocular"};		
        linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools"};
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
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
		backpack="tf_rt1523g_black";
	};	
		
	class hmg_usmc_w_2005_cl : hmg_usmc_w_2005_firsrg
	{
		displayName= "Company commander (Marpat)";
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
	};
	
	class hmg_usmc_w_2005_MGSL : hmg_usmc_w_2005_SL
	{
		displayName= "MG Section leader (Marpat)";
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
	
	class hmg_usmc_w_2005_mortSL : hmg_usmc_w_2005_SL
	{
		displayName= "Mortar Section leader (Marpat)";
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
	};
	
	class hmg_usmc_w_2005_mg_tl : hmg_usmc_w_2005_SL
	{
		displayName= "MG Team leader (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag", "rhsusf_acc_anpeq15A" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag", "rhsusf_acc_anpeq15A" };
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
	};
	
	class hmg_usmc_w_2005_mg : hmg_usmc_w_2005
	{
		displayName= "Gunner (Marpat)";
		weapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240B"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240B"};		
        linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
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
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		backpack = "MEF_Wood_Kitbag_MG";
	};
	
	class hmg_usmc_w_2005_mortL : hmg_usmc_w_2005
	{
		displayName= "Squad leader (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };
		weapons[] = {"CUP_hgun_M9","Throw","Put", "Rangefinder"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put", "Rangefinder"};		
        linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
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
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"					
			};
		respawnMagazines[] = 
			{
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };

		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles_INDEP"};
		backpack = "MEF_Wood_Kitbag_SMAW";
	};
	
	class hmg_usmc_w_2005_assAssGun : hmg_usmc_w_2005
	{
		displayName= "Assault section Assistant Gunner (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag" };
		backpack = "MEF_Wood_Kitbag_SMAW";
	};
// Corpsman team Marpat	2005
	class hmg_usmc_w_2005_scorp : hmg_usmc_w_2005_sl{
		displayName = "Senior corpsman (Marpat)";
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
class hmg_usmc_w_2005_corp : hmg_usmc_w_2005{
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
class hmg_usmc_w_2005_scout : hmg_usmc_w_2005{
		displayName = "Scout (Marpat)";
		weapons[] = {"RH_M4_ris_M203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		respawnWeapons[] = {"RH_M4_ris_M203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4","CUP_muzzle_snds_M9","AGM_M26_Clacker" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4","CUP_muzzle_snds_M9","AGM_M26_Clacker" };

		linkedItems[] = {"MEF_Vest_Tan_Infantry_L","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry_L","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		backpack = "tf_rt1523g_black";
}

class hmg_usmc_w_2005_sniper : hmg_usmc_w_2005{
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net","RH_anpvs10","CUP_muzzle_snds_M9" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net","RH_anpvs10","CUP_muzzle_snds_M9" };

		linkedItems[] = {"MEF_Vest_Tan_Infantry_L","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry_L","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
}

class hmg_usmc_w_2005_sniperH : hmg_usmc_w_2005_sniper{
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net","RH_anpvs10","CUP_muzzle_snds_M9" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net","RH_anpvs10","CUP_muzzle_snds_M9" };

		linkedItems[] = {"MEF_Vest_Tan_Infantry_L","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry_L","MEF_Wood_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
}

//отсюда пошил КМПшники в Марпате Дезерт обр. 2005 года
class hmg_usmc_d_2005 : rhsusf_army_ocp_rifleman
	{
		displayName= "Rifleman (base)";
		uniformClass = "rhs_uniform_FROG01_d";
		weapons[] = {"rhs_weap_m16a4","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_m16a4","Throw","Put"}; 
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A" };

		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat"};
		backpack = "MEF_Des_Tactical_empty";

	};

	class hmg_usmc_d_2005_rifleman : hmg_usmc_d_2005
	{
		displayName = "Rifleman/scout (MarpatDesert)";
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles", "tf_anprc154", "tf_microdagr"};
	};
	
	class hmg_usmc_d_2005_firstaid : hmg_usmc_d_2005_rifleman
	{
		displayName= "Rifleman/firstaid (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };
	};
	
	class hmg_usmc_d_2005_marksman : hmg_usmc_d_2005_rifleman
	{
		displayName= "Designated marksman (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "RH_m3lr", "rhsusf_acc_anpeq15A" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "RH_m3lr", "rhsusf_acc_anpeq15A" };
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
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		backpack="MEF_Des_Tactical_AR";
	};

	class hmg_usmc_d_2005_AR : hmg_usmc_d_2005_rifleman
	{
		displayName= "Auto Rifleman (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_ANPASM","AGM_SpareBarrel", "rhsusf_acc_anpeq15A" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_ANPASM","AGM_SpareBarrel", "rhsusf_acc_anpeq15A" };
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		weapons[] = {"rhs_weap_m249_pip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m249_pip","Throw","Put"};
		magazines[] = {"rhsusf_100Rnd_556x45_soft_pouch",  "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch","rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch"};
		respawnMagazines[] = {"rhsusf_100Rnd_556x45_soft_pouch",  "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch","rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch"};
	};

	class hmg_usmc_d_2005_TL : hmg_usmc_d_2005_rifleman
	{
		displayName= "Team leader (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4", "rhsusf_acc_anpeq15A" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4", "rhsusf_acc_anpeq15A" };
		weapons[] = {"RH_M16A4gl","Throw","Put"};
		respawnWeapons[] = {"RH_M16A4gl","Throw","Put"};
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		backpack="MEF_Des_Tactical_TL";
	};
	
	class hmg_usmc_d_2005_SL : hmg_usmc_d_2005_rifleman
	{
		displayName= "Squad leader (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag","AGM_MapTools", "rhsusf_acc_anpeq15A" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag","AGM_MapTools", "rhsusf_acc_anpeq15A" };
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "Binocular", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "Binocular", "ItemMap"};
	};

	class hmg_usmc_d_2005_messenger : hmg_usmc_d_2005_rifleman
	{
		displayName= "Messenger (MarpatDesert)";
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
		backpack = "tf_rt1523g_big_rhs";
	};

	class hmg_usmc_d_2005_guide : hmg_usmc_d_2005_rifleman
	{
		displayName= "PLT Guide (MarpatDesert)";
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles", "itemradio", "Binocular","ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles", "itemradio", "Binocular","ItemMap"};
	};

	class hmg_usmc_d_2005_pltsrg : hmg_usmc_d_2005_SL
	{
		displayName= "Platoon sergeant (MarpatDesert)";
		backpack = "tf_rt1523g_big_rhs";
	
	};

	class hmg_usmc_d_2005_PltL : hmg_usmc_d_2005_SL
	{
		displayName= "Platoon commander (MarpatDesert)";
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "Binocular","ItemMap","Binocular"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "Binocular","ItemMap","Binocular"};
	};
	
	class hmg_usmc_d_2005_firsrg : hmg_usmc_d_2005
	{
		displayName= "First sergeant (MarpatDesert)";
		weapons[] = {"CUP_hgun_M9","Throw","Put","Binocular"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","Binocular"};		
         linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools"};
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
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
		backpack="tf_rt1523g_big_rhs";
	};	
		
	class hmg_usmc_d_2005_cl : hmg_usmc_d_2005_execoff
	{
		displayName= "Company commander (MarpatDesert)";
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "Binocular","ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "Binocular","ItemMap"};
	};
	
	class hmg_usmc_d_2005_MGSL : hmg_usmc_d_2005_SL
	{
		displayName= "MG Section leader (MarpatDesert)";
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
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
	};
	
	class hmg_usmc_d_2005_mg_tl : hmg_usmc_d_2005_SL
	{
		displayName= "MG Team leader (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag", "rhsusf_acc_anpeq15A" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag", "rhsusf_acc_anpeq15A" };
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
	};
	
	class hmg_usmc_d_2005_mg : hmg_usmc_d_2005
	{
		displayName= "Gunner (MarpatDesert)";
		weapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240B"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240B"};		
        linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
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
		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
		backpack = "MEF_Des_Tactical_MG";
	};
	
	class hmg_usmc_d_2005_mortL : hmg_usmc_d_2005
	{
		displayName= "Squad leader (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };
		weapons[] = {"CUP_hgun_M9","Throw","Put", "Rangefinder"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put", "Rangefinder"};		
        linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles"};
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };

		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles", "ItemGPS", "itemradio"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "NVGoggles", "ItemGPS", "itemradio"};
		backpack = "MEF_Des_Tactical_SMAW";
	};
	
	class hmg_usmc_d_2005_assAssGun : hmg_usmc_d_2005
	{
		displayName= "Assault section Assistant Gunner (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_eotech553mag" };
		backpack = "MEF_Des_Tactical_SMAW";
	};
// Corpsman team MarpatDesert	2005
	class hmg_usmc_d_2005_scorp : hmg_usmc_d_2005_sl{
		displayName = "Senior corpsman (MarpatDesert)";
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
class hmg_usmc_d_2005_corp : hmg_usmc_d_2005{
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
class hmg_usmc_d_2005_scout : hmg_usmc_d_2005{
		displayName = "Scout (MarpatDesert)";
		weapons[] = {"RH_M4_ris_M203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		respawnWeapons[] = {"RH_M4_ris_M203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4","CUP_muzzle_snds_M9","AGM_M26_Clacker" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4","CUP_muzzle_snds_M9","AGM_M26_Clacker" };

		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		backpack = "tf_rt1523g_black";
};

class hmg_usmc_d_2005_sniper : hmg_usmc_d_2005{
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net","RH_anpvs10","CUP_muzzle_snds_M9" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net","RH_anpvs10","CUP_muzzle_snds_M9" };

		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
}

class hmg_usmc_d_2005_sniperH : hmg_usmc_d_2005_sniper{
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net", "RH_anpvs10","CUP_muzzle_snds_M9" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net", "RH_anpvs10","CUP_muzzle_snds_M9" };

		linkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","MEF_Desert_Helmet_LWH","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
};

// US ARMY IBCT ННС Scout platoon UCP 2005
class us_army_ucp_2005_sscout : rhsusf_army_ocp_rifleman {
			UCP_Uni_Macro	
			icon = "iconMan";
			items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A", "Trixie_ANPASL"};
			displayName = "Scout(ucp)";
        	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemRadio"};
			weapons[] = {"rhs_weap_m4_m320","Throw","Put"};
			respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put"};
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
class us_army_ucp_2005_scout : us_army_ucp_2005_sscout{
			icon = "iconManAT";
			displayName = "Scout Javelin (ucp)";
			items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A", "Trixie_ANPASL"};
	        linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemRadio"};
			weapons[] = {"rhs_weap_m4_m320","Throw","Put","rhs_weap_fgm148"};
			respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put","rhs_weap_fgm148"};
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
			Backpack = "rhsusf_assault_eagleaiii_ucp_scout";
};
class us_army_ucp_2005_ASLscout : us_army_ucp_2005_sscout{
			icon = "iconManLeader";
			displayName = "Asst Squad leader (ucp)";
			items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A", "rhsusf_acc_ACOG3_USMC"};
			linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemRadio", "ItemSMGR", "Laserdesignator"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemRadio", "ItemSMGR", "Laserdesignator"};
			magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M433_HEDP"
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
				"rhs_mag_M433_HEDP",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M433_HEDP"
			};
			Backpack = "rhsusf_assault_eagleaiii_ucp_scoutL";
};
class us_army_ucp_2005_Lscout : us_army_ucp_2005_ASLscout {
			displayName = "Scout Squad leader (ucp)";
			backpack = "tf_rt1523g_big_rhs";
};
class us_army_ucp_2005_PLTSscout : us_army_ucp_2005_Lscout {
			displayName = "Scout platoon sergeant (ucp)";
};

class us_army_ucp_2005_PLTLscout : us_army_ucp_2005_ASLscout {
			icon = "iconMan";
			displayName = "Scout platoon leader (ucp)";
};
//Sniper scout team Marpat 2015
class hmg_usmc_w_2015_scout : hmg_usmc_w_2005{
		displayName = "Scout (Marpat)";
		weapons[] = {"RH_M4_ris_M203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		respawnWeapons[] = {"RH_M4_ris_M203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		magazines[] = 
			{
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
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
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4","Kestrel4500","CUP_muzzle_snds_M9","AGM_M26_Clacker" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4","Kestrel4500","CUP_muzzle_snds_M9","AGM_M26_Clacker" };

		linkedItems[] = {"MEF_Vest_Tan_Infantry_L","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry_L","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		backpack = "tf_rt1523g_rhs";
};
class hmg_usmc_w_2015_scout_mk12 : hmg_usmc_w_2015_scout{
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_m3lr","rhsusf_acc_anpeq15A","RH_spr_mbs_wdl","CUP_muzzle_snds_M9","AGM_M26_Clacker","Kestrel4500" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_m3lr","rhsusf_acc_anpeq15A","RH_spr_mbs_wdl","CUP_muzzle_snds_M9","AGM_M26_Clacker","Kestrel4500" };
		backpack = "tf_rt1523g_black";
}
class hmg_usmc_w_2015_sniper : hmg_usmc_w_2005{
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net","RH_anpvs10","Kestrel4500","CUP_muzzle_snds_M9" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net","RH_anpvs10","Kestrel4500","CUP_muzzle_snds_M9" };

		linkedItems[] = {"MEF_Vest_Tan_Infantry_L","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry_L","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
};
class hmg_usmc_w_2015_sniperS : hmg_usmc_w_2015_sniper{
		displayName = "Sniper (silent) (Marpat)";
		weapons[] = {"Trixie_M110","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		respawnWeapons[] = {"Trixie_M110","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
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
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
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
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net", "Trixie_Cyclone_Net","RH_anpvs10","Kestrel4500","CUP_muzzle_snds_M9" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net", "Trixie_Cyclone_Net","RH_anpvs10","Kestrel4500","CUP_muzzle_snds_M9" };

		linkedItems[] = {"MEF_Vest_Tan_Infantry_L","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry_L","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
};
class hmg_usmc_w_2015_sniperH : hmg_usmc_w_2015_sniper{
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net","RH_anpvs10","Kestrel4500","ATragMX","CUP_muzzle_snds_M9" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net","RH_anpvs10","Kestrel4500","ATragMX","CUP_muzzle_snds_M9" };

		linkedItems[] = {"MEF_Vest_Tan_Infantry_L","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry_L","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
};
//Sniper scout team MarpatDesert 2015
class hmg_usmc_d_2015_scout : hmg_usmc_d_2005{
		displayName = "Scout (MarpatDesert)";
		weapons[] = {"RH_M4_ris_M203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		respawnWeapons[] = {"RH_M4_ris_M203","Throw","Put", "CUP_hgun_M9", "Laserdesignator"};
		magazines[] = 
			{
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
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
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
				"rhs_mag_30Rnd_556x45_Mk318_Stanag",
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4","Kestrel4500","CUP_muzzle_snds_M9","AGM_M26_Clacker" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","rhsusf_acc_anpeq15A","RH_qdss_nt4","Kestrel4500","CUP_muzzle_snds_M9","AGM_M26_Clacker" };

		linkedItems[] = {"MEF_Vest_Tan_Infantry_L","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry_L","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		backpack = "tf_rt1523g_rhs";
};
class hmg_usmc_d_2015_scout_mk12 : hmg_usmc_d_2015_scout{
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_m3lr","rhsusf_acc_anpeq15A","RH_spr_mbs_des","CUP_muzzle_snds_M9","AGM_M26_Clacker","Kestrel4500" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_m3lr","rhsusf_acc_anpeq15A","RH_spr_mbs_des","CUP_muzzle_snds_M9","AGM_M26_Clacker","Kestrel4500" };
		backpack = "tf_rt1523g_black";
};
class hmg_usmc_d_2015_sniper : hmg_usmc_d_2005{
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net","RH_anpvs10","Kestrel4500","CUP_muzzle_snds_M9" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net","RH_anpvs10","Kestrel4500","CUP_muzzle_snds_M9" };

		linkedItems[] = {"MEF_Vest_Tan_Infantry_L","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry_L","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
};
class hmg_usmc_d_2015_sniperS : hmg_usmc_d_2015_sniper{
		displayName = "Sniper (silent) (MarpatDesert)";
		weapons[] = {"Trixie_M110_NG_Black","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
		respawnWeapons[] = {"Trixie_M110_NG_Black","Throw","Put", "CUP_hgun_M9", "AGM_Vector"};
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
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
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
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"Trixie_20x762_Mag",
				"HandGrenade",
				"ClaymoreDirectionalMine_Remote_Mag",
				"ClaymoreDirectionalMine_Remote_Mag",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250", "Trixie_Cyclone","RH_anpvs10","Kestrel4500","CUP_muzzle_snds_M9" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250", "Trixie_Cyclone","RH_anpvs10","Kestrel4500","CUP_muzzle_snds_M9" };

		linkedItems[] = {"MEF_Vest_Tan_Infantry_L","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry_L","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
};
class hmg_usmc_d_2015_sniperH : hmg_usmc_d_2015_sniper{
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net", "RH_anpvs10","Kestrel4500","CUP_muzzle_snds_M9" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net", "RH_anpvs10","Kestrel4500","CUP_muzzle_snds_M9" };

		linkedItems[] = {"MEF_Vest_Tan_Infantry_L","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry_L","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "ItemMap"};
};
// отсюда пошли КМПшники в Марпате обр. 2015 года
	class hmg_usmc_w_2015_rifleman : hmg_usmc_w_2005
	{
		displayName = "Rifleman/scout (Marpat)";
		Items[] = {"AGM_Bandage","AGM_Bandage", "rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A" };
		RespawnItems[] = {"AGM_Bandage","AGM_Bandage", "rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A" };
		linkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag",  "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag",  "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red"};
	};
	
	class hmg_usmc_w_2015_firstaid : hmg_usmc_w_2015_rifleman
	{
		displayName= "Rifleman/firstaid (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A" };
	};
	
	class hmg_usmc_w_2015_marksman : hmg_usmc_w_2015_rifleman
	{
		displayName= "Designated marksman (Marpat)";
		Items[] = {"AGM_Bandage","AGM_Bandage", "Trixie_Cyclone_Camo", "RH_anpvs10", "RH_m3lr", "rhsusf_acc_anpeq15A" };
		RespawnItems[] = {"AGM_Bandage","AGM_Bandage", "Trixie_Cyclone_Camo", "RH_anpvs10", "RH_m3lr", "rhsusf_acc_anpeq15A" };
		weapons[] = {"Trixie_M110_NG","Throw","Put"};
		respawnWeapons[] = {"Trixie_M110_NG","Throw","Put"};
		magazines[] = {"Trixie_20x762_Mag",  "Trixie_20x762_Mag", "Trixie_20x762_Mag","Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag"};
		respawnMagazines[] = {"Trixie_20x762_Mag",  "Trixie_20x762_Mag", "Trixie_20x762_Mag","Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag"};
	};
	
	class hmg_usmc_w_2015_assar : hmg_usmc_w_2015_rifleman
	{
		displayName= "Assist. Auto Rifleman (Marpat)";
		backpack="MEF_Wood_Kitbag_AAR";
	};

	class hmg_usmc_w_2015_AR : hmg_usmc_w_2015_rifleman
	{
		displayName= "Auto Rifleman (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A" };
		weapons[] = {"RH_M27IAR","Throw","Put"};
		respawnWeapons[] = {"RH_M27IAR","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag",  "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_Mk318_Stanag",  "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_Mk318_Stanag",  "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag",  "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_Mk318_Stanag",  "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_Mk318_Stanag",  "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red"};
	};

	class hmg_usmc_w_2015_TL : hmg_usmc_w_2015_rifleman
	{
		displayName= "Team leader (Marpat)";
		weapons[] = {"RH_M4_ris_M203","Throw","Put"};
		respawnWeapons[] = {"RH_M4_ris_M203","Throw","Put"};
		backpack="MEF_Wood_Kitbag_TL";
	};
	
	class hmg_usmc_w_2015_SL : hmg_usmc_w_2015_rifleman
	{
		displayName= "Squad leader (Marpat)";
		weapons[] = {"rhs_weap_m4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put"};
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A" };
		linkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "Binocular", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "Binocular", "ItemMap"};
	};

	class hmg_usmc_w_2015_messenger : hmg_usmc_w_2015_rifleman
	{
		displayName= "Messenger (Marpat)";
		weapons[] = {"rhs_weap_m4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put"};
		backpack = "tf_rt1523g_black";
	};

	class hmg_usmc_w_2015_guide : hmg_usmc_w_2015_rifleman
	{
		displayName= "PLT Guide (Marpat)";
		weapons[] = {"rhs_weap_m4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put"};
		linkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio", "ItemMap"};
	};

	class hmg_usmc_w_2015_pltsrg : hmg_usmc_w_2015_guide
	{
		displayName= "Platoon sergeant (Marpat)";
		backpack = "tf_rt1523g_black";
	};

	class hmg_usmc_w_2015_PltL : hmg_usmc_w_2015_SL
	{
		displayName= "Platoon commander (Marpat)";
	};
	
	class hmg_usmc_w_2015_firsrg : hmg_usmc_w_2015_rifleman
	{
		displayName= "First sergeant (Marpat)";
		weapons[] = {"rhs_weap_m4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put"};		
        linkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_grass","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools","Binocular"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_grass","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools","Binocular"};
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
		linkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
	};	
		
	class hmg_usmc_w_2015_cl : hmg_usmc_w_2015_execoff
	{
		displayName= "Company commander (Marpat)";
	};
	
	class hmg_usmc_w_2015_MGSL : hmg_usmc_w_2015_SL
	{
		displayName= "MG Section leader (Marpat)";
	};
	
	class hmg_usmc_w_2015_mortSL : hmg_usmc_w_2015_SL
	{
		displayName= "Mortar Section leader (Marpat)";
	};
	
	class hmg_usmc_w_2015_mg_tl : hmg_usmc_w_2015_SL
	{
		displayName= "MG Team leader (Marpat)";
		linkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_grass","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
	};
	
	class hmg_usmc_w_2015_mg : hmg_usmc_w_2015_rifleman
	{
		displayName= "Gunner (Marpat)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_ta648","Trixie_ANPASM", "rhsusf_acc_anpeq15A" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_ta648","Trixie_ANPASM", "rhsusf_acc_anpeq15A" };
		weapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240B"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240B"};		
        linkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_grass","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_grass","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
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
		weapons[] = {"rhs_weap_m4","Throw","Put", "Rangefinder"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put", "Rangefinder"};		
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
	class hmg_usmc_w_2015_assSL : hmg_usmc_w_2015_MGSL
	{
		displayName= "Assault section leader (Marpat)";
	};
	
	class hmg_usmc_w_2015_assGun : hmg_usmc_w_2015_MGSL
	{
		displayName= "Assault section team leader / Gunner (Marpat)";
		weapons[] = {"rhs_weap_m4","Throw","Put", "Trixie_SMAW"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put", "Trixie_SMAW"};
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
		weapons[] = {"rhs_weap_m4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put"};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "MEF_Wood_Kitbag_medic";
	};
	class hmg_usmc_w_2015_corp : hmg_usmc_w_2015_rifleman{
		displayName = "Corpsman (Marpat)";
		weapons[] = {"rhs_weap_m4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put"};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "MEF_Wood_Kitbag_medic";
	};

//отсюда пошлb КМПшники в Марпате Дезерт обр. 2015 года
class hmg_usmc_d_2015_rifleman : hmg_usmc_w_2015_rifleman
	{
		displayName= "Rifleman/scout (MarpatDesert)";
		uniformClass = "rhs_uniform_FROG01_d";
		weapons[] = {"rhs_weap_m16a4","Throw","Put"}; 
		respawnWeapons[] = {"rhs_weap_m16a4","Throw","Put"}; 

		Items[] = {"AGM_Bandage", "AGM_Bandage", "rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A" };

		linkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		backpack = "MEF_Des_Tactical_empty";

	};
	
	class hmg_usmc_d_2015_firstaid : hmg_usmc_d_2015_rifleman
	{
		displayName= "Rifleman/firstaid (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A" };
	};
	
	class hmg_usmc_d_2015_marksman : hmg_usmc_d_2015_rifleman
	{
		displayName= "Designated marksman (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "RH_m3lr", "rhsusf_acc_anpeq15A" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "RH_m3lr", "rhsusf_acc_anpeq15A" };
		weapons[] = {"Trixie_M110_NG_Black","Throw","Put"};
		respawnWeapons[] = {"Trixie_M110_NG_Black","Throw","Put"};
		magazines[] = {"Trixie_20x762_Mag",  "Trixie_20x762_Mag", "Trixie_20x762_Mag","Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag"};
		respawnMagazines[] = {"Trixie_20x762_Mag",  "Trixie_20x762_Mag", "Trixie_20x762_Mag","Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag"};
	};
	
	class hmg_usmc_d_2015_assar : hmg_usmc_d_2015_rifleman
	{
		displayName= "Assist. Auto Rifleman (MarpatDesert)";
		backpack="MEF_Des_Tactical_AAR";
	};

	class hmg_usmc_d_2015_AR : hmg_usmc_d_2015_rifleman
	{
		displayName= "Auto Rifleman (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC", "rhsusf_acc_anpeq15A" };
		weapons[] = {"RH_M27IAR","Throw","Put"};
		respawnWeapons[] = {"RH_M27IAR","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag",  "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_Mk318_Stanag",  "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_Mk318_Stanag",  "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag",  "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_Mk318_Stanag",  "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_Mk318_Stanag",  "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red"};
	};

	class hmg_usmc_d_2015_TL : hmg_usmc_d_2015_rifleman
	{
		displayName= "Team leader (MarpatDesert)";
		weapons[] = {"RH_M4_ris_M203","Throw","Put"};
		respawnWeapons[] = {"RH_M4_ris_M203","Throw","Put"};
		backpack="MEF_Des_Tactical_TL";
	};
	
	class hmg_usmc_d_2015_SL : hmg_usmc_d_2015_rifleman
	{
		displayName= "Squad leader (MarpatDesert)";
		weapons[] = {"rhs_weap_m4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put"};
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","rhsusf_acc_ACOG3_USMC","AGM_MapTools", "rhsusf_acc_anpeq15A" };
		linkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "Binocular", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "Binocular", "ItemMap"};
	};

	class hmg_usmc_d_2015_messenger : hmg_usmc_d_2015_rifleman
	{
		displayName= "Messenger (MarpatDesert)";
		backpack = "tf_rt1523g_big_rhs";
	};

	class hmg_usmc_d_2015_guide : hmg_usmc_d_2015_rifleman
	{
		displayName= "PLT Guide (MarpatDesert)";
		weapons[] = {"rhs_weap_m4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put"};
		linkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio", "ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio", "ItemMap"};
	};

	class hmg_usmc_d_2015_pltsrg : hmg_usmc_d_2015_guide
	{
		displayName= "Platoon sergeant (MarpatDesert)";
	};

	class hmg_usmc_d_2015_PltL : hmg_usmc_d_2015_SL
	{
		displayName= "Platoon commander (MarpatDesert)";
	};
	
	class hmg_usmc_d_2015_firsrg : hmg_usmc_d_2015_rifleman
	{
		displayName= "First sergeant (MarpatDesert)";
		weapons[] = {"rhs_weap_m4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put"};		
        linkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_desert","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools","Binocular"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_desert","ItemMap","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "itemradio","AGM_MapTools","Binocular"};
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
		linkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "ItemMap", "itemradio","AGM_MapTools"};
		backpack="tf_rt1523g_big_rhs";
	};	
		
	class hmg_usmc_d_2015_cl : hmg_usmc_d_2015_execoff
	{
		displayName= "Company commander (MarpatDesert)";
		linkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "Binocular","ItemMap"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "ItemGPS", "itemradio", "Binocular","ItemMap"};
	};
	
	class hmg_usmc_d_2015_MGSL : hmg_usmc_d_2015_SL
	{
		displayName= "MG Section leader (MarpatDesert)";
	};
	
	class hmg_usmc_d_2015_mortSL : hmg_usmc_d_2015_SL
	{
		displayName= "Mortar Section leader (MarpatDesert)";
	};
	
	class hmg_usmc_d_2015_mg_tl : hmg_usmc_d_2015_SL
	{
		displayName= "MG Team leader (MarpatDesert)";
		linkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_desert","ItemCompass","ItemWatch","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
	};
	
	class hmg_usmc_d_2015_mg : hmg_usmc_d_2015_rifleman
	{
		displayName= "Gunner (MarpatDesert)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_ta648","Trixie_ANPASM", "rhsusf_acc_anpeq15A" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_ta648","Trixie_ANPASM", "rhsusf_acc_anpeq15A" };
		weapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240B"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240B"};		
        linkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_desert","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"MEF_Vest_Tan_Infantry","H_HelmetB_desert","ItemCompass","G_Combat", "rhsusf_ANPVS_14", "tf_anprc154", "tf_microdagr"};
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
		weapons[] = {"rhs_weap_m4","Throw","Put", "Rangefinder"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put", "Rangefinder"};
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
	class hmg_usmc_d_2015_assSL : hmg_usmc_d_2015_MGSL
	{
		displayName= "Assault section leader (MarpatDesert)";
	};
	class hmg_usmc_d_2015_assGun : hmg_usmc_d_2015_MGSL
	{
		displayName= "Assault section team leader / Gunner (MarpatDesert)";
		weapons[] = {"rhs_weap_m4","Throw","Put", "Trixie_SMAW"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put", "Trixie_SMAW"};
		backpack = "MEF_Des_Tactical_SMAW";
	};
	class hmg_usmc_d_2015_assAssGun : hmg_usmc_d_2015_rifleman
	{
		displayName= "Assault section Assistant Gunner (MarpatDesert)";
		backpack = "MEF_Des_Tactical_SMAW";
	};
// Corpsman team MarpatDesert 2015
	class hmg_usmc_d_2015_scorp : hmg_usmc_d_2015_sl{
		displayName = "Senior corpsman (MarpatDesert)";
		weapons[] = {"rhs_weap_m4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put"};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "MEF_Des_Tactical_medic";
	};
	class hmg_usmc_d_2015_corp : hmg_usmc_d_2015_rifleman{
		displayName = "Corpsman (MarpatDesert)";
		weapons[] = {"rhs_weap_m4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4","Throw","Put"};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "MEF_Des_Tactical_medic";
	};
	//отсюда пошил КМПшники в вудланде обр. 1995 года
class hmg_usmc_w_1995_rifleman : rhsusf_army_ocp_rifleman
	{
		displayName= "Rifleman";
		uniformClass = "rhs_uniform_FROG01_m81";
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

		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" };
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" };
		backpack = "B_Respawn_TentDome_F";

	};
	
	class hmg_usmc_w_1995_assar : hmg_usmc_w_1995_rifleman
	{
		displayName= "Assist. Auto Rifleman (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		backpack="CUP_B_CivPack_Wdl_AR";
	};

	class hmg_usmc_w_1995_AR : hmg_usmc_w_1995_rifleman
	{
		displayName= "Auto Rifleman (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_SpareBarrel" };
		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		weapons[] = {"rhs_weap_m249_pip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m249_pip","Throw","Put"};
		magazines[] = {"rhsusf_100Rnd_556x45_soft_pouch",  "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch","rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch"};
		respawnMagazines[] = {"rhsusf_100Rnd_556x45_soft_pouch",  "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch","rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch"};
	};

	class hmg_usmc_w_1995_TL : hmg_usmc_w_1995_rifleman
	{
		displayName= "Team leader (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4"  };
		weapons[] = {"RH_M16A2gl","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2gl","Throw","Put"};
		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		backpack="CUP_B_CivPack_Wdl_TL";
	};
	
	class hmg_usmc_w_1995_SL : hmg_usmc_w_1995_rifleman
	{
		displayName= "Squad leader (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" ,"AGM_MapTools","ItemSMGR"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" ,"AGM_MapTools","ItemSMGR"  };
		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "Binocular", "ItemMap", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "Binocular", "ItemMap", "tf_anprc154", "tf_microdagr"};
	};

	class hmg_usmc_w_1995_messenger : hmg_usmc_w_1995_rifleman
	{
		displayName= "Messenger (Woodland)";
		backpack = "tf_rt1523g_black";
	};

	class hmg_usmc_w_1995_guide : hmg_usmc_w_1995_rifleman
	{
		displayName= "PLT Guide (Woodland)";
		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP" , "Binocular","ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP" , "Binocular","ItemMap"};
	};

	class hmg_usmc_w_1995_pltsrg : hmg_usmc_w_1995_SL
	{
		displayName= "Platoon sergeant (Woodland)";
		backpack = "tf_rt1523g_black";
	
	};

	class hmg_usmc_w_1995_PltL : hmg_usmc_w_1995_SL
	{
		displayName= "Platoon commander (Woodland)";
		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "Binocular","ItemMap","Binocular"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "Binocular","ItemMap","Binocular"};
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
		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP" , "ItemMap" ,"AGM_MapTools"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP" , "ItemMap" ,"AGM_MapTools"};
		backpack="tf_rt1523g_black";
	};	
		
	class hmg_usmc_w_1995_cl : hmg_usmc_w_1995_execoff
	{
		displayName= "Company commander (Woodland)";
		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "Binocular","ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "Binocular","ItemMap"};
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
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"   };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"   };
		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
	};
	
	class hmg_usmc_w_1995_mg_tl : hmg_usmc_w_1995_SL
	{
		displayName= "MG Team leader (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"   };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"   };
		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
	};
	
	class hmg_usmc_w_1995_mg : hmg_usmc_w_1995_rifleman
	{
		displayName= "Gunner (Woodland)";
		weapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240B"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","rhs_weap_m240B"};		
        linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
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
		displayName= "Squad leader (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  };
		weapons[] = {"CUP_hgun_M9","Throw","Put", "Binocular"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put", "Binocular"};		
        linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"};
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };

		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  };
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  };
		backpack = "CUP_B_CivPack_Wdl_SMAW";
	};
	
	class hmg_usmc_w_1995_assAssGun : hmg_usmc_w_1995_rifleman
	{
		displayName= "Assault section Assistant Gunner (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  };
		backpack = "CUP_B_CivPack_Wdl_SMAW";
	};
// Corpsman team Woodland	1995
	class hmg_usmc_w_1995_scorp : hmg_usmc_w_1995_sl{
		displayName = "Senior corpsman (Woodland)";
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_M26_Clacker","AGM_MapTools","ItemSMGR" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_M26_Clacker","AGM_MapTools","ItemSMGR" };

		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net","RH_anpvs10" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net","RH_anpvs10" };

		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net", "RH_anpvs10" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net", "RH_anpvs10" };

		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
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

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net", "RH_anpvs4"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net", "RH_anpvs4"};

		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "NVGoggles_INDEP"  , "ItemMap"};
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

		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" };
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" };
		backpack = "B_Respawn_TentDome_F";

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
		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		weapons[] = {"rhs_weap_m249_pip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m249_pip","Throw","Put"};
		magazines[] = {"rhsusf_100Rnd_556x45_soft_pouch",  "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch","rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch"};
		respawnMagazines[] = {"rhsusf_100Rnd_556x45_soft_pouch",  "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch","rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch"};
	};

	class hmg_usmc_w_1985_TL : hmg_usmc_w_1985_rifleman
	{
		displayName= "Team leader (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_anpvs4"  };
		weapons[] = {"RH_M16A2gl","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2gl","Throw","Put"};
		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		backpack="CUP_B_CivPack_Wdl_TL";
	};
	
	class hmg_usmc_w_1985_SL : hmg_usmc_w_1985_rifleman
	{
		displayName= "Squad leader (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" ,"cw_item_notepad","AGM_CableTie","AGM_MapTools"   };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" ,"cw_item_notepad","AGM_CableTie","AGM_MapTools"   };
		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  , "Binocular", "ItemMap", "tf_anprc154", "tf_microdagr"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  , "Binocular", "ItemMap", "tf_anprc154", "tf_microdagr"};
	};

	class hmg_usmc_w_1985_messenger : hmg_usmc_w_1985_rifleman
	{
		displayName= "Messenger (Woodland)";
		backpack = "tf_rt1523g_black";
	};

	class hmg_usmc_w_1985_guide : hmg_usmc_w_1985_rifleman
	{
		displayName= "PLT Guide (Woodland)";
		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2" , "Binocular","ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2" , "Binocular","ItemMap"};
	};

	class hmg_usmc_w_1985_pltsrg : hmg_usmc_w_1985_SL
	{
		displayName= "Platoon sergeant (Woodland)";
		backpack = "tf_rt1523g_black";
	
	};

	class hmg_usmc_w_1985_PltL : hmg_usmc_w_1985_SL
	{
		displayName= "Platoon commander (Woodland)";
		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  , "Binocular","ItemMap","Binocular"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  , "Binocular","ItemMap","Binocular"};
	};
	
	class hmg_usmc_w_1985_firsrg : hmg_usmc_w_1985_SL
	{
		displayName= "First sergeant (Woodland)";
		weapons[] = {"CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_Colt1911","Throw","Put"};		
		magazines[] = 
			{
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"					
			};
		respawnMagazines[] = 
			{
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"				
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
		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2" , "ItemMap" ,"AGM_MapTools"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2" , "ItemMap" ,"AGM_MapTools"};
		backpack="tf_rt1523g_black";
	};	
		
	class hmg_usmc_w_1985_cl : hmg_usmc_w_1985_execoff
	{
		displayName= "Company commander (Woodland)";
		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  , "Binocular","ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  , "Binocular","ItemMap"};
	};
	
	class hmg_usmc_w_1985_MGSL : hmg_usmc_w_1985_SL
	{
		displayName= "MG Section leader (Woodland)";
		weapons[] = {"CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = 
			{
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"					
			};
		respawnMagazines[] = 
			{
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"				
			};
	};
	
	class hmg_usmc_w_1985_mortSL : hmg_usmc_w_1985_MGSL
	{
		displayName= "Mortar Section leader (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"   };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"   };
		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
	};
	
	class hmg_usmc_w_1985_mg_tl : hmg_usmc_w_1985_rifleman
	{
		displayName= "MG Team leader (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"   };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"   };
		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
	};
	
	class hmg_usmc_w_1985_mg : hmg_usmc_w_1985_rifleman
	{
		displayName= "Gunner (Woodland)";
		weapons[] = {"CUP_hgun_Colt1911","Throw","Put","hlc_lmg_m60"};
		respawnWeapons[] = {"CUP_hgun_Colt1911","Throw","Put","hlc_lmg_m60"};		
        linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		magazines[] = 
			{
				"hlc_100Rnd_762x51_T_M60E4",
				"hlc_100Rnd_762x51_M_M60E4",
				"hlc_100Rnd_762x51_B_M60E4",
				"hlc_100Rnd_762x51_B_M60E4",
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"					
			};
		respawnMagazines[] = 
			{
				"hlc_100Rnd_762x51_T_M60E4",
				"hlc_100Rnd_762x51_M_M60E4",
				"hlc_100Rnd_762x51_B_M60E4",
				"hlc_100Rnd_762x51_B_M60E4",
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"				
			};
	};

	class hmg_usmc_w_1985_assMG : hmg_usmc_w_1985_assar
	{
		displayName= "Ammunition man (Woodland)";
		backpack = "CUP_B_CivPack_Wdl_MGM60";
	};
	
	class hmg_usmc_w_1985_mortL : hmg_usmc_w_1985_rifleman
	{
		displayName= "Squad leader (Woodland)";
		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  };
		respawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage"  };
		weapons[] = {"CUP_hgun_Colt1911","Throw","Put", "Binocular"};
		respawnWeapons[] = {"CUP_hgun_Colt1911","Throw","Put", "Binocular"};		
        linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"};
		magazines[] = 
			{
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"					
			};
		respawnMagazines[] = 
			{
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"				
			};
	backpack = "RDS_M252_Gun_Bag_FIA";
	};
	
	class hmg_usmc_w_1985_mortas : hmg_usmc_w_1985_rifleman
	{
		displayName= "Assistant gunner (Woodland)";
		weapons[] = {"CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = 
			{
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"					
			};
		respawnMagazines[] = 
			{
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"				
			};
		backpack = "RDS_M252_Bipod_Bag_FIA";
	};
		class hmg_usmc_w_1985_mortam : hmg_usmc_w_1985_rifleman
	{
		displayName= "Ammunition man (Woodland)";
	};
	class hmg_usmc_w_1985_assSL : hmg_usmc_w_1985_MGSL
	{
		displayName= "Assault section leader (Woodland)";
	};
	
	class hmg_usmc_w_1985_assGun : hmg_usmc_w_1985_MGSL
	{
		displayName= "Assault section team leader / Gunner (Woodland)";
		weapons[] = {"CUP_hgun_Colt1911","Throw","Put", "Trixie_SMAW"};
		respawnWeapons[] = {"CUP_hgun_Colt1911","Throw","Put", "Trixie_SMAW"};
		magazines[] = 
			{
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"					
			};
		respawnMagazines[] = 
			{
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage" };

		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  };
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  };
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
		weapons[] = {"CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = 
			{
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"					
			};
		respawnMagazines[] = 
			{
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"				
			};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "CUP_B_CivPack_Wdl_medic";
};
class hmg_usmc_w_1985_corp : hmg_usmc_w_1985_rifleman{
		displayName = "Corpsman (Woodland)";
		weapons[] = {"CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = 
			{
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"					
			};
		respawnMagazines[] = 
			{
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"				
			};
		attendant = 1;
		icon = "iconManMedic";
		backpack = "CUP_B_CivPack_Wdl_medic";
};
//Sniper scout team Woodland 1985
class hmg_usmc_w_1985_scout : hmg_usmc_w_1985_rifleman{
		displayName = "Scout (Woodland)";
		weapons[] = {"RH_M16A2gl","Throw","Put", "CUP_hgun_Colt1911", "Binocular"};
		respawnWeapons[] = {"RH_M16A2gl","Throw","Put", "CUP_hgun_Colt1911", "Binocular"};
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
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"					
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
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_M26_Clacker","AGM_MapTools"  };
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_M26_Clacker","AGM_MapTools"  };

		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  , "ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2"  , "ItemMap"};
		backpack = "tf_rt1523g_black";
};
class hmg_usmc_w_1985_sniper : hmg_usmc_w_1985_rifleman{
		displayName = "Sniper (Woodland)";
		weapons[] = {"Trixie_M40A3_NG","Throw","Put", "CUP_hgun_Colt1911", "Binocular"};
		respawnWeapons[] = {"Trixie_M40A3_NG","Throw","Put", "CUP_hgun_Colt1911", "Binocular"};
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
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"					
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
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net","RH_anpvs4"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net","RH_anpvs4"};

		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
};
class hmg_usmc_w_1985_sniperR : hmg_usmc_w_1985_sniper{
		displayName = "Sniper (rapid) (Woodland)";
		weapons[] = {"Trixie_M14","Throw","Put", "CUP_hgun_Colt1911", "Binocular"};
		respawnWeapons[] = {"Trixie_M14","Throw","Put", "CUP_hgun_Colt1911", "Binocular"};
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
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"					
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
				"CUP_7Rnd_45ACP_1911",
				"CUP_7Rnd_45ACP_1911"				
			};

		Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net", "RH_anpvs4"};
		RespawnItems[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","Trixie_SB31250_Net", "RH_anpvs4"};

		linkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F","LOP_H_PASGTHelmet_cover_WDL","ItemCompass","ItemWatch" , "AGM_NVG_Gen2", "ItemMap"};
};