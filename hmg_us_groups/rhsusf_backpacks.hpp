class B_AssaultPack_Base;

class rhsusf_assault_eagleaiii_ucp;
class rhsusf_assault_eagleaiii_ocp;
class MEF_Des_Tactical;
class B_Kitbag_Base;
class B_Carryall_oli;
class MEF_Wood_Carryall;
class MEF_Des_Carryall;

class MEF_Wood_Kitbag_empty: B_Kitbag_Base
{
	scope = 1;
	picture = "\mef_mod\icons\ico_k_wm_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_k_wm_co.paa"};
	Author_Macro
	displayName = " backpack";
	maximumLoad = 1000;
};	

class MEF_Des_Tactical_empty: MEF_Des_Tactical
{
	scope = 1;
	picture = "\mef_mod\icons\ico_k_dm_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_k_dm_co.paa"};
	Author_Macro
	displayName = "backpack desert";
	maximumLoad = 1000;
};	

class rhsusf_assault_eagleaiii_ocp_empty: rhsusf_assault_eagleaiii_ocp
{
	displayName = "Eagle A-III ocp (empty)";
	maximumLoad = 1000;
};

class rhsusf_assault_eagleaiii_ucp_empty: rhsusf_assault_eagleaiii_ucp
{
	displayName = "Eagle A-III UCP (empty)";
	maximumLoad = 1000;
};

class rhsusf_assault_eagleaiii_ucp_mgas: rhsusf_assault_eagleaiii_ucp
{
	displayName = "Eagle A-III UCP (MG assist)";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_rhsusf_100Rnd_762x51
		{
			magazine = "rhsusf_100Rnd_762x51";
			count = 6;
		};
	};
	class TransportItems
	{
		class _xx_AGM_SpareBarrel
		{
			name = "AGM_SpareBarrel";
			count = 2;
		};
	};
};
class rhsusf_assault_eagleaiii_ocp_mgas: rhsusf_assault_eagleaiii_ocp
{
	displayName = "Eagle A-III OCP (MG assist)";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_rhsusf_100Rnd_762x51
		{
			magazine = "rhsusf_100Rnd_762x51";
			count = 6;
		};
	};
	class TransportItems
	{
		class _xx_AGM_SpareBarrel
		{
			name = "AGM_SpareBarrel";
			count = 2;
		};
	};
};
class rhsusf_assault_eagleaiii_ucp_aarspas: rhsusf_assault_eagleaiii_ucp
{
	displayName = "Eagle A-III UCP (Anti-Armor assist)";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_Trixie_Javelin_Missile
		{
			magazine = "rhs_fgm148_magazine_AT";
			count = 2;
		};
	};
};
class rhsusf_assault_eagleaiii_ocp_aarspas: rhsusf_assault_eagleaiii_ocp
{
	displayName = "Eagle A-III OCP (Anti-Armor assist)";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_Trixie_Javelin_Missile
		{
			magazine = "rhs_fgm148_magazine_AT";
			count = 2;
		};
	};
};

class rhsusf_assault_eagleaiii_ucp_medic: rhsusf_assault_eagleaiii_ucp
{
	displayName = "Eagle A-III UCP (Medic)";
	maximumLoad = 1000;
	class TransportItems
	{
		class _xx_Medikit
		{
			name = "MediKit";
			count = 1;
		};
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 10;
		};
	};
};

class rhsusf_assault_eagleaiii_ucp_gp: rhsusf_assault_eagleaiii_ucp
{
	displayName = "Eagle A-III UCP (grenadier)";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_rhs_mag_M441_HE
		{
			magazine ="rhs_mag_M441_HE";
			count = 4;
		};
		class _xx_rhs_mag_M433_HEDP
		{
			magazine = "rhs_mag_M433_HEDP";
			count = 8;
		};
		class _xx_rhs_mag_m714_White
		{
			magazine = "rhs_mag_m714_White";
			count = 4;
		};
	};
};
class rhsusf_assault_eagleaiii_ucp_scout: rhsusf_assault_eagleaiii_ucp
{
	displayName = "Eagle A-III UCP (scout)";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_rhs_mag_M441_HE
		{
			magazine ="rhs_mag_M441_HE";
			count = 4;
		};
		class _xx_rhs_mag_M433_HEDP
		{
			magazine = "rhs_mag_M433_HEDP";
			count = 6;
		};
		class _xx_rhs_mag_m714_White
		{
			magazine = "rhs_mag_m714_White";
			count = 2;
		};
		class _xx_rhs_mag_m713_Red
		{
			magazine ="rhs_mag_m713_Red";
			count = 2;
		};
		class _xx_rhs_mag_m715_Green
		{
			magazine = "rhs_mag_m715_Green";
			count = 2;
		};
		class _xx_rhs_mag_m716_yellow
		{
			magazine = "rhs_mag_m716_yellow";
			count = 2;
		};
		class _xx_30Rnd_556x45_Stanag
		{
			magazine = "30Rnd_556x45_Stanag";
			count = 5;
		};
		class _xx_30Rnd_556x45_Stanag_Tracer_Red
		{
			magazine = "30Rnd_556x45_Stanag_Tracer_Red";
			count = 2;
		};
	};
		class TransportItems
	{
		class _xx_DemoCharge_Remote_Mag
		{
			name = "DemoCharge_Remote_Mag";
			count = 1;
		};
	};

};
class rhsusf_assault_eagleaiii_ucp_scoutL: rhsusf_assault_eagleaiii_ucp
{
	displayName = "Eagle A-III UCP (scout leader)";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_rhs_mag_m576
		{
			magazine ="rhs_mag_m576";
			count = 20;
		};
		class _xx_30Rnd_556x45_Stanag
		{
			magazine = "30Rnd_556x45_Stanag";
			count = 5;
		};
		class _xx_30Rnd_556x45_Stanag_Tracer_Red
		{
			magazine = "30Rnd_556x45_Stanag_Tracer_Red";
			count = 2;
		};
	};
		class TransportItems
	{
		class _xx_DemoCharge_Remote_Mag
		{
			name = "DemoCharge_Remote_Mag";
			count = 1;
		};
	};
};
class rhsusf_assault_eagleaiii_ocp_gp: rhsusf_assault_eagleaiii_ocp
{
	displayName = "Eagle A-III OCP (grenadier)";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_rhs_mag_M441_HE1
		{
			magazine ="rhs_mag_M441_HE";
			count = 4;
		};
		class _xx_rhs_mag_M433_HEDP1
		{
			magazine = "rhs_mag_M433_HEDP";
			count = 8;
		};
		class _xx_rhs_mag_m714_White1
		{
			magazine = "rhs_mag_m714_White";
			count = 4;
		};
	};
};
class rhsusf_assault_eagleaiii_ocp_ENG : rhsusf_assault_eagleaiii_ocp
{
	displayName = "Рюкзак с рем. комплектом";
	maximumLoad = 1000;
	class TransportItems
	{
		class _xx_ToolKit
		{
			name = "ToolKit";
			count = 1;
		};
	};
};

	class ReammoBox;
	class Item_Base_F;
	
	class Bag_Base: ReammoBox
	{
		tf_hasLRradio = 0;
		tf_encryptionCode = "";		
		tf_range = 20000;
	};
	class TFAR_Bag_Base: Bag_Base 
	{
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";		
		tf_hasLRradio = 1;		
		scope = 1;
		scopeCurator = 1;
	};

	class tf_rt1523g: TFAR_Bag_Base
	{
		author = "Raspu, Gandi, Nkey";
		displayName = "RT-1523G (ASIP)";
		descriptionShort = "RT-1523G (ASIP) long range radio 20km";
		picture = "\task_force_radio_items\rt1523g\rt1523g_icon.paa";
		model="\task_force_radio_items\models\clf_prc117g_ap";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\clf_prc117g_ap_co.paa"};
		maximumLoad = 30;
		mass = 102;
		scope = 2;
		scopeCurator = 2;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
	class tf_rt1523g_bwmod: tf_rt1523g
	{
		displayName = "RT-1523G (ASIP) BWMOD";
		descriptionShort = "RT-1523G (ASIP) BWMOD long range radio 20km";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\clf_prc117g_bwmod_co.paa"};
	};
	class tf_rt1523g_rhs: tf_rt1523g
	{
		displayName = "RT-1523G (ASIP) RHS";
		descriptionShort = "RT-1523G (ASIP) RHS long range radio 20km";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\clf_prc117g_rhs_co.paa.paa"};
	};
	class tf_rt1523g_big: tf_rt1523g {
		author = "Raspu, Gandi, Nkey";
		displayName = "RT-1523G (ASIP) Big";
		descriptionShort = "RT-1523G (ASIP) Big long range radio 20km";
		maximumLoad = 40;
		mass = 120;		
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\clf_nicecomm2_nato_multi_co.paa"};
		model="\task_force_radio_items\models\clf_nicecomm2";
	};	
	class tf_rt1523g_big_bwmod: tf_rt1523g {
		displayName = "RT-1523G (ASIP) Big BWMOD";
		descriptionShort = "RT-1523G (ASIP) Big BWMOD long range radio 20km";
		maximumLoad = 40;
		mass = 120;		
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\clf_nicecomm2_bwmod_co.paa"};
		model="\task_force_radio_items\models\clf_nicecomm2";
	};	
	class tf_rt1523g_big_rhs: tf_rt1523g {
		displayName = "RT-1523G (ASIP) Big RHS";
		descriptionShort = "RT-1523G (ASIP) Big RHS long range radio 20km";
		maximumLoad = 40;
		mass = 120;		
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\clf_nicecomm2_rhs_co.paa"};
		model="\task_force_radio_items\models\clf_nicecomm2";
	};	
	class tf_rt1523g_sage: tf_rt1523g {
		displayName = "RT-1523G (ASIP) Sage";
		descriptionShort = "RT-1523G (ASIP) Sage long range radio 20km";
		maximumLoad = 20;
		mass = 100;		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\camo\backpack_sage_co.paa"};		
		model = "\task_force_radio_items\models\TFR_BACKPACK";
	};
	class tf_rt1523g_green: tf_rt1523g {
		displayName = "RT-1523G (ASIP) Green";
		descriptionShort = "RT-1523G (ASIP) Green long range radio 20km";
		maximumLoad = 20;
		mass = 100;		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\camo\backpack_green_co.paa"};		
		model = "\task_force_radio_items\models\TFR_BACKPACK";
	};
	class tf_rt1523g_fabric: tf_rt1523g {
		displayName = "RT-1523G (ASIP) Fabric";
		descriptionShort = "RT-1523G (ASIP) Fabric long range radio 20km";
		maximumLoad = 20;
		mass = 100;		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\camo\backpack_fabric_co.paa"};		
		model = "\task_force_radio_items\models\TFR_BACKPACK";
	};
	class tf_rt1523g_black: tf_rt1523g {
		displayName = "RT-1523G (ASIP) Black";
		descriptionShort = "RT-1523G (ASIP) Black long range radio 20km";
		maximumLoad = 20;
		mass = 100;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\camo\backpack_black_co.paa"};		
		model = "\task_force_radio_items\models\TFR_BACKPACK";
	};
	
// USMC backpacks marpat
class MEF_Wood_Kitbag_medic: B_Kitbag_Base
{
	scope = 1;
	picture = "\mef_mod\icons\ico_k_wm_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_k_wm_co.paa"};
	Author_Macro
	displayName = "Corpsman backpack";
	maximumLoad = 1000;
	class TransportItems
	{
		class _xx_Medikit
		{
			name = "MediKit";
			count = 1;
		};
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 10;
		};
	};
};	
class MEF_Wood_Kitbag_AR: B_Kitbag_Base
{
	scope = 1;
	picture = "\mef_mod\icons\ico_k_wm_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_k_wm_co.paa"};
	Author_Macro
	displayName = "AR backpack";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_rhsusf_100Rnd_556x45_soft_pouch
		{
			magazine = "rhsusf_100Rnd_556x45_soft_pouch";
			count = 6;
		};
	};
};	
class MEF_Wood_Kitbag_AAR: B_Kitbag_Base
{
	scope = 1;
	picture = "\mef_mod\icons\ico_k_wm_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_k_wm_co.paa"};
	Author_Macro
	displayName = "AAR backpack";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag
		{
			magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
			count = 16;
		};
		class _xx_30Rnd_556x45_Stanag_Tracer_Red
		{
			magazine = "30Rnd_556x45_Stanag_Tracer_Red";
			count = 5;
		};
	};
};	
class MEF_Wood_Kitbag_MG: B_Kitbag_Base
{
	scope = 1;
	picture = "\mef_mod\icons\ico_k_wm_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_k_wm_co.paa"};
	Author_Macro
	displayName = "MG backpack";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_rhsusf_100Rnd_762x51
		{
			magazine = "rhsusf_100Rnd_762x51";
			count = 4;
		};
	};
};
class MEF_Wood_Kitbag_TL: B_Kitbag_Base
{
	scope = 1;
	picture = "\mef_mod\icons\ico_k_wm_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_k_wm_co.paa"};
	Author_Macro
	displayName = "TL backpack";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_rhs_mag_M441_HE
		{
			magazine ="rhs_mag_M441_HE";
			count = 2;
		};
		class _xx_rhs_mag_M433_HEDP
		{
			magazine = "rhs_mag_M433_HEDP";
			count = 6;
		};
		class _xx_rhs_mag_m714_White
		{
			magazine = "rhs_mag_m714_White";
			count = 2;
		};
		class _xx_rhs_mag_m576
		{
			magazine = "rhs_mag_m576";
			count = 2;
		};
	};
};	
class MEF_Wood_Kitbag_SMAW: B_Kitbag_Base
{
	scope = 1;
	picture = "\mef_mod\icons\ico_k_wm_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_k_wm_co.paa"};
	Author_Macro
	displayName = "SMAW backpack";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_Trixie_SMAW_HEAA
		{
			magazine ="Trixie_SMAW_HEAA";
			count = 1;
		};
		class _xx_Trixie_SMAW_HEDP
		{
			magazine = "Trixie_SMAW_HEDP";
			count = 1;
		};
		class _xx_rhs_mag_an_m14_th3
		{
			magazine = "rhs_mag_an_m14_th3";
			count = 3;
		};
	};
	class TransportItems
	{
		class _xx_SatchelCharge_Remote_Mag
		{
			name = "SatchelCharge_Remote_Mag";
			count = 1;
		};
		class _xx_DemoCharge_Remote_Mag
		{
			name = "DemoCharge_Remote_Mag";
			count = 3;
		};
		class _xx_AGM_Clacker
		{
			name = "AGM_Clacker";
			count = 1;
		};
	};
};	
class m252_ammo_marpat: MEF_Wood_Carryall
{
	displayName = "m252_ammo";
	maximumLoad = 1500;
	class TransportMagazines
	{
		class _xx_HMG_Mine_81_out
		{
			magazine ="HMG_Mine_81_out";
			count = 5;
		};
	};
};	
// USMC backpacks marpatDesert
class MEF_Des_Tactical_medic: B_Kitbag_Base
{
	scope = 1;
	picture = "\mef_mod\icons\ico_k_dm_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_k_dm_co.paa"};
	Author_Macro
	displayName = "Coprsman backpack desert";
	maximumLoad = 1000;
	class TransportItems
	{
		class _xx_Medikit
		{
			name = "MediKit";
			count = 1;
		};
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 10;
		};
	};
};	
class MEF_Des_Tactical_AR: B_Kitbag_Base
{
	scope = 1;
	picture = "\mef_mod\icons\ico_k_dm_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_k_dm_co.paa"};
	Author_Macro
	displayName = "AR backpack desert";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_rhsusf_100Rnd_556x45_soft_pouch
		{
			magazine = "rhsusf_100Rnd_556x45_soft_pouch";
			count = 6;
		};
	};
};	
class MEF_Des_Tactical_AAR: B_Kitbag_Base
{
	scope = 1;
	picture = "\mef_mod\icons\ico_k_dm_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_k_dm_co.paa"};
	Author_Macro
	displayName = "AAR backpack desert";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag
		{
			magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
			count = 16;
		};
		class _xx_30Rnd_556x45_Stanag_Tracer_Red
		{
			magazine = "30Rnd_556x45_Stanag_Tracer_Red";
			count = 5;
		};
	};
};	

class MEF_Des_Tactical_MG: B_Kitbag_Base
{
	scope = 1;
	picture = "\mef_mod\icons\ico_k_dm_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_k_dm_co.paa"};
	Author_Macro
	displayName = "MG backpack desert";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_rhsusf_100Rnd_762x51
		{
			magazine = "rhsusf_100Rnd_762x51";
			count = 4;
		};
	};
};
class CUP_B_CivPack_Wdl_MGM60: B_Kitbag_Base
{
	scope = 1;
	hiddenSelections[] = {"camo"};
	picture = "\CUP\Weapons\CUP_Weapons_Backpacks\data\ui\icon_b_c_backpack_civ_ca.paa";
	hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Backpacks\data\backpack_civil_assault_co.paa"};
	Author_Macro
	displayName = "MG backpack M60";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_hlc_100Rnd_762x51_B_M60E4
		{
			magazine = "hlc_100Rnd_762x51_B_M60E4";
			count = 4;
		};
	};
};
class MEF_Des_Tactical_TL: B_Kitbag_Base
{
	scope = 1;
	picture = "\mef_mod\icons\ico_k_dm_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_k_dm_co.paa"};
	Author_Macro
	displayName = "TL backpack desert";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_rhs_mag_M441_HE1
		{
			magazine ="rhs_mag_M441_HE";
			count = 2;
		};
		class _xx_rhs_mag_M433_HEDP1
		{
			magazine = "rhs_mag_M433_HEDP";
			count = 6;
		};
		class _xx_rhs_mag_M585_white
		{
			magazine = "rhs_mag_M585_white";
			count = 2;
		};
		class _xx_rhs_mag_m715_Green
		{
			magazine = "rhs_mag_m715_Green";
			count = 2;
		};
	};
};	
class MEF_Des_Tactical_SMAW: B_Kitbag_Base
{
	scope = 1;
	picture = "\mef_mod\icons\ico_k_dm_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenselectionstextures[] = {"\mef_mod\textures\backpacks\mef_k_dm_co.paa"};
	Author_Macro
	displayName = "SMAW backpack Desert";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_Trixie_SMAW_HEAA
		{
			magazine ="Trixie_SMAW_HEAA";
			count = 1;
		};
		class _xx_Trixie_SMAW_HEDP
		{
			magazine = "Trixie_SMAW_HEDP";
			count = 1;
		};
		class _xx_rhs_mag_an_m14_th3
		{
			magazine = "rhs_mag_an_m14_th3";
			count = 3;
		};
	};
	class TransportItems
	{
		class _xx_SatchelCharge_Remote_Mag
		{
			name = "SatchelCharge_Remote_Mag";
			count = 1;
		};
		class _xx_DemoCharge_Remote_Mag
		{
			name = "DemoCharge_Remote_Mag";
			count = 3;
		};
		class _xx_AGM_Clacker
		{
			name = "AGM_Clacker";
			count = 1;
		};
	};
};	
class m252_ammo_marpatDesert: MEF_Des_Carryall
{
	displayName = "m252_ammo";
	maximumLoad = 1500;
	class TransportMagazines
	{
		class _xx_HMG_Mine_81_out
		{
			magazine ="HMG_Mine_81_out";
			count = 5;
		};
	};
};	
//тут пойдут КМП до 2000ого
class CUP_B_CivPack_Wdl_medic: B_Carryall_oli
{
	displayName = "Coprsman backpack";
	maximumLoad = 1000;
	class TransportItems
	{
		class _xx_Medikit
		{
			name = "MediKit";
			count = 1;
		};
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 10;
		};
	};
};	
class CUP_B_CivPack_Wdl_AR: B_Carryall_oli
{
	displayName = "AR backpack ";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_rhsusf_100Rnd_556x45_soft_pouch
		{
			magazine = "rhsusf_100Rnd_556x45_soft_pouch";
			count = 6;
		};
	};
};	
class CUP_B_CivPack_Wdl_MG: B_Carryall_oli
{
	displayName = "MG backpack";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_rhsusf_100Rnd_762x51
		{
			magazine = "rhsusf_100Rnd_762x51";
			count = 4;
		};
	};
};
class CUP_B_CivPack_Wdl_TL: B_Carryall_oli
{
	displayName = "TL backpack ";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_rhs_mag_M441_HE1
		{
			magazine ="rhs_mag_M441_HE";
			count = 2;
		};
		class _xx_rhs_mag_M433_HEDP1
		{
			magazine = "rhs_mag_M433_HEDP";
			count = 6;
		};
		class _xx_rhs_mag_M585_white
		{
			magazine = "rhs_mag_M585_white";
			count = 2;
		};
		class _xx_rhs_mag_m715_Green
		{
			magazine = "rhs_mag_m715_Green";
			count = 2;
		};
	};
};	
class CUP_B_CivPack_Wdl_SMAW: B_Carryall_oli
{
	displayName = "SMAW backpack";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_Trixie_SMAW_HEAA
		{
			magazine ="Trixie_SMAW_HEAA";
			count = 1;
		};
		class _xx_Trixie_SMAW_HEDP
		{
			magazine = "Trixie_SMAW_HEDP";
			count = 1;
		};
		class _xx_rhs_mag_an_m14_th3
		{
			magazine = "rhs_mag_an_m14_th3";
			count = 3;
		};
	};
	class TransportItems
	{
		class _xx_SatchelCharge_Remote_Mag
		{
			name = "SatchelCharge_Remote_Mag";
			count = 1;
		};
		class _xx_DemoCharge_Remote_Mag
		{
			name = "DemoCharge_Remote_Mag";
			count = 3;
		};
		class _xx_AGM_Clacker
		{
			name = "AGM_Clacker";
			count = 1;
		};
	};
};	
class m252_ammo_woodland: B_Carryall_oli
{
	displayName = "m252_ammo";
	maximumLoad = 1000;
	class TransportMagazines
	{
		class _xx_HMG_Mine_81_out
		{
			magazine ="HMG_Mine_81_out";
			count = 5;
		};
	};
};	
