class CfgPatches
{
	class A3RU_mef_mod_nounits
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { mef_mod };
		version = "1.0";
		versionStr = "1.0";
		versionAr[] = { 1, 0 };
	};
};

class CfgFactionClasses
{
	delete MEF;
};

class CfgGroups
{
	class West
	{
		delete MEF;
	};
};

class CfgVehicles {
	class B_Soldier_base_F;
	class B_Soldier_02_f;
	class B_Soldier_03_f;
	class B_Soldier_A_F;
	class B_Soldier_TL_F;
	class B_soldier_AR_F;
	class b_soldier_survival_F;
	class B_Carryall_khk;
	class B_Kitbag_Base;
	class B_AssaultPack_Base;
	class B_TacticalPack_oli;

	class MEF_WMARPAT_LS : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_LS_MG : MEF_WMARPAT_LS { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_LS_MO : MEF_WMARPAT_LS_MG { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_LS_AS : MEF_WMARPAT_LS_MO { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_LS_AT : MEF_WMARPAT_LS_AS { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_LS_UL : MEF_WMARPAT_LS_AT { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_RS : B_Soldier_03_f { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_RS_MG : MEF_WMARPAT_RS { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_RS_MO : MEF_WMARPAT_RS_MG { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_RS_AS : MEF_WMARPAT_RS_MO { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_RS_AT : MEF_WMARPAT_RS_AS { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_RS_UL : MEF_WMARPAT_RS_AT { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_TS : B_soldier_AR_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_TS_MG : MEF_WMARPAT_TS { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_TS_MO : MEF_WMARPAT_TS_MG { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_TS_AS : MEF_WMARPAT_TS_MO { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_TS_AT : MEF_WMARPAT_TS_AS { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_TS_UL : MEF_WMARPAT_TS_AT { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_LS_HA : B_Soldier_02_f { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_LS_HM : MEF_WMARPAT_LS_HA { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_LS_TC : B_Soldier_A_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_LS_TO : MEF_DMARPAT_LS_TC { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_LS_MM : MEF_DMARPAT_LS_TO { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_LS_IA : MEF_DMARPAT_LS_MM { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_LS_ML : MEF_DMARPAT_LS_IA { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_LS_UL : MEF_DMARPAT_LS_ML { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_RS : B_Soldier_TL_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_RS_TO : MEF_DMARPAT_RS { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_RS_MM : MEF_DMARPAT_RS_TO { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_RS_IA : MEF_DMARPAT_RS_MM { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_RS_ML : MEF_DMARPAT_RS_IA { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_RS_UL : MEF_DMARPAT_RS_ML { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_TS : B_soldier_AR_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_TS_TO : MEF_DMARPAT_TS { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_TS_MM : MEF_DMARPAT_TS_TO { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_TS_IA : MEF_DMARPAT_TS_MM { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_TS_ML : MEF_DMARPAT_TS_IA { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_TS_UL : MEF_DMARPAT_TS_ML { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_LS_RM : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_OD_LS_RM : B_Soldier_A_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_TAN_LS_RM : B_Soldier_A_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_LS_DV : b_soldier_survival_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_RS_RM : B_Soldier_03_f { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_OD_RS_RM : B_Soldier_TL_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_TAN_RS_RM : B_Soldier_03_f { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_LS_RM : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_OD_LS_RM : B_Soldier_A_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_TAN_LS_RM : B_Soldier_A_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_LS_DV : b_soldier_survival_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_RS_RM : B_Soldier_03_f { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_OD_RS_RM : B_Soldier_TL_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_TAN_RS_RM : B_Soldier_03_f { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_LS_BA : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_LS_BR : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_LS_BT : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_LS_BS : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_LS_BA : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_LS_BR : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_LS_BT : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_LS_BS : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_SNOW_IN_BA : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_SNOW_IN_BR : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_SNOW_IN_BT : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_SNOW_IN_BS : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_IN_WMARPAT_LS : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_IN_WMARPAT_RS : B_Soldier_02_f { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_IN_DMARPAT_LS : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_IN_DMARPAT_RS : B_Soldier_02_f { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_IN_SNOW_LS : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_IN_SNOW_MG : MEF_IN_SNOW_LS { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_IN_SNOW_MO : MEF_IN_SNOW_MG { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_IN_SNOW_AS : MEF_IN_SNOW_MO { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_IN_SNOW_AT : MEF_IN_SNOW_AS { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_IN_SNOW_UL : MEF_IN_SNOW_AT { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_LS_RL_RH : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_LS_BA_RH : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_LS_BR_RH : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_LS_BT_RH : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_WMARPAT_LS_BS_RH : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_LS_RL_RH : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_LS_BA_RH : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_LS_BR_RH : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_LS_BT_RH : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_DMARPAT_LS_BS_RH : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_TAN_H_Pilot : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_OD_F_Pilot : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};
	class MEF_TAN_F_Pilot : B_Soldier_base_F { 
		scope = 1;
		backpack = "";
		respawnWeapons[] = {};
		weapons[] = {};
		respawnmagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = {};
		faction = "";
		vehicleClass = "";
	};

	/* HELICOPTERS */
	class B_Heli_Transport_01_F;
	class MEF_USMC_Ghosthawk: B_Heli_Transport_01_F
	{
		delete faction;
	};
	class B_Heli_Transport_03_F;
	class MEF_USMC_Huron: B_Heli_Transport_03_F
	{
		delete faction;
	};
	class B_Heli_Light_01_F;
	class MEF_USMC_Hummingbird: B_Heli_Light_01_F
	{
		delete faction;
	};
	class B_Heli_Light_01_armed_F;
	class MEF_USMC_Pawnee: B_Heli_Light_01_armed_F
	{
		delete faction;
	};
	class B_Heli_Attack_01_F;
	class MEF_USMC_Blackfoot: B_Heli_Attack_01_F
	{
		delete faction;
	};
};

























