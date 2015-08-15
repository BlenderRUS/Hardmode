class CfgPatches
{
	class hmg_lop_fix // Идентификатор нашего аддона
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "lop_main", "lop_faction_afr", "lop_faction_aa", "lop_faction_cdf","lop_faction_am", "lop_faction_chdkz", "lop_faction_ia","lop_faction_pmc","lop_faction_racs","lop_faction_sla", "lop_faction_ua", "lop_faction_us", "rhs_c_troops"}; // Требуемые нашим патчем аддоны для предзагрузки
		version = "0.1"; // Версия
		versionStr = "0.1"; // Версия в строковом варианте (необязательно, используется CBA)
		versionAr[] = {0, 1}; // Версия в виде массива (необязательно, используется CBA)
		author[] = {"Wieking"}; // Автор (необязательно, используется CBA)
		authorUrl = "http://www.arma3.ru"; // URL (необязательно, используется CBA)
		description = "Модифицируем ЛОП"; // Описание (необязательно, используется CBA)
	};
}; 

class cfgWeapons {
		class Vest_Camo_Base;	// External class reference
	class rhs_6b23;
	class rhs_6b23_6sh92;
	class rhs_6sh92_radio;
	class rhs_6sh92_vog;
	class rhs_6sh92;
	class rhs_6b23_crewofficer;
	class rhs_6b23_rifleman;
	class rhs_6b23_medic;
	class LOP_V_6B23_CDF : rhs_6b23 {
		_generalMacro = "LOP_V_6B23_CDF";
		author = $STR_LOP_FULL_NAME;
	
		scope = 2;
		displayName = "6B23 CDF";
		
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"lop_faction_cdf\data\6b23_cdf_co.paa", "lop_faction_cdf\data\gearpack1_6sh92_cdf_co.paa"};
	};
	class LOP_V_6B23_OLV : LOP_V_6B23_CDF {
		_generalMacro = "LOP_V_6B23_OLV";
		author = $STR_LOP_FULL_NAME;
	
		scope = 2;
		displayName = "6B23 Olive";
		
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"lop_faction_cdf\data\6b23_olv_co.paa", "lop_faction_cdf\data\gearpack1_6sh92_olv_co.paa"};
	};
	class LOP_V_6B23_6Sh92_CDF : rhs_6b23_6sh92 {
		_generalMacro = "LOP_V_6B23_6SH92_CDF";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "6B23 CDF (6Sh92)";
		
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"lop_faction_cdf\data\6b23_cdf_co.paa", "lop_faction_cdf\data\gearpack1_6sh92_cdf_co.paa"};
	};	
	class LOP_V_6B23_6Sh92_OLV : LOP_V_6B23_6Sh92_CDF {
		_generalMacro = "LOP_V_6B23_6Sh92_OLV";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "6B23 Olive (6Sh92)";
		
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"lop_faction_cdf\data\6b23_olv_co.paa", "lop_faction_cdf\data\gearpack1_6sh92_olv_co.paa"};
	};
	class LOP_V_6B23_CrewOfficer_CDF : rhs_6b23_crewofficer {
		_generalMacro = "LOP_V_6B23_CrewOfficer_CDF";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "6B23 CDF (Crew Officer)";

		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"lop_faction_cdf\data\6b23_cdf_co.paa", "lop_faction_cdf\data\gearpack1_6sh92_cdf_co.paa"};
	};	
	class LOP_V_6B23_CrewOfficer_OLV : LOP_V_6B23_CrewOfficer_CDF {
		_generalMacro = "LOP_V_6B23_CrewOfficer_OLV";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "6B23 Olive (Crew Officer)";

		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"lop_faction_cdf\data\6b23_olv_co.paa", "lop_faction_cdf\data\gearpack1_6sh92_olv_co.paa"};
	};	
	class LOP_V_6B23_Rifleman_CDF : rhs_6b23_rifleman {
		_generalMacro = "LOP_V_6B23_Rifleman_CDF";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "6B23 CDF (Rifleman)";

		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"lop_faction_cdf\data\6b23_cdf_co.paa", "lop_faction_cdf\data\gearpack1_6sh92_cdf_co.paa"};
	};	
	class LOP_V_6B23_Rifleman_OLV : LOP_V_6B23_Rifleman_CDF {
		_generalMacro = "LOP_V_6B23_Rifleman_OLV";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "6B23 Olive (Rifleman)";

		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"lop_faction_cdf\data\6b23_olv_co.paa", "lop_faction_cdf\data\gearpack1_6sh92_olv_co.paa"};
	};	
	class LOP_V_6B23_Medic_CDF : rhs_6b23_medic {
		_generalMacro = "LOP_V_6B23_Medic_CDF";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "6B23 CDF (Medic)";

		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"lop_faction_cdf\data\6b23_cdf_co.paa", "lop_faction_cdf\data\gearpack1_6sh92_cdf_co.paa"};
	};	
	class LOP_V_6B23_Medic_OLV : LOP_V_6B23_Medic_CDF {
		_generalMacro = "LOP_V_6B23_Rifleman_OLV";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "6B23 Olive (Medic)";

		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"lop_faction_cdf\data\6b23_olv_co.paa", "lop_faction_cdf\data\gearpack1_6sh92_olv_co.paa"};
	};	
	class LOP_V_6Sh92_Vog_OLV : rhs_6sh92_vog {
		_generalMacro = "LOP_V_6Sh92_Vog_OLV";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "6Sh92 (VOG) Olive";
		
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"lop_faction_cdf\data\6b23_olv_co.paa", "lop_faction_cdf\data\gearpack1_6sh92_olv_co.paa"};
	};	
	class LOP_V_6Sh92_Radio_OLV : rhs_6sh92_radio {
		_generalMacro = "LOP_V_6Sh92_Radio_OLV";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "6Sh92 (Radio) Olive";
		
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"lop_faction_cdf\data\6b23_olv_co.paa", "lop_faction_cdf\data\gearpack1_6sh92_olv_co.paa"};
	};	
	class LOP_V_6Sh92_CDF : rhs_6sh92 {
		_generalMacro = "LOP_V_6B23_6Sh92_OLV";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "6Sh92 CDF";
		
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"lop_faction_cdf\data\6b23_cdf_co.paa", "lop_faction_cdf\data\gearpack1_6sh92_cdf_co.paa"};
	};	
	class LOP_V_6Sh92_OLV : LOP_V_6Sh92_CDF {
		_generalMacro = "LOP_V_6Sh92_OLV";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "6Sh92 Olive";
		
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"lop_faction_cdf\data\6b23_olv_co.paa", "lop_faction_cdf\data\gearpack1_6sh92_olv_co.paa"};
	};
};


class CfgVehicles {
class SoldierGB;

	class I_Soldier_base_F : SoldierGB{};
    class I_Soldier_02_F : I_Soldier_base_F {};
	class I_Soldier_SL_F : I_Soldier_02_F {};	
	class I_Soldier_TL_F : I_Soldier_base_F {};	
    class I_medic_F : I_Soldier_02_F {};	
	class I_Soldier_AR_F : I_Soldier_02_F {};	
	class I_Soldier_AT_F : I_Soldier_base_F {};	
	class I_Engineer_F : I_Soldier_base_F {};	
	class I_Soldier_F : I_Soldier_base_F {};	
	class I_Soldier_GL_F : I_Soldier_base_F {};
	
	class I_Soldier_LAT_F;	// External class reference
	class I_Sniper_F;	// External class reference
	class I_Soldier_A_F;	// External class reference
	class I_crew_F;	// External class reference
	class I_officer_F;	// External class reference
	class I_helipilot_F;	// External class reference
	
	
	

	//новая афганская милиция
	class LOP_AM_Infantry_TL : I_Soldier_TL_F {

		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_6sh46", "LOP_H_Pakol", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_6sh46", "LOP_H_Pakol", "ItemMap", "ItemCompass", "ItemWatch"};
		
		backpack = "";
	};	
	
	class LOP_AM_Infantry_SL : I_Soldier_SL_F {

		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_6sh46", "H_Cap_blk", "G_Bandanna_blk", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_6sh46", "H_Cap_blk", "G_Bandanna_blk", "ItemMap", "ItemCompass", "ItemWatch"};
		
		backpack = "";
	};	
	
	class LOP_AM_Infantry_Corpsman : I_Medic_F {
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_6sh46", "H_Bandanna_sgg", "G_Bandanna_oli", "ItemCompass"};
		respawnLinkedItems[] = {"LOP_6sh46", "H_Bandanna_sgg", "G_Bandanna_oli", "ItemCompass"};
		
		backpack = "LOP_AM_Sidor_Med";
	};	
	class LOP_AM_Infantry_AR : I_Soldier_AR_F {
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_6sh46", "LOP_H_Pakol", "ItemCompass"};
		respawnLinkedItems[] = {"LOP_6sh46", "LOP_H_Pakol", "ItemCompass"};
		
		backpack = "LOP_AM_Fieldpack_PKM";
	};	
	class LOP_AM_Infantry_AT : I_Soldier_AT_F {
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akms", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "rhs_weap_rpg7", "Throw", "Put"};
		
		magazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_6sh46", "LOP_H_Pakol", "ItemCompass"};
		respawnLinkedItems[] = {"LOP_6sh46", "LOP_H_Pakol", "ItemCompass"};
		
		backpack = "LOP_AM_RPG_Pack";
	};	
	class LOP_AM_Infantry_Marksman : I_Soldier_F {
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"LOP_Weap_SVDS", "Throw", "Put"};
		respawnWeapons[] = {"LOP_Weap_SVDS", "Throw", "Put"};
		
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_6sh46", "LOP_H_Turban_mask", "ItemCompass"};
		respawnLinkedItems[] = {"LOP_6sh46", "LOP_H_Turban_mask", "ItemCompass"};
		
		backpack = "LOP_AM_FalconII_SVD";
	};	
	class LOP_AM_Infantry_Engineer : I_Engineer_F {

		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_6sh46", "LOP_H_Turban_mask", "ItemCompass"};
		respawnLinkedItems[] = {"LOP_6sh46", "LOP_H_Turban_mask", "ItemCompass"};
		
		backpack = "";
	};	
	class LOP_AM_Infantry_Rifleman :  I_Soldier_F {
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_6sh46", "LOP_H_Turban", "ItemCompass"};
		respawnLinkedItems[] = {"LOP_6sh46", "LOP_H_Turban", "ItemCompass"};
		
		backpack = "";
	};
	class LOP_AM_Infantry_ratelo :  LOP_AM_Infantry_Rifleman {
		displayName = "Ratelo";
		backpack = "tf_anprc155";
	};
	class LOP_AM_Infantry_GL : I_Soldier_GL_F {

		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25"};
	
		linkedItems[] = {"LOP_6sh46", "LOP_H_Turban", "ItemCompass"};
		respawnLinkedItems[] = {"LOP_6sh46", "LOP_H_Turban", "ItemCompass"};
		
		backpack = "";
	};

	//  новая афганская армия
	class LOP_AA_Infantry_TL : I_Soldier_TL_F {
		_generalMacro = "LOP_AA_Infantry_TL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_AA;
		vehicleClass = "LOP_Men";
		displayName = "Team Leader";
		uniformClass = "LOP_U_AA_Fatigue_01";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\lop_faction_aa\data\u_fatigue_01_co.paa"};
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_OLV", "rhs_6b27m_green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_OLV", "rhs_6b27m_green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_AA_Infantry_SL : I_Soldier_SL_F {
		_generalMacro = "LOP_AA_Infantry_SL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_AA;
		vehicleClass = "LOP_Men";
		displayName = "Section Leader";
		uniformClass = "LOP_U_AA_Fatigue_01_slv";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\lop_faction_aa\data\u_fatigue_01_co.paa"};
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_ANA", "LOP_H_6B27M_ess_ANA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_ANA", "LOP_H_6B27M_ess_ANA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_AA_Infantry_Corpsman : I_medic_F {
		_generalMacro = "LOP_AA_Infantry_Corpsman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_AA;
		vehicleClass = "LOP_Men";
		displayName = "Corpsman";
		uniformClass = "LOP_U_AA_Fatigue_02";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\lop_faction_aa\data\u_fatigue_02_co.paa"};
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_AA_Kitbag_Med";
	};
	
	class LOP_AA_Infantry_Rifleman : I_Soldier_F {
		_generalMacro = "LOP_AA_Infantry_Rifleman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_AA;
		vehicleClass = "LOP_Men";
		displayName = "Rifleman";
		uniformClass = "LOP_U_AA_Fatigue_02_slv";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\lop_faction_aa\data\u_fatigue_02_co.paa"};
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_ANA", "LOP_H_6B27M_ANA", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_ANA", "LOP_H_6B27M_ANA", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	class LOP_AA_Infantry_ratelo : LOP_AA_Infantry_Rifleman {
		displayName = "Ratelo";
		backpack = "tf_anprc155";
	};
	
	class LOP_AA_Infantry_AT : I_Soldier_AT_F {
		_generalMacro = "LOP_AA_Infantry_AT";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_AA;
		vehicleClass = "LOP_Men";
		displayName = "Anti tank";
		uniformClass = "LOP_U_AA_Fatigue_02_slv";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "rhs_weap_rpg7", "Throw", "Put"};
		magazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_WDL", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_WDL", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_AA_RPG_Pack";
	};
	
	class LOP_AA_Infantry_AT_Asst : I_Soldier_A_F {
		_generalMacro = "LOP_AA_Infantry_AT";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_AA;
		vehicleClass = "LOP_Men";
		displayName = "Anti tank assistant";
		uniformClass = "LOP_U_AA_Fatigue_02";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_WDL", "LOP_H_6B27M_ANA", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_AA_RPG_Pack";
	};
	
	class LOP_AA_Infantry_MG_Asst : I_Soldier_A_F {
		_generalMacro = "LOP_AA_Infantry_MG_Asst";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_AA;
		vehicleClass = "LOP_Men";
		displayName = "Machinegunner assistant";
		uniformClass = "LOP_U_AA_Fatigue_02";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_WDL" , "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_WDL", "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_AA_Fieldpack_PKM";
	};
	
	class LOP_AA_Infantry_MG : I_Soldier_AR_F {
		_generalMacro = "LOP_AA_Infantry_MG";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_AA;
		vehicleClass = "LOP_Men";
		displayName = "Machinegunner";
		uniformClass = "LOP_U_AA_Fatigue_01";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_ANA", "LOP_H_6B27M_ANA", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_ANA",  "LOP_H_6B27M_ANA", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_AA_Fieldpack_PKM";
	};
	
	class LOP_AA_Infantry_Engineer : I_engineer_F {
		_generalMacro = "LOP_AA_Infantry_Engineer";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_AA;
		vehicleClass = "LOP_Men";
		displayName = "Engineer";
		uniformClass = "LOP_U_AA_Fatigue_01_slv";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_OLV", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_OLV", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class LOP_AA_Infantry_Marksman : I_Soldier_F {
		_generalMacro = "LOP_AA_Infantry_Marksman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_AA;
		vehicleClass = "LOP_Men";
		displayName = "Marksman";
		uniformClass = "LOP_U_AA_Fatigue_01_slv";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"LOP_Weap_SVDS", "Throw", "Put"};
		respawnWeapons[] = {"LOP_Weap_SVDS", "Throw", "Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_OLV", "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_OLV",  "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_AA_FalconII_SVD";
	};
	
	class LOP_AA_Infantry_GL : I_Soldier_F {
		_generalMacro = "LOP_AA_Infantry_GL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_AA;
		vehicleClass = "LOP_Men";
		displayName = "Grenadier";
		uniformClass = "LOP_U_AA_Fatigue_01";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE"};
		linkedItems[] = {"LOP_V_CarrierLite_WDL", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_WDL", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_AA_Infantry_Crewman : I_crew_F {
		_generalMacro = "LOP_AA_Infantry_GL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_AA;
		vehicleClass = "LOP_Men";
		displayName = "Crewman";
		uniformClass = "LOP_U_AA_Fatigue_02_slv";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "rhs_tsh4", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "rhs_tsh4", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_AA_Police_TL : I_Soldier_TL_F {
		_generalMacro = "LOP_AA_Police_TL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_AA;
		vehicleClass = "LOP_Men_police";
		displayName = "Team Leader";
		uniformClass = "LOP_U_AA_Fatigue_03";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\lop_faction_aa\data\u_fatigue_03_co.paa"};
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_OLV", "H_MilCap_blue", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_OLV", "H_MilCap_blue", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_AA_Police_SL : I_Soldier_SL_F {
		_generalMacro = "LOP_AA_Police_SL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_AA;
		vehicleClass = "LOP_Men_police";
		displayName = "Section Leader";
		uniformClass = "LOP_U_AA_Fatigue_03_slv";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\lop_faction_aa\data\u_fatigue_03_co.paa"};
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_TAN", LOP_H_6B27M_WDL, "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_TAN", LOP_H_6B27M_WDL, "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_AA_Police_Corpsman : I_medic_F {
		_generalMacro = "LOP_AA_Police_Corpsman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_AA;
		vehicleClass = "LOP_Men_police";
		displayName = "Corpsman";
		uniformClass = "LOP_U_AA_Fatigue_03_slv";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_OLV", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_OLV", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_AA_Kitbag_Med";
	};
	
	class LOP_AA_Police_Rifleman : I_Soldier_F {
		_generalMacro = "LOP_AA_Police_Rifleman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_AA;
		vehicleClass = "LOP_Men_police";
		displayName = "Rifleman";
		uniformClass = "LOP_U_AA_Fatigue_03";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_TAN", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_TAN", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_AA_Police_MG : I_Soldier_AR_F {
		_generalMacro = "LOP_AA_Police_MG";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_AA;
		vehicleClass = "LOP_Men_police";
		displayName = "Machinegunner";
		uniformClass = "LOP_U_AA_Fatigue_03";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_WDL", "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_WDL", "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_AA_Fieldpack_PKM";
	};
	
	//новая африканская милития
	class LOP_AFR_Infantry_TL : I_Soldier_TL_F {
		_generalMacro = "LOP_AFR_Infantry_TL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_AFR;
		vehicleClass = "LOP_Men";
		displayName = "Team Leader";
		uniformClass = "LOP_U_AFR_Fatigue_01";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\lop_faction_afr\data\u_fatigue_01_blouse.paa", "\lop_faction_afr\data\u_fatigue_01_pants.paa"};
		faceType = "Man_A3";
		genericNames = "lop_african_names";
		identityTypes[] = {"LanguagePER_F", "Head_African", "G_GUERIL_default"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"V_BandollierB_rgr", "H_Bandanna_sgg", "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_BandollierB_rgr", "H_Bandanna_sgg", "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch"};
		backpack = "";
	};
	
	class LOP_AFR_Infantry_SL : I_Soldier_SL_F {
		_generalMacro = "LOP_AFR_Infantry_SL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_AFR;
		vehicleClass = "LOP_Men";
		displayName = "Section Leader";
		uniformClass = "LOP_U_AFR_Fatigue_02";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\lop_faction_afr\data\u_fatigue_02.paa"};
		faceType = "Man_A3";
		genericNames = "lop_african_names";
		identityTypes[] = {"LanguagePER_F", "Head_African", "G_GUERIL_default"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"V_Rangemaster_belt", "rhs_Booniehat_m81", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_Rangemaster_belt", "rhs_Booniehat_m81", "ItemMap", "ItemCompass", "ItemWatch"};
		backpack = "";
	};
	
	class LOP_AFR_Infantry_Corpsman : I_medic_F {
		_generalMacro = "LOP_AFR_Infantry_Medic";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_AFR;
		vehicleClass = "LOP_Men";
		displayName = "Corpsman";
		uniformClass = "LOP_U_AFR_Fatigue_03";
		faceType = "Man_A3";
		genericNames = "lop_african_names";
		identityTypes[] = {"LanguagePER_F", "Head_African", "G_GUERIL_default"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"V_TacVest_khk", "H_Cap_blk", "ItemCompass"};
		respawnLinkedItems[] = {"V_TacVest_khk", "H_Cap_blk", "ItemCompass"};
		backpack = "LOP_AFR_Fieldpack_Med";
	};
	
	class LOP_AFR_Infantry_AR : I_Soldier_AR_F {
		_generalMacro = "LOP_AFR_Infantry_AR";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_AFR;
		vehicleClass = "LOP_Men";
		uniformClass = "LOP_U_AFR_Fatigue_02";
		displayName = "Machinegunner (PKM)";
		faceType = "Man_A3";
		genericNames = "lop_african_names";
		identityTypes[] = {"LanguagePER_F", "Head_African", "G_GUERIL_default"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"V_BandollierB_blk", "ItemCompass"};
		respawnLinkedItems[] = {"V_BandollierB_blk", "ItemCompass"};
		backpack = "LOP_AFR_Sidor_PKM";
	};
	
	class LOP_AFR_Infantry_AT : I_Soldier_AT_F {
		_generalMacro = "LOP_AFR_Infantry_AT";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_AFR;
		vehicleClass = "LOP_Men";
		displayName = "Anti Tank (RPG-7)";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa", "\lop_faction_afr\data\u_fatigue_03_pants.paa"};
		uniformClass = "LOP_U_AFR_Fatigue_03";
		faceType = "Man_A3";
		genericNames = "lop_african_names";
		identityTypes[] = {"LanguagePER_F", "Head_African", "G_GUERIL_default"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "rhs_weap_rpg7", "Throw", "Put"};
		magazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"V_Rangemaster_belt", "H_Booniehat_oli", "ItemCompass"};
		respawnLinkedItems[] = {"V_Rangemaster_belt", "H_Booniehat_oli", "ItemCompass"};
		backpack = "LOP_AFR_RPG_Pack";
	};
	
	class LOP_AFR_Infantry_Marksman : I_Soldier_F {
		_generalMacro = "LOP_AFR_Infantry_Marksman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_AFR;
		vehicleClass = "LOP_Men";
		displayName = "Marksman (SVD)";
		uniformClass = "LOP_U_AFR_Fatigue_01";
		faceType = "Man_A3";
		genericNames = "lop_african_names";
		identityTypes[] = {"LanguagePER_F", "Head_African", "G_GUERIL_default"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"LOP_Weap_SVDS", "Throw", "Put"};
		respawnWeapons[] = {"LOP_Weap_SVDS", "Throw", "Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"V_TacVest_oli", "H_Cap_grn", "G_Bandanna_oli", "ItemCompass", "Binocular"};
		respawnLinkedItems[] = {"V_TacVest_oli", "H_Cap_grn", "G_Bandanna_oli", "ItemCompass", "Binocular"};
		backpack = "LOP_AFR_FalconII_SVD";
	};
	
	class LOP_AFR_Infantry_IED : I_Engineer_F {
		_generalMacro = "LOP_AFR_Infantry_IED";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_AFR;
		vehicleClass = "LOP_Men";
		displayName = "IED Specialist (engineer)";
		uniformClass = "LOP_U_AFR_Fatigue_04_slv";
		faceType = "Man_A3";
		genericNames = "lop_african_names";
		identityTypes[] = {"LanguagePER_F", "Head_African", "G_GUERIL_default"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"V_TacVestIR_blk", "G_Bandanna_aviator", "ItemCompass"};
		respawnLinkedItems[] = {"V_TacVestIR_blk", "G_Bandanna_aviator", "ItemCompass"};
		backpack = "";
	};
	
	class LOP_AFR_Infantry_Rifleman : I_Soldier_F {
		_generalMacro = "LOP_AFR_Infantry_Rifleman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_AFR;
		vehicleClass = "LOP_Men";
		displayName = "Rifleman";
		uniformClass = "LOP_U_AFR_Fatigue_01";
		faceType = "Man_A3";
		genericNames = "lop_african_names";
		identityTypes[] = {"LanguagePER_F", "Head_African", "G_GUERIL_default"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_6sh46", "ItemCompass"};
		respawnLinkedItems[] = {"LOP_6sh46", "ItemCompass"};
		backpack = "";
	};
	class LOP_AFR_Infantry_ratolo : LOP_AFR_Infantry_Rifleman {
		displayName = "Ratelo";
		backpack = "tf_anprc155";
	};
	
	class LOP_AFR_Driver : I_Soldier_F {
		_generalMacro = "LOP_AFR_Driver";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_AFR;
		vehicleClass = "LOP_Men";
		displayName = "Driver";
		uniformClass = "LOP_U_AFR_Fatigue_04_slv";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\lop_faction_afr\data\u_fatigue_04.paa"};
		faceType = "Man_A3";
		genericNames = "lop_african_names";
		identityTypes[] = {"LanguagePER_F", "Head_African", "G_GUERIL_default"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_6sh46", "ItemCompass"};
		respawnLinkedItems[] = {"LOP_6sh46",  "ItemCompass"};
		backpack = "";
	};
	
	class LOP_AFR_Infantry_GL : I_Soldier_GL_F {
		_generalMacro = "LOP_AFR_Infantry_GL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_AFR;
		vehicleClass = "LOP_Men";
		displayName = "Grenadier (AKM GL)";
		uniformClass = "LOP_U_AFR_Fatigue_04";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\lop_faction_afr\data\u_fatigue_04.paa"};
		faceType = "Man_A3";
		genericNames = "lop_african_names";
		identityTypes[] = {"LanguagePER_F", "Head_African", "G_GUERIL_default"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"V_BandollierB_oli", "ItemCompass"};
		respawnLinkedItems[] = {"V_BandollierB_oli", "ItemCompass"};
		backpack = "";
	};
	// новые ЧСО
	class rhs_msv_rifleman;	
	class rhs_msv_grenadier;	
	class rhs_msv_machinegunner;	
	class rhs_msv_machinegunner_assistant;	
	class rhs_msv_at;	
	class rhs_msv_aa;	
	class rhs_msv_strelok_rpg_assist;	
	class rhs_msv_marksman;	
	class rhs_msv_officer;	
	class rhs_msv_engineer;	
	class rhs_msv_medic;	
	class rhs_msv_crew;	
	class rhs_msv_sergeant;	
	class rhs_msv_junior_sergeant;	
	
	class LOP_CDF_Infantry_Rifleman : rhs_msv_rifleman {
		_generalMacro = "LOP_CDF_Infantry_Rifleman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "LOP_CDF";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_CDF_Fatigue_01";
		
		displayName = "Rifleman";
		
		hiddenSelections[] = {"camo1", "camo2", "camob", "insignia"};
		hiddenSelectionsTextures[] = {"lop_faction_cdf\data\cdf_fatigue_co.paa", "", ""};
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_Rifleman_CDF", "LOP_H_6B27M_CDF", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_Rifleman_CDF", "LOP_H_6B27M_CDF", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	
	class LOP_CDF_Infantry_Pilot : rhs_msv_rifleman {
		_generalMacro = "LOP_CDF_Infantry_Pilot";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "LOP_CDF";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_CDF_Fatigue_01";
		
		displayName = "Pilot";
		
		hiddenSelections[] = {"camo1", "camo2", "camob", "insignia"};
		hiddenSelectionsTextures[] = {"lop_faction_cdf\data\cdf_fatigue_co.paa", "", ""};
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};
		textSingular = "pilot";
		textPlural = "pilots";
		nameSound = "veh_infantry_pilot_s";
		
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_folded", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_folded", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6Sh92_OLV", "rhs_zsh7a_mike", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_OLV", "rhs_zsh7a_mike", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};
	
	class LOP_CDF_Infantry_TL : rhs_msv_sergeant {
		_generalMacro = "LOP_CDF_Infantry_TL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "LOP_CDF";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_CDF_Fatigue_01";
		
		displayName = "Team Leader";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_gp25", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_6Sh92_CDF", "LOP_H_6B27M_ess_CDF", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_6Sh92_CDF", "LOP_H_6B27M_ess_CDF", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};		
	class LOP_CDF_Infantry_SL : rhs_msv_junior_sergeant {
		_generalMacro = "LOP_CDF_Infantry_SL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "LOP_CDF";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_CDF_Fatigue_01";
		
		displayName = "Section Leader";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_2mag", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_2mag", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_6Sh92_OLV", "rhs_6b27m_green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_6Sh92_OLV", "rhs_6b27m_green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};		
	
	class LOP_CDF_Infantry_Crewman : rhs_msv_crew {
		_generalMacro = "LOP_CDF_Infantry_Crewman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "LOP_CDF";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_CDF_Fatigue_01";
		
		displayName = "Crewman";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_folded", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_folded", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6Sh92_CDF", "rhs_tsh4", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_CDF", "rhs_tsh4", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_CDF_Infantry_Corpsman : rhs_msv_medic {
		_generalMacro = "LOP_CDF_Infantry_Corpsman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "LOP_CDF";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_CDF_Fatigue_01";
		
		displayName = "Corpsman";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_6Sh92_OLV", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_6Sh92_OLV", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_CDF_Kitbag_Med";
	};	
	class LOP_CDF_Infantry_Officer : rhs_msv_officer {
		_generalMacro = "LOP_CDF_Infantry_Officer";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "LOP_CDF";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_CDF_Fatigue_01";
		
		displayName = "Officer";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_folded", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_folded", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_CrewOfficer_CDF", "LOP_H_Fieldcap_CDF", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_CrewOfficer_CDF", "LOP_H_Fieldcap_CDF", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_CDF_Infantry_Marksman : rhs_msv_marksman {
		_generalMacro = "LOP_CDF_Infantry_Marksman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "LOP_CDF";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_CDF_Fatigue_01";
		
		displayName = "Marksman";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"LOP_Weap_SVDS", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"LOP_Weap_SVDS", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_6Sh92_OLV", "H_Bandanna_khk", "G_Bandanna_oli", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_6Sh92_OLV", "H_Bandanna_khk", "G_Bandanna_oli", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_CDF_Sidor_SVD";
	};	
	class LOP_CDF_Infantry_AA : rhs_msv_at {
		_generalMacro = "LOP_CDF_Infantry_AA";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "LOP_CDF";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_CDF_Fatigue_01";
		
		displayName = "Anti Aircraft";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_2mag", "rhs_weap_igla", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_2mag", "rhs_weap_igla", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_Rifleman_OLV", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_Rifleman_OLV", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_CDF_AA_Pack";
	};		
	class LOP_CDF_Infantry_AT : rhs_msv_at {
		_generalMacro = "LOP_CDF_Infantry_AT";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "LOP_CDF";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_CDF_Fatigue_01";
		
		displayName = "Anti Tank";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m", "rhs_weap_rpg7", "Throw", "Put"};
		
		magazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_Rifleman_CDF", "LOP_H_6B27M_CDF", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_Rifleman_CDF", "LOP_H_6B27M_CDF", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_CDF_RPG_Pack";
	};	
	class LOP_CDF_Infantry_AT_Asst : rhs_msv_strelok_rpg_assist {
		_generalMacro = "LOP_CDF_Infantry_AT_Asst";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "LOP_CDF";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_CDF_Fatigue_01";
		
		displayName = "Anti Tank assisant";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_Rifleman_CDF", "LOP_H_6B27M_ess_CDF", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_Rifleman_CDF", "LOP_H_6B27M_ess_CDF", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_CDF_RPG_Pack";
	};	
	class LOP_CDF_Infantry_GL : rhs_msv_grenadier {
		_generalMacro = "LOP_CDF_Infantry_GL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "LOP_CDF";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_CDF_Fatigue_01";
		
		displayName = "Grenadier";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_6Sh92_CDF", "LOP_H_6B27M_ess_CDF", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_6Sh92_CDF", "LOP_H_6B27M_ess_CDF", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_CDF_Infantry_MG : rhs_msv_machinegunner {
		_generalMacro = "LOP_CDF_Infantry_MG";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "LOP_CDF";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_CDF_Fatigue_01";
		
		displayName = "Machinegunner";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_6Sh92_OLV", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_6Sh92_OLV", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_CDF_Fieldpack_PKM";
	};	
	class LOP_CDF_Infantry_MG_Asst : rhs_msv_machinegunner_assistant {
		_generalMacro = "LOP_CDF_Infantry_MG_Asst";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "LOP_CDF";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_CDF_Fatigue_01";
		
		displayName = "Machinegunner assistant";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_Rifleman_CDF", "LOP_H_6B27M_ess_CDF", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_Rifleman_CDF", "LOP_H_6B27M_ess_CDF", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_CDF_Fieldpack_PKM";
	};
	class LOP_CDF_Infantry_Engineer : rhs_msv_engineer {
		_generalMacro = "LOP_CDF_Infantry_Engineer";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "LOP_CDF";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_CDF_Fatigue_01";
		
		displayName = "Engineer";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_6Sh92_CDF", "LOP_H_6B27M_CDF", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_6Sh92_CDF", "LOP_H_6B27M_CDF", "ItemCompass", "ItemWatch", "ItemRadio"};
	};	
	// новые ЧДКЗ
	class LOP_ChDKZ_Infantry_Bardak : I_officer_F {
		_generalMacro = "LOP_ChDKZ_Infantry_Bardak";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
		
		faction = "LOP_ChDKZ";
		vehicleClass = "LOP_Men";
		
		displayName = "Bardak";
		
		uniformClass = "LOP_U_ChDKZ_Fatigue_Bardak";
		
		model = "\lop_faction_chdkz\Ins_Bardak.p3d";
		
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"lop_faction_chdkz\data\Ins_Bardak.rvmat",
				"lop_faction_chdkz\data\W1_ins_bardak.rvmat",
				"lop_faction_chdkz\data\W2_ins_bardak.rvmat"
			};
		};
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit","rhs_acc_ak5","RH_t1"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_ak5","RH_t1"};
		
		weapons[] = {"rhs_weap_ak74m_gp25_npz", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25_npz", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25P", "rhs_VOG25P", "rhs_VOG25P", "rhs_VOG25P", "rhs_VOG25P", "rhs_VOG25P", "rhs_VOG25P", "rhs_VOG25P", "rhs_VOG25P"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25P", "rhs_VOG25P", "rhs_VOG25P", "rhs_VOG25P", "rhs_VOG25P", "rhs_VOG25P", "rhs_VOG25P", "rhs_VOG25P", "rhs_VOG25P"};
	
		linkedItems[] = {"rhs_6sh46", "LOP_H_ChDKZ_Beret", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6sh46", "LOP_H_ChDKZ_Beret", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};
	class LOP_ChDKZ_Infantry_Commander : I_officer_F {
		_generalMacro = "LOP_ChDKZ_Infantry_Commander";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
		
		faction = "LOP_ChDKZ";
		vehicleClass = "LOP_Men";
		
		displayName = "Commander";
		
		uniformClass = "LOP_U_ChDKZ_Fatigue_Commander";
		
		model = "\lop_faction_chdkz\Ins_Commander.p3d";
		
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"lop_faction_chdkz\data\smersh_body_COM.rvmat",
				"lop_faction_chdkz\data\smersh_body_COM_W1.rvmat",
				"lop_faction_chdkz\data\smersh_body_COM_W2.rvmat"
			};
		};
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_makarov_pmm", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_makarov_pmm", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S"};
	
		linkedItems[] = {"rhs_vest_commander", "LOP_H_ChDKZ_Beret", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_vest_commander", "LOP_H_ChDKZ_Beret", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};
	class LOP_ChDKZ_Infantry_TL : I_Soldier_TL_F {
		_generalMacro = "LOP_ChDKZ_Infantry_TL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
		
		faction = "LOP_ChDKZ";
		vehicleClass = "LOP_Men";
		
		displayName = "Team Leader";
		
		uniformClass = "LOP_U_ChDKZ_Fatigue_03";
		
		model = "\lop_faction_chdkz\Ins_Soldier_Com.p3d";
		
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"lop_faction_chdkz\data\smersh_body_COM.rvmat",
				"lop_faction_chdkz\data\smersh_body_COM_W1.rvmat",
				"lop_faction_chdkz\data\smersh_body_COM_W2.rvmat"
			};
		};
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akm", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_vest_commander", "rhs_fieldcap", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_vest_commander", "rhs_fieldcap", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_ChDKZ_Infantry_Corpsman : I_Medic_F {
		_generalMacro = "LOP_ChDKZ_Infantry_Corpsman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
		
		faction = "LOP_ChDKZ";
		vehicleClass = "LOP_Men";
		
		displayName = "Corpsman";
		
		uniformClass = "LOP_U_ChDKZ_Fatigue_01";
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6sh46", "G_Balaclava_blk", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6sh46", "G_Balaclava_blk", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_ChDKZ_FieldPack_Med";
	};
	class LOP_ChDKZ_Infantry_SL : I_Soldier_SL_F {
		_generalMacro = "LOP_ChDKZ_Infantry_SL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
		
		faction = "LOP_ChDKZ";
		vehicleClass = "LOP_Men";
		
		displayName = "Section Leader";
		
		uniformClass = "LOP_U_ChDKZ_Fatigue_01";
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akms", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6sh46", "H_Cap_blk", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6sh46", "H_Cap_blk", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};
	class LOP_ChDKZ_Infantry_Rifleman : I_Soldier_F {
		_generalMacro = "LOP_ChDKZ_Infantry_Rifleman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
		
		faction = "LOP_ChDKZ";
		vehicleClass = "LOP_Men";
		
		displayName = "Rifleman";
		
		uniformClass = "LOP_U_ChDKZ_Fatigue_01";
		
		model = "\lop_faction_chdkz\Ins_Soldier_1.p3d";
		
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"lop_faction_chdkz\data\lifcik_body_1.rvmat",
				"lop_faction_chdkz\data\lifcik_body_1_W1.rvmat",
				"lop_faction_chdkz\data\lifcik_body_1_W2.rvmat"
			};
		};
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6sh46", "G_Balaclava_oli", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6sh46", "G_Balaclava_oli", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_ChDKZ_Infantry_ratelo : LOP_ChDKZ_Infantry_Rifleman {
	displayName = "Ratelo";
	backpack = "tf_mr3000";
	};	
	class LOP_ChDKZ_Infantry_GL : I_Soldier_GL_F {
		_generalMacro = "LOP_ChDKZ_Infantry_GL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
		
		faction = "LOP_ChDKZ";
		vehicleClass = "LOP_Men";
		
		displayName = "Grenadier";
		
		uniformClass = "LOP_U_ChDKZ_Fatigue_04";
		
		model = "\lop_faction_chdkz\Ins_Soldier_G.p3d";
		
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"lop_faction_chdkz\data\smersh_body_G.rvmat",
				"lop_faction_chdkz\data\smersh_body_G_W1.rvmat",
				"lop_faction_chdkz\data\smersh_body_G_W2.rvmat"
			};
		};
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25"};
	
		linkedItems[] = {"rhs_6sh46", "G_Balaclava_oli", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6sh46", "G_Balaclava_oli", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};
	class LOP_ChDKZ_Infantry_AT : I_Soldier_AT_F {
		_generalMacro = "LOP_ChDKZ_Infantry_AT";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
		
		faction = "LOP_ChDKZ";
		vehicleClass = "LOP_Men";
		
		displayName = "Anti Tank";
		
		uniformClass = "LOP_U_ChDKZ_Fatigue_04";
	
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akm", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "rhs_weap_rpg7", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6sh46", "G_Bandanna_oli", "rhs_beanie_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6sh46", "G_Bandanna_oli", "rhs_beanie_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_ChDKZ_RPG_Pack";
	};
	class LOP_ChDKZ_Infantry_MG : I_Soldier_AR_F {
		_generalMacro = "LOP_ChDKZ_Infantry_MG";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
		
		faction = "LOP_ChDKZ";
		vehicleClass = "LOP_Men";
		
		displayName = "Machinegunner";
		
		uniformClass = "LOP_U_ChDKZ_Fatigue_02";
		
		model = "\lop_faction_chdkz\Ins_Soldier_2.p3d";
		
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"lop_faction_chdkz\data\smersh_body_2.rvmat",
				"lop_faction_chdkz\data\smersh_body_2_W1.rvmat",
				"lop_faction_chdkz\data\smersh_body_2_W2.rvmat"
			};
		};
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6sh46", "G_Bandanna_oli", "H_Bandanna_khk", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6sh46", "G_Bandanna_oli", "H_Bandanna_khk", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_ChDKZ_Caryall_PKM";
	};	
	class LOP_ChDKZ_Infantry_Marksman : I_Soldier_F {
		_generalMacro = "LOP_ChDKZ_Infantry_Marksman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
		
		faction = "LOP_ChDKZ";
		vehicleClass = "LOP_Men";
		
		displayName = "Marksman";
		
		uniformClass = "LOP_U_ChDKZ_Fatigue_03";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"LOP_Weap_SVDS", "Throw", "Put"};
		respawnWeapons[] = {"LOP_Weap_SVDS", "Throw", "Put"};
		
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6sh46", "rhs_balaclava", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6sh46", "rhs_balaclava", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_ChDKZ_Sidor_SVD";
	};
	class LOP_ChDKZ_Infantry_Engineer : I_engineer_F {
		_generalMacro = "LOP_ChDKZ_Infantry_Engineer";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
		
		faction = "LOP_ChDKZ";
		vehicleClass = "LOP_Men";
		
		displayName = "Engineer";
		
		uniformClass = "LOP_U_ChDKZ_Fatigue_01";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6sh46", "G_Balaclava_blk", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6sh46", "G_Balaclava_blk", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	class LOP_ChDKZ_Infantry_Crewman : I_crew_F {
		_generalMacro = "LOP_ChDKZ_Infantry_Crewman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
		
		faction = "LOP_ChDKZ";
		vehicleClass = "LOP_Men";
		
		displayName = "Crewman";
		
		uniformClass = "LOP_U_ChDKZ_Fatigue_01";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6sh46", "rhs_tsh4_bala", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6sh46", "rhs_tsh4_bala", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_ChDKZ_Infantry_Pilot : I_helipilot_F {
		_generalMacro = "LOP_ChDKZ_Infantry_Pilot";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
		
		faction = "LOP_ChDKZ";
		vehicleClass = "LOP_Men";
		
		displayName = "Pilot";
		
		uniformClass = "LOP_U_ChDKZ_Fatigue_04";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black"};
	
		linkedItems[] = {"rhs_6sh46", "rhs_gssh18", "G_Bandanna_aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6sh46", "rhs_gssh18", "G_Bandanna_aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};
	// новая ираксая армия
	class LOP_IA_Infantry_TL : I_Soldier_TL_F {
		_generalMacro = "LOP_IA_Infantry_TL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_IA;
		vehicleClass = "LOP_Men";
		displayName = "Team Leader";
		uniformClass = "LOP_U_IA_Fatigue_01";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\lop_faction_ia\data\u_fatigue_01_co.paa"};
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_OLV", "rhs_6b27m_green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_OLV", "rhs_6b27m_green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_IA_Infantry_SL : I_Soldier_SL_F {
		_generalMacro = "LOP_IA_Infantry_SL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_IA;
		vehicleClass = "LOP_Men";
		displayName = "Section Leader";
		uniformClass = "LOP_U_IA_Fatigue_01_slv";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\lop_faction_ia\data\u_fatigue_01_co.paa"};
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_TRI", "LOP_H_6B27M_ess_TRI", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_TRI", "LOP_H_6B27M_ess_TRI", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_IA_Infantry_Corpsman : I_medic_F {
		_generalMacro = "LOP_IA_Infantry_Corpsman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_IA;
		vehicleClass = "LOP_Men";
		displayName = "Corpsman";
		uniformClass = "LOP_U_IA_Fatigue_01";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_OLV" , "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_IA_Kitbag_Med";
	};
	
	class LOP_IA_Infantry_Rifleman : I_Soldier_F {
		_generalMacro = "LOP_IA_Infantry_Rifleman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_IA;
		vehicleClass = "LOP_Men";
		displayName = "Rifleman";
		uniformClass = "LOP_U_IA_Fatigue_01_slv";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_TRI",  "LOP_H_6B27M_TRI", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_TRI", "LOP_H_6B27M_TRI", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	class LOP_IA_Infantry_ratelo : LOP_IA_Infantry_Rifleman {
		displayName = "Ratelo";
		backpack = "tf_rt1523g";
	};
	class LOP_IA_Infantry_AT : I_Soldier_AT_F {
		_generalMacro = "LOP_IA_Infantry_AT";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_IA;
		vehicleClass = "LOP_Men";
		displayName = "Anti tank";
		uniformClass = "LOP_U_IA_Fatigue_01_slv";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "rhs_weap_rpg7", "Throw", "Put"};
		magazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_WDL", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_WDL", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_IA_RPG_Pack";
	};
	
	class LOP_IA_Infantry_AT_Asst : I_Soldier_A_F {
		_generalMacro = "LOP_IA_Infantry_AT";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_IA;
		vehicleClass = "LOP_Men";
		displayName = "Anti tank assistant";
		uniformClass = "LOP_U_IA_Fatigue_01";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_WDL", "LOP_H_6B27M_TRI", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_WDL",  "LOP_H_6B27M_TRI", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_IA_RPG_Pack";
	};
	
	class LOP_IA_Infantry_MG_Asst : I_Soldier_A_F {
		_generalMacro = "LOP_IA_Infantry_MG_Asst";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_IA;
		vehicleClass = "LOP_Men";
		displayName = "Machinegunner assistant";
		uniformClass = "LOP_U_IA_Fatigue_01";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_WDL", "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_WDL", "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_IA_Fieldpack_PKM";
	};
	
	class LOP_IA_Infantry_MG : I_Soldier_AR_F {
		_generalMacro = "LOP_IA_Infantry_MG";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_IA;
		vehicleClass = "LOP_Men";
		displayName = "Machinegunner";
		uniformClass = "LOP_U_IA_Fatigue_01";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_TRI", "LOP_H_6B27M_TRI", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_TRI", "LOP_H_6B27M_TRI", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_IA_Fieldpack_PKM";
	};
	
	class LOP_IA_Infantry_Engineer : I_engineer_F {
		_generalMacro = "LOP_IA_Infantry_Engineer";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_IA;
		vehicleClass = "LOP_Men";
		displayName = "Engineer";
		uniformClass = "LOP_U_IA_Fatigue_01_slv";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_OLV", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_OLV", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class LOP_IA_Infantry_Marksman : I_Soldier_F {
		_generalMacro = "LOP_IA_Infantry_Marksman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_IA;
		vehicleClass = "LOP_Men";
		displayName = "Marksman";
		uniformClass = "LOP_U_IA_Fatigue_01_slv";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"LOP_Weap_SVDS", "Throw", "Put"};
		respawnWeapons[] = {"LOP_Weap_SVDS", "Throw", "Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_OLV", "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_OLV", "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_IA_FalconII_SVD";
	};
	
	class LOP_IA_Infantry_GL : I_Soldier_F {
		_generalMacro = "LOP_IA_Infantry_GL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_IA;
		vehicleClass = "LOP_Men";
		displayName = "Grenadier";
		uniformClass = "LOP_U_IA_Fatigue_01";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE"};
		linkedItems[] = {"LOP_V_CarrierLite_WDL", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_WDL", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_IA_Infantry_Crewman : I_crew_F {
		_generalMacro = "LOP_IA_Infantry_GL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 1;
		faction = LOP_IA;
		vehicleClass = "LOP_Men";
		displayName = "Crewman";
		uniformClass = "LOP_U_IA_Fatigue_01_slv";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "rhs_tsh4", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "rhs_tsh4", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	// новые игил
	class LOP_ISTS_Infantry_TL : I_Soldier_TL_F {
		_generalMacro = "LOP_ISTS_Infantry_TL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		displayName = "Team Leader";
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_6sh46", "LOP_H_Shemag_BLK", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_6sh46", "LOP_H_Shemag_BLK", "ItemMap", "ItemCompass", "ItemWatch"};
		backpack = "";
	};
	
	class LOP_ISTS_Infantry_SL : I_Soldier_SL_F {
		_generalMacro = "LOP_ISTS_Infantry_SL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_ISTS;
		vehicleClass = "LOP_Men";
		displayName = "Section Leader";
		uniformClass = "LOP_U_ISTS_Fatigue_02";
		model = "\lop_faction_am\loc_opfor03.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\lop_faction_ists\data\loc_opfor03_1_co.paa"};
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_6sh46", "H_Cap_blk", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_6sh46", "H_Cap_blk", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch"};
		backpack = "";
	};
	
	class LOP_ISTS_Infantry_Corpsman : I_medic_F {
		_generalMacro = "LOP_ISTS_Infantry_Corpsman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_ISTS;
		vehicleClass = "LOP_Men";
		displayName = "Corpsman";
		uniformClass = "LOP_U_ISTS_Fatigue_03";
		model = "\lop_faction_am\loc_opfor04.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\lop_faction_ists\data\loc_opfor04_1_co.paa"};
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_6sh46", "LOP_H_Shemag_BLK", "ItemCompass"};
		respawnLinkedItems[] = {"LOP_6sh46", "LOP_H_Shemag_BLK", "ItemCompass"};
		backpack = "LOP_ISTS_Sidor_Med";
	};
	
	class LOP_ISTS_Infantry_AR : I_Soldier_AR_F {
		_generalMacro = "LOP_ISTS_Infantry_AR";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_ISTS;
		vehicleClass = "LOP_Men";
		displayName = "Automatic Rifleman";
		uniformClass = "LOP_U_ISTS_Fatigue_04";
		model = "\lop_faction_am\loc_opfor05.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\lop_faction_ists\data\loc_opfor05_1_co.paa"};
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_6sh46", "G_Balaclava_blk", "ItemCompass"};
		respawnLinkedItems[] = {"LOP_6sh46", "G_Balaclava_blk", "ItemCompass"};
		backpack = "LOP_ISTS_Fieldpack_PKM";
	};
	
	class LOP_ISTS_Infantry_AT : I_Soldier_AT_F {
		_generalMacro = "LOP_ISTS_Infantry_AT";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_ISTS;
		vehicleClass = "LOP_Men";
		displayName = "Anti tank (RPG-7)";
		uniformClass = "LOP_U_ISTS_Fatigue_03";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "rhs_weap_rpg7", "Throw", "Put"};
		magazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_6sh46", "LOP_H_Shemag_BLK", "ItemCompass"};
		respawnLinkedItems[] = {"LOP_6sh46", "LOP_H_Shemag_BLK", "ItemCompass"};
		backpack = "LOP_ISTS_RPG_Pack";
	};
	
	class LOP_ISTS_Infantry_Marksman : I_Soldier_F {
		_generalMacro = "LOP_ISTS_Infantry_Marksman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_ISTS;
		vehicleClass = "LOP_Men";
		displayName = "Marksman";
		uniformClass = "LOP_U_ISTS_Fatigue_01";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"LOP_Weap_SVDS", "Throw", "Put"};
		respawnWeapons[] = {"LOP_Weap_SVDS", "Throw", "Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_6sh46", "LOP_H_Shemag_BLK", "ItemCompass"};
		respawnLinkedItems[] = {"LOP_6sh46", "LOP_H_Shemag_BLK", "ItemCompass"};
		backpack = "LOP_ISTS_FalconII_SVD";
	};
	
	class LOP_ISTS_Infantry_Engineer : I_Engineer_F {
		_generalMacro = "LOP_ISTS_Infantry_Engineer";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_ISTS;
		vehicleClass = "LOP_Men";
		displayName = "IED man";
		uniformClass = "LOP_U_ISTS_Fatigue_02";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_6sh46", "LOP_H_Shemag_BLK", "ItemCompass"};
		respawnLinkedItems[] = {"LOP_6sh46", "LOP_H_Shemag_BLK", "ItemCompass"};
		backpack = "";
	};
	
	class LOP_ISTS_Infantry_Rifleman : I_Soldier_F {
		_generalMacro = "LOP_ISTS_Infantry_Rifleman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_ISTS;
		vehicleClass = "LOP_Men";
		displayName = "Rifleman";
		uniformClass = "LOP_U_ISTS_Fatigue_04";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_6sh46", "LOP_H_Shemag_BLK", "ItemCompass"};
		respawnLinkedItems[] = {"LOP_6sh46", "LOP_H_Shemag_BLK", "ItemCompass"};
		backpack = "";
	};
	class LOP_ISTS_Infantry_ratelo : LOP_ISTS_Infantry_Rifleman {
		displayName = "Ratelo";
		backpack = "tf_anprc155";
	};
	class LOP_ISTS_Infantry_GL : I_Soldier_GL_F {
		_generalMacro = "LOP_ISTS_Infantry_GL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_ISTS;
		vehicleClass = "LOP_Men";
		displayName = "Grenadier";
		uniformClass = "LOP_U_ISTS_Fatigue_03";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "TakistaniMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_6sh46", "LOP_H_Shemag_BLK", "ItemCompass"};
		respawnLinkedItems[] = {"LOP_6sh46", "LOP_H_Shemag_BLK", "ItemCompass"};
		backpack = "";
	};
	//новые наемники
	class LOP_PMC_Infantry_TL : I_Soldier_TL_F {
		_generalMacro = "LOP_PMC_Infantry_TL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_PMC;
		vehicleClass = "LOP_Men";
		displayName = "Team Leader";
		uniformClass = "LOP_U_PMC_Fatigue_01";
		model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
		hiddenSelections[] = {"Camo", "Camo2", "insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla5_1_co.paa", "\lop_faction_pmc\data\u_fatigue_01.paa"};
		identityTypes[] = {"LanguageENG_F", "Head_TK", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "GreekMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"LOP_Weap_M4A1_BlockII_Holo", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"LOP_Weap_M4A1_BlockII_Holo", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_TacVestIR_blk", "rhsusf_bowman_cap", "rhs_googles_black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "Binocular"};
		respawnLinkedItems[] = {"V_TacVestIR_blk", "rhsusf_bowman_cap", "rhs_googles_black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "Binocular"};
		backpack = "";
	};
	
	class LOP_PMC_Infantry_SL : I_Soldier_SL_F {
		_generalMacro = "LOP_PMC_Infantry_SL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_PMC;
		vehicleClass = "LOP_Men";
		displayName = "Section Leader";
		uniformClass = "LOP_U_PMC_Fatigue_02";
		model = "\A3\characters_F\civil\c_poor";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\lop_faction_pmc\data\u_fatigue_04.paa"};
		identityTypes[] = {"LanguageENG_F", "Head_TK", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "GreekMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4a1", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_m4a1", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_TAN", "rhsusf_mich_bare_alt_tan", "G_Shades_Black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_TAN", "rhsusf_mich_bare_alt_tan", "G_Shades_Black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_PMC_Infantry_Corpsman : I_medic_F {
		_generalMacro = "LOP_PMC_Infantry_Corpsman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_PMC;
		vehicleClass = "LOP_Men";
		displayName = "Corpsman";
		uniformClass = "LOP_U_PMC_Fatigue_03";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\lop_faction_pmc\data\u_fatigue_03.paa"};
		identityTypes[] = {"LanguageENG_F", "Head_TK", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "GreekMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"LOP_Weap_Mk18_Aco", "Throw", "Put"};
		respawnWeapons[] = {"LOP_Weap_Mk18_Aco", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_TacVest_oli", "H_Cap_headphones", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli", "H_Cap_headphones", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_PMC_Kitbag_Med";
	};
	
	class LOP_PMC_Infantry_Rifleman : I_Soldier_F {
		_generalMacro = "LOP_PMC_Infantry_Rifleman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_PMC;
		vehicleClass = "LOP_Men";
		displayName = "Rifleman";
		uniformClass = "LOP_U_PMC_Fatigue_04";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\lop_faction_pmc\data\u_fatigue_04.paa", "\lop_faction_pmc\data\u_fatigue_02.paa"};
		identityTypes[] = {"LanguageENG_F", "Head_TK", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "GreekMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_OLV", "H_Bandanna_sgg", "G_Bandanna_oli", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_OLV", "H_Bandanna_sgg", "G_Bandanna_oli", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_PMC_Infantry_AT : I_Soldier_AT_F {
		_generalMacro = "LOP_PMC_Infantry_AT";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_PMC;
		vehicleClass = "LOP_Men";
		displayName = "Anti tank";
		uniformClass = "LOP_U_PMC_Fatigue_03";
		identityTypes[] = {"LanguageENG_F", "Head_TK", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "GreekMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_mk18", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_mk18", "rhs_weap_rpg7", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_PlateCarrier1_blk", "rhsusf_Bowman", "G_Bandanna_shades", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk", "rhsusf_Bowman", "G_Bandanna_shades", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_RACS_RPG_Pack";
	};
	
	class LOP_PMC_Infantry_AT_Asst : I_Soldier_A_F {
		_generalMacro = "LOP_PMC_Infantry_AT";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_PMC;
		vehicleClass = "LOP_Men";
		displayName = "Anti tank assistant";
		uniformClass = "LOP_U_PMC_Fatigue_04";
		identityTypes[] = {"LanguageENG_F", "Head_TK", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "GreekMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_TacVest_khk", "rhsusf_mich_bare_alt", "G_Bandanna_beast", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk", "rhsusf_mich_bare_alt", "G_Bandanna_beast", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_RACS_RPG_Pack";
	};
	
	class LOP_PMC_Infantry_MG_Asst : I_Soldier_A_F {
		_generalMacro = "LOP_PMC_Infantry_MG_Asst";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_PMC;
		vehicleClass = "LOP_Men";
		displayName = "Machinegunner assistant";
		uniformClass = "LOP_U_PMC_Fatigue_02";
		identityTypes[] = {"LanguageENG_F", "Head_TK", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "GreekMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4a1_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_TacVest_blk", "H_Bandanna_gry", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_blk", "H_Bandanna_gry", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_PMC_Kitbag_MG";
	};
	
	class LOP_PMC_Infantry_MG : I_Soldier_AR_F {
		_generalMacro = "LOP_PMC_Infantry_MG";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_PMC;
		vehicleClass = "LOP_Men";
		displayName = "Machinegunner";
		uniformClass = "LOP_U_PMC_Fatigue_01";
		identityTypes[] = {"LanguageENG_F", "Head_TK", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "GreekMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m240B", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m240B", "Throw", "Put"};
		magazines[] = {"rhsusf_100Rnd_762x51", "rhsusf_100Rnd_762x51", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhsusf_100Rnd_762x51", "rhsusf_100Rnd_762x51", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_PlateCarrier_Kerry", "H_Cap_headphones", "G_Bandanna_tan", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrier_Kerry", "H_Cap_headphones", "G_Bandanna_tan", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_PMC_Kitbag_MG";
	};
	
	class LOP_PMC_Infantry_Engineer : I_engineer_F {
		_generalMacro = "LOP_PMC_Infantry_Engineer";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_PMC;
		vehicleClass = "LOP_Men";
		displayName = "Engineer";
		uniformClass = "LOP_U_PMC_Fatigue_02";
		identityTypes[] = {"LanguageENG_F", "Head_TK", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "GreekMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4a1_blockII_grip2_KAC", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4a1_blockII_grip2_KAC", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_TAN", "LOP_H_Pakol", "rhs_googles_black", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_TAN", "LOP_H_Pakol", "rhs_googles_black", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class LOP_PMC_Infantry_Marksman : I_Soldier_F {
		_generalMacro = "LOP_PMC_Infantry_Marksman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_PMC;
		vehicleClass = "LOP_Men";
		displayName = "Marksman";
		uniformClass = "LOP_U_PMC_Fatigue_02";
		identityTypes[] = {"LanguageENG_F", "Head_TK", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "GreekMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"LOP_Weap_Mk14_Sos", "Throw", "Put"};
		respawnWeapons[] = {"LOP_Weap_Mk14_Sos", "Throw", "Put"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_TacVestIR_blk", "rhsusf_Bowman", "G_Bandanna_aviator", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVestIR_blk", "rhsusf_Bowman", "G_Bandanna_aviator", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_PMC_FalconII_MK14";
	};
	
	class LOP_PMC_Infantry_GL : I_Soldier_F {
		_generalMacro = "LOP_PMC_Infantry_GL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_PMC;
		vehicleClass = "LOP_Men";
		displayName = "Grenadier";
		uniformClass = "LOP_U_PMC_Fatigue_04";
		identityTypes[] = {"LanguageENG_F", "Head_TK", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "GreekMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4a1_carryhandle_m203", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_m203", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE"};
		linkedItems[] = {"LOP_V_CarrierLite_OLV", "rhsusf_mich_bare_alt", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_OLV", "rhsusf_mich_bare_alt", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_PMC_Infantry_Crewman : I_crew_F {
		_generalMacro = "LOP_PMC_Infantry_Crewman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_PMC;
		vehicleClass = "LOP_Men";
		displayName = "Crewman";
		uniformClass = "LOP_U_PMC_Fatigue_02";
		identityTypes[] = {"LanguageENG_F", "Head_TK", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "GreekMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_mk18", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_mk18", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_I_G_resistanceLeader_F", "H_HelmetCrew_I", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F", "H_HelmetCrew_I", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_PMC_Infantry_Pilot : I_helipilot_F {
		_generalMacro = "LOP_PMC_Infantry_Pilot";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_PMC;
		vehicleClass = "LOP_Men";
		displayName = "Pilot";
		uniformClass = "LOP_U_PMC_Fatigue_02";
		identityTypes[] = {"LanguageENG_F", "Head_TK", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "GreekMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_mk18", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_mk18", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "SmokeShell", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_TacVest_oli", "H_PilotHelmetHeli_O", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli", "H_PilotHelmetHeli_O", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	class C_Marshal_F;	// External class reference
	
	class LOP_PMC_Infantry_VIP : C_Marshal_F {
		_generalMacro = "LOP_PMC_Infantry_VIP";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_PMC;
		vehicleClass = "LOP_Men";
		displayName = VIP;
		uniformClass = "U_Marshal";
		identityTypes[] = {"LanguageENG_F", "Head_TK", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "GreekMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"Throw", "Put"};
		respawnWeapons[] = {"Throw", "Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"LOP_V_Carrier_BLK", "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Carrier_BLK", "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch"};
		backpack = "";
	};
	class C_journalist_F;	// External class reference
	
	class LOP_PMC_Infantry_Press : C_journalist_F {
		_generalMacro = "LOP_PMC_Infantry_Press";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_PMC;
		vehicleClass = "LOP_Men";
		displayName = "Press";
		uniformClass = "U_C_Journalist";
		identityTypes[] = {"LanguageENG_F", "Head_TK", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "GreekMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"Throw", "Put"};
		respawnWeapons[] = {"Throw", "Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_Press_F", "rhsusf_mich_bare_alt", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_Press_F", "rhsusf_mich_bare_alt", "ItemMap", "ItemCompass", "ItemWatch"};
		backpack = "";
	};
	class C_man_p_fugitive_F;	// External class reference
	
	class LOP_PMC_Infantry_Cam : C_man_p_fugitive_F {
		_generalMacro = "LOP_PMC_Infantry_Cam";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 2;
		faction = LOP_PMC;
		vehicleClass = "LOP_Men";
		displayName = "Cam operator";
		uniformClass = "U_C_Poor_1";
		identityTypes[] = {"LanguageENG_F", "Head_TK", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "GreekMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"Throw", "Put"};
		respawnWeapons[] = {"Throw", "Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_Press_F", "rhsusf_mich_bare_alt_tan", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_Press_F", "rhsusf_mich_bare_alt_tan", "ItemMap", "ItemCompass", "ItemWatch"};
		backpack = "";
	};
	// новые РАКС
	class LOP_RACS_Infantry_TL : I_Soldier_TL_F {
		_generalMacro = "LOP_RACS_Infantry_TL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Team Leader";
		
		uniformClass = "LOP_U_RACS_Fatigue_01";
		
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\lop_faction_racs\data\u_fatigue_01_co.paa"};
		
		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierRig_OLV", "LOP_H_6B27M_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_OLV", "LOP_H_6B27M_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};
	class LOP_RACS_Infantry_SL : I_Soldier_SL_F {
		_generalMacro = "LOP_RACS_Infantry_SL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Section Leader";
		
		uniformClass = "LOP_U_RACS_Fatigue_01_slv";
		
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\lop_faction_racs\data\u_fatigue_01_co.paa"};
		
		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierRig_TAN", "LOP_H_6B27M_ess_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_TAN", "LOP_H_6B27M_ess_RACS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_RACS_Infantry_Corpsman : I_Medic_F {
		_generalMacro = "LOP_RACS_Infantry_Corpsman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Corpsman";
		
		uniformClass = "LOP_U_RACS_Fatigue_01";
		
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_RACS_Kitbag_Med";
	};
	class LOP_RACS_Infantry_Rifleman : I_Soldier_F {
		_generalMacro = "LOP_RACS_Infantry_Rifleman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Rifleman";
		
		uniformClass = "LOP_U_RACS_Fatigue_01_slv";
		
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierLite_TAN", "LOP_H_6B27M_RACS", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_TAN", "LOP_H_6B27M_RACS", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_RACS_Infantry_Ratelo : LOP_RACS_Infantry_Rifleman {
		displayName = "Ratelo";
		backpack = "tf_mr3000";
	};
	class LOP_RACS_Infantry_AT : I_Soldier_AT_F {
		_generalMacro = "LOP_RACS_Infantry_AT";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Anti tank";
		
		uniformClass = "LOP_U_RACS_Fatigue_01_slv";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "rhs_weap_rpg7", "Throw", "Put"};
		
		magazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierLite_WDL", "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_WDL", "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_RACS_RPG_Pack";
	};	
	class LOP_RACS_Infantry_AT_Asst : I_Soldier_A_F {
		_generalMacro = "LOP_RACS_Infantry_AT";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Anti tank assistant";
		
		uniformClass = "LOP_U_RACS_Fatigue_01";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierLite_WDL", "LOP_H_6B27M_RACS", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_WDL", "LOP_H_6B27M_RACS", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_RACS_RPG_Pack";
	};	
	class LOP_RACS_Infantry_MG_Asst : I_Soldier_A_F {
		_generalMacro = "LOP_RACS_Infantry_MG_Asst";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Machinegunner assistant";
		
		uniformClass = "LOP_U_RACS_Fatigue_01";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_grip", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierRig_WDL", "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_WDL", "LOP_H_6B27M_WDL", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_RACS_Fieldpack_PKM";
	};
	class LOP_RACS_Infantry_MG : I_Soldier_AR_F {
		_generalMacro = "LOP_RACS_Infantry_MG";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Machinegunner";
		
		uniformClass = "LOP_U_RACS_Fatigue_01";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierRig_OLV", "LOP_H_6B27M_RACS", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_OLV", "LOP_H_6B27M_RACS", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_RACS_Fieldpack_PKM";
	};	
	class LOP_RACS_Infantry_Engineer : I_engineer_F {
		_generalMacro = "LOP_RACS_Infantry_Engineer";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Engineer";
		
		uniformClass = "LOP_U_RACS_Fatigue_01_slv";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierRig_WDL", "LOP_H_6B27M_RACS", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_WDL", "LOP_H_6B27M_RACS", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	class LOP_RACS_Infantry_Marksman : I_Soldier_F {
		_generalMacro = "LOP_RACS_Infantry_Marksman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Marksman";
		
		uniformClass = "LOP_U_RACS_Fatigue_01_slv";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"LOP_Weap_SVDS", "Throw", "Put"};
		respawnWeapons[] = {"LOP_Weap_SVDS", "Throw", "Put"};
		
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_CarrierRig_TAN", "LOP_H_Booniehat_RACS", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_TAN", "LOP_H_Booniehat_RACS", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_RACS_FalconII_SVD";
	};	
	class LOP_RACS_Infantry_GL : I_Soldier_F {
		_generalMacro = "LOP_RACS_Infantry_GL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Grenadier";
		
		uniformClass = "LOP_U_RACS_Fatigue_01";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE"};
	
		linkedItems[] = {"LOP_V_CarrierLite_WDL", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_WDL", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_RACS_Infantry_Crewman : I_Crew_F {
		_generalMacro = "LOP_RACS_Infantry_Crewman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Crewman";
		
		uniformClass = "LOP_U_RACS_Fatigue_01_slv";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_Carrier_OLV", "rhs_tsh4", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "rhs_tsh4", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_RACS_Infantry_Pilot : I_Crew_F {
		_generalMacro = "LOP_RACS_Infantry_Pilot";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
	
		faction = "LOP_RACS";
		vehicleClass = "LOP_Men";
		
		displayName = "Crewman";
		
		uniformClass = "LOP_U_RACS_Fatigue_01_slv";

		identityTypes[]=
		{
			"LanguageGRE_F", 
			"Head_TK", 
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="GreekMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"LOP_V_Carrier_TAN", "rhs_zsh7a_mike", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_TAN", "rhs_zsh7a_mike", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};
	// новые СЛА
	class LOP_SLA_Infantry_Rifleman : rhs_msv_rifleman {
		_generalMacro = "LOP_SLA_Infantry_Rifleman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 0;
		faction = LOP_SLA;
		vehicleClass = "LOP_Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Rifleman";
		hiddenSelections[] = {"camo1", "camo2", "camob", "insignia"};
		hiddenSelectionsTextures[] = {"lop_faction_sla\data\u_fatigue_01_co.paa", "", "", ""};
		identityTypes[] = {"LanguageRUS", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6Sh92_OLV", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_OLV", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	class LOP_SLA_Infantry_ratelo : LOP_SLA_Infantry_Rifleman {
		displayName = "Ratelo";
		backpack = "tf_rt1523g";
	};
	class LOP_SLA_Infantry_Pilot : rhs_msv_rifleman {
		_generalMacro = "LOP_SLA_Infantry_Pilot";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 0;
		faction = LOP_SLA;
		vehicleClass = "LOP_Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Pilot";
		hiddenSelections[] = {"camo1", "camo2", "camob", "insignia"};
		hiddenSelectionsTextures[] = {"lop_faction_sla\data\cdf_fatigue_co.paa", "", ""};
		identityTypes[] = {"LanguageRUS", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};
		textSingular = "pilot";
		textPlural = "pilots";
		nameSound = "veh_infantry_pilot_s";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6Sh92_OLV", "rhs_zsh7a_mike", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_OLV", "rhs_zsh7a_mike", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_SLA_Infantry_TL : rhs_msv_sergeant {
		_generalMacro = "LOP_SLA_Infantry_TL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 0;
		faction = LOP_SLA;
		vehicleClass = "LOP_Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Team Leader";
		identityTypes[] = {"LanguageRUS", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms_gp25", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_akms_gp25", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6Sh92_Radio_OLV", "LOP_H_SSh68Helmet_BLK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_Radio_OLV", "LOP_H_SSh68Helmet_BLK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_SLA_Infantry_SL : rhs_msv_junior_sergeant {
		_generalMacro = "LOP_SLA_Infantry_SL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 0;
		faction = LOP_SLA;
		vehicleClass = "LOP_Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Section Leader";
		identityTypes[] = {"LanguageRUS", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6Sh92_OLV", "LOP_H_SSh68Helmet_OLV", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_OLV", "LOP_H_SSh68Helmet_OLV", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_SLA_Infantry_Crewman : rhs_msv_crew {
		_generalMacro = "LOP_SLA_Infantry_Crewman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 0;
		faction = LOP_SLA;
		vehicleClass = "LOP_Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Crewman";
		identityTypes[] = {"LanguageRUS", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6Sh92_Radio_OLV", "rhs_tsh4", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_Radio_OLV", "rhs_tsh4", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_SLA_Infantry_Corpsman : rhs_msv_medic {
		_generalMacro = "LOP_SLA_Infantry_Corpsman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 0;
		faction = LOP_SLA;
		vehicleClass = "LOP_Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Corpsman";
		identityTypes[] = {"LanguageRUS", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6Sh92_OLV", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_OLV", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_SLA_Kitbag_Med";
	};
	
	class LOP_SLA_Infantry_Officer : rhs_msv_officer {
		_generalMacro = "LOP_SLA_Infantry_Officer";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 0;
		faction = LOP_SLA;
		vehicleClass = "LOP_Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Officer";
		identityTypes[] = {"LanguageRUS", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_makarov_pmm", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_makarov_pmm", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S"};
		respawnMagazines[] = {"rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S"};
		linkedItems[] = {"rhs_vest_commander", "LOP_H_SLA_Beret", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_vest_commander", "LOP_H_SLA_Beret", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_SLA_Infantry_Marksman : rhs_msv_marksman {
		_generalMacro = "LOP_SLA_Infantry_Marksman";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 0;
		faction = LOP_SLA;
		vehicleClass = "LOP_Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Marksman";
		identityTypes[] = {"LanguageRUS", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"LOP_Weap_SVDS", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"LOP_Weap_SVDS", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6Sh92_Radio_OLV", "H_Bandanna_khk", "G_Bandanna_oli", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_Radio_OLV", "H_Bandanna_khk", "G_Bandanna_oli", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_SLA_Sidor_SVD";
	};
	
	class LOP_SLA_Infantry_AT : rhs_msv_at {
		_generalMacro = "LOP_SLA_Infantry_AT";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 0;
		faction = LOP_SLA;
		vehicleClass = "LOP_Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Anti Tank";
		identityTypes[] = {"LanguageRUS", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "rhs_weap_rpg7", "Throw", "Put"};
		magazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6Sh92_OLV", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_OLV", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_SLA_RPG_Pack";
	};
	
	class LOP_SLA_Infantry_AA : rhs_msv_aa {
		_generalMacro = "LOP_SLA_Infantry_AA";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 0;
		faction = LOP_SLA;
		vehicleClass = "LOP_Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Anti Aircraft";
		identityTypes[] = {"LanguageRUS", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "rhs_weap_igla", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "rhs_weap_igla", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6Sh92_OLV", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_OLV", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_SLA_AA_Pack";
	};
	
	class LOP_SLA_Infantry_AT_Asst : rhs_msv_strelok_rpg_assist {
		_generalMacro = "LOP_SLA_Infantry_AT_Asst";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 0;
		faction = LOP_SLA;
		vehicleClass = "LOP_Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Anti Tank assisant";
		identityTypes[] = {"LanguageRUS", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6Sh92_OLV", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_OLV", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_SLA_RPG_Pack";
	};
	
	class LOP_SLA_Infantry_GL : rhs_msv_grenadier {
		_generalMacro = "LOP_SLA_Infantry_GL";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 0;
		faction = LOP_SLA;
		vehicleClass = "LOP_Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Grenadier";
		identityTypes[] = {"LanguageRUS", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm_gp25", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_akm_gp25", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6Sh92_Vog_OLV", "LOP_H_SSh68Helmet_BLK", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_Vog_OLV", "LOP_H_SSh68Helmet_BLK", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "";
	};
	
	class LOP_SLA_Infantry_MG : rhs_msv_machinegunner {
		_generalMacro = "LOP_SLA_Infantry_MG";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 0;
		faction = LOP_SLA;
		vehicleClass = "LOP_Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Machinegunner";
		identityTypes[] = {"LanguageRUS", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6Sh92_OLV", "LOP_H_SSh68Helmet_BLK", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_OLV", "LOP_H_SSh68Helmet_BLK", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_SLA_Fieldpack_PKM";
	};
	
	class LOP_SLA_Infantry_MG_Asst : rhs_msv_machinegunner_assistant {
		_generalMacro = "LOP_SLA_Infantry_MG_Asst";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 0;
		faction = LOP_SLA;
		vehicleClass = "LOP_Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Machinegunner assistant";
		identityTypes[] = {"LanguageRUS", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6Sh92_OLV", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_OLV", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "LOP_SLA_Fieldpack_PKM";
	};
	
	class LOP_SLA_Infantry_Engineer : rhs_msv_engineer {
		_generalMacro = "LOP_SLA_Infantry_Engineer";
		author = $STR_LOP_FULL_NAME;
		scope = 2;
		side = 0;
		faction = LOP_SLA;
		vehicleClass = "LOP_Men";
		uniformClass = "LOP_U_SLA_Fatigue_01";
		displayName = "Engineer";
		identityTypes[] = {"LanguageRUS", "Head_Euro", "Head_Asian", "G_IRAN_default"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		linkedItems[] = {"LOP_V_6Sh92_OLV", "LOP_H_SSh68Helmet_BLK", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_OLV", "LOP_H_SSh68Helmet_BLK", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	// новые националисты
	class LOP_UA_Infantry_TL : I_Soldier_TL_F {
		_generalMacro = "LOP_UA_Infantry_TL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
		
		faction = "LOP_UA";
		vehicleClass = "LOP_Men";
		
		displayName = "Team Leader";
		
		uniformClass = "LOP_U_UA_Fatigue_01";
		
		model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\lop_faction_ua\data\u_fatigue_01.paa"};
	
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akm", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_Chestrig_VSR", "LOP_H_SSh68Helmet_OLV", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_VSR", "LOP_H_SSh68Helmet_OLV", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};
	class LOP_UA_Infantry_SL : I_Soldier_SL_F {
		_generalMacro = "LOP_UA_Infantry_SL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
		
		faction = "LOP_UA";
		vehicleClass = "LOP_Men";
		
		displayName = "Section Leader";
		
		uniformClass = "LOP_U_UA_Fatigue_02";
		
		model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\lop_faction_ua\data\u_fatigue_02.paa"};
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akms", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_Chestrig_VSR", "LOP_H_SSh68Helmet_BLK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_VSR", "LOP_H_SSh68Helmet_BLK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};
	class LOP_UA_Infantry_Corpsman : I_medic_F {
		_generalMacro = "LOP_UA_Infantry_Corpsman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
		
		faction = "LOP_UA";
		vehicleClass = "LOP_Men";
		
		displayName = "Corpsman";
		
		uniformClass = "LOP_U_UA_Fatigue_04";
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_Chestrig_Kamysh", "LOP_H_SSh68Helmet_BLK", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_Kamysh", "LOP_H_SSh68Helmet_BLK", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_UA_Fieldpack_Med";
	};
	class LOP_UA_Officer : I_officer_F {
		_generalMacro = "LOP_UA_Officer";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
		
		faction = "LOP_UA";
		vehicleClass = "LOP_Men";
		
		displayName = "Officer";
		
		uniformClass = "LOP_U_UA_Fatigue_03";
		
				
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\lop_faction_ua\data\u_fatigue_03.paa"};
		
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akm", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"V_Rangemaster_belt", "H_Cap_grn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_Rangemaster_belt", "H_Cap_grn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};
	
	class LOP_UA_Infantry_MG : I_Soldier_AR_F {
		_generalMacro = "LOP_UA_Infantry_MG";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
		
		faction = "LOP_UA";
		vehicleClass = "LOP_Men";
		
		displayName = "Machinegunner (PKM)";
		
		uniformClass = "LOP_U_UA_Fatigue_04";
		
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\lop_faction_ua\data\u_fatigue_04.paa"};
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_Chestrig_Kamysh", "LOP_H_SSh68Helmet_BLK", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_Kamysh", "LOP_H_SSh68Helmet_BLK", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_UA_Fieldpack_PKM";
	};
	class LOP_UA_Infantry_MG_Asst : I_Soldier_A_F {
		_generalMacro = "LOP_UA_Infantry_MG_Asst";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
		
		faction = "LOP_UA";
		vehicleClass = "LOP_Men";
		
		displayName = "Ammo bearer MG";
		
		uniformClass = "LOP_U_UA_Fatigue_02";
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_Chestrig_Kamysh", "LOP_H_SSh68Helmet_BLK", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_Kamysh", "LOP_H_SSh68Helmet_BLK", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_UA_Fieldpack_PKM";
	};
	class LOP_UA_Infantry_AT : I_Soldier_AT_F {
		_generalMacro = "LOP_UA_Infantry_AT";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
		
		faction = "LOP_UA";
		vehicleClass = "LOP_Men";
		
		displayName = "Anti tank (RPG-7)";
		
		uniformClass = "LOP_U_UA_Fatigue_04";
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akm", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "rhs_weap_rpg7", "Throw", "Put"};
		
		magazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_Chestrig_VSR", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_VSR", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_UA_RPG_Pack";
	};
	class LOP_UA_Infantry_AT_Asst : I_Soldier_A_F {
		_generalMacro = "LOP_UA_Infantry_AT_Asst";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
		
		faction = "LOP_UA";
		vehicleClass = "LOP_Men";
		
		displayName = "Ammo bearer AT";
		
		uniformClass = "LOP_U_UA_Fatigue_04";
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_Chestrig_VSR", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_VSR", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_UA_RPG_Pack";
	};
	class LOP_UA_Infantry_Marksman : I_Soldier_F {
		_generalMacro = "LOP_UA_Infantry_Marksman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
		
		faction = "LOP_UA";
		vehicleClass = "LOP_Men";
		
		displayName = "Marksman (SVD)";
		
		uniformClass = "LOP_U_UA_Fatigue_01";
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"LOP_Weap_SVDS", "Throw", "Put"};
		respawnWeapons[] = {"LOP_Weap_SVDS", "Throw", "Put"};
		
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_Chestrig_VSR", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_VSR", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_UA_FalconII_SVD";
	};
	class LOP_UA_Infantry_Engineer : I_engineer_F {
		_generalMacro = "LOP_UA_Infantry_Engineer";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
		
		faction = "LOP_UA";
		vehicleClass = "LOP_Men";
		
		displayName = "Engineer";
		
		uniformClass = "LOP_U_UA_Fatigue_04";
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_Chestrig_Kamysh", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_Kamysh", "LOP_H_SSh68Helmet_OLV", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};
	class LOP_UA_Infantry_Rifleman : I_Soldier_F {
		_generalMacro = "LOP_UA_Infantry_Rifleman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
		
		faction = "LOP_UA";
		vehicleClass = "LOP_Men";
		
		displayName = "Rifleman (AKMS)";
		
		uniformClass = "LOP_U_UA_Fatigue_02";
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_Chestrig_Kamysh", "LOP_H_SSh68Helmet_BLK", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_Kamysh", "LOP_H_SSh68Helmet_BLK", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_UA_Infantry_ratelo : LOP_UA_Infantry_Rifleman {
		displayName = "Ratelo";
		backpack = "tf_anprc155";
	};	
	class LOP_UA_Infantry_GL : I_Soldier_GL_F {
		_generalMacro = "LOP_UA_Infantry_GL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
		
		faction = "LOP_UA";
		vehicleClass = "LOP_Men";
		
		displayName = "Grenadier (AKM GL)";
		
		uniformClass = "LOP_U_UA_Fatigue_04";
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25"};
	
		linkedItems[] = {"LOP_V_Chestrig_Kamysh", "LOP_H_SSh68Helmet_BLK", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_Kamysh", "LOP_H_SSh68Helmet_BLK", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};
	class LOP_UA_Infantry_Crewman : I_crew_F {
		_generalMacro = "LOP_UA_Infantry_Crewman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
		
		faction = "LOP_UA";
		vehicleClass = "LOP_Men";
		
		displayName = "Crewman";
		
		uniformClass = "LOP_U_UA_Fatigue_02";
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
	
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_Chestrig_Kamysh", "rhs_tsh4", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_Kamysh", "rhs_tsh4", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};
	class LOP_UA_Infantry_Pilot : I_helipilot_F {
		_generalMacro = "LOP_UA_Infantry_Pilot";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 2;
		
		faction = "LOP_UA";
		vehicleClass = "LOP_Men";
		
		displayName = "Pilot";
		
		uniformClass = "LOP_U_UA_Fatigue_01";
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames="RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_Chestrig_Kamysh", "rhs_gssh18", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_Kamysh", "rhs_gssh18", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};
	// новые сепрары
	class LOP_US_Infantry_Rifleman : rhs_msv_rifleman {
		_generalMacro = "LOP_US_Infantry_Rifleman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_01";
		
		displayName = "Rifleman";
		
		hiddenSelections[] = {"camo1", "camo2", "camob", "insignia"};
		hiddenSelectionsTextures[] = {"lop_faction_us\data\u_fatigue_01_co.paa", "", ""};
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak103_dtk", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak103_dtk", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6b13", "rhs_6b26_ess_bala", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b13", "rhs_6b26_ess_bala", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_US_Infantry_ratelo : LOP_US_Infantry_Rifleman {
		displayName = "Ratelo";
		backpack = "tf_mr3000";
		};	
	class LOP_US_Infantry_TL : rhs_msv_sergeant {
		_generalMacro = "LOP_US_Infantry_TL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_02";
		
		displayName = "Team Leader";
		
		hiddenSelections[] = {"camo1", "camo2", "camob", "insignia"};
		hiddenSelectionsTextures[] = {"lop_faction_us\data\u_fatigue_02_co.paa", "", ""};
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_gp25", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6b23_digi_6sh92_radio", "rhs_6b28_green", "G_Balaclava_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_radio", "rhs_6b28_green", "G_Balaclava_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};		
	class LOP_US_Infantry_SL : rhs_msv_junior_sergeant {
		_generalMacro = "LOP_US_Infantry_SL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_03";
		
		displayName = "Section Leader";

		hiddenSelections[] = {"camo1", "camo2", "camob", "insignia"};
		hiddenSelectionsTextures[] = {"lop_faction_us\data\u_fatigue_03_co.paa", "", ""};
		
		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_2mag", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_2mag", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6b23_digi_sniper", "rhs_6b26_green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_digi_sniper", "rhs_6b26_green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};		
	class LOP_US_Infantry_Crewman : rhs_msv_crew {
		_generalMacro = "LOP_US_Infantry_Crewman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_03";
		
		displayName = "Crewman";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_folded", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_folded", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6Sh92_OLV", "rhs_tsh4", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6Sh92_OLV", "rhs_tsh4", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_US_Infantry_Corpsman : rhs_msv_medic {
		_generalMacro = "LOP_US_Infantry_Corpsman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_04";
		
		hiddenSelections[] = {"camo1", "camo2", "camob", "insignia"};
		hiddenSelectionsTextures[] = {"lop_faction_us\data\u_fatigue_04_co.paa", "", ""};
		
		displayName = "Corpsman";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_6Sh92_OLV", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_6Sh92_OLV", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_US_Kitbag_Med";
	};	
	class LOP_US_Infantry_Officer : rhs_msv_officer {
		_generalMacro = "LOP_US_Infantry_Officer";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_01";
		
		displayName = "Officer";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_folded", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_folded", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase", "rhs_6b27m_ml_ess", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase", "rhs_6b27m_ml_ess", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_US_Infantry_Marksman : rhs_msv_marksman {
		_generalMacro = "LOP_US_Infantry_Marksman";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_04";
		
		displayName = "Marksman";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"LOP_Weap_SVDS", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"LOP_Weap_SVDS", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6b23_rifleman", "rhs_6b27m", "G_Bandanna_oli", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_rifleman", "rhs_6b27m", "G_Bandanna_oli", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_US_Sidor_SVD";
	};	
	class LOP_US_Infantry_AA : rhs_msv_at {
		_generalMacro = "LOP_US_Infantry_AA";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_03";
		
		displayName = "Anti Aircraft";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_2mag", "rhs_weap_igla", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_2mag", "rhs_weap_igla", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_Rifleman_OLV", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_Rifleman_OLV", "rhs_6b27m_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_US_AA_Pack";
	};		
	class LOP_US_Infantry_AT : rhs_msv_at {
		_generalMacro = "LOP_US_Infantry_AT";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "rhs_uniform_flora_patchless";
		
		displayName = "Anti Tank";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m", "rhs_weap_rpg7", "Throw", "Put"};
		
		magazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6b13_Flora", "rhs_6b27m", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b13_Flora", "rhs_6b27m", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_US_RPG_Pack";
	};	
	class LOP_US_Infantry_AT_Asst : rhs_msv_strelok_rpg_assist {
		_generalMacro = "LOP_US_Infantry_AT_Asst";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "rhs_uniform_flora_patchless";
		
		displayName = "Anti Tank assisant";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6b13_EMR", "rhs_6b26_ess_bala_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b13_EMR", "rhs_6b26_ess_bala_green", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_US_RPG_Pack";
	};	
	class LOP_US_Infantry_GL : rhs_msv_grenadier {
		_generalMacro = "LOP_US_Infantry_GL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "rhs_uniform_flora_patchless";
		
		displayName = "Grenadier";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_gp25", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25", "Throw", "Put", "Binocular"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6b23_6sh92", "rhs_6b26_bala", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_6sh92", "rhs_6b26_bala", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};	
	class LOP_US_Infantry_MG : rhs_msv_machinegunner {
		_generalMacro = "LOP_US_Infantry_MG";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_03";
		
		displayName = "Machinegunner";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"rhs_6b23_rifleman", "rhs_6b26_bala", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_rifleman", "rhs_6b26_bala", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_US_Fieldpack_PKM";
	};	
	class LOP_US_Infantry_MG_Asst : rhs_msv_machinegunner_assistant {
		_generalMacro = "LOP_US_Infantry_MG_Asst";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_03";
		
		displayName = "Machinegunner assistant";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_Rifleman_OLV", "rhs_6b27m_green_ess", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_Rifleman_OLV", "rhs_6b27m_green_ess", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "LOP_US_Fieldpack_PKM";
	};
	class LOP_US_Infantry_Engineer : rhs_msv_engineer {
		_generalMacro = "LOP_US_Infantry_Engineer";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 0;
	
		faction = "LOP_US";
		vehicleClass = "LOP_Men";
		
		uniformClass = "LOP_U_US_Fatigue_04";
		
		displayName = "Engineer";

		identityTypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"Head_Asian",
			"G_IRAN_default"
		};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"rhs_weap_ak74m", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m", "Throw", "Put"};
		
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_mag_rdg2_white", "rhs_mag_rdg2_black", "rhs_mag_rgd5", "rhs_mag_rgd5"};
	
		linkedItems[] = {"LOP_V_6B23_6Sh92_OLV", "rhs_6b27m_digi", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_6B23_6Sh92_OLV", "rhs_6b27m_digi", "ItemCompass", "ItemWatch", "ItemRadio"};
	};	
	// отсуюда старые классы
	class LOP_AA_Soldier_TL : LOP_AA_Infantry_TL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_WDL", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch", "ItemRadio", "ItemMap", "ItemSMGR"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_WDL", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch", "ItemRadio", "ItemMap", "ItemSMGR"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AA_Soldier_SL : LOP_AA_Infantry_SL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_PASGTHelmet_cover_WDL","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_PASGTHelmet_cover_WDL","ItemCompass", "ItemWatch","ItemRadio"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AA_Soldier_Medic : LOP_AA_Infantry_Corpsman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_KHK", "LOP_H_PASGTHelmet_TAN","ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_KHK", "LOP_H_PASGTHelmet_TAN","ItemCompass", "ItemWatch","ItemRadio"};
	};
	
	class LOP_AA_Officer : I_officer_F {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_vest_commander", "H_Beret_blk","ItemCompass", "ItemWatch", "ItemMap", "ItemSMGR","tf_anprc152"};
		respawnLinkedItems[] = {"rhs_vest_commander", "H_Beret_blk","ItemCompass", "ItemWatch","ItemMap", "ItemSMGR","tf_anprc152"};
		backpack = "tf_rt1523g_green";
	};
	
	class LOP_AA_Soldier_AR : LOP_AA_Infantry_MG {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class LOP_AA_Soldier_A_AR : LOP_AA_Infantry_MG_Asst {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_PASGTHelmet_cover_WDL", "rhs_scarf","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_PASGTHelmet_cover_WDL", "rhs_scarf","ItemCompass", "ItemWatch"};
	};
	
	class LOP_AA_Soldier_AT : LOP_AA_Infantry_AT {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4", "rhs_weap_rpg7", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_KHK", "LOP_H_PASGTHelmet_cover_WDL", "G_Balaclava_blk","ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_KHK", "LOP_H_PASGTHelmet_cover_WDL", "G_Balaclava_blk","ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class LOP_AA_Soldier_A_AT : LOP_AA_Infantry_AT_Asst {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_KHK", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Carrier_KHK", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch"};
	};
	
	class LOP_AA_Soldier_Marksman : LOP_AA_Infantry_Marksman {
		Items[] = {"FirstAidKit","rhs_acc_pso1m2"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_pso1m2"};
		weapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "H_Bandanna_sgg", "G_Bandanna_oli","ItemCompass", "ItemWatch","ItemMap", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "H_Bandanna_sgg", "G_Bandanna_oli","ItemCompass", "ItemWatch","ItemMap", "ItemRadio"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AA_Soldier_Engineer : LOP_AA_Infantry_Engineer {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch"};
		backpack = "I_Carryall_oli_Eng";
	};
	
	class LOP_AA_Soldier : LOP_AA_Infantry_Rifleman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AA_Soldier_GL : LOP_AA_Infantry_GL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AA_Soldier_Crewman : LOP_AA_Infantry_Crewman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "SmokeShell"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "SmokeShell"};
		linkedItems[] = {"rhs_6sh46", "rhs_tsh4","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6sh46", "rhs_tsh4","ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AA_Police_Medic : LOP_AA_Police_Corpsman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch", "ItemMap","tf_ex8550"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch", "ItemMap", "tf_ex8550"};
	};
	
	class LOP_AA_Police_Marksman : LOP_AA_Police_Rifleman {
		Items[] = {"FirstAidKit","rhs_acc_pso1m2"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_pso1m2"};
		weapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_PASGTHelmet_TAN", "G_Bandanna_oli","ItemCompass", "ItemWatch", "ItemMap","tf_ex8550"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_PASGTHelmet_TAN", "G_Bandanna_oli","ItemCompass", "ItemWatch", "ItemMap","tf_ex8550"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AA_Police : LOP_AA_Police_Rifleman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_TAN", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch", "tf_ex8550"};
		respawnLinkedItems[] = {"LOP_V_Carrier_TAN", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch", "tf_ex8550"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AA_Police_GL : LOP_AA_Police_Rifleman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_PASGTHelmet_TAN","ItemCompass", "ItemWatch", "tf_ex8550"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_PASGTHelmet_TAN","ItemCompass", "ItemWatch", "tf_ex8550"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AM_Soldier_TL : LOP_AM_Infantry_TL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_6sh46","ItemCompass", "ItemWatch", "TRYK_H_pakol2"};
		respawnLinkedItems[] = {"rhs_6sh46","ItemCompass", "ItemWatch", "TRYK_H_pakol2"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AM_Soldier_SL : LOP_AM_Infantry_SL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_vest_commander","ItemCompass", "ItemWatch", "LOP_H_Turban"};
		respawnLinkedItems[] = {"rhs_vest_commander","ItemCompass", "ItemWatch", "LOP_H_Turban"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AM_Soldier_Medic : LOP_AM_Infantry_Corpsman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_vest_commander","ItemCompass", "ItemWatch", "SP_M1Helmet_Tan"};
		respawnLinkedItems[] = {"rhs_vest_commander","ItemCompass", "ItemWatch", "SP_M1Helmet_Tan"};
	};
	
	class LOP_AM_Soldier_AR : LOP_AM_Infantry_AR {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"hlc_rifle_rpk", "Throw", "Put"};
		respawnWeapons[] = {"hlc_rifle_rpk", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Chestrig_kamysh","ItemCompass", "ItemWatch", "H_ShemagOpen_khk"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_kamysh","ItemCompass", "ItemWatch", "H_ShemagOpen_khk"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AM_Soldier_AT : LOP_AM_Infantry_AT {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "rhs_weap_rpg7", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_6sh46","ItemCompass", "ItemWatch", "LOP_H_Shemag_BLK"};
		respawnLinkedItems[] = {"rhs_6sh46","ItemCompass", "ItemWatch", "LOP_H_Shemag_BLK"};
	};
	
	class LOP_AM_Soldier_Marksman : LOP_AM_Infantry_Marksman {
		Items[] = {"FirstAidKit","rhs_acc_pso1m2"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_pso1m2"};
		weapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_vest_commander","ItemCompass", "ItemWatch","H_Shemag_olive"};
		respawnLinkedItems[] = {"rhs_vest_commander","ItemCompass", "ItemWatch","H_Shemag_olive"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AM_Soldier_Engineer : LOP_AM_Infantry_Engineer {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_vest_commander","ItemCompass", "ItemWatch","H_ShemagOpen_tan"};
		respawnLinkedItems[] = {"rhs_vest_commander","ItemCompass", "ItemWatch","H_ShemagOpen_tan"};
		backpack = "I_Carryall_oli_Eng";
	};
	
	class LOP_AM_Soldier : LOP_AM_Infantry_Rifleman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_6sh46","ItemCompass", "ItemWatch", "LOP_H_Pakol"};
		respawnLinkedItems[] = {"rhs_6sh46","ItemCompass", "ItemWatch", "LOP_H_Pakol"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AM_Soldier_GL : LOP_AM_Infantry_GL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_6sh46","ItemCompass", "ItemWatch","SP_Shemagh_Black"};
		respawnLinkedItems[] = {"rhs_6sh46","ItemCompass", "ItemWatch","SP_Shemagh_Black"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_IA_Soldier_TL : LOP_IA_Infantry_TL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_TRI", "LOP_H_PASGTHelmet_cover_WDL","ItemCompass", "ItemWatch", "tf_anprc152","ItemMap","ItemGPS"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_TRI", "LOP_H_PASGTHelmet_cover_WDL","ItemCompass", "ItemWatch", "tf_anprc152","ItemMap","ItemGPS"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_IA_Soldier_SL : LOP_IA_Infantry_SL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_WDL", "LOP_H_PASGTHelmet_cover_WDL","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_WDL", "LOP_H_PASGTHelmet_cover_WDL","ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_IA_Soldier_Medic : LOP_IA_Infantry_Corpsman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_KHK", "LOP_H_PASGTHelmet_TAN","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_KHK", "LOP_H_PASGTHelmet_TAN","ItemCompass", "ItemWatch"};
		backpack = "LOP_FieldPack_OLV_medic";
	};
	
	class LOP_IA_Officer : LOP_IA_Infantry_SL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_vest_commander", "H_Beret_blk","ItemCompass", "ItemWatch", "ItemMap", "ItemGPS", "tf_anprc152"};
		respawnLinkedItems[] = {"rhs_vest_commander", "H_Beret_blk","ItemCompass", "ItemWatch", "ItemMap", "ItemGPS", "tf_anprc152"};
		backpack = "tf_rt1523g_black";
	};
	
	class LOP_IA_Soldier_AR : LOP_IA_Infantry_MG {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_TRI", "LOP_H_PASGTHelmet_cover_TRI","ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_TRI", "LOP_H_PASGTHelmet_cover_TRI","ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class LOP_IA_Soldier_A_AR : LOP_IA_Infantry_MG_Asst {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_TRI", "LOP_H_PASGTHelmet_cover_TRI", "rhs_scarf","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_TRI", "LOP_H_PASGTHelmet_cover_TRI", "rhs_scarf","ItemCompass", "ItemWatch"};
	};
	
	class LOP_IA_Soldier_AT : LOP_IA_Infantry_AT {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4", "rhs_weap_rpg7", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_KHK", "LOP_H_PASGTHelmet_cover_TRI", "G_Balaclava_blk","ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_KHK", "LOP_H_PASGTHelmet_cover_TRI", "G_Balaclava_blk","ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class LOP_IA_Soldier_A_AT : LOP_IA_Infantry_AT_Asst {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_KHK", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Carrier_KHK", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch"};
	};
	
	class LOP_IA_Soldier_Marksman : LOP_IA_Infantry_Marksman {
		Items[] = {"FirstAidKit","rhs_acc_pso1m2"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_pso1m2"};
		weapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "H_Bandanna_sgg", "G_Bandanna_oli","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "H_Bandanna_sgg", "G_Bandanna_oli","ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_IA_Soldier_Engineer : LOP_IA_Infantry_Engineer {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch"};
		backpack = "I_Carryall_oli_Eng";
	};
	
	class LOP_IA_Soldier : LOP_IA_Infantry_Rifleman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_WDL", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Carrier_WDL", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_IA_Soldier_GL : LOP_IA_Infantry_GL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_WDL", "LOP_H_PASGTHelmet_cover_WDL","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_WDL", "LOP_H_PASGTHelmet_cover_WDL","ItemCompass", "ItemWatch","ItemRadio"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_IA_Soldier_Crewman : LOP_IA_Infantry_Crewman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "SmokeShell"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "SmokeShell"};
		linkedItems[] = {"rhs_6sh46", "rhs_tsh4","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6sh46", "rhs_tsh4","ItemCompass", "ItemWatch","ItemRadio"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_IA_Special_TL : LOP_IA_Infantry_TL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_KHK", "H_HelmetB_light_black", "G_Balaclava_blk","ItemCompass", "ItemWatch", "rhsusf_ANPVS_14","ItemRadio","ItemSMGR","ItemMap"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_KHK", "H_HelmetB_light_black", "G_Balaclava_blk","ItemCompass", "ItemWatch", "rhsusf_ANPVS_14","ItemRadio","ItemSMGR","ItemMap"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_IA_Special_SL : LOP_IA_Infantry_SL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put", "AGM_Vector"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put", "AGM_Vector"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_KHK", "H_HelmetB_light_sand", "G_Balaclava_blk","ItemCompass", "ItemWatch", "rhsusf_ANPVS_14","ItemRadio","ItemSMGR","ItemMap"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_KHK", "H_HelmetB_light_sand", "G_Balaclava_blk","ItemCompass", "ItemWatch", "rhsusf_ANPVS_14","ItemRadio","ItemSMGR","ItemMap"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_IA_Special_Medic : LOP_IA_Infantry_Corpsman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_KHK", "H_HelmetB_light_black", "G_Balaclava_blk","ItemCompass", "ItemWatch", "rhsusf_ANPVS_14","ItemRadio","ItemSMGR","ItemMap"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_KHK", "H_HelmetB_light_black", "G_Balaclava_blk","ItemCompass", "ItemWatch", "rhsusf_ANPVS_14","ItemRadio","ItemSMGR","ItemMap"};
		backpack = "LOP_FieldPack_OLV_medic";
	};
	
	class LOP_IA_Special_AR : LOP_IA_Infantry_MG {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m249_pip", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m249_pip", "Throw", "Put"};
		magazines[] = {"rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_KHK", "H_HelmetB_light_sand", "G_Balaclava_blk","ItemCompass", "ItemWatch", "rhsusf_ANPVS_14","ItemRadio","ItemSMGR","ItemMap"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_KHK", "H_HelmetB_light_sand", "G_Balaclava_blk","ItemCompass", "ItemWatch", "rhsusf_ANPVS_14","ItemRadio","ItemSMGR","ItemMap"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_IA_Special_AT : LOP_IA_Infantry_AT {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "rhs_weap_rpg7", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_KHK", "H_HelmetB_light_black", "G_Balaclava_blk","ItemCompass", "ItemWatch", "rhsusf_ANPVS_14","ItemRadio","ItemSMGR","ItemMap"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_KHK", "H_HelmetB_light_black", "G_Balaclava_blk","ItemCompass", "ItemWatch", "rhsusf_ANPVS_14","ItemRadio","ItemSMGR","ItemMap"};
	};
	
	class LOP_IA_Special_Marksman : LOP_IA_Infantry_Marksman {
		Items[] = {"FirstAidKit", "RH_m3lr", "rhsusf_acc_anpeq15A"};
		RespawnItems[] = {"FirstAidKit", "RH_m3lr", "rhsusf_acc_anpeq15A"};
		weapons[] = {"RH_SAMR", "Throw", "Put"};
		respawnWeapons[] = {"RH_SAMR", "Throw", "Put"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_KHK", "H_HelmetB_light_sand", "G_Bandanna_oli","ItemCompass", "ItemWatch", "rhsusf_ANPVS_14","ItemRadio","ItemSMGR","ItemMap"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_KHK", "H_HelmetB_light_sand", "G_Bandanna_oli","ItemCompass", "ItemWatch", "rhsusf_ANPVS_14","ItemRadio","ItemSMGR","ItemMap"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_IA_Special_Engineer : LOP_IA_Infantry_Engineer {
		Items[] = {"FirstAidKit" };
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_KHK", "H_HelmetB_light_sand", "G_Balaclava_blk","ItemCompass", "ItemWatch", "rhsusf_ANPVS_14","ItemRadio","ItemSMGR","ItemMap"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_KHK", "H_HelmetB_light_sand", "G_Balaclava_blk","ItemCompass", "ItemWatch", "rhsusf_ANPVS_14","ItemRadio","ItemSMGR","ItemMap"};
		backpack = "I_Carryall_oli_Eng";
	};
	
	class LOP_IA_Special : LOP_IA_Infantry_Rifleman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_KHK", "H_HelmetB_light_black", "G_Balaclava_blk","ItemCompass", "ItemWatch", "rhsusf_ANPVS_14","ItemRadio","ItemSMGR","ItemMap"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_KHK", "H_HelmetB_light_black", "G_Balaclava_blk","ItemCompass", "ItemWatch", "rhsusf_ANPVS_14","ItemRadio","ItemSMGR","ItemMap"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_IA_Special_GL : LOP_IA_Infantry_GL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"RH_M4_ris_M203", "Throw", "Put"};
		respawnWeapons[] = {"RH_M4_ris_M203", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_KHK", "H_HelmetB_light_black", "G_Balaclava_blk","ItemCompass", "ItemWatch", "rhsusf_ANPVS_14","ItemRadio","ItemSMGR","ItemMap"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_KHK", "H_HelmetB_light_black", "G_Balaclava_blk","ItemCompass", "ItemWatch", "rhsusf_ANPVS_14","ItemRadio","ItemSMGR","ItemMap"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_ISIS_Soldier_TL : LOP_ISTS_Infantry_TL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"RH_m4_des", "Throw", "Put", "rhs_weap_makarov_pmm"};
		respawnWeapons[] = {"RH_m4_des", "Throw", "Put", "rhs_weap_makarov_pmm"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Red", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Red", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x18_12_57N181S", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_vydra_3m", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_vydra_3m", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_ISIS_Soldier_SL : LOP_ISTS_Infantry_SL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms_gp25", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_vest_commander", "rhs_Booniehat_ocp", "rhs_scarf","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_vest_commander", "rhs_Booniehat_ocp", "rhs_scarf","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_ISIS_Soldier_Medic : LOP_ISTS_Infantry_Corpsman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_BLK", "LOP_H_Shemag_ISIS","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Carrier_BLK", "LOP_H_Shemag_ISIS","ItemCompass", "ItemWatch"};
		backpack = "LOP_FieldPack_OLV_medic";
	};
	
	class LOP_ISIS_Driver : LOP_ISTS_Infantry_Rifleman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_BLK", "LOP_H_Shemag_ISIS","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Carrier_BLK", "LOP_H_Shemag_ISIS","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_ISIS_Soldier_AR : LOP_ISTS_Infantry_AR {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_TAN", "H_ShemagOpen_khk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Carrier_TAN", "H_ShemagOpen_khk","ItemCompass", "ItemWatch"};
	};
	
	class LOP_ISIS_Soldier_AT : LOP_ISTS_Infantry_AT {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"hlc_smg_mp5a4", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"hlc_smg_mp5a4", "rhs_weap_rpg7", "Throw", "Put"};
		magazines[] = {"hlc_30Rnd_9x19_GD_MP5", "hlc_30Rnd_9x19_GD_MP5", "hlc_30Rnd_9x19_GD_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"hlc_30Rnd_9x19_GD_MP5", "hlc_30Rnd_9x19_GD_MP5", "hlc_30Rnd_9x19_GD_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhsusf_iotv_ucp", "rhs_Booniehat_ucp", "G_Bandanna_shades","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhsusf_iotv_ucp", "rhs_Booniehat_ucp", "G_Bandanna_shades","ItemCompass", "ItemWatch"};
	};
	
	class LOP_ISIS_Soldier_Marksman : LOP_ISTS_Infantry_Marksman {
		Items[] = {"FirstAidKit","rhs_acc_pso1m2"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_pso1m2"};
		weapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_Shemag_ISIS", "G_Shades_Black","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_Shemag_ISIS", "G_Shades_Black","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_ISIS_Soldier_IED : LOP_ISTS_Infantry_Engineer {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"hlc_rifle_aks74u", "Throw", "Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_TacVest_khk", "H_Cap_blk", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_TacVest_khk", "H_Cap_blk", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		backpack = "I_Carryall_oli_Eng";
	};
	
	class LOP_ISIS_Soldier : LOP_ISTS_Infantry_Rifleman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhsusf_iotv_ocp", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhsusf_iotv_ocp", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_ISIS_Soldier_GL : LOP_ISTS_Infantry_GL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"hlc_rifle_aks74_GL", "Throw", "Put"};
		respawnWeapons[] = {"hlc_rifle_aks74_GL", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_TAN", "LOP_H_Shemag_ISIS","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Carrier_TAN", "LOP_H_Shemag_ISIS","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_ChDKZ_Lopotev : LOP_ChDKZ_Infantry_Commander {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"hlc_rifle_saiga12k", "Throw", "Put"};
		respawnWeapons[] = {"hlc_rifle_saiga12k", "Throw", "Put"};
		magazines[] = {"hlc_10rnd_12g_buck_S12", "hlc_10rnd_12g_buck_S12", "hlc_10rnd_12g_buck_S12", "hlc_10rnd_12g_slug_S12", "hlc_10rnd_12g_slug_S12", "hlc_10rnd_12g_slug_S12", "hlc_10rnd_12g_slug_S12"};
		respawnMagazines[] = {"hlc_10rnd_12g_buck_S12", "hlc_10rnd_12g_buck_S12", "hlc_10rnd_12g_buck_S12", "hlc_10rnd_12g_slug_S12", "hlc_10rnd_12g_slug_S12", "hlc_10rnd_12g_slug_S12", "hlc_10rnd_12g_slug_S12"};
		linkedItems[] = {"rhs_vest_commander","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_vest_commander","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_ChDKZ_Bardak : LOP_ChDKZ_Infantry_Bardak {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm"};
		linkedItems[] = {"rhs_6sh46", "LOP_H_Bardak_beret","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_6sh46", "LOP_H_Bardak_beret","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_ChDKZ_Soldier_TL : LOP_ChDKZ_Infantry_TL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms_gp25", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_vest_commander", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_vest_commander", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_ChDKZ_Soldier_SL : LOP_ChDKZ_Infantry_SL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_vydra_3m", "G_Bandanna_oli","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_vydra_3m", "G_Bandanna_oli","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_ChDKZ_Soldier_Medic : LOP_ChDKZ_Infantry_Corpsman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_TacVest_camo", "G_Balaclava_oli","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_TacVest_camo", "G_Balaclava_oli","ItemCompass", "ItemWatch"};
		backpack = "hmg_medic_rd";
	};
	
	class LOP_ChDKZ_Soldier_AR : LOP_ChDKZ_Infantry_MG {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_6sh46", "G_Shades_Blue","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_6sh46", "G_Shades_Blue","ItemCompass", "ItemWatch"};
		backpack = "hmg_rif_sidorMG";
	};
	
	class LOP_ChDKZ_Soldier_A_AR : LOP_ChDKZ_Infantry_MG {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_TacVest_oli", "H_Cap_oli", "rhs_scarf","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_TacVest_oli", "H_Cap_oli", "rhs_scarf","ItemCompass", "ItemWatch"};
		backpack = "hmg_rif_sidorMG";
	};
	
	class LOP_ChDKZ_Soldier_AT : LOP_ChDKZ_Infantry_AT {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "rhs_weap_rpg7", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_BLK", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_BLK", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
	};
	
	class LOP_ChDKZ_Soldier_A_AT : LOP_ChDKZ_Infantry_AT {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_BandollierB_oli", "H_Booniehat_oli","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_BandollierB_oli", "H_Booniehat_oli","ItemCompass", "ItemWatch"};
	};
	
	class LOP_ChDKZ_Soldier_Marksman : LOP_ChDKZ_Infantry_Marksman {
		Items[] = {"FirstAidKit","rhs_acc_pso1m2"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_pso1m2"};
		weapons[] = {"rhs_weap_svds", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_svds", "Throw", "Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_6sh46", "H_Bandanna_khk", "G_Bandanna_oli","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_6sh46", "H_Bandanna_khk", "G_Bandanna_oli","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_ChDKZ_Soldier_Engineer : LOP_ChDKZ_Infantry_Engineer {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_6sh46", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_6sh46", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		backpack = "I_Carryall_oli_Eng";
	};
	
	class LOP_ChDKZ_Soldier : LOP_ChDKZ_Infantry_Rifleman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_6b23", "G_Balaclava_oli","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_6b23", "G_Balaclava_oli","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_ChDKZ_Soldier_GL : LOP_ChDKZ_Infantry_GL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_BandollierB_oli","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_BandollierB_oli","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_ChDKZ_Soldier_Crewman : LOP_ChDKZ_Infantry_Crewman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell"};
		linkedItems[] = {"rhs_6sh46", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_6sh46", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_ChDKZ_Soldier_Pilot : LOP_ChDKZ_Infantry_Pilot {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell"};
		linkedItems[] = {"rhs_6sh46", "H_Cap_headphones", "G_Bandanna_oli","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_6sh46", "H_Cap_headphones", "G_Bandanna_oli","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_UA_Soldier_TL : LOP_UA_Infantry_TL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Chestrig_kamysh", "LOP_H_SSh68Helmet_BLK", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_kamysh", "LOP_H_SSh68Helmet_BLK", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_UA_Soldier_SL : LOP_UA_Infantry_SL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Chestrig_vsr", "LOP_H_SSh68Helmet_OLV", "G_Bandanna_oli","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_vsr", "LOP_H_SSh68Helmet_OLV", "G_Bandanna_oli","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_UA_Soldier_Medic : LOP_UA_Infantry_Corpsman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Chestrig_vsr", "LOP_H_SSh68Helmet_OLV", "G_Balaclava_oli","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_vsr", "LOP_H_SSh68Helmet_OLV", "G_Balaclava_oli","ItemCompass", "ItemWatch"};
	};
	
	class LOP_UA_Soldier_AR : LOP_UA_Infantry_MG {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Chestrig_vsr", "rhs_6b28_green", "G_Bandanna_oli","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_vsr", "rhs_6b28_green", "G_Bandanna_oli","ItemCompass", "ItemWatch"};
		backpack = "hmg_rif_sidorMG";
	};
	
	class LOP_UA_Soldier_A_AR : LOP_UA_Infantry_MG_Asst {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Chestrig_kamysh", "rhs_6b27m_green", "G_Balaclava_oli","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_kamysh", "rhs_6b27m_green", "G_Balaclava_oli","ItemCompass", "ItemWatch"};
	};
	
	class LOP_UA_Soldier_AT : LOP_UA_Infantry_AT {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "rhs_weap_rpg7", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Chestrig_kamysh", "LOP_H_SSh68Helmet_BLK", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_kamysh", "LOP_H_SSh68Helmet_BLK", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
	};
	
	class LOP_UA_Soldier_A_AT : LOP_UA_Infantry_AT_Asst {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Chestrig_kamysh", "LOP_H_SSh68Helmet_BLK", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_kamysh", "LOP_H_SSh68Helmet_BLK", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
	};
	
	class LOP_UA_Soldier_Marksman : LOP_UA_Infantry_Marksman {
		Items[] = {"FirstAidKit","rhs_acc_pso1m2"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_pso1m2"};
		weapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Chestrig_kamysh", "H_Bandanna_khk", "G_Bandanna_oli","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_kamysh", "H_Bandanna_khk", "G_Bandanna_oli","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_UA_Soldier_Engineer : LOP_UA_Infantry_Engineer {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Chestrig_vsr", "LOP_H_SSh68Helmet_BLK", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_vsr", "LOP_H_SSh68Helmet_BLK", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		backpack = "I_Carryall_oli_Eng";
	};
	
	class LOP_UA_Soldier : LOP_UA_Infantry_Rifleman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Chestrig_vsr", "LOP_H_SSh68Helmet_OLV", "G_Balaclava_oli","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_vsr", "LOP_H_SSh68Helmet_OLV", "G_Balaclava_oli","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_UA_Soldier_GL : LOP_UA_Infantry_GL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Chestrig_vsr", "LOP_H_SSh68Helmet_OLV", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Chestrig_vsr", "LOP_H_SSh68Helmet_OLV", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_UA_Soldier_Crewman : LOP_UA_Infantry_Crewman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell"};
		linkedItems[] = {"rhs_6sh46", "rhs_tsh4", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_6sh46", "rhs_tsh4", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_UA_Soldier_Pilot : LOP_UA_Infantry_Pilot {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "SmokeShell"};
		linkedItems[] = {"rhs_6sh46", "H_Cap_headphones", "G_Bandanna_oli","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_6sh46", "H_Cap_headphones", "G_Bandanna_oli","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AFR_Soldier_TL : LOP_AFR_Infantry_TL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"hlc_rifle_aks74_GL", "Throw", "Put"};
		respawnWeapons[] = {"hlc_rifle_aks74_GL", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_BandollierB_oli", "H_Bandanna_camo","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_BandollierB_oli", "H_Bandanna_camo","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AFR_Soldier_SL : LOP_AFR_Infantry_SL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_6sh46", "H_Beret_blk", "G_Aviator","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_6sh46", "H_Beret_blk", "G_Aviator","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AFR_Soldier_Medic : LOP_AFR_Infantry_Corpsman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"Trixie_M14", "Throw", "Put"};
		respawnWeapons[] = {"Trixie_M14", "Throw", "Put"};
		magazines[] = {"Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag", "Trixie_20x762_Mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_vest_commander", "H_Booniehat_oli","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_vest_commander", "H_Booniehat_oli","ItemCompass", "ItemWatch"};
		backpack = "LOP_FieldPack_OLV_medic";
	};
	
	class LOP_AFR_Soldier_AR : LOP_AFR_Infantry_AR {
		displayName= "Automatic rifleman ";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"hlc_rifle_aughbar_t", "Throw", "Put"};
		respawnWeapons[] = {"hlc_rifle_aughbar_t", "Throw", "Put"};
		magazines[] = {"hlc_30Rnd_556x45_SPR_AUG", "hlc_30Rnd_556x45_SPR_AUG", "hlc_30Rnd_556x45_SOST_AUG", "hlc_30Rnd_556x45_SOST_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_T_AUG", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"hlc_30Rnd_556x45_SPR_AUG", "hlc_30Rnd_556x45_SPR_AUG", "hlc_30Rnd_556x45_SOST_AUG", "hlc_30Rnd_556x45_SOST_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_T_AUG", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_I_G_resistanceLeader_F", "H_Bandanna_gry", "G_Aviator","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F", "H_Bandanna_gry", "G_Aviator","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AFR_Soldier_AT : LOP_AFR_Infantry_AT {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"RH_M4sbr_g", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"RH_M4sbr_g", "rhs_weap_rpg7", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_BandollierB_blk", "H_Booniehat_khk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_BandollierB_blk", "H_Booniehat_khk","ItemCompass", "ItemWatch"};
	};
	
	class LOP_AFR_Soldier_Marksman : LOP_AFR_Infantry_Marksman {
		displayName= "Marksman";
		Items[] = {"FirstAidKit","rhsusf_acc_ACOG_USMC"};
		RespawnItems[] = {"FirstAidKit","rhsusf_acc_ACOG_USMC"};
		weapons[] = {"rhs_weap_ak74m_camo_npz", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_camo_npz", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_Rangemaster_belt", "H_Bandanna_khk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_Rangemaster_belt", "H_Bandanna_khk","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AFR_Soldier_IED : LOP_AFR_Infantry_IED {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"hlc_rifle_vendimus", "Throw", "Put"};
		respawnWeapons[] = {"hlc_rifle_vendimus", "Throw", "Put"};
		magazines[] = {"29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG_T", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG_T", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_Rangemaster_belt","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_Rangemaster_belt","ItemCompass", "ItemWatch"};
		backpack = "I_Carryall_oli_Eng";
	};
	
	class LOP_AFR_Soldier : LOP_AFR_Infantry_Rifleman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"hlc_rifle_c1A1", "Throw", "Put"};
		respawnWeapons[] = {"hlc_rifle_c1A1", "Throw", "Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_T_fal", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_T_fal", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_6sh46","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_6sh46","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_AFR_Soldier_GL : LOP_AFR_Infantry_GL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_6sh46", "H_Bandanna_gry","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"rhs_6sh46", "H_Bandanna_gry","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_CDF_Soldier_TL :  LOP_CDF_Infantry_TL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms_gp25", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_CDF", "LOP_H_PASGTHelmet_cover_CDF","ItemCompass", "ItemWatch","ItemRadio","ItemMap"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_CDF", "LOP_H_PASGTHelmet_cover_CDF","ItemCompass", "ItemWatch","ItemRadio","ItemMap"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_CDF_Soldier_SL : LOP_CDF_Infantry_SL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put","Binocular"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_CDF", "LOP_H_PASGTHelmet_cover_CDF","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_CDF", "LOP_H_PASGTHelmet_cover_CDF","ItemCompass", "ItemWatch","ItemRadio"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_CDF_Soldier_Medic : LOP_CDF_Infantry_Corpsman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_CDF", "LOP_H_PASGTHelmet_cover_CDF","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_CDF", "LOP_H_PASGTHelmet_cover_CDF","ItemCompass", "ItemWatch","ItemRadio"};
	};
	
	class LOP_CDF_Officer : I_officer_F {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put","Binocular"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_vest_commander", "H_Beret_blk","ItemCompass", "ItemWatch","ItemSMGR","ItemMap","tf_anprc152"};
		respawnLinkedItems[] = {"rhs_vest_commander", "H_Beret_blk","ItemCompass", "ItemWatch","ItemSMGR","ItemMap","tf_anprc152"};
		backpack = "tf_rt1523g";
	};
	
	class LOP_CDF_Soldier_AR : LOP_CDF_Infantry_MG {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_CDF", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_CDF", "LOP_H_PASGTHelmet_OLV","ItemCompass", "ItemWatch","ItemRadio"};
	};
	
	class LOP_CDF_Soldier_A_AR : LOP_CDF_Infantry_MG_Asst {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_CDF", "LOP_H_PASGTHelmet_cover_CDF", "rhs_scarf","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_CDF", "LOP_H_PASGTHelmet_cover_CDF", "rhs_scarf","ItemCompass", "ItemWatch"};
	};
	
	class LOP_CDF_Soldier_AT : LOP_CDF_Infantry_AT {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "rhs_weap_rpg7", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_CDF", "LOP_H_PASGTHelmet_cover_CDF", "G_Balaclava_blk","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_CDF", "LOP_H_PASGTHelmet_cover_CDF", "G_Balaclava_blk","ItemCompass", "ItemWatch","ItemRadio"};
	};
	
	class LOP_CDF_Soldier_A_AT : LOP_CDF_Infantry_AT_Asst {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_CDF", "LOP_H_PASGTHelmet_cover_CDF","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_CDF", "LOP_H_PASGTHelmet_cover_CDF","ItemCompass", "ItemWatch"};
	};
	
	class LOP_CDF_Soldier_Marksman : LOP_CDF_Infantry_Marksman {
		Items[] = {"FirstAidKit","rhs_acc_pso1m2"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_pso1m2"};
		weapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_CDF", "H_Bandanna_sgg", "G_Bandanna_oli","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_CDF", "H_Bandanna_sgg", "G_Bandanna_oli","ItemCompass", "ItemWatch","ItemRadio"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_CDF_Soldier_Engineer : LOP_CDF_Infantry_Engineer {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_CDF", "LOP_H_PASGTHelmet_cover_CDF","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_CDF", "LOP_H_PASGTHelmet_cover_CDF","ItemCompass", "ItemWatch"};
		backpack = "I_Carryall_oli_Eng";
	};
	
	class LOP_CDF_Soldier : LOP_CDF_Infantry_Rifleman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_CDF", "LOP_H_PASGTHelmet_cover_CDF","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_CDF", "LOP_H_PASGTHelmet_cover_CDF","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_CDF_Soldier_GL : LOP_CDF_Infantry_GL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms_gp25", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_CDF", "LOP_H_PASGTHelmet_cover_CDF","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_CDF", "LOP_H_PASGTHelmet_cover_CDF","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_CDF_Soldier_Crewman : LOP_CDF_Infantry_Crewman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell"};
		linkedItems[] = {"rhs_6sh46", "rhs_tsh4","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6sh46", "rhs_tsh4","ItemCompass", "ItemWatch","ItemRadio"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_CDF_Soldier_Pilot : LOP_CDF_Infantry_Pilot {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell"};
		linkedItems[] = {"rhs_6sh46", "rhs_zsh7a_mike","ItemCompass", "ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"rhs_6sh46", "rhs_zsh7a_mike","ItemCompass", "ItemWatch","ItemGPS"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_US_Soldier_TL : LOP_US_Infantry_TL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_TacVestIR_blk", "H_Watchcap_blk", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_TacVestIR_blk", "H_Watchcap_blk", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_US_Soldier_SL : LOP_US_Infantry_SL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m_2mag", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_2mag", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_7N10_AK", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_7N10_AK", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_TacVest_oli", "H_Cap_grn", "G_Bandanna_shades","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_TacVest_oli", "H_Cap_grn", "G_Bandanna_shades","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_US_Soldier_Medic : LOP_US_Infantry_Corpsman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_camo", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_7N10_AK", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_7N10_AK", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_SSh68Helmet_OLV", "G_Balaclava_oli","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_SSh68Helmet_OLV", "G_Balaclava_oli","ItemCompass", "ItemWatch"};
		backpack = "LOP_FieldPack_OLV_medic";
	};
	
	class LOP_US_Soldier_AR : LOP_US_Infantry_MG {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_pkp", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkp", "Throw", "Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_TacVest_blk", "H_Cap_blk", "G_Bandanna_oli","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_TacVest_blk", "H_Cap_blk", "G_Bandanna_oli","ItemCompass", "ItemWatch"};
		backpack = "hmg_rif_sidorMG";
	};
	
	class LOP_US_Soldier_AT : LOP_US_Infantry_AT {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m_2mag_camo", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_2mag_camo", "rhs_weap_rpg7", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_TacVest_khk", "rhs_6b28_green", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_TacVest_khk", "rhs_6b28_green", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
	};
	
	class LOP_US_Soldier_Marksman : LOP_US_Infantry_Marksman {
		Items[] = {"FirstAidKit","rhs_acc_pso1m2"};
		RespawnItems[] = {"FirstAidKit","rhs_acc_pso1m2"};
		weapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_TacVest_oli", "H_Bandanna_sgg", "G_Bandanna_aviator","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_TacVest_oli", "H_Bandanna_sgg", "G_Bandanna_aviator","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_US_Soldier_Engineer : LOP_US_Infantry_Engineer {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m_desert", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_desert", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_7N10_AK", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_7N10_AK", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_OLV", "H_Cap_blk", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_OLV", "H_Cap_blk", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		backpack = "I_Carryall_oli_Eng";
	};
	
	class LOP_US_Soldier : LOP_US_Infantry_Rifleman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_7N10_AK", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_7N10_AK", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_PlateCarrier1_blk", "LOP_H_SSh68Helmet_BLK", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk", "LOP_H_SSh68Helmet_BLK", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_US_Soldier_GL : LOP_US_Infantry_GL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"V_TacVestIR_blk", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_TacVestIR_blk", "G_Balaclava_blk","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_US_Soldier_Crewman : LOP_US_Infantry_Crewman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_ak74m_folded", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_folded", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "SmokeShell"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "SmokeShell"};
		linkedItems[] = {"V_TacVest_blk", "H_Cap_headphones", "G_Bandanna_beast","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"V_TacVest_blk", "H_Cap_headphones", "G_Bandanna_beast","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_RACS_Soldier_TL : LOP_RACS_Infantry_TL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_WDL", "LOP_H_Booniehat_RACS","ItemCompass", "ItemWatch","ItemRadio","ItemMap","ItemSMGR"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_WDL", "LOP_H_Booniehat_RACS","ItemCompass", "ItemWatch","ItemRadio","ItemMap","ItemSMGR"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_RACS_Soldier_SL : LOP_RACS_Infantry_SL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_PASGTHelmet_TAN","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_OLV", "LOP_H_PASGTHelmet_TAN","ItemCompass", "ItemWatch","ItemRadio"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_RACS_Soldier_Medic : LOP_RACS_Infantry_Corpsman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_KHK", "LOP_H_PASGTHelmet_TAN","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_KHK", "LOP_H_PASGTHelmet_TAN","ItemCompass", "ItemWatch","ItemRadio"};
		backpack = "LOP_FieldPack_OLV_medic";
	};
	
	class LOP_RACS_Officer : I_officer_F {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"rhs_vest_commander", "LOP_H_Beret_blue","ItemCompass", "ItemWatch","tf_anprc152","ItemMap","ItemSMGR"};
		respawnLinkedItems[] = {"rhs_vest_commander", "LOP_H_Beret_blue","ItemCompass", "ItemWatch","tf_anprc152","ItemMap","ItemSMGR"};
		backpack = "tf_rt1523g_big";
	};
	
	class LOP_RACS_Soldier_AR : LOP_RACS_Infantry_MG {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m240B", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m240B", "Throw", "Put"};
		magazines[] = {"rhsusf_100Rnd_762x51", "rhsusf_100Rnd_762x51", "rhsusf_100Rnd_762x51", "rhsusf_100Rnd_762x51", "rhsusf_100Rnd_762x51", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhsusf_100Rnd_762x51", "rhsusf_100Rnd_762x51", "rhsusf_100Rnd_762x51", "rhsusf_100Rnd_762x51", "rhsusf_100Rnd_762x51", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_TAN", "LOP_H_PASGTHelmet_cover_RACS","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_TAN", "LOP_H_PASGTHelmet_cover_RACS","ItemCompass", "ItemWatch","ItemRadio"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_RACS_Soldier_A_AR : LOP_RACS_Infantry_MG_Asst {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_TAN", "LOP_H_PASGTHelmet_TAN", "rhs_scarf","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Carrier_TAN", "LOP_H_PASGTHelmet_TAN", "rhs_scarf","ItemCompass", "ItemWatch"};
	};
	
	class LOP_RACS_Soldier_AT : LOP_RACS_Infantry_AT {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle", "rhs_weap_M136", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "rhs_weap_M136", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_m136_mag", "rhs_m136_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_m136_mag", "rhs_m136_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_TAN", "LOP_H_PASGTHelmet_cover_RACS", "G_Balaclava_blk","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_TAN", "LOP_H_PASGTHelmet_cover_RACS", "G_Balaclava_blk","ItemCompass", "ItemWatch","ItemRadio"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_RACS_Soldier_A_AT : LOP_RACS_Infantry_AT_Asst {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_TAN", "LOP_H_PASGTHelmet_cover_RACS","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Carrier_TAN", "LOP_H_PASGTHelmet_cover_RACS","ItemCompass", "ItemWatch"};
		backpack = LOP_RHS_RPG;
	};
	
	class LOP_RACS_Soldier_Marksman : LOP_RACS_Infantry_Marksman {
		Items[] = {"FirstAidKit", "rhs_acc_pso1m2"};
		RespawnItems[] = {"FirstAidKit", "rhs_acc_pso1m2"};
		weapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_KHK", "LOP_H_Booniehat_RACS", "G_Bandanna_oli","ItemCompass", "ItemWatch","ItemMap","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_KHK", "LOP_H_Booniehat_RACS", "G_Bandanna_oli","ItemCompass", "ItemWatch","ItemMap","ItemRadio"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_RACS_Soldier_Engineer : LOP_RACS_Infantry_Engineer {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierLite_KHK", "LOP_H_PASGTHelmet_TAN","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_CarrierLite_KHK", "LOP_H_PASGTHelmet_TAN","ItemCompass", "ItemWatch"};
		backpack = "I_Carryall_oli_Eng";
	};
	
	class LOP_RACS_Soldier : LOP_RACS_Infantry_Rifleman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_KHK", "LOP_H_PASGTHelmet_cover_RACS","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_KHK", "LOP_H_PASGTHelmet_cover_RACS","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_RACS_Soldier_GL : LOP_RACS_Infantry_GL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m4_m320", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_CarrierRig_KHK", "LOP_H_PASGTHelmet_cover_RACS","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_CarrierRig_KHK", "LOP_H_PASGTHelmet_cover_RACS","ItemCompass", "ItemWatch","ItemRadio"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_RACS_Soldier_Crewman : LOP_RACS_Infantry_Crewman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "SmokeShell"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "SmokeShell"};
		linkedItems[] = {"LOP_V_Carrier_TAN", "rhsusf_cvc_helmet","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_TAN", "rhsusf_cvc_helmet","ItemCompass", "ItemWatch","ItemRadio"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_RACS_Soldier_Pilot : LOP_RACS_Infantry_Pilot {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_pmag", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "SmokeShell"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "SmokeShell"};
		linkedItems[] = {"LOP_V_Carrier_TAN", "rhs_zsh7a_mike","ItemCompass", "ItemWatch",
		"ItemGPS"};
		respawnLinkedItems[] = {"LOP_V_Carrier_TAN", "rhs_zsh7a_mike","ItemCompass", "ItemWatch","ItemGPS"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_SLA_Soldier_TL : LOP_SLA_Infantry_TL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms_gp25", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_OLV","ItemCompass", "ItemWatch","ItemRadio","ItemMap"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_OLV","ItemCompass", "ItemWatch","ItemRadio","ItemMap"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_SLA_Soldier_SL : LOP_SLA_Infantry_SL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put","Binocular"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_OLV","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_OLV","ItemCompass", "ItemWatch","ItemRadio"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_SLA_Soldier_Medic : LOP_SLA_Infantry_Corpsman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_BLK","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_BLK","ItemCompass", "ItemWatch","ItemRadio"};
	};
	
	class LOP_SLA_Officer : I_officer_F {
		scope = 2;
		side = 0;
		faction = LOP_SLA;
		vehicleClass = "LOP_Men";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put", "Binocular"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SLA_beret","ItemCompass", "ItemWatch","tf_fadak","ItemMap","ItemSMGR"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SLA_beret","ItemCompass", "ItemWatch","tf_fadak","ItemMap","ItemSMGR"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_SLA_Soldier_AR : LOP_SLA_Infantry_MG {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_pkm", "Throw", "Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_OLV","ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_OLV","ItemCompass", "ItemWatch","ItemRadio"};
	};
	
	class LOP_SLA_Soldier_A_AR : LOP_SLA_Infantry_MG_Asst {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_OLV", "rhs_scarf","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_OLV", "rhs_scarf","ItemCompass", "ItemWatch"};
	};
	
	class LOP_SLA_Soldier_AT : LOP_SLA_Infantry_AT {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "rhs_weap_rpg7", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "rhs_weap_rpg7", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_rpg7_PG7VL_mag", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_BLK", "G_Balaclava_blk","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_BLK", "G_Balaclava_blk","ItemCompass", "ItemWatch","ItemRadio"};
	};
	
	class LOP_SLA_Soldier_A_AT : LOP_SLA_Infantry_AT_Asst {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_BLK","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_BLK","ItemCompass", "ItemWatch"};
	};
	
	class LOP_SLA_Soldier_Marksman : LOP_SLA_Infantry_Marksman {
		Items[] = {"FirstAidKit", "rhs_acc_pso1m2"};
		RespawnItems[] = {"FirstAidKit", "rhs_acc_pso1m2"};
		weapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_svdp_wd", "Throw", "Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_OLV", "G_Bandanna_oli","ItemCompass", "ItemWatch","ItemMap","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_OLV", "G_Bandanna_oli","ItemCompass", "ItemWatch","ItemMap","ItemRadio"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_SLA_Soldier_Engineer : LOP_SLA_Infantry_Engineer {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_OLV","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_OLV","ItemCompass", "ItemWatch"};
		backpack = "I_Carryall_oli_Eng";
	};
	
	class LOP_SLA_Soldier : LOP_SLA_Infantry_Rifleman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akm", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "30Rnd_556x45_Stanag_Tracer_Red", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_OLV","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_OLV","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_SLA_Soldier_GL : LOP_SLA_Infantry_GL {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms_gp25", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms_gp25", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "SmokeShell", "SmokeShellRed", "HandGrenade", "HandGrenade"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_OLV","ItemCompass", "ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "LOP_H_SSh68Helmet_OLV","ItemCompass", "ItemWatch","ItemRadio"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_SLA_Soldier_Crewman : LOP_SLA_Infantry_Crewman {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "rhs_tsh4","ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "rhs_tsh4","ItemCompass", "ItemWatch"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	
	class LOP_SLA_Soldier_Pilot : LOP_SLA_Infantry_Pilot {
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"rhs_weap_akms", "Throw", "Put"};
		respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_89", "SmokeShell"};
		linkedItems[] = {"LOP_V_Carrier_OLV", "rhs_zsh7a_mike","ItemCompass", "ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"LOP_V_Carrier_OLV", "rhs_zsh7a_mike","ItemCompass", "ItemWatch","ItemGPS"};
		backpack = "CUP_B_AlicePack_Khaki";
	};
	};