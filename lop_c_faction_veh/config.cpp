////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Sat Apr 18 02:34:44 2015 : Source 'file' date Sat Apr 18 02:34:44 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class lop_c_faction_veh : config.bin{
class CfgPatches
{
	class lop_c_veh_armored
	{
		units[] = {"LOP_IA_GAZ66_repair","LOP_IA_GAZ66_ap2","LOP_IA_GAZ66_r142","LOP_IA_GAZ66","LOP_IA_GAZ66o","LOP_IA_URAL","LOP_IA_URAL_open","LOP_IA_Static_M2","LOP_IA_Static_M2_MiniTripod","LOP_IA_Static_Mk19_TriPod","LOP_IA_Technical","LOP_IA_Technical_M2","LOP_IA_M113_D","LOP_IA_M1A1_D","LOP_IA_T72BA_D","LOP_IA_BMP1","LOP_IA_BMP2","LOP_IA_M998_D_4DR_FULLTOP","LOP_IA_M998_D_4DR","LOP_IA_M1025_D","LOP_IA_M1025_M2_D","LOP_IA_M1025_Mk19_D","LOP_IA_UAZ","LOP_IA_ZSU234","LOP_AA_Technical","LOP_AA_Technical_M2","LOP_AA_M113_D","LOP_AA_BMP1","LOP_AA_BMP2","LOP_AA_ZSU234","LOP_AA_M998_D_4DR_FULLTOP","LOP_AA_M998_D_4DR","LOP_AA_M1025_D","LOP_AA_M1025_M2_D","LOP_AA_M1025_Mk19_D","LOP_AA_BM21","LOP_AA_Static_M2","LOP_AA_Static_M2_MiniTripod","LOP_AA_Static_Mk19_TriPod","LOP_ChDKZ_M113","LOP_ChDKZ_ZSU234","LOP_ChDKZ_BMP2","LOP_ChDKZ_BTR60","LOP_ChDKZ_T72BA","LOP_ChDKZ_T72BB","LOP_ChDKZ_BTR70","LOP_ChDKZ_BMP1","LOP_ChDKZ_BMP1P","LOP_ChDKZ_BMP1K","LOP_ChDKZ_BMP1D","LOP_ChDKZ_UAZ","LOP_ChDKZ_GAZ66_repair","LOP_ChDKZ_GAZ66_ap2","LOP_ChDKZ_GAZ66_r142","LOP_ChDKZ_GAZ66","LOP_ChDKZ_GAZ66o","LOP_ChDKZ_URAL","LOP_ChDKZ_URAL_open","LOP_ChDKZ_BM21","LOP_ChDKZ_NSV_TriPod","LOP_ISIS_ZSU234","LOP_ISIS_M113_D","LOP_ISIS_BMP2","LOP_ISIS_BTR60","LOP_ISIS_T72BA","LOP_ISIS_BTR70","LOP_ISIS_BMP1","LOP_ISIS_Technical_M2","LOP_ISIS_Technical","LOP_ISIS_M998_D_4DR_FULLTOP","LOP_ISIS_M998_D_4DR","LOP_ISIS_M1025_D","LOP_ISIS_M1025_M2_D","LOP_ISIS_M1025_Mk19_D","LOP_ISIS_Static_M2","LOP_ISIS_Static_M2_MiniTripod","LOP_ISIS_Static_Mk19_TriPod","LOP_UA_ZSU234","LOP_UA_BMP2","LOP_UA_BTR60","LOP_UA_T72BA","LOP_UA_T72BB","LOP_UA_BTR70","LOP_UA_BMP1","LOP_UA_BMP1P","LOP_UA_BMP1K","LOP_UA_BMP1D","LOP_UA_UAZ","LOP_UA_Ural","LOP_UA_Ural_open","LOP_UA_Ural_fuel","LOP_UA_BM21","LOP_UA_NSV_TriPod","LOP_AFR_M113","LOP_AFR_BTR60","LOP_AFR_T72BA","LOP_AFR_BTR70","LOP_AFR_BMP1","LOP_AFR_BMP2","LOP_AFR_Technical_M2","LOP_AFR_Technical","LOP_AFRCiv_Technical_M2","LOP_AFRCiv_Technical","LOP_AFR_NSV_TriPod","LOP_AFR_Static_M2","LOP_AFR_Static_M2_MiniTripod","LOP_AFR_Static_Mk19_TriPod","LOP_AFR_Landrover","LOP_AFR_Landrover_M2","LOP_AM_NSV_TriPod","LOP_AM_Technical","LOP_AM_Static_M2","LOP_AM_Static_M2_MiniTripod","LOP_AM_Static_Mk19_TriPod","LOP_AM_Technical_M2","LOP_AM_GAZ66","LOP_AM_GAZ66o","LOP_AM_Landrover","LOP_AM_Landrover_M2","LOP_CDF_NSV_TriPod","LOP_CDF_Static_M2","LOP_CDF_Static_M2_MiniTripod","LOP_CDF_Static_Mk19_TriPod","LOP_CDF_M113_W","LOP_CDF_BMP1","LOP_CDF_BMP1P","LOP_CDF_BMP1K","LOP_CDF_BMP1D","LOP_CDF_BMP2","LOP_CDF_ZSU234","LOP_CDF_BM21","LOP_CDF_BTR60","LOP_CDF_T72BA","LOP_CDF_T72BB","LOP_CDF_BTR70","LOP_CDF_KAMAZ_Medical","LOP_CDF_KAMAZ_Ammo","LOP_CDF_KAMAZ_Fuel","LOP_CDF_KAMAZ_Repair","LOP_CDF_KAMAZ_Transport","LOP_CDF_KAMAZ_Covered","LOP_CDF_UAZ","LOP_CDF_Landrover","LOP_CDF_Landrover_M2","LOP_US_NSV_TriPod","LOP_US_BMP2","LOP_US_BTR60","LOP_US_BTR70","LOP_US_BMP1","LOP_US_BMP1P","LOP_US_BMP1K","LOP_US_BMP1D","LOP_US_KAMAZ_Covered","LOP_US_KAMAZ_Transport","LOP_RACS_Landrover","LOP_RACS_Landrover_M2","LOP_RACS_T72BA","LOP_RACS_Static_M2","LOP_RACS_Static_M2_MiniTripod","LOP_RACS_Technical","LOP_RACS_Technical_M2","LOP_RACS_Static_Mk19_TriPod","LOP_RACS_MH9","LOP_RACS_MH9_armed","LOP_RACS_M113_D","LOP_RACS_UH60M","LOP_SLA_ZSU234","LOP_SLA_BMP2","LOP_SLA_BTR60","LOP_SLA_T72BA","LOP_SLA_T72BB","LOP_SLA_BTR70","LOP_SLA_BMP1","LOP_SLA_BMP1P","LOP_SLA_BMP1K","LOP_SLA_BMP1D","LOP_SLA_UAZ","LOP_SLA_Ural","LOP_SLA_Ural_open","LOP_SLA_Ural_fuel","LOP_SLA_BM21","LOP_SLA_NSV_TriPod"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_main"};
	};
};
class CfgVehicles
{
	class rhs_zsu234_chdkz;
	class rhs_bmd2_chdkz;
	class rhs_btr70_chdkz;
	class rhs_t72bb_chdkz;
	class rhs_btr60_vv;
	class rhs_btr70_vv;
	class rhs_bmp1_vv;
	class rhs_bmp1p_vv;
	class rhs_bmp1k_vv;
	class rhs_bmp1d_vv;
	class rhs_bmp2_vv;
	class rhs_t72ba_tv;
	class rhs_t72bb_tv;
	class rhs_zsu234_aa;
	class rhsusf_m1a1aimd_usarmy;
	class rhsusf_m113d_usarmy;
	class rhsusf_m113_usarmy;
	class RHS_M2A2;
	class rhs_gaz66_vv;
	class rhs_gaz66o_vv;
	class rhs_gaz66_r142_vv;
	class rhs_gaz66_ap2_vv;
	class rhs_gaz66_repair_vv;
	class rhs_uaz_vv;
	class RHS_Ural_VV_01;
	class RHS_BM21_VV_01;
	class RHS_Ural_Fuel_VV_01;
	class RHS_Ural_Open_VV_01;
	class B_MRAP_01_F;
	class B_MRAP_01_hmg_F;
	class B_G_Quadbike_01_F;
	class C_Offroad_01_F;
	class C_SUV_01_F;
	class RHS_UH60M;
	class rhsusf_m998_d_4dr_fulltop;
	class rhsusf_m1025_d_Mk19;
	class rhsusf_m1025_d_m2;
	class rhsusf_m998_d_4dr;
	class rhsusf_m1025_d;
	class RHS_MK19_TriPod_D;
	class RHS_M2StaticMG_MiniTripod_D;
	class RHS_M2StaticMG_D;
	class RHS_NSV_TriPod_MSV;
	class B_G_Offroad_01_F;
	class B_G_Offroad_01_armed_F;
	class B_G_Van_01_transport_F;
	class B_Heli_Light_01_F;
	class B_Heli_Light_01_armed_F;
	class LOP_LandRover_base_02;
	class LOP_LandRover_mg_base;
	class LOP_ISIS_Static_M2: RHS_M2StaticMG_D
	{
		_generalMacro = "LOP_ISIS_Static_M2";
		scope = 2;
		side = 2;
		faction = "LOP_ISIS";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_ISIS_Soldier"};
		crew = "LOP_ISIS_Soldier";
	};
	class LOP_ISIS_Static_M2_MiniTripod: RHS_M2StaticMG_MiniTripod_D
	{
		_generalMacro = "LOP_ISIS_Static_M2_MiniTripod";
		scope = 2;
		side = 2;
		faction = "LOP_ISIS";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_ISIS_Soldier"};
		crew = "LOP_ISIS_Soldier";
	};
	class LOP_ISIS_Static_Mk19_TriPod: RHS_MK19_TriPod_D
	{
		_generalMacro = "LOP_ISIS_Static_Mk19_TriPod";
		scope = 2;
		side = 2;
		faction = "LOP_ISIS";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_ISIS_Soldier"};
		crew = "LOP_ISIS_Soldier";
	};
	class LOP_ISIS_M113_D: rhsusf_m113d_usarmy
	{
		_generalMacro = "LOP_ISIS_M113_D";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_ISIS";
		crew = "LOP_ISIS_Driver";
		typicalCargo[] = {"LOP_ISIS_Driver"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ISIS_BTR60: rhs_btr60_vv
	{
		_generalMacro = "LOP_ISIS_BTR60";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_ISIS";
		crew = "LOP_ISIS_Driver";
		typicalCargo[] = {"LOP_ISIS_Driver"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ISIS_T72BA: rhs_t72ba_tv
	{
		_generalMacro = "LOP_ISIS_T72BA";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_ISIS";
		crew = "LOP_ISIS_Driver";
		typicalCargo[] = {"LOP_ISIS_Driver"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ISIS_BTR70: rhs_btr70_vv
	{
		_generalMacro = "LOP_ISIS_BTR70";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_ISIS";
		crew = "LOP_ISIS_Driver";
		typicalCargo[] = {"LOP_ISIS_Driver"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ISIS_BMP1: rhs_bmp1_vv
	{
		_generalMacro = "LOP_ISIS_BMP1";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_ISIS";
		crew = "LOP_ISIS_Driver";
		typicalCargo[] = {"LOP_ISIS_Driver"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ISIS_BMP2: rhs_bmp2_vv
	{
		_generalMacro = "LOP_ISIS_BMP2";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_ISIS";
		crew = "LOP_ISIS_Driver";
		typicalCargo[] = {"LOP_ISIS_Driver"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ISIS_ZSU234: rhs_zsu234_aa
	{
		_generalMacro = "LOP_ISIS_ZSU234";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_ISIS";
		crew = "LOP_ISIS_Driver";
		typicalCargo[] = {"LOP_ISIS_Driver"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ISIS_Technical_M2: B_G_Offroad_01_armed_F
	{
		_generalMacro = "LOP_ISIS_Technical_M2";
		scope = 2;
		side = 2;
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		displayName = "Technical .50cal";
		typicalCargo[] = {"LOP_ISIS_Driver"};
		crew = "LOP_ISIS_Driver";
		faction = "LOP_ISIS";
	};
	class LOP_ISIS_Technical: B_G_Offroad_01_F
	{
		_generalMacro = "LOP_ISIS_Technical";
		scope = 2;
		side = 2;
		author = "$STR_LOP_FULL_NAME";
		vehicleClass = "LOP_Wheeled";
		displayName = "Technical (unarmed)";
		typicalCargo[] = {"LOP_ISIS_Driver"};
		crew = "LOP_ISIS_Driver";
		faction = "LOP_ISIS";
	};
	class LOP_ISIS_M998_D_4DR_FULLTOP: rhsusf_m998_d_4dr_fulltop
	{
		_generalMacro = "LOP_ISIS_M998_D_4DR_FULLTOP";
		scope = 2;
		side = 2;
		faction = "LOP_ISIS";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_ISIS_Driver"};
		crew = "LOP_ISIS_Driver";
	};
	class LOP_ISIS_M998_D_4DR: rhsusf_m998_d_4dr
	{
		_generalMacro = "LOP_ISIS_M998_D_4DR";
		scope = 2;
		side = 2;
		faction = "LOP_ISIS";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_ISIS_Driver"};
		crew = "LOP_ISIS_Driver";
	};
	class LOP_ISIS_M1025_D: rhsusf_m1025_d
	{
		_generalMacro = "LOP_ISIS_M1025_D";
		scope = 2;
		side = 2;
		faction = "LOP_ISIS";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_ISIS_Driver"};
		crew = "LOP_ISIS_Driver";
	};
	class LOP_ISIS_M1025_M2_D: rhsusf_m1025_d_m2
	{
		_generalMacro = "LOP_ISIS_M1025_M2_D";
		scope = 2;
		side = 2;
		faction = "LOP_ISIS";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_ISIS_Driver"};
		crew = "LOP_ISIS_Driver";
	};
	class LOP_ISIS_M1025_Mk19_D: rhsusf_m1025_d_Mk19
	{
		_generalMacro = "LOP_ISIS_M1025_Mk19_D";
		scope = 2;
		side = 2;
		faction = "LOP_ISIS";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_ISIS_Driver"};
		crew = "LOP_ISIS_Driver";
	};
	class LOP_AA_Static_M2: RHS_M2StaticMG_D
	{
		_generalMacro = "LOP_AA_Static_M2";
		scope = 2;
		side = 1;
		faction = "LOP_AA";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AA_Soldier"};
		crew = "LOP_AA_Soldier";
	};
	class LOP_AA_Static_M2_MiniTripod: RHS_M2StaticMG_MiniTripod_D
	{
		_generalMacro = "LOP_AA_Static_M2_MiniTripod";
		scope = 2;
		side = 1;
		faction = "LOP_AA";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AA_Soldier"};
		crew = "LOP_AA_Soldier";
	};
	class LOP_AA_Static_Mk19_TriPod: RHS_MK19_TriPod_D
	{
		_generalMacro = "LOP_AA_Static_Mk19_TriPod";
		scope = 2;
		side = 1;
		faction = "LOP_AA";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AA_Soldier"};
		crew = "LOP_AA_Soldier";
	};
	class LOP_AA_Police_Technical: B_G_Offroad_01_F
	{
		_generalMacro = "LOP_AA_Police_Technical";
		scope = 2;
		side = 1;
		faction = "LOP_AA";
		displayName = "Technical (police-unarmed)";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AA_Police"};
		crew = "LOP_AA_Police";
	};
	class LOP_AA_Police_Technical_M2: B_G_Offroad_01_armed_F
	{
		_generalMacro = "LOP_AA_Police_Technical_M2";
		scope = 2;
		side = 1;
		faction = "LOP_AA";
		displayName = "Technical .50cal (police)";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AA_Police"};
		crew = "LOP_AA_Police";
	};
	class LOP_AA_Technical: B_G_Offroad_01_F
	{
		_generalMacro = "LOP_AA_Technical";
		scope = 2;
		side = 1;
		faction = "LOP_AA";
		displayName = "Technical (unarmed)";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AA_Soldier"};
		crew = "LOP_AA_Soldier";
	};
	class LOP_AA_Technical_M2: B_G_Offroad_01_armed_F
	{
		_generalMacro = "LOP_AA_Technical_M2";
		scope = 2;
		side = 1;
		faction = "LOP_AA";
		displayName = "Technical .50cal";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AA_Soldier"};
		crew = "LOP_AA_Soldier";
	};
	class LOP_AA_M113_D: rhsusf_m113d_usarmy
	{
		_generalMacro = "LOP_AA_M113_D";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_AA";
		crew = "LOP_AA_Soldier_Crewman";
		typicalCargo[] = {"LOP_AA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_AA_BMP1: rhs_bmp1_vv
	{
		_generalMacro = "LOP_AA_BMP1";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_AA";
		crew = "LOP_AA_Soldier_Crewman";
		typicalCargo[] = {"LOP_AA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_AA_BMP2: rhs_bmp2_vv
	{
		_generalMacro = "LOP_AA_BMP2";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_AA";
		crew = "LOP_AA_Soldier_Crewman";
		typicalCargo[] = {"LOP_AA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_AA_ZSU234: rhs_zsu234_aa
	{
		_generalMacro = "LOP_AA_ZSU234";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_AA";
		crew = "LOP_AA_Soldier_Crewman";
		typicalCargo[] = {"LOP_AA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_AA_M998_D_4DR_FULLTOP: rhsusf_m998_d_4dr_fulltop
	{
		_generalMacro = "LOP_AA_M998_D_4DR_FULLTOP";
		scope = 2;
		side = 1;
		faction = "LOP_AA";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AA_Soldier"};
		crew = "LOP_AA_Soldier";
	};
	class LOP_AA_M998_D_4DR: rhsusf_m998_d_4dr
	{
		_generalMacro = "LOP_AA_M998_D_4DR";
		scope = 2;
		side = 1;
		faction = "LOP_AA";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AA_Soldier"};
		crew = "LOP_AA_Soldier";
	};
	class LOP_AA_M1025_D: rhsusf_m1025_d
	{
		_generalMacro = "LOP_AA_M1025_D";
		scope = 2;
		side = 1;
		faction = "LOP_AA";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AA_Soldier"};
		crew = "LOP_AA_Soldier";
	};
	class LOP_AA_M1025_M2_D: rhsusf_m1025_d_m2
	{
		_generalMacro = "LOP_AA_M1025_M2_D";
		scope = 2;
		side = 1;
		faction = "LOP_AA";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AA_Soldier"};
		crew = "LOP_AA_Soldier";
	};
	class LOP_AA_M1025_Mk19_D: rhsusf_m1025_d_Mk19
	{
		_generalMacro = "LOP_AA_M1025_Mk19_D";
		scope = 2;
		side = 1;
		faction = "LOP_AA";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AA_Soldier"};
		crew = "LOP_AA_Soldier";
	};
	class LOP_AA_BM21: RHS_BM21_VV_01
	{
		_generalMacro = "LOP_AA_BM21";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_AA";
		crew = "LOP_AA_Soldier";
		typicalCargo[] = {"LOP_AA_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_IA_UAZ: rhs_uaz_vv
	{
		_generalMacro = "LOP_IA_UAZ";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_IA";
		crew = "LOP_IA_Soldier";
		typicalCargo[] = {"LOP_IA_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_IA_GAZ66_repair: rhs_gaz66_repair_vv
	{
		_generalMacro = "LOP_IA_GAZ66_repair";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_IA";
		crew = "LOP_IA_Soldier";
		typicalCargo[] = {"LOP_IA_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_IA_GAZ66_ap2: rhs_gaz66_ap2_vv
	{
		_generalMacro = "LOP_IA_GAZ66_ap2";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_IA";
		crew = "LOP_IA_Soldier";
		typicalCargo[] = {"LOP_IA_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_IA_GAZ66_r142: rhs_gaz66_r142_vv
	{
		_generalMacro = "LOP_IA_GAZ66_r142";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_IA";
		crew = "LOP_IA_Soldier";
		typicalCargo[] = {"LOP_IA_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_IA_GAZ66: rhs_gaz66_vv
	{
		_generalMacro = "LOP_IA_GAZ66";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_IA";
		crew = "LOP_IA_Soldier";
		typicalCargo[] = {"LOP_IA_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_IA_GAZ66o: rhs_gaz66o_vv
	{
		_generalMacro = "LOP_IA_GAZ66o";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_IA";
		crew = "LOP_IA_Soldier";
		typicalCargo[] = {"LOP_IA_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_IA_URAL: RHS_Ural_VV_01
	{
		_generalMacro = "LOP_IA_URAL";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_IA";
		crew = "LOP_IA_Soldier";
		typicalCargo[] = {"LOP_IA_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_IA_URAL_open: RHS_Ural_Open_VV_01
	{
		_generalMacro = "LOP_IA_URAL_open";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_IA";
		crew = "LOP_IA_Soldier";
		typicalCargo[] = {"LOP_IA_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_IA_Static_M2: RHS_M2StaticMG_D
	{
		_generalMacro = "LOP_IA_Static_M2";
		scope = 2;
		side = 1;
		faction = "LOP_IA";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_IA_Soldier"};
		crew = "LOP_IA_Soldier";
	};
	class LOP_IA_Static_M2_MiniTripod: RHS_M2StaticMG_MiniTripod_D
	{
		_generalMacro = "LOP_IA_Static_M2_MiniTripod";
		scope = 2;
		side = 1;
		faction = "LOP_IA";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_IA_Soldier"};
		crew = "LOP_IA_Soldier";
	};
	class LOP_IA_Static_Mk19_TriPod: RHS_MK19_TriPod_D
	{
		_generalMacro = "LOP_IA_Static_Mk19_TriPod";
		scope = 2;
		side = 1;
		faction = "LOP_IA";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_IA_Soldier"};
		crew = "LOP_IA_Soldier";
	};
	class LOP_IA_Technical: B_G_Offroad_01_F
	{
		_generalMacro = "LOP_IA_Technical";
		scope = 2;
		side = 1;
		faction = "LOP_IA";
		displayName = "Technical (unarmed)";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_IA_Soldier"};
		crew = "LOP_IA_Soldier";
	};
	class LOP_IA_Technical_M2: B_G_Offroad_01_armed_F
	{
		_generalMacro = "LOP_IA_Technical_M2";
		scope = 2;
		side = 1;
		faction = "LOP_IA";
		displayName = "Technical .50cal";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_IA_Soldier"};
		crew = "LOP_IA_Soldier";
	};
	class LOP_IA_M113_D: rhsusf_m113d_usarmy
	{
		_generalMacro = "LOP_IA_M113_D";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_IA";
		crew = "LOP_IA_Soldier_Crewman";
		typicalCargo[] = {"LOP_IA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_IA_M1A1_D: rhsusf_m1a1aimd_usarmy
	{
		_generalMacro = "LOP_IA_M1A1_D";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_IA";
		crew = "LOP_IA_Soldier_Crewman";
		typicalCargo[] = {"LOP_IA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_IA_T72BA_D: rhs_t72ba_tv
	{
		_generalMacro = "LOP_IA_T72BA_D";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_IA";
		crew = "LOP_IA_Soldier_Crewman";
		typicalCargo[] = {"LOP_IA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_IA_BMP1: rhs_bmp1_vv
	{
		_generalMacro = "LOP_IA_BMP1";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_IA";
		crew = "LOP_IA_Soldier_Crewman";
		typicalCargo[] = {"LOP_IA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_IA_ZSU234: rhs_zsu234_aa
	{
		_generalMacro = "LOP_IA_ZSU234";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_IA";
		crew = "LOP_IA_Soldier_Crewman";
		typicalCargo[] = {"LOP_IA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_IA_BMP2: rhs_bmp2_vv
	{
		_generalMacro = "LOP_IA_BMP2";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_IA";
		crew = "LOP_IA_Soldier_Crewman";
		typicalCargo[] = {"LOP_IA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_IA_M998_D_4DR_FULLTOP: rhsusf_m998_d_4dr_fulltop
	{
		_generalMacro = "LOP_IA_M998_D_4DR_FULLTOP";
		scope = 2;
		side = 1;
		faction = "LOP_IA";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_IA_Soldier"};
		crew = "LOP_IA_Soldier";
	};
	class LOP_IA_M998_D_4DR: rhsusf_m998_d_4dr
	{
		_generalMacro = "LOP_IA_M998_D_4DR";
		scope = 2;
		side = 1;
		faction = "LOP_IA";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_IA_Soldier"};
		crew = "LOP_IA_Soldier";
	};
	class LOP_IA_M1025_D: rhsusf_m1025_d
	{
		_generalMacro = "LOP_IA_M1025_D";
		scope = 2;
		side = 1;
		faction = "LOP_IA";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_IA_Soldier"};
		crew = "LOP_IA_Soldier";
	};
	class LOP_IA_M1025_M2_D: rhsusf_m1025_d_m2
	{
		_generalMacro = "LOP_IA_M1025_M2_D";
		scope = 2;
		side = 1;
		faction = "LOP_IA";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_IA_Soldier"};
		crew = "LOP_IA_Soldier";
	};
	class LOP_IA_M1025_Mk19_D: rhsusf_m1025_d_Mk19
	{
		_generalMacro = "LOP_IA_M1025_Mk19_D";
		scope = 2;
		side = 1;
		faction = "LOP_IA";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_IA_Soldier"};
		crew = "LOP_IA_Soldier";
	};
	class O_Truck_02_covered_F;
	class O_Truck_02_transport_F;
	class O_Truck_02_box_F;
	class O_Truck_02_medical_F;
	class O_Truck_02_Ammo_F;
	class O_Truck_02_fuel_F;
	class LOP_CDF_Landrover: LOP_LandRover_base_02
	{
		_generalMacro = "LOP_CDF_Landrover";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 1;
		displayname = "Land Rover";
		crew = "LOP_CDF_Soldier";
		typicalCargo[] = {"LOP_CDF_Soldier"};
		hiddenSelectionsTextures[] = {"lop_t_veh_landrover\data\lr_base_cdf_co.paa","lop_t_veh_landrover\data\lr_special_w_baf_co.paa"};
		vehicleClass = "LOP_Wheeled";
		faction = "LOP_CDF";
	};
	class LOP_CDF_Landrover_M2: LOP_LandRover_mg_base
	{
		_generalMacro = "LOP_CDF_Landrover_M2";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 1;
		displayname = "Land Rover .50cal";
		crew = "LOP_CDF_Soldier";
		typicalCargo[] = {"LOP_CDF_Soldier"};
		hiddenSelectionsTextures[] = {"lop_t_veh_landrover\data\lr_base_cdf_co.paa","lop_t_veh_landrover\data\lr_special_w_baf_co.paa","lop_t_veh_landrover\data\lr_mg-spg9_w_baf_co.paa"};
		vehicleClass = "LOP_Wheeled";
		faction = "LOP_CDF";
	};
	class LOP_CDF_UAZ: rhs_uaz_vv
	{
		_generalMacro = "LOP_CDF_UAZ";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_CDF";
		crew = "LOP_CDF_Soldier";
		typicalCargo[] = {"LOP_CDF_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_CDF_KAMAZ_Covered: O_Truck_02_covered_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CDF_KAMAZ_Covered";
		scope = 2;
		side = 1;
		faction = "LOP_CDF";
		vehicleClass = "LOP_Wheeled";
		displayName = "KAMAZ (covered)";
		crew = "LOP_CDF_Soldier";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\lop_t_veh_kamaz\data\kamaz_kab_co.paa","\lop_t_veh_kamaz\data\kamaz_kuz_co.paa"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class LOP_CDF_KAMAZ_Transport: O_Truck_02_transport_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CDF_KAMAZ_Transport";
		scope = 2;
		side = 1;
		faction = "LOP_CDF";
		vehicleClass = "LOP_Wheeled";
		displayName = "KAMAZ";
		crew = "LOP_CDF_Soldier";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\lop_t_veh_kamaz\data\kamaz_kab_co.paa","\lop_t_veh_kamaz\data\kamaz_kuz_co.paa"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class LOP_CDF_KAMAZ_Repair: O_Truck_02_box_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CDF_KAMAZ_Repair";
		scope = 2;
		side = 1;
		faction = "LOP_CDF";
		vehicleClass = "LOP_Support";
		displayName = "KAMAZ (repair)";
		crew = "LOP_CDF_Soldier";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\lop_t_veh_kamaz\data\kamaz_kab_co.paa","\lop_t_veh_kamaz\data\kamaz_repair_co.paa"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 3;
			};
		};
	};
	class LOP_CDF_KAMAZ_Fuel: O_Truck_02_fuel_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CDF_KAMAZ_Fuel";
		scope = 2;
		side = 1;
		faction = "LOP_CDF";
		vehicleClass = "LOP_Support";
		displayName = "KAMAZ (fuel)";
		crew = "LOP_CDF_Soldier";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\lop_t_veh_kamaz\data\kamaz_kab_co.paa","\lop_t_veh_kamaz\data\kamaz_fuel_co.paa"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 3;
			};
		};
	};
	class LOP_CDF_KAMAZ_Ammo: O_Truck_02_Ammo_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CDF_KAMAZ_Ammo";
		scope = 2;
		side = 1;
		faction = "LOP_CDF";
		vehicleClass = "LOP_Support";
		displayName = "KAMAZ (ammo)";
		crew = "LOP_CDF_Soldier";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\lop_t_veh_kamaz\data\kamaz_kab_ammo_co.paa","\lop_t_veh_kamaz\data\kamaz_ammo_co.paa"};
		class TransportWeapons
		{
			class _xx_rhs_weap_ak74m
			{
				weapon = "rhs_weap_ak74m";
				count = 2;
			};
		};
		class TransportItems{};
	};
	class LOP_CDF_KAMAZ_Medical: O_Truck_02_medical_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_CDF_KAMAZ_Medical";
		scope = 2;
		side = 1;
		faction = "LOP_CDF";
		vehicleClass = "LOP_Support";
		displayName = "KAMAZ (medical)";
		crew = "LOP_CDF_Soldier";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\lop_t_veh_kamaz\data\kamaz_kab_co.paa","\lop_t_veh_kamaz\data\kamaz_kuz_co.paa"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 10;
			};
		};
	};
	class LOP_CDF_NSV_TriPod: RHS_NSV_TriPod_MSV
	{
		_generalMacro = "LOP_CDF_NSV_TriPod";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_CDF";
		crew = "LOP_CDF_Soldier";
		typicalCargo[] = {"LOP_CDF_Soldier"};
		vehicleClass = "LOP_Static";
	};
	class LOP_CDF_Static_M2: RHS_M2StaticMG_D
	{
		_generalMacro = "LOP_CDF_Static_M2";
		scope = 2;
		side = 1;
		faction = "LOP_CDF";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_CDF_Soldier"};
		crew = "LOP_CDF_Soldier";
	};
	class LOP_CDF_Static_M2_MiniTripod: RHS_M2StaticMG_MiniTripod_D
	{
		_generalMacro = "LOP_CDF_Static_M2_MiniTripod";
		scope = 2;
		side = 1;
		faction = "LOP_CDF";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_CDF_Soldier"};
		crew = "LOP_CDF_Soldier";
	};
	class LOP_CDF_Static_Mk19_TriPod: RHS_MK19_TriPod_D
	{
		_generalMacro = "LOP_CDF_Static_Mk19_TriPod";
		scope = 2;
		side = 1;
		faction = "LOP_CDF";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_CDF_Soldier"};
		crew = "LOP_CDF_Soldier";
	};
	class LOP_CDF_M113_W: rhsusf_m113_usarmy
	{
		_generalMacro = "LOP_CDF_M113_W";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_CDF";
		crew = "LOP_CDF_Soldier_Crewman";
		typicalCargo[] = {"LOP_CDF_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_CDF_BMP1: rhs_bmp1_vv
	{
		_generalMacro = "LOP_CDF_BMP1";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_CDF";
		crew = "LOP_CDF_Soldier_Crewman";
		typicalCargo[] = {"LOP_CDF_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_CDF_BMP1P: rhs_bmp1p_vv
	{
		_generalMacro = "LOP_CDF_BMP1P";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_CDF";
		crew = "LOP_CDF_Soldier_Crewman";
		typicalCargo[] = {"LOP_CDF_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_CDF_BMP1K: rhs_bmp1k_vv
	{
		_generalMacro = "LOP_CDF_BMP1K";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_CDF";
		crew = "LOP_CDF_Soldier_Crewman";
		typicalCargo[] = {"LOP_CDF_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_CDF_BMP1D: rhs_bmp1d_vv
	{
		_generalMacro = "LOP_CDF_BMP1D";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_CDF";
		crew = "LOP_CDF_Soldier_Crewman";
		typicalCargo[] = {"LOP_CDF_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_CDF_BMP2: rhs_bmp2_vv
	{
		_generalMacro = "LOP_CDF_BMP2";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_CDF";
		crew = "LOP_CDF_Soldier_Crewman";
		typicalCargo[] = {"LOP_CDF_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_CDF_ZSU234: rhs_zsu234_aa
	{
		_generalMacro = "LOP_CDF_ZSU234";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_CDF";
		crew = "LOP_CDF_Soldier_Crewman";
		typicalCargo[] = {"LOP_CDF_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_CDF_BM21: RHS_BM21_VV_01
	{
		_generalMacro = "LOP_CDF_BM21";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_CDF";
		crew = "LOP_CDF_Soldier";
		typicalCargo[] = {"LOP_CDF_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_CDF_BTR60: rhs_btr60_vv
	{
		_generalMacro = "LOP_CDF_BTR60";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_CDF";
		crew = "LOP_CDF_Soldier_Crewman";
		typicalCargo[] = {"LOP_CDF_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_CDF_T72BA: rhs_t72ba_tv
	{
		_generalMacro = "LOP_CDF_T72BA";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_CDF";
		crew = "LOP_CDF_Soldier_Crewman";
		typicalCargo[] = {"LOP_CDF_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_CDF_T72BB: rhs_t72bb_tv
	{
		_generalMacro = "LOP_CDF_T72BB";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_CDF";
		crew = "LOP_CDF_Soldier_Crewman";
		typicalCargo[] = {"LOP_CDF_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_CDF_BTR70: rhs_btr70_vv
	{
		_generalMacro = "LOP_CDF_BTR70";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 1;
		faction = "LOP_CDF";
		crew = "LOP_CDF_Soldier_Crewman";
		typicalCargo[] = {"LOP_CDF_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_AFR_Landrover: LOP_LandRover_base_02
	{
		_generalMacro = "LOP_AFR_Landrover";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 2;
		displayname = "Land Rover";
		crew = "LOP_AFR_Soldier";
		typicalCargo[] = {"LOP_AFR_Soldier"};
		hiddenSelectionsTextures[] = {"lop_t_veh_landrover\data\lr_base_afr_co.paa","lop_t_veh_landrover\data\lr_special_afr_co.paa"};
		vehicleClass = "LOP_Wheeled";
		faction = "LOP_AFR";
	};
	class LOP_AFR_Landrover_M2: LOP_LandRover_mg_base
	{
		_generalMacro = "LOP_AFR_Landrover_M2";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 2;
		displayname = "Land Rover .50cal";
		crew = "LOP_AFR_Soldier";
		typicalCargo[] = {"LOP_AFR_Soldier"};
		hiddenSelectionsTextures[] = {"lop_t_veh_landrover\data\lr_base_afr_co.paa","lop_t_veh_landrover\data\lr_special_afr_co.paa","lop_t_veh_landrover\data\lr_mg-spg9_baf_co.paa"};
		vehicleClass = "LOP_Wheeled";
		faction = "LOP_AFR";
	};
	class LOP_AFR_NSV_TriPod: RHS_NSV_TriPod_MSV
	{
		_generalMacro = "LOP_AFR_NSV_TriPod";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_AFR";
		crew = "LOP_AFR_Soldier";
		typicalCargo[] = {"LOP_AFR_Soldier"};
		vehicleClass = "LOP_Static";
	};
	class LOP_AFR_Static_M2: RHS_M2StaticMG_D
	{
		_generalMacro = "LOP_AFR_Static_M2";
		scope = 2;
		side = 2;
		faction = "LOP_AFR";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AFR_Soldier"};
		crew = "LOP_AFR_Soldier";
	};
	class LOP_AFR_Static_M2_MiniTripod: RHS_M2StaticMG_MiniTripod_D
	{
		_generalMacro = "LOP_AFR_Static_M2_MiniTripod";
		scope = 2;
		side = 2;
		faction = "LOP_AFR";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AFR_Soldier"};
		crew = "LOP_AFR_Soldier";
	};
	class LOP_AFR_Static_Mk19_TriPod: RHS_MK19_TriPod_D
	{
		_generalMacro = "LOP_AFR_Static_Mk19_TriPod";
		scope = 2;
		side = 2;
		faction = "LOP_AFR";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AFR_Soldier"};
		crew = "LOP_AFR_Soldier";
	};
	class LOP_AFR_Technical_M2: B_G_Offroad_01_armed_F
	{
		_generalMacro = "LOP_AFR_Technical_M2";
		scope = 2;
		side = 2;
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		displayName = "Technical .50cal";
		typicalCargo[] = {"LOP_AFR_Driver"};
		crew = "LOP_AFR_Driver";
		faction = "LOP_AFR";
	};
	class LOP_AFR_Technical: B_G_Offroad_01_F
	{
		_generalMacro = "LOP_AFR_Technical";
		scope = 2;
		side = 2;
		author = "$STR_LOP_FULL_NAME";
		vehicleClass = "LOP_Wheeled";
		displayName = "Technical (unarmed)";
		typicalCargo[] = {"LOP_AFR_Driver"};
		crew = "LOP_AFR_Driver";
		faction = "LOP_AFR";
	};
	class LOP_AFRCiv_Technical_M2: B_G_Offroad_01_armed_F
	{
		_generalMacro = "LOP_AFRCiv_Technical_M2";
		scope = 2;
		side = 2;
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		displayName = "Technical .50cal (civ)";
		typicalCargo[] = {"LOP_AFRCiv_Driver"};
		crew = "LOP_AFRCiv_Driver";
		faction = "LOP_AFR";
	};
	class LOP_AFRCiv_Technical: B_G_Offroad_01_F
	{
		_generalMacro = "LOP_AFRCiv_Technical";
		scope = 2;
		side = 2;
		author = "$STR_LOP_FULL_NAME";
		vehicleClass = "LOP_Wheeled";
		displayName = "Technical (civ-unarmed)";
		typicalCargo[] = {"LOP_AFRCiv_Driver"};
		crew = "LOP_AFRCiv_Driver";
		faction = "LOP_AFR";
	};
	class LOP_AFR_M113: rhsusf_m113_usarmy
	{
		_generalMacro = "LOP_AFR_M113";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_AFR";
		crew = "LOP_AFR_Driver";
		typicalCargo[] = {"LOP_AFR_Driver"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_AFR_BTR60: rhs_btr60_vv
	{
		_generalMacro = "LOP_AFR_BTR60";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_AFR";
		crew = "LOP_AFR_Driver";
		typicalCargo[] = {"LOP_AFR_Driver"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_AFR_T72BA: rhs_t72ba_tv
	{
		_generalMacro = "LOP_AFR_T72BA";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_AFR";
		crew = "LOP_AFR_Driver";
		typicalCargo[] = {"LOP_AFR_Driver"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_AFR_BTR70: rhs_btr70_vv
	{
		_generalMacro = "LOP_AFR_BTR70";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_AFR";
		crew = "LOP_AFR_Driver";
		typicalCargo[] = {"LOP_AFR_Driver"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_AFR_BMP1: rhs_bmp1_vv
	{
		_generalMacro = "LOP_AFR_BMP1";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_AFR";
		crew = "LOP_AFR_Driver";
		typicalCargo[] = {"LOP_AFR_Driver"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_AFR_BMP2: rhs_bmp2_vv
	{
		_generalMacro = "LOP_AFR_BMP2";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_AFR";
		crew = "LOP_AFR_Driver";
		typicalCargo[] = {"LOP_AFR_Driver"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ChDKZ_NSV_TriPod: RHS_NSV_TriPod_MSV
	{
		_generalMacro = "LOP_ChDKZ_NSV_TriPod";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier";
		typicalCargo[] = {"LOP_ChDKZ_Soldier"};
		vehicleClass = "LOP_Static";
	};
	class LOP_ChDKZ_M113: rhsusf_m113_usarmy
	{
		_generalMacro = "LOP_ChDKZ_M113";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier";
		typicalCargo[] = {"LOP_ChDKZ_Soldier"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ChDKZ_ZSU234: rhs_zsu234_chdkz
	{
		_generalMacro = "LOP_ChDKZ_ZSU234";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier_Crewman";
		typicalCargo[] = {"LOP_ChDKZ_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ChDKZ_BMD2: rhs_bmd2_chdkz
	{
		_generalMacro = "LOP_ChDKZ_BMD2";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier_Crewman";
		typicalCargo[] = {"LOP_ChDKZ_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ChDKZ_BMP2: rhs_bmp2_vv
	{
		_generalMacro = "LOP_ChDKZ_BMP2";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier_Crewman";
		typicalCargo[] = {"LOP_ChDKZ_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ChDKZ_BTR60: rhs_btr60_vv
	{
		_generalMacro = "LOP_ChDKZ_BTR60";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier_Crewman";
		typicalCargo[] = {"LOP_ChDKZ_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ChDKZ_T72BA: rhs_t72ba_tv
	{
		_generalMacro = "LOP_ChDKZ_T72BA";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier_Crewman";
		typicalCargo[] = {"LOP_ChDKZ_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ChDKZ_T72BB: rhs_t72bb_chdkz
	{
		_generalMacro = "LOP_ChDKZ_T72BB";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier_Crewman";
		typicalCargo[] = {"LOP_ChDKZ_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ChDKZ_BTR70: rhs_btr70_chdkz
	{
		_generalMacro = "LOP_ChDKZ_BTR70";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier_Crewman";
		typicalCargo[] = {"LOP_ChDKZ_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ChDKZ_BMP1: rhs_bmp1_vv
	{
		_generalMacro = "LOP_ChDKZ_BMP1";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier_Crewman";
		typicalCargo[] = {"LOP_ChDKZ_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ChDKZ_BMP1P: rhs_bmp1p_vv
	{
		_generalMacro = "LOP_ChDKZ_BMP1P";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier_Crewman";
		typicalCargo[] = {"LOP_ChDKZ_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ChDKZ_BMP1K: rhs_bmp1k_vv
	{
		_generalMacro = "LOP_ChDKZ_BMP1K";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier_Crewman";
		typicalCargo[] = {"LOP_ChDKZ_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ChDKZ_BMP1D: rhs_bmp1d_vv
	{
		_generalMacro = "LOP_ChDKZ_BMP1D";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier_Crewman";
		typicalCargo[] = {"LOP_ChDKZ_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_ChDKZ_GAZ66_repair: rhs_gaz66_repair_vv
	{
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier";
		typicalCargo[] = {"LOP_ChDKZ_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_ChDKZ_GAZ66_ap2: rhs_gaz66_ap2_vv
	{
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier";
		typicalCargo[] = {"LOP_ChDKZ_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_ChDKZ_GAZ66_r142: rhs_gaz66_r142_vv
	{
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier";
		typicalCargo[] = {"LOP_ChDKZ_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_ChDKZ_GAZ66: rhs_gaz66_vv
	{
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier";
		typicalCargo[] = {"LOP_ChDKZ_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_ChDKZ_GAZ66o: rhs_gaz66o_vv
	{
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier";
		typicalCargo[] = {"LOP_ChDKZ_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_ChDKZ_URAL: RHS_Ural_VV_01
	{
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier";
		typicalCargo[] = {"LOP_ChDKZ_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_ChDKZ_URAL_open: RHS_Ural_Open_VV_01
	{
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier";
		typicalCargo[] = {"LOP_ChDKZ_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_ChDKZ_BM21: RHS_BM21_VV_01
	{
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier";
		typicalCargo[] = {"LOP_ChDKZ_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_ChDKZ_UAZ: rhs_uaz_vv
	{
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_ChDKZ";
		crew = "LOP_ChDKZ_Soldier";
		typicalCargo[] = {"LOP_ChDKZ_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_UA_NSV_TriPod: RHS_NSV_TriPod_MSV
	{
		_generalMacro = "LOP_UA_NSV_TriPod";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_UA";
		crew = "LOP_UA_Soldier";
		typicalCargo[] = {"LOP_UA_Soldier"};
		vehicleClass = "LOP_Static";
	};
	class LOP_UA_ZSU234: rhs_zsu234_aa
	{
		_generalMacro = "LOP_UA_ZSU234";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_UA";
		crew = "LOP_UA_Soldier_Crewman";
		typicalCargo[] = {"LOP_UA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_UA_BMP2: rhs_bmp2_vv
	{
		_generalMacro = "LOP_UA_BMP2";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_UA";
		crew = "LOP_UA_Soldier_Crewman";
		typicalCargo[] = {"LOP_UA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_UA_BTR60: rhs_btr60_vv
	{
		_generalMacro = "LOP_UA_BTR60";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_UA";
		crew = "LOP_UA_Soldier_Crewman";
		typicalCargo[] = {"LOP_UA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_UA_T72BA: rhs_t72ba_tv
	{
		_generalMacro = "LOP_UA_T72BA";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_UA";
		crew = "LOP_UA_Soldier_Crewman";
		typicalCargo[] = {"LOP_UA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_UA_T72BB: rhs_t72bb_tv
	{
		_generalMacro = "LOP_UA_T72BB";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_UA";
		crew = "LOP_UA_Soldier_Crewman";
		typicalCargo[] = {"LOP_UA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_UA_BTR70: rhs_btr70_vv
	{
		_generalMacro = "LOP_UA_BTR70";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_UA";
		crew = "LOP_UA_Soldier_Crewman";
		typicalCargo[] = {"LOP_UA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_UA_BMP1: rhs_bmp1_vv
	{
		_generalMacro = "LOP_UA_BMP1";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_UA";
		crew = "LOP_UA_Soldier_Crewman";
		typicalCargo[] = {"LOP_UA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_UA_BMP1P: rhs_bmp1p_vv
	{
		_generalMacro = "LOP_UA_BMP1P";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_UA";
		crew = "LOP_UA_Soldier_Crewman";
		typicalCargo[] = {"LOP_UA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_UA_BMP1K: rhs_bmp1k_vv
	{
		_generalMacro = "LOP_UA_BMP1K";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_UA";
		crew = "LOP_UA_Soldier_Crewman";
		typicalCargo[] = {"LOP_UA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_UA_BMP1D: rhs_bmp1d_vv
	{
		_generalMacro = "LOP_UA_BMP1D";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_UA";
		crew = "LOP_UA_Soldier_Crewman";
		typicalCargo[] = {"LOP_UA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_UA_Ural: RHS_Ural_VV_01
	{
		_generalMacro = "LOP_UA_BMP1D";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_UA";
		crew = "LOP_UA_Soldier";
		typicalCargo[] = {"LOP_UA_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_UA_BM21: RHS_BM21_VV_01
	{
		_generalMacro = "LOP_UA_BM21";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_UA";
		crew = "LOP_UA_Soldier";
		typicalCargo[] = {"LOP_UA_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_UA_Ural_fuel: RHS_Ural_Fuel_VV_01
	{
		_generalMacro = "LOP_UA_Ural_fuel";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_UA";
		crew = "LOP_UA_Soldier";
		typicalCargo[] = {"LOP_UA_Soldier"};
		vehicleClass = "LOP_Support";
	};
	class LOP_UA_Ural_open: RHS_Ural_Open_VV_01
	{
		_generalMacro = "LOP_UA_Ural_open";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_UA";
		crew = "LOP_UA_Soldier";
		typicalCargo[] = {"LOP_UA_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_UA_UAZ: rhs_uaz_vv
	{
		_generalMacro = "LOP_UA_UAZ";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_UA";
		crew = "LOP_UA_Soldier";
		typicalCargo[] = {"LOP_UA_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_AM_Landrover: LOP_LandRover_base_02
	{
		_generalMacro = "LOP_AM_Landrover";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 2;
		displayname = "Land Rover";
		crew = "LOP_AM_Soldier";
		typicalCargo[] = {"LOP_AM_Soldier"};
		hiddenSelectionsTextures[] = {"lop_t_veh_landrover\data\lr_base_am_co.paa","lop_t_veh_landrover\data\lr_special_w_baf_co.paa"};
		vehicleClass = "LOP_Wheeled";
		faction = "LOP_AM";
	};
	class LOP_AM_Landrover_M2: LOP_LandRover_mg_base
	{
		_generalMacro = "LOP_AM_Landrover_M2";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 2;
		displayname = "Land Rover .50cal";
		crew = "LOP_AM_Soldier";
		typicalCargo[] = {"LOP_AM_Soldier"};
		hiddenSelectionsTextures[] = {"lop_t_veh_landrover\data\lr_base_am_co.paa","lop_t_veh_landrover\data\lr_special_w_baf_co.paa","lop_t_veh_landrover\data\lr_mg-spg9_ind_co.paa"};
		vehicleClass = "LOP_Wheeled";
		faction = "LOP_AM";
	};
	class LOP_AM_NSV_TriPod: RHS_NSV_TriPod_MSV
	{
		_generalMacro = "LOP_AM_NSV_TriPod";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_AM";
		crew = "LOP_AM_Soldier";
		typicalCargo[] = {"LOP_AM_Soldier"};
		vehicleClass = "LOP_Static";
	};
	class LOP_AM_Technical: B_G_Offroad_01_F
	{
		_generalMacro = "LOP_AM_Technical";
		scope = 2;
		side = 2;
		faction = "LOP_AM";
		displayName = "Technical (unarmed)";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AM_Soldier"};
		crew = "LOP_AM_Soldier";
	};
	class LOP_AM_Static_M2: RHS_M2StaticMG_D
	{
		_generalMacro = "LOP_AM_Static_M2";
		scope = 2;
		side = 2;
		faction = "LOP_AM";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AM_Soldier"};
		crew = "LOP_AM_Soldier";
	};
	class LOP_AM_Static_M2_MiniTripod: RHS_M2StaticMG_MiniTripod_D
	{
		_generalMacro = "LOP_AM_Static_M2_MiniTripod";
		scope = 2;
		side = 2;
		faction = "LOP_AM";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AM_Soldier"};
		crew = "LOP_AM_Soldier";
	};
	class LOP_AM_Static_Mk19_TriPod: RHS_MK19_TriPod_D
	{
		_generalMacro = "LOP_AM_Static_Mk19_TriPod";
		scope = 2;
		side = 2;
		faction = "LOP_AM";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AM_Soldier"};
		crew = "LOP_AM_Soldier";
	};
	class LOP_AM_Technical_M2: B_G_Offroad_01_armed_F
	{
		_generalMacro = "LOP_AM_Technical_M2";
		scope = 2;
		side = 2;
		faction = "LOP_AM";
		displayName = "Technical .50cal";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_AM_Soldier"};
		crew = "LOP_AM_Soldier";
	};
	class LOP_AM_GAZ66: rhs_gaz66_vv
	{
		_generalMacro = "LOP_AM_GAZ66";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_AM";
		crew = "LOP_AM_Soldier";
		typicalCargo[] = {"LOP_AM_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_AM_GAZ66o: rhs_gaz66o_vv
	{
		_generalMacro = "LOP_AM_GAZ66o";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_AM";
		crew = "LOP_AM_Soldier";
		typicalCargo[] = {"LOP_AM_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_US_KAMAZ_Covered: O_Truck_02_covered_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_US_KAMAZ_Covered";
		scope = 2;
		side = 0;
		faction = "LOP_US";
		vehicleClass = "LOP_Wheeled";
		displayName = "KAMAZ (covered)";
		crew = "LOP_US_Soldier";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\lop_t_veh_kamaz\data\kamaz_kab_olv_co.paa","\lop_t_veh_kamaz\data\kamaz_kuz_olv_co.paa"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class LOP_US_KAMAZ_Transport: O_Truck_02_transport_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_US_KAMAZ_Transport";
		scope = 2;
		side = 0;
		faction = "LOP_US";
		vehicleClass = "LOP_Wheeled";
		displayName = "KAMAZ";
		crew = "LOP_US_Soldier";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\lop_t_veh_kamaz\data\kamaz_kab_olv_co.paa","\lop_t_veh_kamaz\data\kamaz_kuz_olv_co.paa"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class LOP_US_NSV_TriPod: RHS_NSV_TriPod_MSV
	{
		_generalMacro = "LOP_US_NSV_TriPod";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_US";
		crew = "LOP_US_Soldier";
		typicalCargo[] = {"LOP_US_Soldier"};
		vehicleClass = "LOP_Static";
	};
	class LOP_US_BMP2: rhs_bmp2_vv
	{
		_generalMacro = "LOP_US_BMP2";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_US";
		crew = "LOP_US_Soldier_Crewman";
		typicalCargo[] = {"LOP_US_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_US_BTR60: rhs_btr60_vv
	{
		_generalMacro = "LOP_US_BTR60";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_US";
		crew = "LOP_US_Soldier_Crewman";
		typicalCargo[] = {"LOP_US_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_US_BTR70: rhs_btr70_vv
	{
		_generalMacro = "LOP_US_BTR70";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_US";
		crew = "LOP_US_Soldier_Crewman";
		typicalCargo[] = {"LOP_US_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_US_BMP1: rhs_bmp1_vv
	{
		_generalMacro = "LOP_US_BMP1";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_US";
		crew = "LOP_US_Soldier_Crewman";
		typicalCargo[] = {"LOP_US_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_US_BMP1P: rhs_bmp1p_vv
	{
		_generalMacro = "LOP_US_BMP1P";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_US";
		crew = "LOP_US_Soldier_Crewman";
		typicalCargo[] = {"LOP_US_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_US_BMP1K: rhs_bmp1k_vv
	{
		_generalMacro = "LOP_US_BMP1K";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_US";
		crew = "LOP_US_Soldier_Crewman";
		typicalCargo[] = {"LOP_US_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_US_BMP1D: rhs_bmp1d_vv
	{
		_generalMacro = "LOP_US_BMP1D";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_US";
		crew = "LOP_US_Soldier_Crewman";
		typicalCargo[] = {"LOP_US_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_RACS_Landrover: LOP_LandRover_base_02
	{
		_generalMacro = "LOP_RACS_Landrover";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 2;
		displayname = "Land Rover";
		crew = "LOP_RACS_Soldier";
		typicalCargo[] = {"LOP_RACS_Soldier"};
		hiddenSelectionsTextures[] = {"lop_t_veh_landrover\data\lr_base_racs_co.paa","lop_t_veh_landrover\data\lr_special_baf_co.paa"};
		vehicleClass = "LOP_Wheeled";
		faction = "LOP_RACS";
	};
	class LOP_RACS_Landrover_M2: LOP_LandRover_mg_base
	{
		_generalMacro = "LOP_RACS_Landrover_M2";
		author = "$STR_LOP_FULL_NAME";
		scope = 2;
		side = 2;
		displayname = "Land Rover .50cal";
		crew = "LOP_RACS_Soldier";
		typicalCargo[] = {"LOP_RACS_Soldier"};
		hiddenSelectionsTextures[] = {"lop_t_veh_landrover\data\lr_base_racs_co.paa","lop_t_veh_landrover\data\lr_special_baf_co.paa","lop_t_veh_landrover\data\lr_mg-spg9_baf_co.paa"};
		vehicleClass = "LOP_Wheeled";
		faction = "LOP_RACS";
	};
	class LOP_RACS_T72BA: rhs_t72ba_tv
	{
		_generalMacro = "LOP_RACS_T72BA";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_RACS";
		crew = "LOP_RACS_Soldier_Crewman";
		typicalCargo[] = {"LOP_RACS_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_RACS_Static_M2: RHS_M2StaticMG_D
	{
		_generalMacro = "LOP_RACS_Static_M2";
		scope = 2;
		side = 2;
		faction = "LOP_RACS";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_RACS_Soldier"};
		crew = "LOP_RACS_Soldier";
	};
	class LOP_RACS_Static_M2_MiniTripod: RHS_M2StaticMG_MiniTripod_D
	{
		_generalMacro = "LOP_RACS_Static_M2_MiniTripod";
		scope = 2;
		side = 2;
		faction = "LOP_RACS";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_RACS_Soldier"};
		crew = "LOP_RACS_Soldier";
	};
	class LOP_RACS_Technical: B_G_Offroad_01_F
	{
		_generalMacro = "LOP_RACS_Technical";
		scope = 2;
		side = 2;
		faction = "LOP_RACS";
		displayName = "Technical (unarmed)";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_RACS_Soldier"};
		crew = "LOP_RACS_Soldier";
	};
	class LOP_RACS_Technical_M2: B_G_Offroad_01_armed_F
	{
		_generalMacro = "LOP_RACS_Technical_M2";
		scope = 2;
		side = 2;
		faction = "LOP_RACS";
		displayName = "Technical .50cal";
		vehicleClass = "LOP_Wheeled";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_RACS_Soldier"};
		crew = "LOP_RACS_Soldier";
	};
	class LOP_RACS_Static_Mk19_TriPod: RHS_MK19_TriPod_D
	{
		_generalMacro = "LOP_RACS_Static_Mk19_TriPod";
		scope = 2;
		side = 2;
		faction = "LOP_RACS";
		vehicleClass = "LOP_Static";
		author = "$STR_LOP_FULL_NAME";
		typicalCargo[] = {"LOP_RACS_Soldier"};
		crew = "LOP_RACS_Soldier";
	};
	class LOP_RACS_MH9: B_Heli_Light_01_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_RACS_MH9";
		scope = 2;
		accuracy = 1;
		side = 2;
		faction = "LOP_RACS";
		crew = "LOP_RACS_Soldier_Pilot";
		vehicleClass = "LOP_Aircraft";
		hiddenSelectionsTextures[] = {"lop_t_veh_littlebird\Data\heli_light_01_ext_racs_co.paa"};
	};
	class LOP_RACS_MH9_armed: B_Heli_Light_01_armed_F
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_RACS_MH9_armed";
		scope = 2;
		accuracy = 1;
		side = 2;
		faction = "LOP_RACS";
		crew = "LOP_RACS_Soldier_Pilot";
		vehicleClass = "LOP_Aircraft";
		hiddenSelectionsTextures[] = {"lop_t_veh_littlebird\Data\Heli_Light_01_ext_racs_CO.paa"};
	};
	class LOP_RACS_M113_D: rhsusf_m113d_usarmy
	{
		_generalMacro = "LOP_RACS_M113_D";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_RACS";
		crew = "LOP_RACS_Soldier_Crewman";
		typicalCargo[] = {"LOP_RACS_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_RACS_UH60M: RHS_UH60M
	{
		_generalMacro = "LOP_RACS_M113_D";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 2;
		faction = "LOP_RACS";
		crew = "LOP_RACS_Soldier_Pilot";
		typicalCargo[] = {"LOP_RACS_Soldier_Pilot"};
		vehicleClass = "LOP_Aircraft";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"lop_t_veh_uh60\data\uh60m_fuselage_racs_co.paa","lop_t_veh_uh60\data\uh60m_engine_racs_co.paa","rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa"};
	};
	class LOP_SLA_NSV_TriPod: RHS_NSV_TriPod_MSV
	{
		_generalMacro = "LOP_SLA_NSV_TriPod";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_SLA";
		crew = "LOP_SLA_Soldier";
		typicalCargo[] = {"LOP_SLA_Soldier"};
		vehicleClass = "LOP_Static";
	};
	class LOP_SLA_ZSU234: rhs_zsu234_aa
	{
		_generalMacro = "LOP_SLA_ZSU234";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_SLA";
		crew = "LOP_SLA_Soldier_Crewman";
		typicalCargo[] = {"LOP_SLA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_SLA_BMP2: rhs_bmp2_vv
	{
		_generalMacro = "LOP_SLA_BMP2";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_SLA";
		crew = "LOP_SLA_Soldier_Crewman";
		typicalCargo[] = {"LOP_SLA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_SLA_BTR60: rhs_btr60_vv
	{
		_generalMacro = "LOP_SLA_BTR60";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_SLA";
		crew = "LOP_SLA_Soldier_Crewman";
		typicalCargo[] = {"LOP_SLA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_SLA_T72BA: rhs_t72ba_tv
	{
		_generalMacro = "LOP_SLA_T72BA";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_SLA";
		crew = "LOP_SLA_Soldier_Crewman";
		typicalCargo[] = {"LOP_SLA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_SLA_T72BB: rhs_t72bb_tv
	{
		_generalMacro = "LOP_SLA_T72BB";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_SLA";
		crew = "LOP_SLA_Soldier_Crewman";
		typicalCargo[] = {"LOP_SLA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_SLA_BTR70: rhs_btr70_vv
	{
		_generalMacro = "LOP_SLA_BTR70";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_SLA";
		crew = "LOP_SLA_Soldier_Crewman";
		typicalCargo[] = {"LOP_SLA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_SLA_BMP1: rhs_bmp1_vv
	{
		_generalMacro = "LOP_SLA_BMP1";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_SLA";
		crew = "LOP_SLA_Soldier_Crewman";
		typicalCargo[] = {"LOP_SLA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_SLA_BMP1P: rhs_bmp1p_vv
	{
		_generalMacro = "LOP_SLA_BMP1P";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_SLA";
		crew = "LOP_SLA_Soldier_Crewman";
		typicalCargo[] = {"LOP_SLA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_SLA_BMP1K: rhs_bmp1k_vv
	{
		_generalMacro = "LOP_SLA_BMP1K";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_SLA";
		crew = "LOP_SLA_Soldier_Crewman";
		typicalCargo[] = {"LOP_SLA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_SLA_BMP1D: rhs_bmp1d_vv
	{
		_generalMacro = "LOP_SLA_BMP1D";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_SLA";
		crew = "LOP_SLA_Soldier_Crewman";
		typicalCargo[] = {"LOP_SLA_Soldier_Crewman"};
		vehicleClass = "LOP_Armored";
	};
	class LOP_SLA_Ural: RHS_Ural_VV_01
	{
		_generalMacro = "LOP_SLA_BMP1D";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_SLA";
		crew = "LOP_SLA_Soldier";
		typicalCargo[] = {"LOP_SLA_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_SLA_BM21: RHS_BM21_VV_01
	{
		_generalMacro = "LOP_SLA_BM21";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_SLA";
		crew = "LOP_SLA_Soldier";
		typicalCargo[] = {"LOP_SLA_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_SLA_Ural_fuel: RHS_Ural_Fuel_VV_01
	{
		_generalMacro = "LOP_SLA_Ural_fuel";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_SLA";
		crew = "LOP_SLA_Soldier";
		typicalCargo[] = {"LOP_SLA_Soldier"};
		vehicleClass = "LOP_Support";
	};
	class LOP_SLA_Ural_open: RHS_Ural_Open_VV_01
	{
		_generalMacro = "LOP_SLA_Ural_open";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_SLA";
		crew = "LOP_SLA_Soldier";
		typicalCargo[] = {"LOP_SLA_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
	class LOP_SLA_UAZ: rhs_uaz_vv
	{
		_generalMacro = "LOP_SLA_UAZ";
		scope = 2;
		author = "$STR_LOP_FULL_NAME";
		side = 0;
		faction = "LOP_SLA";
		crew = "LOP_SLA_Soldier";
		typicalCargo[] = {"LOP_SLA_Soldier"};
		vehicleClass = "LOP_Wheeled";
	};
};
class cfgMods
{
	author = "Leights OPFOR Pack";
	timepacked = "1422561923";
};
//};
