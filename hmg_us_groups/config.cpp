#define true			1
#define false			0
#define private			0
#define protected		1
#define public			2
#define TEast			0
#define TWest			1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown	4
#define TEnemy			5
#define TFriendly		6
#define TLogic			7
#define VSoft			0
#define VArmor			1
#define VAir			2
#define LockNo			0
#define LockCadet		1
#define LockYes			2
#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified	3
#define WeaponNoSlot		0	// dummy weapons
#define WeaponSlotPrimary	1	// primary weapons
#define WeaponSlotSecondary	16	// secondary weapons
#define WeaponSlotItem		256	// items
#define WeaponSlotBinocular	4096	// binocular
#define WeaponHardMounted	65536
#define CanSeeRadar 1
#define CanSeeRye 2
#define CanSeeOptics 4
#define CanSeeEar 4
#define CanSeeCompass 16
#define CanSeeRadarC CanSeeRadar+CanSeeCompass
#define CanSeeAll 31
#define PREFIX hmgrhs
#define MAJOR 0
#define MINOR 1
#define PATCHLVL 1
#define BUILD 1
#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD
#define RHS_TAG RHS_HMG
// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 0.1
#define Author_Macro author=$STR_RHS_AUTHOR_FULL;
class CfgPatches
{
	class hmg_us_troops
	{
		units[]=
		{
			us_army_des_ucp_hq_comm,
			us_army_des_ucp_hq_ifv_mg,
			us_army_des_ucp_hq_ifv_dr,
			us_army_des_ucp_sup_sgt,
			us_army_des_ucp_sup_sp,
			us_army_des_ucp_base_m4,
			us_army_des_ucp_base_m4_2ifak,
			us_army_des_ucp_base_m4_cco,
			us_army_des_ucp_hq_execof,
			us_army_des_ucp_bpla,
			us_army_des_ucp_pl_ld,
			us_army_des_ucp_pl_ratelo,
			us_army_des_ucp_base_m4_320,
			us_army_des_ucp_ifv_pl_comm,
			us_army_des_ucp_ifv_sl,
			us_army_des_ucp_ifv_g,
			us_army_des_ucp_ifv_dr,
			us_army_des_ucp_sqld,
			us_army_des_ucp_tld,
			us_army_des_ucp_ar,
			us_army_des_ucp_gp,
			us_army_des_ucp_aarsp,
			us_army_des_ucp_tld2,
			us_army_des_ucp_marksman,
			us_army_des_ucp_mg,
			us_army_des_ucp_mgas,
			us_army_des_ucp_aarspas,
			us_army_des_ucp_mort_g,
			us_army_des_ucp_mort_gas,
			us_army_des_ucp_amb_aide,
			us_army_des_ucp_snip_sqld,
			us_army_des_ucp_snip_sniper1,
			us_army_des_ucp_snip_sniper2,
			us_army_des_ucp_cp_ratelo,
			us_army_des_ucp_cp_fs_comm,
			us_army_des_ucp_cp_fs_dr,
			us_army_wood_ocp_hq_comm,
			us_army_wood_ocp_hq_ifv_mg,
			us_army_wood_ocp_hq_ifv_dr,
			us_army_wood_ocp_sup_sgt,
			us_army_wood_ocp_sup_sp,
			us_army_wood_ocp_base_m4,
			us_army_wood_ocp_base_m4_2ifak,
			us_army_wood_ocp_base_m4_cco,
			us_army_wood_ocp_hq_execof,
			us_army_wood_ocp_bpla,
			us_army_wood_ocp_pl_ld,
			us_army_wood_ocp_pl_ratelo,
			us_army_wood_ocp_base_m4_320,
			us_army_wood_ocp_ifv_pl_comm,
			us_army_wood_ocp_ifv_sl,
			us_army_wood_ocp_ifv_g,
			us_army_wood_ocp_ifv_dr,
			us_army_wood_ocp_sqld,
			us_army_wood_ocp_tld,
			us_army_wood_ocp_ar,
			us_army_wood_ocp_gp,
			us_army_wood_ocp_aarsp,
			us_army_wood_ocp_tld2,
			us_army_wood_ocp_marksman,
			us_army_wood_ocp_mg,
			us_army_wood_ocp_mgas,
			us_army_wood_ocp_aarspas,
			us_army_wood_ocp_mort_g,
			us_army_wood_ocp_mort_gas,
			us_army_wood_ocp_amb_aide,
			us_army_wood_ocp_cp_ratelo,
			us_army_wood_ocp_cp_fs_comm,
			us_army_wood_ocp_cp_fs_dr,
			//usmc rifle company 2005
			hmg_usmc_w_2005_rifleman,
			hmg_usmc_w_2005_firstaid,
			hmg_usmc_w_2005_marksman,
			hmg_usmc_w_2005_assar,
			hmg_usmc_w_2005_AR,
			hmg_usmc_w_2005_TL,
			hmg_usmc_w_2005_SL,
			hmg_usmc_w_2005_messenger,
			hmg_usmc_w_2005_guide,
			hmg_usmc_w_2005_pltsrg,
			hmg_usmc_w_2005_PltL,
			hmg_usmc_w_2005_gunsrg,
			hmg_usmc_w_2005_firsrg,
			hmg_usmc_w_2005_execoff,
			hmg_usmc_w_2005_cl,
			hmg_usmc_w_2005_MGSL,
			hmg_usmc_w_2005_mortSL,
			hmg_usmc_w_2005_mg_tl,
			hmg_usmc_w_2005_mg,
			hmg_usmc_w_2005_assMG,
			hmg_usmc_w_2005_mortL,
			hmg_usmc_w_2005_mortas,
			hmg_usmc_w_2005_assSL,
			hmg_usmc_w_2005_assGun,
			hmg_usmc_w_2005_assAssGun,
			hmg_usmc_w_2005_scout,
			hmg_usmc_w_2005_sniper,
			hmg_usmc_w_2005_corp,
			hmg_usmc_w_2005_scorp,
			hmg_usmc_d_2005_rifleman,
			hmg_usmc_d_2005_firstaid,
			hmg_usmc_d_2005_marksman,
			hmg_usmc_d_2005_assar,
			hmg_usmc_d_2005_AR,
			hmg_usmc_d_2005_TL,
			hmg_usmc_d_2005_SL,
			hmg_usmc_d_2005_messenger,
			hmg_usmc_d_2005_guide,
			hmg_usmc_d_2005_pltsrg,
			hmg_usmc_d_2005_PltL,
			hmg_usmc_d_2005_gunsrg,
			hmg_usmc_d_2005_firsrg,
			hmg_usmc_d_2005_execoff,
			hmg_usmc_d_2005_cl,
			hmg_usmc_d_2005_MGSL,
			hmg_usmc_d_2005_mortSL,
			hmg_usmc_d_2005_mg_tl,
			hmg_usmc_d_2005_mg,
			hmg_usmc_d_2005_assMG,
			hmg_usmc_d_2005_mortL,
			hmg_usmc_d_2005_mortas,
			hmg_usmc_d_2005_assSL,
			hmg_usmc_d_2005_assGun,
			hmg_usmc_d_2005_assAssGun,
			hmg_usmc_d_2005_scout,
			hmg_usmc_d_2005_sniperH,
			hmg_usmc_d_2005_sniper,
			hmg_usmc_d_2005_corp,
			hmg_usmc_d_2005_scorp,
			hmg_usmc_w_2005_rifleman,
			hmg_usmc_w_2005_firstaid,
			hmg_usmc_w_2005_marksman,
			hmg_usmc_w_2005_assar,
			hmg_usmc_w_2005_AR,
			hmg_usmc_w_2005_TL,
			hmg_usmc_w_2005_SL,
			hmg_usmc_w_2005_messenger,
			hmg_usmc_w_2005_guide,
			hmg_usmc_w_2005_pltsrg,
			hmg_usmc_w_2005_PltL,
			hmg_usmc_w_2005_gunsrg,
			hmg_usmc_w_2005_firsrg,
			hmg_usmc_w_2005_execoff,
			hmg_usmc_w_2005_cl,
			hmg_usmc_w_2005_MGSL,
			hmg_usmc_w_2005_mortSL,
			hmg_usmc_w_2005_mg_tl,
			hmg_usmc_w_2005_mg,
			hmg_usmc_w_2005_assMG,
			hmg_usmc_w_2005_mortL,
			hmg_usmc_w_2005_mortas,
			hmg_usmc_w_2005_assSL,
			hmg_usmc_w_2005_assGun,
			hmg_usmc_w_2005_scout,
			hmg_usmc_w_2005_sniper,
			hmg_usmc_w_2005_corp,
			hmg_usmc_w_2005_scorp,
			//usmc rifle company 2015
			hmg_usmc_w_2015_rifleman,
			hmg_usmc_w_2015_firstaid,
			hmg_usmc_w_2015_marksman,
			hmg_usmc_w_2015_assar,
			hmg_usmc_w_2015_AR,
			hmg_usmc_w_2015_TL,
			hmg_usmc_w_2015_SL,
			hmg_usmc_w_2015_messenger,
			hmg_usmc_w_2015_guide,
			hmg_usmc_w_2015_pltsrg,
			hmg_usmc_w_2015_PltL,
			hmg_usmc_w_2015_gunsrg,
			hmg_usmc_w_2015_firsrg,
			hmg_usmc_w_2015_execoff,
			hmg_usmc_w_2015_cl,
			hmg_usmc_w_2015_MGSL,
			hmg_usmc_w_2015_mortSL,
			hmg_usmc_w_2015_mg_tl,
			hmg_usmc_w_2015_mg,
			hmg_usmc_w_2015_assMG,
			hmg_usmc_w_2015_mortL,
			hmg_usmc_w_2015_mortas,
			hmg_usmc_w_2015_assSL,
			hmg_usmc_w_2015_assGun,
			hmg_usmc_w_2015_assAssGun,
			hmg_usmc_w_2015_sniper,
			hmg_usmc_w_2015_corp,
			hmg_usmc_w_2015_scorp,
			hmg_usmc_w_2015_scout,
			hmg_usmc_w_2015_scout_mk12,
			hmg_usmc_w_2015_sniperH,
			hmg_usmc_w_2015_sniperS,
			hmg_usmc_w_2015_sniper,
			hmg_usmc_d_2015_rifleman,
			hmg_usmc_d_2015_firstaid,
			hmg_usmc_d_2015_marksman,
			hmg_usmc_d_2015_assar,
			hmg_usmc_d_2015_AR,
			hmg_usmc_d_2015_TL,
			hmg_usmc_d_2015_SL,
			hmg_usmc_d_2015_messenger,
			hmg_usmc_d_2015_guide,
			hmg_usmc_d_2015_pltsrg,
			hmg_usmc_d_2015_PltL,
			hmg_usmc_d_2015_gunsrg,
			hmg_usmc_d_2015_firsrg,
			hmg_usmc_d_2015_execoff,
			hmg_usmc_d_2015_cl,
			hmg_usmc_d_2015_MGSL,
			hmg_usmc_d_2015_mortSL,
			hmg_usmc_d_2015_mg_tl,
			hmg_usmc_d_2015_mg,
			hmg_usmc_d_2015_assMG,
			hmg_usmc_d_2015_mortL,
			hmg_usmc_d_2015_mortas,
			hmg_usmc_d_2015_assSL,
			hmg_usmc_d_2015_assGun,
			hmg_usmc_d_2015_assAssGun,
			hmg_usmc_d_2015_corp,
			hmg_usmc_d_2015_scorp,
			hmg_usmc_d_2015_scout,
			hmg_usmc_d_2015_scout_mk12,
			hmg_usmc_d_2015_sniperH,
			hmg_usmc_d_2015_sniperS,
			hmg_usmc_d_2015_sniper,
			hmg_usmc_w_2015_rifleman,
			hmg_usmc_w_2015_firstaid,
			hmg_usmc_w_2015_marksman,
			hmg_usmc_w_2015_assar,
			hmg_usmc_w_2015_AR,
			hmg_usmc_w_2015_TL,
			hmg_usmc_w_2015_SL,
			hmg_usmc_w_2015_messenger,
			hmg_usmc_w_2015_guide,
			hmg_usmc_w_2015_pltsrg,
			hmg_usmc_w_2015_PltL,
			hmg_usmc_w_2015_gunsrg,
			hmg_usmc_w_2015_firsrg,
			hmg_usmc_w_2015_execoff,
			hmg_usmc_w_2015_cl,
			hmg_usmc_w_2015_MGSL,
			hmg_usmc_w_2015_mortSL,
			hmg_usmc_w_2015_mg_tl,
			hmg_usmc_w_2015_mg,
			hmg_usmc_w_2015_assMG,
			hmg_usmc_w_2015_mortL,
			hmg_usmc_w_2015_mortas,
			hmg_usmc_w_2015_assSL,
			hmg_usmc_w_2015_assGun,
			hmg_usmc_w_2015_assAssGun,
			hmg_usmc_w_2015_corp,
			hmg_usmc_w_2015_scorp,
			hmg_usmc_w_2015_scout,
			hmg_usmc_w_2015_scout_mk12,
			hmg_usmc_w_2015_sniperH,
			hmg_usmc_w_2015_sniperS,
			hmg_usmc_w_2015_sniper,
			//отсюда пошил КМПшники в вудланде обр. 1995 года
			hmg_usmc_w_1995_rifleman,
			hmg_usmc_w_1995_assar,
			hmg_usmc_w_1995_AR,
			hmg_usmc_w_1995_TL,
			hmg_usmc_w_1995_SL,
			hmg_usmc_w_1995_messenger,
			hmg_usmc_w_1995_guide,
			hmg_usmc_w_1995_pltsrg,
			hmg_usmc_w_1995_PltL,
			hmg_usmc_w_1995_gunsrg,
			hmg_usmc_w_1995_firsrg,
			hmg_usmc_w_1995_execoff,
			hmg_usmc_w_1995_cl,
			hmg_usmc_w_1995_MGSL,
			hmg_usmc_w_1995_mortSL,
			hmg_usmc_w_1995_mg_tl,
			hmg_usmc_w_1995_mg,
			hmg_usmc_w_1995_assMG,
			hmg_usmc_w_1995_mortL,
			hmg_usmc_w_1995_mortas,
			hmg_usmc_w_1995_assSL,
			hmg_usmc_w_1995_assGun,
			hmg_usmc_w_1995_assAssGun,
			hmg_usmc_w_1995_scout_g1,
			hmg_usmc_w_1995_scout_g1,
			hmg_usmc_w_1995_sniperH_g1,
			hmg_usmc_w_1995_scout,
			hmg_usmc_w_1995_sniperH,
			hmg_usmc_w_1995_sniper_g1,
			hmg_usmc_w_1995_sniper,
			hmg_usmc_w_1995_corp,
			hmg_usmc_w_1995_scorp,
			//отсюда пошил КМПшники в вудланде обр. 1985 года
			hmg_usmc_w_1985_rifleman,
			hmg_usmc_w_1985_assar,
			hmg_usmc_w_1985_AR,
			hmg_usmc_w_1985_TL,
			hmg_usmc_w_1985_SL,
			hmg_usmc_w_1985_messenger,
			hmg_usmc_w_1985_guide,
			hmg_usmc_w_1985_pltsrg,
			hmg_usmc_w_1985_PltL,
			hmg_usmc_w_1985_firsrg,
			hmg_usmc_w_1985_gunsrg,
			hmg_usmc_w_1985_execoff,
			hmg_usmc_w_1985_cl,
			hmg_usmc_w_1985_MGSL,
			hmg_usmc_w_1985_mortSL,
			hmg_usmc_w_1985_mg_tl,
			hmg_usmc_w_1985_mg,
			hmg_usmc_w_1985_assMG,
			hmg_usmc_w_1985_mortL,
			hmg_usmc_w_1985_mortas,
			hmg_usmc_w_1985_mortam,
			hmg_usmc_w_1985_assSL,
			hmg_usmc_w_1985_assGun,
			hmg_usmc_w_1985_assAssGun,
			hmg_usmc_w_1985_scorp,
			hmg_usmc_w_1985_corp,
			hmg_usmc_w_1985_scout,
			hmg_usmc_w_1985_sniper,
			hmg_usmc_w_1985_sniperR,
			//ucp 2005 HHC Scout platoon
			us_army_ucp_2005_sscout,
			us_army_ucp_2005_scout,
			us_army_ucp_2005_ASLscout,
			us_army_ucp_2005_Lscout,
			us_army_ucp_2005_PLTSscout,
			us_army_ucp_2005_PLTLscout
		};
		weapons[]={};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = 
		{
			"rhsusf_main","rhsusf_c_weapons",
			"A3_Characters_F", "rhsusf_c_troops"
		};
		version = VERSION;
	};
};
#include "CfgFactions.hpp"
#include "rhsusf_groups.hpp"
// US Army Desert HMG
#define OCP_Uni_Macro 	faction = "rhs_faction_usarmy_w_hmg";\
						uniformClass = "rhs_uniform_cu_ocp_patchless";\
						Author_Macro
						
						/*\
						hiddenSelections[] = {"Camo1"};\
						hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ucp_co.paa","rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ucp_pockets_co.paa","rhsusf\addons\rhsusf_infantry\data\patches\1CAV_ucp_co.paa"};*/
						
#define UCP_Uni_Macro 	faction = "rhs_faction_usarmy_d_hmg";\
						uniformClass = "rhs_uniform_cu_ucp_patchless";\
						Author_Macro
						
						/*\
						hiddenSelections[] = {"Camo1"};\
						hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ucp_co.paa","rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ucp_pockets_co.paa","rhsusf\addons\rhsusf_infantry\data\patches\1CAV_ucp_co.paa"};*/
						
#define US_SMGR			Items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","cw_item_notepad","AGM_CableTie","AGM_MapTools"};
#define US_SMGR_3IFAK		Items[] = {"FirstAidKit","FirstAidKit","FirstAidKit","ItemGPS","G_Combat"};
#define US_AGPS			Items[] = {"FirstAidKit","ItemGPS","G_Combat"};

class CfgVehicles 
{
#include "rhsusf_backpacks.hpp"
class rhsusf_army_ocp_rifleman; //вызываем базовый класс
class rhsusf_army_ocp_rifleman_1stcav; //вызываем базовый класс
class rhsusf_army_ocp_combatcrewman; //вызываем базовый класс
class LOP_AFR_Soldier_GL; //вызываем дух покойного нигрилы
//создаем свои базовые классы DESERT 
//и на их основе собираем солдат
class us_army_des_ucp_base_m4 : rhsusf_army_ocp_rifleman {
			UCP_Uni_Macro	
			icon = "iconMan";
			items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage" };
			displayName = "US Army  Rifleman (ucp)";
        	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch","ItemRadio"};
			weapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};
			respawnWeapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};
			magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
			};
			Backpack = "rhsusf_assault_eagleaiii_ucp_empty";
};
class us_army_des_ucp_base_m249 : us_army_des_ucp_base_m4{
			icon = "iconManMG";
			displayName = "US Army  Autorifleman (ucp)";
			items[] = {"FirstAidPack","AGM_SpareBarrel","AGM_SpareBarrel","rhsusf_acc_compm4","G_Combat"};
	        linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_SAW","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_SAW","ItemCompass","ItemWatch","ItemRadio"};
			weapons[] = {"rhs_weap_m249_pip","Throw","Put"};
			respawnWeapons[] = {"rhs_weap_m249_pip","Throw","Put"};
			Backpack = "rhsusf_assault_eagleaiii_ucp_empty";
			magazines[] = 		{
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch"
			};
			respawnMagazines[] = 
			{
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch"
			};
};
class us_army_des_ucp_base_m240 : us_army_des_ucp_base_m4{
			icon = "iconManMG";
			displayName = "US Army  Machine-gunner (ucp)";
			items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "RH_m145"};
	        linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_SAW","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_SAW","ItemCompass","ItemWatch","ItemRadio"};
			weapons[] = {"rhs_weap_m240B","CUP_hgun_M9","Throw","Put"};
			respawnWeapons[] = {"rhs_weap_m240B","CUP_hgun_M9","Throw","Put"};
			Backpack = "rhsusf_assault_eagleaiii_ucp_empty";
			magazines[] = 		{
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51_m993",				
				"rhsusf_100Rnd_762x51_m993",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"
			};
			respawnMagazines[] = 
			{
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51",
				"rhsusf_100Rnd_762x51_m993",
				"rhsusf_100Rnd_762x51_m993",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"
			};
};
class us_army_des_ucp_base_m4_3ifak : us_army_des_ucp_base_m4 {
			displayName = "US Army  Rifleman 3IFAK (ucp)";
			Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","G_Combat"};
        	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch","ItemRadio"};
			weapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};
			respawnWeapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};
};
class us_army_des_ucp_base_m4_cco : us_army_des_ucp_base_m4 {
			displayName = "US Army  Rifleman CCO (ucp)";
        	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch","ItemRadio"};
			weapons[] = {"rhs_m4_compm4","Throw","Put"};
			respawnWeapons[] = {"rhs_m4_compm4","Throw","Put"};
			Backpack = "rhsusf_assault_eagleaiii_ocp_empty";
};
class us_army_des_ucp_base_m4_320 : us_army_des_ucp_base_m4 {
			icon = "iconMan";
			displayName = "US Army  Rifleman M320 (ucp)";
	        linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_SAW","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_SAW","ItemCompass","ItemWatch","ItemRadio"};
			weapons[] = {"rhs_weap_m4_m320","Throw","Put"};
			respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put"};
			Backpack = "rhsusf_assault_eagleaiii_ucp_gp";
			magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE"
			};
			respawnMagazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE"
			};

};
class us_army_des_ucp_hq_comm : us_army_des_ucp_base_m4 {
			displayName = "Company HQ Commander (ucp)";
			US_SMGR
			icon = "iconManOfficer";
			weapons[] = {"CUP_hgun_M9","Throw","Put","Binocular"};
			respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","Binocular"};		
        	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
			backpack="tf_rt1523g_rhs";
};
class us_army_des_ucp_hq_execof : us_army_des_ucp_base_m4 {
			displayName = "Company HQ EXEC OFF (ucp)";
			US_SMGR
			weapons[] = {"rhs_weap_m4_carryhandle","Throw","Put","Binocular"};
			respawnWeapons[] = {"rhs_weap_m4_carryhandle","Throw","Put","Binocular"};		
			icon = "iconManOfficer";
        	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			backpack="tf_rt1523g_rhs";
};
class us_army_des_ucp_hq_ifv_mg : us_army_des_ucp_base_m4{
		displayName= "Company HQ IFV Master Gunner (ucp)";
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};		
        linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
			backpack="tf_rt1523g_rhs";
};
class us_army_des_ucp_hq_ifv_dr : us_army_des_ucp_base_m4{
		displayName= "Company HQ IFV driver (ucp)";
		weapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};		
       	linkedItems[] = {"rhsusf_cvc_helmet","rhsusf_iotv_ucp_Rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_cvc_helmet","rhsusf_iotv_ucp_Rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};
class us_army_des_ucp_sup_sgt : us_army_des_ucp_base_m4{
      	displayName = "Supply Sergeant (ucp)";
		engineer = 1;
		icon = "iconManEngineer";
		picture = "pictureRepair";
		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemMap","ItemCompass","ItemWatch"};
};
class us_army_des_ucp_sup_sp : us_army_des_ucp_sup_sgt{
      	displayName = "Supply Specialist (ucp)";
		engineer = 1;
		icon = "iconManEngineer";
		picture = "pictureRepair";
		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch"};
};
class us_army_des_ucp_bpla : us_army_des_ucp_base_m4_320 {
		displayName = "Forward Signal Support NCO (ucp)";
		icon = "iconManOfficer";
		weapons[] = {"rhs_weap_m4_m320","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put","Binocular"};
		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Grenadier","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal"};
		backpack = "B_UAV_01_backpack_F";
			magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE"
			};
			respawnMagazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE"
			};
};
class us_army_des_ucp_pl_ld : us_army_des_ucp_base_m4_320 {
			displayName = "Rifle Platoon HQ Leader (ucp)";
			US_SMGR
			icon = "iconManOfficer";
			weapons[] = {"rhs_weap_m4_m320","Throw","Put","Laserdesignator"};
			respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put","Laserdesignator"};
			linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			Backpack = "rhsusf_assault_eagleaiii_ucp_gp";
			magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"Laserbatteries"

			};
			respawnMagazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"Laserbatteries"
			};

};
class us_army_des_ucp_cp_ratelo : us_army_des_ucp_base_m4 {
			displayName = "Company HQ RATELO (ucp)";
			icon = "iconMan";
			weapons[] = {"rhs_m4_compm4","Throw","Put","Binocular"};
			respawnWeapons[] = {"rhs_m4_compm4","Throw","Put","Binocular"};		
        	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			backpack = "tf_rt1523g_big_rhs";
};
class us_army_des_ucp_pl_ratelo : us_army_des_ucp_base_m4 {
			displayName = "Rifle Platoon HQ RATELO (ucp)";
			icon = "iconMan";
			weapons[] = {"rhs_m4_compm4","Throw","Put","Binocular"};
			respawnWeapons[] = {"rhs_m4_compm4","Throw","Put","Binocular"};		
        	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			backpack = "tf_rt1523g_big_rhs";
};
class us_army_des_ucp_cp_fs_comm: us_army_des_ucp_hq_ifv_mg{
		displayName= "Company HQ First Sergeant (ucp)";
		US_SMGR
		icon = "iconManOfficer";
		weapons[] = {"rhs_weap_m4_carryhandle","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","Throw","Put","Laserdesignator"};
       	linkedItems[] = {"rhsusf_ach_bare_tan","rhsusf_iotv_ucp_Rifleman","G_Bandanna_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_ach_bare_tan","rhsusf_iotv_ucp_Rifleman","G_Bandanna_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "tf_rt1523g_big_rhs";
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"Laserbatteries"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"Laserbatteries"
			};				
};
class us_army_des_ucp_cp_fs_dr : us_army_des_ucp_base_m4{
		displayName= "Company HQ Carrier Driver (ucp)";
       	linkedItems[] = {"rhsusf_cvc_helmet","rhsusf_iotv_ucp_Rifleman","G_Bandanna_tan","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_cvc_helmet","rhsusf_iotv_ucp_Rifleman","G_Bandanna_tan","ItemCompass","ItemWatch","ItemRadio"};
		backpack="rhsusf_assault_eagleaiii_ocp_ENG";
};
class us_army_des_ucp_ifv_pl_comm: us_army_des_ucp_hq_ifv_mg{
		displayName= "Platoon Sergeant (ucp)";
		US_SMGR
		icon = "iconManOfficer";
		weapons[] = {"rhs_weap_m4_carryhandle","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","Throw","Put","Laserdesignator"};		
       	linkedItems[] = {"rhsusf_ach_bare_tan","rhsusf_iotv_ucp_Rifleman","G_Bandanna_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_ach_bare_tan","rhsusf_iotv_ucp_Rifleman","G_Bandanna_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		Backpack = "rhsusf_assault_eagleaiii_ucp_empty";
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"Laserbatteries"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"Laserbatteries"
			};	
};
class us_army_des_ucp_ifv_sl: us_army_des_ucp_hq_ifv_mg{
		displayName= "IFV Section Leader (ucp)";
		icon = "iconManLeader";
		weapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};		
       	linkedItems[] = {"rhsusf_cvc_helmet","rhsusf_iotv_ucp_Rifleman","G_Bandanna_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_cvc_helmet","rhsusf_iotv_ucp_Rifleman","G_Bandanna_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
			};
};
class us_army_des_ucp_ifv_g: us_army_des_ucp_hq_ifv_mg{
		displayName= "IFV Gunner (ucp)";
		weapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};		
       	linkedItems[] = {"rhsusf_cvc_helmet","rhsusf_iotv_ucp_Rifleman","G_Bandanna_tan","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_cvc_helmet","rhsusf_iotv_ucp_Rifleman","G_Bandanna_tan","ItemCompass","ItemWatch","ItemRadio"};
					magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
			};
};
class us_army_des_ucp_ifv_dr : us_army_des_ucp_base_m4{
		displayName= "IFV Driver (ucp)";
       	linkedItems[] = {"rhsusf_cvc_helmet","rhsusf_iotv_ucp_Rifleman","G_Bandanna_tan","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_cvc_helmet","rhsusf_iotv_ucp_Rifleman","G_Bandanna_tan","ItemCompass","ItemWatch","ItemRadio"};
		backpack="rhsusf_assault_eagleaiii_ocp_ENG";
};
class us_army_des_ucp_sqld : us_army_des_ucp_base_m4 {
		displayName = "Squad Leader (ucp)";
		US_SMGR
		icon = "iconManLeader";
		weapons[] = {"rhs_m4_grip_acog","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_m4_grip_acog","Throw","Put","Binocular"};		
       	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		Backpack = "rhsusf_assault_eagleaiii_ucp_empty";
};
class us_army_des_ucp_tld : us_army_des_ucp_base_m4_cco{
		displayName = "Team Leader (ucp)";
		US_SMGR
		icon = "iconManLeader";
		weapons[] = {"rhs_m4_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_compm4","Throw","Put"};		
       	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};
class us_army_des_ucp_tld2 : us_army_des_ucp_base_m4_3ifak{
		US_SMGR_3IFAK
		displayName = "Team Leader (3xIFAK)(ucp)";
		icon = "iconManLeader";
		weapons[] = {"rhs_m4_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_compm4","Throw","Put"};		
       	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};
class us_army_des_ucp_gp : us_army_des_ucp_base_m4_320 {
		displayName = "Grenadier (ucp)";
		weapons[] = {"rhs_weap_m4_m320","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put"};
};
class us_army_des_ucp_ar : us_army_des_ucp_base_m249 {
		displayName = "Auto Rifleman M-249 (ucp)";
		icon = "iconManMG";
};
class us_army_des_ucp_rifl : us_army_des_ucp_base_m4_cco {
		displayName = "Rifleman (ucp)";
		Backpack = "rhsusf_assault_eagleaiii_ucp_empty";
};
class us_army_des_ucp_marksman : us_army_des_ucp_base_m4_cco {
		displayName = "Marksman (ucp)";
		weapons[] = {"rhs_m4_grip_acog2","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_grip_acog2","Throw","Put"};	
		Backpack = "rhsusf_assault_eagleaiii_ucp_empty";		
};
class us_army_des_ucp_aarsp : us_army_des_ucp_base_m4_cco {
		displayName = "Antiarmor SP (ucp)";
		icon="iconManAT";
		weapons[] = {"rhs_m4_grip_compm4","rhs_weap_fgm148","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_grip_compm4","rhs_weap_fgm148","Throw","Put"};
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_fgm148_magazine_AT"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_fgm148_magazine_AT"
			};			
			Backpack = "rhsusf_assault_eagleaiii_ucp_empty";
};
class us_army_wood_ocp_base_m4 : rhsusf_army_ocp_rifleman {
			OCP_Uni_Macro	
			icon = "iconMan";
			items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage"};
			displayName = "US Army  Rifleman (wood)";
        	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch","ItemRadio"};
			weapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};
			respawnWeapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};
			magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"

			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
			};
						Backpack = "rhsusf_assault_eagleaiii_ocp_empty";
};
class us_army_wood_ocp_base_m249 : us_army_wood_ocp_base_m4{
			icon = "iconManMG";
			displayName = "US Army  Autorifleman (wood)";
			items[] = {"FirstAidPack","AGM_SpareBarrel","AGM_SpareBarrel","rhsusf_acc_compm4","G_Combat"};
	        linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_SAW","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_SAW","ItemCompass","ItemWatch","ItemRadio"};
			weapons[] = {"rhs_weap_m249_pip","Throw","Put"};
			respawnWeapons[] = {"rhs_weap_m249_pip","Throw","Put"};
			Backpack = "rhsusf_assault_eagleaiii_ocp_empty";
			magazines[] = 		{
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch"
			};
			respawnMagazines[] = 
			{
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch",
				"rhsusf_100Rnd_556x45_soft_pouch"
			};
};
class us_army_wood_ocp_base_m240 : us_army_wood_ocp_base_m4{
			icon = "iconManMG";
			displayName = "US Army  Machine-gunner (wood)";
			items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "RH_m145"};
	        linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_SAW","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_SAW","ItemCompass","ItemWatch","ItemRadio"};
			weapons[] = {"rhs_weap_m240B","CUP_hgun_M9","Throw","Put"};
			respawnWeapons[] = {"rhs_weap_m240B","CUP_hgun_M9","Throw","Put"};
			Backpack = "rhsusf_assault_eagleaiii_ocp_empty";
			magazines[] = 		{
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m993",				
				"rhsusf_100Rnd_762x51_m993",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"
			};
			respawnMagazines[] = 
			{
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m80a1epr",
				"rhsusf_100Rnd_762x51_m993",
				"rhsusf_100Rnd_762x51_m993",
				"CUP_15Rnd_9x19_M9",
				"CUP_15Rnd_9x19_M9"
			};
};
class us_army_wood_ocp_base_m4_3ifak : us_army_wood_ocp_base_m4 {
			displayName = "US Army  Rifleman 3IFAK (wood)";
			Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","AGM_Bandage", "AGM_Bandage", "AGM_Bandage","G_Combat"};
        	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch","ItemRadio"};
			weapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};
			respawnWeapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};
};
class us_army_wood_ocp_base_m4_cco : us_army_wood_ocp_base_m4 {
			displayName = "US Army  Rifleman CCO (wood)";
        	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch","ItemRadio"};
			weapons[] = {"rhs_m4_compm4","Throw","Put"};
			respawnWeapons[] = {"rhs_m4_compm4","Throw","Put"};
};
class us_army_wood_ocp_base_m4_320 : us_army_wood_ocp_base_m4 {
			icon = "iconMan";
			displayName = "US Army  Rifleman M320 (wood)";
	        linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_SAW","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_SAW","ItemCompass","ItemWatch","ItemRadio"};
			weapons[] = {"rhs_weap_m4_m320","Throw","Put"};
			respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put"};
			Backpack = "rhsusf_assault_eagleaiii_ocp_gp";
			magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE"

			};
			respawnMagazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE"
			};

};
class us_army_wood_ocp_hq_comm : us_army_wood_ocp_base_m4 {
			displayName = "Company HQ Commander (wood)";
			US_SMGR
			icon = "iconManOfficer";
			weapons[] = {"CUP_hgun_M9","Throw","Put","Binocular"};
			respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","Binocular"};		
        	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
			backpack="tf_rt1523g_rhs";
};
class us_army_wood_ocp_hq_execof : us_army_wood_ocp_base_m4 {
			displayName = "Company HQ EXEC OFF (wood)";
			US_SMGR
			weapons[] = {"rhs_weap_m4_carryhandle","Throw","Put","Binocular"};
			respawnWeapons[] = {"rhs_weap_m4_carryhandle","Throw","Put","Binocular"};		
			icon = "iconManOfficer";
        	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			backpack="tf_rt1523g_rhs";
};
class us_army_wood_ocp_hq_ifv_mg : us_army_wood_ocp_base_m4{
		displayName= "Company HQ IFV Master Gunner (wood)";
		weapons[] = {"CUP_hgun_M9","Throw","Put","Binocular"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put","Binocular"};		
        linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp_Rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp_Rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
			backpack="tf_rt1523g_rhs";
};
class us_army_wood_ocp_hq_ifv_dr : us_army_wood_ocp_base_m4{
		displayName= "Company HQ IFV driver (wood)";
		weapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};		
       	linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp_Rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp_Rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack="rhsusf_assault_eagleaiii_ocp_ENG";
};
class us_army_wood_ocp_sup_sgt : us_army_wood_ocp_base_m4{
      	displayName = "Supply Sergeant (wood)";
		engineer = 1;
		icon = "iconManEngineer";
		picture = "pictureRepair";
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemMap","ItemCompass","ItemWatch"};
};
class us_army_wood_ocp_sup_sp : us_army_wood_ocp_sup_sgt{
      	displayName = "Supply Specialist (wood)";
		engineer = 1;
		icon = "iconManEngineer";
		picture = "pictureRepair";
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","ItemCompass","ItemWatch"};
};
class us_army_wood_ocp_cp_fs_comm: us_army_wood_ocp_hq_ifv_mg{
		displayName= "Company HQ First Sergeant (wood)";
		US_SMGR
		icon = "iconManOfficer";
		weapons[] = {"rhs_weap_m4_carryhandle","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","Throw","Put","Laserdesignator"};	
       	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","G_Bandanna_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Rifleman","G_Bandanna_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "tf_rt1523g_big_rhs";
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"Laserbatteries"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"Laserbatteries"
			};				
};
class us_army_wood_ocp_cp_fs_dr : us_army_wood_ocp_base_m4{
		displayName= "Company HQ Carrier Driver (wood)";
       	linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp_Rifleman","G_Bandanna_tan","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp_Rifleman","G_Bandanna_tan","ItemCompass","ItemWatch","ItemRadio"};
		backpack="rhsusf_assault_eagleaiii_ocp_ENG";
};
class us_army_wood_ocp_bpla : us_army_wood_ocp_base_m4_320 {
		displayName = "Forward Signal Support NCO (wood)";
		icon = "iconManOfficer";
		weapons[] = {"rhs_weap_m4_m320","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put","Binocular"};
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Grenadier","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal"};
		backpack = "O_UAV_01_backpack_F";
			magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE"
			};
			respawnMagazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE"
			};
};
class us_army_wood_ocp_pl_ld : us_army_wood_ocp_base_m4_320 {
			displayName = "Rifle Platoon HQ Leader (wood)";
			US_SMGR
			icon = "iconManOfficer";
			weapons[] = {"rhs_weap_m4_m320","Throw","Put","Laserdesignator"};
			respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put","Laserdesignator"};
			linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ucp_Squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ucp_Squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			Backpack = "rhsusf_assault_eagleaiii_ocp_gp";
			magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"Laserbatteries"

			};
			respawnMagazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"rhs_mag_M441_HE",
				"Laserbatteries"
			};

};
class us_army_wood_ocp_cp_ratelo : us_army_wood_ocp_base_m4 {
			displayName = "Company HQ RATELO (wood)";
			icon = "iconMan";
			weapons[] = {"rhs_m4_compm4","Throw","Put","Binocular"};
			respawnWeapons[] = {"rhs_m4_compm4","Throw","Put","Binocular"};		
        	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			backpack = "tf_rt1523g_big_rhs";
};
class us_army_wood_ocp_pl_ratelo : us_army_wood_ocp_base_m4 {
			displayName = "Rifle Platoon HQ RATELO (wood)";
			icon = "iconMan";
			weapons[] = {"rhs_m4_compm4","Throw","Put"};
			respawnWeapons[] = {"rhs_m4_compm4","Throw","Put"};		
        	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_Squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			backpack = "tf_rt1523g_big_rhs";
};
class us_army_wood_ocp_ifv_pl_comm: us_army_wood_ocp_hq_ifv_mg{
		displayName= "Platoon Sergeant (wood)";
		US_SMGR
		icon = "iconManOfficer";
		weapons[] = {"rhs_weap_m4_carryhandle","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","Throw","Put","Laserdesignator"};		
       	linkedItems[] = {"rhsusf_ach_bare_wood","rhsusf_iotv_ocp_Rifleman","G_Bandanna_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_ach_bare_wood","rhsusf_iotv_ocp_Rifleman","G_Bandanna_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "tf_rt1523g_rhs";
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"Laserbatteries"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"Laserbatteries"
			};		
};
class us_army_wood_ocp_ifv_sl: us_army_wood_ocp_hq_ifv_mg{
		displayName= "IFV Platoon Section Leader (wood)";
		icon = "iconManLeader";
		weapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};		
       	linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp_Rifleman","G_Bandanna_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp_Rifleman","G_Bandanna_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
			magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
			};		
};
class us_army_wood_ocp_ifv_g: us_army_wood_ocp_hq_ifv_mg{
		displayName= "IFV Gunner (wood)";
		weapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};		
       	linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp_Rifleman","G_Bandanna_tan","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp_Rifleman","G_Bandanna_tan","ItemCompass","ItemWatch","ItemRadio"};
			magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
			};		
};
class us_army_wood_ocp_ifv_dr : us_army_wood_ocp_base_m4{
		displayName= "IFV Driver (wood)";
       	linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp_Rifleman","G_Bandanna_tan","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_iotv_ocp_Rifleman","G_Bandanna_tan","ItemCompass","ItemWatch","ItemRadio"};
		backpack="rhsusf_assault_eagleaiii_ocp_ENG";
};
class us_army_wood_ocp_sqld : us_army_wood_ocp_base_m4 {
		displayName = "Squad Leader (wood)";
		US_SMGR
		icon = "iconManLeader";
		weapons[] = {"rhs_m4_grip_acog","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_m4_grip_acog","Throw","Put","Binocular"};		
       	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "tf_rt1523g_rhs";
};
class us_army_wood_ocp_tld : us_army_wood_ocp_base_m4_cco{
		displayName = "Team Leader (wood)";
		US_SMGR
		icon = "iconManLeader";
		weapons[] = {"rhs_m4_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_compm4","Throw","Put"};		
       	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};
class us_army_wood_ocp_tld2 : us_army_wood_ocp_base_m4_3ifak{
		US_SMGR_3IFAK
		displayName = "Team Leader (3xIFAK)(wood)";
		icon = "iconManLeader";
		weapons[] = {"rhs_m4_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_compm4","Throw","Put"};		
       	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};
class us_army_wood_ocp_gp : us_army_wood_ocp_base_m4_320 {
		displayName = "Grenadier (wood)";
		weapons[] = {"rhs_weap_m4_m320","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put"};
		backpack = "rhsusf_assault_eagleaiii_ocp_gp";
};
class us_army_wood_ocp_ar : us_army_wood_ocp_base_m249 {
		displayName = "Auto Rifleman M-249 (wood)";
		icon = "iconManMG";
};
class us_army_wood_ocp_rifl : us_army_wood_ocp_base_m4_cco {
		displayName = "Rifleman (wood)";
		Backpack = "rhsusf_assault_eagleaiii_ocp_empty";
};
class us_army_wood_ocp_marksman : us_army_wood_ocp_base_m4_cco {
		displayName = "Marksman (wood)";
		weapons[] = {"rhs_m4_grip_acog2","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_grip_acog2","Throw","Put"};	
		Backpack = "rhsusf_assault_eagleaiii_ocp_empty";		
};
class us_army_wood_ocp_aarsp : us_army_wood_ocp_base_m4_cco {
		displayName = "Antiarmor SP (wood)";
		icon="iconManAT";
		weapons[] = {"rhs_m4_grip_compm4","rhs_weap_fgm148","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_grip_compm4","rhs_weap_fgm148","Throw","Put"};
		magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_fgm148_magazine_AT"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
				"rhs_fgm148_magazine_AT"
			};			
			Backpack = "rhsusf_assault_eagleaiii_ocp_empty";
};
class us_army_wood_ocp_mg : us_army_wood_ocp_base_m240{
		displayName = "Machine-gunner M240 (wood)";
};
class us_army_des_ucp_mg : us_army_des_ucp_base_m240{
		displayName = "Machine-gunner M240 (ucp)";
};
class us_army_wood_ocp_mgas : us_army_wood_ocp_base_m4{
		displayName = "Asst Machine-Gunner M240 (wood)";
		backpack = "rhsusf_assault_eagleaiii_ocp_mgas";
};
class us_army_des_ucp_mgas : us_army_des_ucp_base_m4{
		displayName = "Asst Machine-Gunner M240 (ucp)";
		backpack = "rhsusf_assault_eagleaiii_ucp_mgas";
};
class us_army_wood_ocp_aarspas : us_army_wood_ocp_base_m4{
		displayName = "Ammo handler (wood)";
		backpack = "rhsusf_assault_eagleaiii_ocp_aarspas";
};
class us_army_des_ucp_aarspas : us_army_des_ucp_base_m4{
		displayName = "Ammo handler (ucp)";
		backpack = "rhsusf_assault_eagleaiii_ucp_aarspas";
};
class us_army_wood_ocp_mort_g : us_army_wood_ocp_base_m4{
		displayName = "M252 Gunner (wood)";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage","cw_item_table82mm_252"};
		backpack = "RDS_M252_Gun_Bag_FIA";
};
class us_army_des_ucp_mort_g : us_army_des_ucp_base_m4{
		displayName = "M252 Gunner (ucp)";
		items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage","cw_item_table82mm_252"};
		backpack = "RDS_M252_Gun_Bag_FIA";
};
class us_army_wood_ocp_mort_gas : us_army_wood_ocp_base_m4{
		displayName = "M252 Ammo bearer (wood)";
		backpack = "RDS_M252_Bipod_Bag_FIA";
};
class us_army_des_ucp_mort_gas : us_army_des_ucp_base_m4{
		displayName = "M252 Ammo bearer (ucp)";
		backpack = "RDS_M252_Bipod_Bag_FIA";
}
class us_army_wood_ocp_amb_aide : us_army_wood_ocp_base_m4{
		displayName = "AMB AIDE / DRIVER (wood)";
		attendant = 1;
		icon = "iconManMedic";
		backpack = "rhsusf_assault_eagleaiii_ocp_medic";
};
class us_army_des_ucp_amb_aide : us_army_des_ucp_base_m4{
		displayName = "AMB AIDE / DRIVER (ucp)";
		attendant = 1;
		icon = "iconManMedic";
		backpack = "rhsusf_assault_eagleaiii_ucp_medic";
}
class us_army_des_ucp_apc1126_sl : us_army_des_ucp_ifv_sl {
		displayName = "IAV M1126 Commander (ucp)";
};
class us_army_des_ucp_apc1126_g : us_army_des_ucp_ifv_g {
		displayName = "IAV M1126 Gunner (ucp)";
};
class us_army_des_ucp_apc1126_dr : us_army_des_ucp_ifv_dr {
		displayName = "IAV M1126 driver (ucp)";
};
//US ARMY 2005 SBCT Rifle Company MGS Platoon
class us_army_ucp_MGS_PltL : us_army_des_ucp_ifv_sl {
		displayName = "MGS Platoon Leader (ucp)";
};
class us_army_ucp_MGS_PltSgt : us_army_des_ucp_ifv_sl {
		displayName = "MGS Platoon Sergeant (ucp)";
};
class us_army_ucp_MGS_Commander : us_army_des_ucp_ifv_sl {
		displayName = "MGS Commander (ucp)";
};
class us_army_ucp_MGS_gunner : us_army_des_ucp_ifv_g {
		displayName = "GUNNER/ASST TC (ucp)";
};
class us_army_ucp_MGS_driver : us_army_des_ucp_ifv_dr {
		displayName = "MGS driver (ucp)";
};
class us_army_ucp_MGS_asst : us_army_des_ucp_ifv_dr {
		displayName = "ASST gunner/CREWMAN (ucp)";
};
// US ARMY 2005 SBCT Rifle company Mortar Seqtion
class us_army_des_ucp_apc1129_sl : us_army_des_ucp_ifv_sl {
		displayName = "MORTAR SECTION LEADER (ucp)";
};
class us_army_des_ucp_apc1129_g : us_army_des_ucp_ifv_g {
		displayName = "ASST GUNNER (ucp)";
};
class us_army_des_ucp_apc1129_dr : us_army_des_ucp_ifv_dr {
		displayName = "MORTAR CARRIER DRIVER (ucp)";
};
class us_army_des_ucp_apc1130_sl : us_army_des_ucp_ifv_sl {
		displayName = "IAV M1130 Commander (ucp)";
};
class us_army_des_ucp_apc1130_g : us_army_des_ucp_ifv_g {
		displayName = "IAV M1130 Gunner (ucp)";
};
class us_army_des_ucp_apc1130_dr : us_army_des_ucp_ifv_dr {
		displayName = "IAV M1130 driver (ucp)";
};
class us_army_wood_ocp_apc1126_sl : us_army_wood_ocp_ifv_sl {
		displayName = "IAV M1126 Commander (wood)";
};
class us_army_wood_ocp_apc1126_g : us_army_wood_ocp_ifv_g {
		displayName = "IAV M1126 Gunner (wood)";
};
class us_army_wood_ocp_apc1126_dr : us_army_wood_ocp_ifv_dr {
		displayName = "IAV M1126 driver (wood)";
};
//US ARMY 2015 SBCT Rifle company MGS platoon
class us_army_ocp_MGS_PltL : us_army_wood_ocp_ifv_sl {
		displayName = "MGS Platoon Leader (ocp)";
};
class us_army_ocp_MGS_PltSgt : us_army_wood_ocp_ifv_sl {
		displayName = "MGS Platoon Sergeant (ocp)";
};
class us_army_ocp_MGS_commander : us_army_wood_ocp_ifv_sl {
		displayName = "MGS Commander (ocp)";
};
class us_army_ocp_MGS_gunner : us_army_wood_ocp_ifv_g {
		displayName = "Gunner (ocp)";
};
class us_army_ocp_MGS_driver : us_army_wood_ocp_ifv_dr {
		displayName = "MGS driver (ocp)";
};
//US ARMY 2015 SBCT Rifle company mortar section
class us_army_wood_ocp_apc1129_sl : us_army_wood_ocp_ifv_sl {
		displayName = "MORTAR SECTION LEADER (ocp)";
};
class us_army_wood_ocp_apc1129_g : us_army_wood_ocp_ifv_g {
		displayName = "ASST GUNNER (ocp)";
};
class us_army_wood_ocp_apc1129_dr : us_army_wood_ocp_ifv_dr {
		displayName = "MORTAR CARRIER DRIVER (ocp)";
};
class us_army_wood_ocp_apc1130_sl : us_army_wood_ocp_ifv_sl {
		displayName = "IAV M1130 Commander (wood)";
};
class us_army_wood_ocp_apc1130_g : us_army_wood_ocp_ifv_g {
		displayName = "IAV M1130 Gunner (wood)";
};
class us_army_wood_ocp_apc1130_dr : us_army_wood_ocp_ifv_dr {
		displayName = "IAV M1130 driver (wood)";
};
class us_army_des_ucp_snip_sniper1 : us_army_des_ucp_base_m4 {
			displayName = "Sniper SP M107 (ucp)";
			icon = "IconMan";
			Items[] = {"AGM_Bandage", "AGM_Bandage", "AGM_Bandage","RH_pas13cl","ATragMX"};
			weapons[] = {"Trixie_M107","Throw","Put","Binocular"};
			respawnWeapons[] = {"Trixie_M107","Throw","Put","Binocular"};
			magazines[] = 		{
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_HE_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"HandGrenade",
				"SmokeShell",
				"SmokeShell"
			};
			respawnMagazines[] = 
			{
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_Mag",
				"Trixie_10x127_HE_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"Trixie_10x127_HEIAP_Mag",
				"HandGrenade",
				"SmokeShell",
				"SmokeShell"
			};
			backpack="";
};

#include "hmg_usmc.hpp"
#include "hmg_us_army_ABCT.hpp"
};

	
