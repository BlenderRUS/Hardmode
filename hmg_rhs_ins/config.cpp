class CfgPatches
{
	class hmg_rhs_ins // Идентификатор нашего аддона
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_cti_insurgents"}; // Требуемые нашим патчем аддоны для предзагрузки
		version = "0.1"; // Версия
		versionStr = "0.1"; // Версия в строковом варианте (необязательно, используется CBA)
		versionAr[] = {0, 1}; // Версия в виде массива (необязательно, используется CBA)
		author[] = {"Wieking"}; // Автор (необязательно, используется CBA)
		authorUrl = "http://www.arma3.ru"; // URL (необязательно, используется CBA)
		description = "Отбираем карты у РХС повстанцев"; // Описание (необязательно, используется CBA)
	};
}; 
class UniformItem;	// External class reference
class ItemInfo;	// External class reference
class DefaultEventhandlers;	// External class reference
class Default_Extended_Eventhandlers : DefaultEventhandlers {};
class CfgVehicles {
class I_G_Soldier_F;	// External class reference
	class I_G_Soldier_lite_F;	// External class reference
	class I_G_Soldier_SL_F;	// External class reference
	class I_G_Soldier_TL_F;	// External class reference
	class I_G_Soldier_AR_F;	// External class reference
	class I_G_medic_F;	// External class reference
	class I_G_engineer_F;	// External class reference
	class I_G_Soldier_exp_F;	// External class reference
	class I_G_Soldier_GL_F;	// External class reference
	class I_G_Soldier_M_F;	// External class reference
	class I_G_Soldier_LAT_F;	// External class reference
	class I_G_Soldier_A_F;	// External class reference
	class I_G_officer_F;	// External class reference
	class I_crew_F;	// External class reference
	
	class rhs_g_Soldier_F : I_G_Soldier_F {
		scope = 2;
		scopeCurator = 2;
		faction = "rhs_faction_insurgents";
		author = $STR_RHS_AUTHOR_FULL;
		displayName = $STR_RHS_INF_RIFLEMAN_AKM;
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		uniformClass = "rhs_chdkz_uniform_4";
		headgearProbability = 50;
		allowedHeadgear[] = {"rhs_beanie", "rhs_beanie_green"};
		allowedHeadgearB[] = {"rhs_6b26", "rhs_6b26_ess", "rhs_6b26_green", "rhs_6b26_ess_green"};
		identityTypes[] = {"LanguageRUS", "Head_Euro", "rhs_scarf", "G_CIVIL_male"};
		genericNames = "RussianMen";
		
		class EventHandlers : Default_Extended_Eventhandlers {
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\rhsafrf\addons\rhs_c_cti_indep\data\scripts\randomize_gue1.sqf""";
		};
		hiddenSelectionsMaterials[] = {"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat"};
		};
	};
	
	class rhs_g_Soldier_F2 : I_G_Soldier_F {
		scope = 2;
		scopeCurator = 2;
		faction = "rhs_faction_insurgents";
		author = $STR_RHS_AUTHOR_FULL;
		displayName = $STR_RHS_INF_RIFLEMAN_AK103;
		weapons[] = {"rhs_weap_ak103_dtk", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak103_dtk", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		uniformClass = "rhs_chdkz_uniform_2";
		headgearProbability = 50;
		allowedHeadgear[] = {"rhs_beanie", "rhs_beanie_green"};
		allowedHeadgearB[] = {"rhs_6b26", "rhs_6b26_ess", "rhs_6b26_green", "rhs_6b26_ess_green"};
		linkedItems[] = {"V_Chestrig_oli", "rhs_scarf", "rhs_beanie_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_oli", "rhs_scarf", "H_Bandanna_khk", "ItemCompass", "ItemWatch", "ItemRadio"};
		identityTypes[] = {"LanguageRUS", "Head_Euro", "rhs_scarf", "G_CIVIL_male"};
		genericNames = "RussianMen";
		
		class EventHandlers {
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\rhsafrf\addons\rhs_c_cti_indep\data\scripts\randomize_gue1.sqf""";
		};
		hiddenSelectionsMaterials[] = {"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat"};
		};
	};
	
	class rhs_g_Soldier_F3 : I_G_Soldier_F {
		scope = 2;
		scopeCurator = 2;
		faction = "rhs_faction_insurgents";
		author = $STR_RHS_AUTHOR_FULL;
		displayName = "Rifleman (AK74M)";
		weapons[] = {"rhs_weap_ak74m_plummag_dtk", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_plummag_dtk", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		uniformClass = "rhs_chdkz_uniform_1";
		headgearProbability = 50;
		allowedHeadgear[] = {"rhs_beanie", "rhs_beanie_green"};
		allowedHeadgearB[] = {"rhs_6b26", "rhs_6b26_ess", "rhs_6b26_green", "rhs_6b26_ess_green"};
		identityTypes[] = {"LanguageRUS", "Head_Euro", "rhs_scarf", "G_CIVIL_male"};
		genericNames = "RussianMen";
		
		class EventHandlers {
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\rhsafrf\addons\rhs_c_cti_indep\data\scripts\randomize_gue1.sqf""";
		};
		hiddenSelectionsMaterials[] = {"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat"};
		};
	};
	
	class rhs_g_Soldier_lite_F : I_G_Soldier_lite_F {
		scope = 2;
		scopeCurator = 2;
		faction = "rhs_faction_insurgents";
		author = $STR_RHS_AUTHOR_FULL;
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5"};
		linkedItems[] = {"rhs_6sh46", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6sh46", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformClass = "rhs_chdkz_uniform_2";
		headgearProbability = 50;
		allowedHeadgear[] = {"rhs_beanie", "rhs_beanie_green"};
		allowedHeadgearB[] = {"H_Bandanna_khk"};
		identityTypes[] = {"LanguageRUS", "Head_Euro", "rhs_scarf", "G_CIVIL_male"};
		genericNames = "RussianMen";
		
		class EventHandlers {
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\rhsafrf\addons\rhs_c_cti_indep\data\scripts\randomize_gue1.sqf""";
		};
		hiddenSelectionsMaterials[] = {"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat"};
		};
	};
	
	class rhs_g_Soldier_SL_F : I_G_Soldier_SL_F {
		scope = 2;
		scopeCurator = 2;
		faction = "rhs_faction_insurgents";
		author = $STR_RHS_AUTHOR_FULL;
		weapons[] = {"rhs_weap_ak103_dtk", "Binocular", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak103_dtk", "Binocular", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		uniformClass = "rhs_chdkz_uniform_5";
		headgearProbability = 50;
		allowedHeadgear[] = {"rhs_fieldcap"};
		allowedHeadgearB[] = {"rhs_beanie", "rhs_beanie_green"};
		identityTypes[] = {"LanguageRUS", "Head_Euro", "rhs_scarf", "G_CIVIL_male"};
		genericNames = "RussianMen";
		
		class EventHandlers {
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\rhsafrf\addons\rhs_c_cti_indep\data\scripts\randomize_gue1.sqf""";
		};
		hiddenSelectionsMaterials[] = {"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat"};
		};
	};
	
	class rhs_g_Soldier_TL_F : I_G_Soldier_TL_F {
		scope = 2;
		scopeCurator = 2;
		faction = "rhs_faction_insurgents";
		author = $STR_RHS_AUTHOR_FULL;
		weapons[] = {"rhs_weap_akms_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms_gp25", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_GRD40_White", "rhs_mag_nspn_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_GRD40_White", "rhs_mag_nspn_red"};
		uniformClass = "rhs_chdkz_uniform_4";
		headgearProbability = 50;
		allowedHeadgear[] = {"rhs_beanie", "rhs_beanie_green"};
		allowedHeadgearB[] = {"rhs_6b26", "rhs_6b26_ess", "rhs_6b26_green", "rhs_6b26_ess_green"};
		linkedItems[] = {"V_TacVest_oli", "rhs_scarf", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli", "rhs_scarf", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		identityTypes[] = {"LanguageRUS", "Head_Euro", "rhs_scarf", "G_CIVIL_male"};
		genericNames = "RussianMen";
		
		class EventHandlers {
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\rhsafrf\addons\rhs_c_cti_indep\data\scripts\randomize_gue1.sqf""";
		};
		hiddenSelectionsMaterials[] = {"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat"};
		};
	};
	
	class rhs_g_Soldier_AR_F : I_G_Soldier_AR_F {
		scope = 2;
		scopeCurator = 2;
		faction = "rhs_faction_insurgents";
		author = $STR_RHS_AUTHOR_FULL;
		displayName = $STR_RHS_INF_MACHINEGUNNER;
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		backpack = "rhs_sidorMG";
		uniformClass = "rhs_chdkz_uniform_4";
		headgearProbability = 50;
		allowedHeadgear[] = {"rhs_beanie", "rhs_beanie_green"};
		allowedHeadgearB[] = {"rhs_6b26", "rhs_6b26_ess", "rhs_6b26_green", "rhs_6b26_ess_green"};
		linkedItems[] = {"V_TacVest_oli", "rhs_scarf", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli", "rhs_scarf", "ItemCompass", "ItemWatch", "ItemRadio"};
		identityTypes[] = {"LanguageRUS", "Head_Euro", "rhs_scarf", "G_CIVIL_male"};
		genericNames = "RussianMen";
		
		class EventHandlers {
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\rhsafrf\addons\rhs_c_cti_indep\data\scripts\randomize_gue1.sqf""";
		};
		hiddenSelectionsMaterials[] = {"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat"};
		};
	};
	
	class rhs_g_medic_F : I_G_medic_F {
		scope = 2;
		scopeCurator = 2;
		faction = "rhs_faction_insurgents";
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		uniformClass = "rhs_chdkz_uniform_3";
		headgearProbability = 50;
		allowedHeadgear[] = {"rhs_beanie", "rhs_beanie_green"};
		allowedHeadgearB[] = {"H_Bandanna_khk"};
		linkedItems[] = {"V_TacVest_oli", "H_Bandanna_khk", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli", "H_Bandanna_khk", "ItemCompass", "ItemWatch", "ItemRadio"};
		identityTypes[] = {"LanguageRUS", "Head_Euro", "rhs_scarf", "G_CIVIL_male"};
		genericNames = "RussianMen";
		
		class EventHandlers {
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\rhsafrf\addons\rhs_c_cti_indep\data\scripts\randomize_gue1.sqf""";
		};
		hiddenSelectionsMaterials[] = {"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat"};
		};
	};
	
	class rhs_g_engineer_F : I_G_engineer_F {
		scope = 2;
		scopeCurator = 2;
		faction = "rhs_faction_insurgents";
		author = $STR_RHS_AUTHOR_FULL;
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		uniformClass = "rhs_chdkz_uniform_3";
		headgearProbability = 50;
		allowedHeadgear[] = {"rhs_beanie", "rhs_beanie_green"};
		allowedHeadgearB[] = {"rhs_6b26", "rhs_6b26_ess", "rhs_6b26_green", "rhs_6b26_ess_green"};
		linkedItems[] = {"V_Chestrig_oli", "rhs_scarf", "H_Bandanna_khk", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_oli", "rhs_scarf", "H_Bandanna_khk", "ItemCompass", "ItemWatch", "ItemRadio"};
		identityTypes[] = {"LanguageRUS", "Head_Euro", "rhs_scarf", "G_CIVIL_male"};
		genericNames = "RussianMen";
		
		class EventHandlers {
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\rhsafrf\addons\rhs_c_cti_indep\data\scripts\randomize_gue1.sqf""";
		};
		hiddenSelectionsMaterials[] = {"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat"};
		};
	};
	
	class rhs_g_Soldier_exp_F : I_G_Soldier_exp_F {
		scope = 2;
		scopeCurator = 2;
		faction = "rhs_faction_insurgents";
		author = $STR_RHS_AUTHOR_FULL;
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		uniformClass = "rhs_chdkz_uniform_1";
		headgearProbability = 50;
		allowedHeadgear[] = {"rhs_beanie", "rhs_beanie_green"};
		allowedHeadgearB[] = {"rhs_6b26", "rhs_6b26_ess", "rhs_6b26_green", "rhs_6b26_ess_green"};
		linkedItems[] = {"V_Chestrig_oli", "rhs_scarf", "H_Bandanna_khk", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_oli", "rhs_scarf", "H_Bandanna_khk", "ItemCompass", "ItemWatch", "ItemRadio"};
		identityTypes[] = {"LanguageRUS", "Head_Euro", "rhs_scarf", "G_CIVIL_male"};
		genericNames = "RussianMen";
		
		class EventHandlers {
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\rhsafrf\addons\rhs_c_cti_indep\data\scripts\randomize_gue1.sqf""";
		};
		hiddenSelectionsMaterials[] = {"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat"};
		};
	};
	
	class rhs_g_Soldier_GL_F : I_G_Soldier_GL_F {
		scope = 2;
		scopeCurator = 2;
		faction = "rhs_faction_insurgents";
		author = $STR_RHS_AUTHOR_FULL;
		weapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_GRD40_White", "rhs_mag_nspn_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_GRD40_White", "rhs_mag_nspn_red"};
		uniformClass = "rhs_chdkz_uniform_2";
		headgearProbability = 50;
		allowedHeadgear[] = {"rhs_beanie", "rhs_beanie_green"};
		allowedHeadgearB[] = {"rhs_6b26", "rhs_6b26_ess", "rhs_6b26_green", "rhs_6b26_ess_green"};
		identityTypes[] = {"LanguageRUS", "Head_Euro", "rhs_scarf", "G_CIVIL_male"};
		genericNames = "RussianMen";
		
		class EventHandlers {
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\rhsafrf\addons\rhs_c_cti_indep\data\scripts\randomize_gue1.sqf""";
		};
		hiddenSelectionsMaterials[] = {"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat"};
		};
	};
	
	class rhs_g_Soldier_M_F : I_G_Soldier_M_F {
		scope = 2;
		scopeCurator = 2;
		faction = "rhs_faction_insurgents";
		author = $STR_RHS_AUTHOR_FULL;
		weapons[] = {"rhs_weap_svdp_pso1", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_svdp_pso1", "Throw", "Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1"};
		linkedItems[] = {"V_Chestrig_oli", "rhs_scarf", "rhs_boonie_flora", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_oli", "rhs_scarf", "rhs_boonie_flora", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformClass = "rhs_chdkz_uniform_5";
		headgearProbability = 80;
		allowedHeadgear[] = {"rhs_Booniehat_flora"};
		allowedHeadgearB[] = {"H_Booniehat_oli", "H_Booniehat_khk"};
		identityTypes[] = {"LanguageRUS", "Head_Euro", "rhs_scarf", "G_CIVIL_male"};
		genericNames = "RussianMen";
		
		class EventHandlers {
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\rhsafrf\addons\rhs_c_cti_indep\data\scripts\randomize_gue1.sqf""";
		};
		hiddenSelectionsMaterials[] = {"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat"};
		};
	};
	
	class rhs_g_Soldier_LAT_F : I_G_Soldier_LAT_F {
		scope = 2;
		scopeCurator = 2;
		faction = "rhs_faction_insurgents";
		author = $STR_RHS_AUTHOR_FULL;
		weapons[] = {"rhs_weap_akm", "Throw", "Put", "rhs_weap_rpg7_pgo"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put", "rhs_weap_rpg7_pgo"};
		magazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		backpack = "rhs_rpg";
		uniformClass = "rhs_chdkz_uniform_1";
		headgearProbability = 50;
		allowedHeadgear[] = {"rhs_beanie", "rhs_beanie_green"};
		allowedHeadgearB[] = {"rhs_6b26", "rhs_6b26_ess", "rhs_6b26_green", "rhs_6b26_ess_green"};
		linkedItems[] = {"V_TacVest_oli", "H_Bandanna_khk", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli", "H_Bandanna_khk", "ItemCompass", "ItemWatch", "ItemRadio"};
		identityTypes[] = {"LanguageRUS", "Head_Euro", "rhs_scarf", "G_CIVIL_male"};
		genericNames = "RussianMen";
		
		class EventHandlers {
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\rhsafrf\addons\rhs_c_cti_indep\data\scripts\randomize_gue1.sqf""";
		};
		hiddenSelectionsMaterials[] = {"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat"};
		};
	};
	
	class rhs_g_Soldier_AT_F : I_G_Soldier_LAT_F {
		scope = 2;
		scopeCurator = 2;
		faction = "rhs_faction_insurgents";
		author = $STR_RHS_AUTHOR_FULL;
		displayName = $STR_RHS_INF_LAT;
		weapons[] = {"rhs_weap_akms", "Throw", "Put", "rhs_weap_rpg26"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put", "rhs_weap_rpg26"};
		backpack = "";
		magazines[] = {"rhs_rpg26_mag", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		respawnMagazines[] = {"rhs_rpg26_mag", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_mag_nspn_red"};
		secondaryAmmoCoef = 0.5;
		uniformClass = "rhs_chdkz_uniform_4";
		headgearProbability = 50;
		allowedHeadgear[] = {"rhs_beanie", "rhs_beanie_green"};
		allowedHeadgearB[] = {"rhs_6b26", "rhs_6b26_ess", "rhs_6b26_green", "rhs_6b26_ess_green"};
		linkedItems[] = {"V_Chestrig_oli", "rhs_scarf", "rhs_beanie", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_oli", "rhs_scarf", "rhs_beanie", "ItemCompass", "ItemWatch", "ItemRadio"};
		identityTypes[] = {"LanguageRUS", "Head_Euro", "rhs_scarf", "G_CIVIL_male"};
		genericNames = "RussianMen";
		
		class EventHandlers {
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\rhsafrf\addons\rhs_c_cti_indep\data\scripts\randomize_gue1.sqf""";
		};
		hiddenSelectionsMaterials[] = {"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat"};
		};
	};
	
	class rhs_g_Soldier_AA_F : I_G_Soldier_A_F {
		scope = 2;
		scopeCurator = 2;
		faction = "rhs_faction_insurgents";
		author = $STR_RHS_AUTHOR_FULL;
		displayName = $STR_RHS_INF_AA;
		weapons[] = {"rhs_weap_ak74m_plummag_dtk", "Throw", "Put", "rhs_weap_igla"};
		respawnWeapons[] = {"rhs_weap_ak74m_plummag_dtk", "Throw", "Put", "rhs_weap_igla"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9k38_rocket"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9k38_rocket"};
		uniformClass = "rhs_chdkz_uniform_2";
		backpack = "";
		headgearProbability = 50;
		allowedHeadgear[] = {"rhs_beanie", "rhs_beanie_green"};
		allowedHeadgearB[] = {"rhs_6b26", "rhs_6b26_ess", "rhs_6b26_green", "rhs_6b26_ess_green"};
		identityTypes[] = {"LanguageRUS", "Head_Euro", "rhs_scarf", "G_CIVIL_male"};
		genericNames = "RussianMen";
		
		class EventHandlers {
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\rhsafrf\addons\rhs_c_cti_indep\data\scripts\randomize_gue1.sqf""";
		};
		hiddenSelectionsMaterials[] = {"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat"};
		};
	};
	
	class rhs_g_Crew_F : I_Crew_F {
		scope = 2;
		scopeCurator = 2;
		faction = "rhs_faction_insurgents";
		author = $STR_RHS_AUTHOR_FULL;
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgd5"};
		linkedItems[] = {"rhs_6sh46", "rhs_tsh4", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6sh46", "rhs_tsh4", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformClass = "rhs_chdkz_uniform_4";
		headgearProbability = 100;
		genericNames = "RussianMen";
		allowedHeadgear[] = {"rhs_tsh4", "rhs_tsh4_ess"};
		identityTypes[] = {"LanguageRUS", "Head_Euro", "rhs_scarf", "G_CIVIL_male"};
		
		class EventHandlers {
			init = "_this call SLX_XEH_EH_Init;(_this select 0) execVM ""\rhsafrf\addons\rhs_c_cti_indep\data\scripts\randomize_gue1.sqf""";
		};
		hiddenSelectionsMaterials[] = {"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w1.rvmat", "rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing_w2.rvmat"};
		};
	};
	
	class rhs_g_Soldier_AAR_F : rhs_g_Soldier_F {
		uniformClass = "rhs_chdkz_uniform_3";
		backpack = "rhs_sidorMG";
		displayName = $STR_RHS_INF_MACHINEGUNNER_ASSISTANT;
		linkedItems[] = {"V_Chestrig_oli", "rhs_scarf", "rhs_beanie", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_oli", "rhs_scarf", "rhs_beanie", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class rhs_g_Soldier_AAT_F : rhs_g_Soldier_F {
		uniformClass = "rhs_chdkz_uniform_5";
		displayName = $STR_RHS_INF_GRENADIER_RPG_ASSISTANT;
		backpack = "rhs_rpg";
		secondaryAmmoCoef = 0.5;
		linkedItems[] = {"V_Chestrig_oli", "rhs_scarf", "rhs_beanie", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_oli", "rhs_scarf", "rhs_beanie", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	};