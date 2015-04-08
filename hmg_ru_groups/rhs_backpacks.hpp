class B_AssaultPack_Base;

class rhs_assault_umbts_engineer;
class rhs_assault_umbts;
class rhs_sidor;
class CUP_B_CivPack_Wdl;

class rhs_rpg2 : B_AssaultPack_Base
{
	scope = 2;
	model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_rpg";
	picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_rpg_ca.paa";
	Author_Macro
	displayName = "Парплет пом. гранатометчика";
	hiddenSelectionsTextures[] = {};
	maximumLoad = 120;
	mass = 20;
	class TransportMagazines
	{
		class _xx_rhs_rpg7_PG7VR_mag
		{
			magazine = "rhs_rpg7_PG7VR_mag";
			count = 1;
		};
		class _xx_rhs_rpg7_OG7V_mag
		{
			magazine = "rhs_rpg7_OG7V_mag";
			count = 1;
		};
		class _xx_rhs_rpg7_TBG7V_mag
		{
			magazine = "rhs_rpg7_TBG7V_mag";
			count = 1;
		};
	};
};

class rhs_rpg1 : B_AssaultPack_Base
{
	scope = 2;
	model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_rpg";
	picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_rpg_ca.paa";
	Author_Macro
	displayName = "Парплет гранатометчика";
	hiddenSelectionsTextures[] = {};
	maximumLoad = 120;
	mass = 20;
	
	class TransportMagazines
	{
		class _xx_NLAW_F
		{
			magazine = "rhs_rpg7_PG7VL_mag";
			count = 2;
		};
	};
};

class rhs_assault_umbts_empty : rhs_assault_umbts
{
	displayName = "Рюкзак";
	maximumLoad = 625;
};

class hmg_rif_sidor : rhs_assault_umbts
{
	displayName = "Вещмешок с доп. БК";
	maximumLoad = 625;
		class TransportMagazines
	{
		class _xx_rhs_30Rnd_545x39_7n10_AK
		{
			magazine = "rhs_30Rnd_545x39_7n10_AK";
			count = 7;
		};
		class _xx_rhs_30Rnd_545x39_AK_green
		{
			magazine = "rhs_30Rnd_545x39_AK_green";
			count = 2;
		};
		class _xx_rhs_30Rnd_545x39_7n22_AK
		{
			magazine = "rhs_30Rnd_545x39_7n22_AK";
			count = 2;
		};
	};
};

//class hmg_gp_sidor : rhs_assault_umbts
//{
//	displayName = "Вещмешок стрелка ГП";
//		class TransportMagazines
//	{
//		class _xx_rhs_VOG25
//		{
//			magazine = "rhs_VOG25";
//			count = 10;
//		};
//		class _xx_rhs_VOG25P
//		{
//			magazine = "rhs_VOG25P";
//			count = 5;
//		};
//		class _xx_rhs_GRD40_White
//		{
//			magazine = "rhs_GRD40_White";
//			count = 5;
//		};
//		class _xx_rhs_30Rnd_545x39_7n10_AK
//		{
//			magazine = "rhs_30Rnd_545x39_7n10_AK";
//			count = 8;
//		};
//	};
//};
class hmg_rif_sidorMG : rhs_assault_umbts
{
	displayName = "Рюкзак с доп. БК";
	maximumLoad = 625;
		class TransportMagazines
	{
		class _xx_rhs_100Rnd_762x54mmR
		{
			magazine = "rhs_100Rnd_762x54mmR";
			count = 2;
		};
	};
};

class hmg_rif_sidorAR : rhs_assault_umbts
{
	displayName = "Рюкзак с доп. БК";
	maximumLoad = 625;
		class TransportMagazines
	{
		class _xx_rhs_45Rnd_545X39_7N10_AK
		{
			magazine = "rhs_45Rnd_545X39_7N10_AK";
			count = 3;
		};
	};
};
class hmg_rif_sidorEng : rhs_assault_umbts_engineer
{
	displayName = "Рюкзак с рем. комплектом";
	maximumLoad = 625;
		class TransportMagazines
	{
		class _xx_rhs_45Rnd_545X39_7N10_AK
		{
			magazine = "rhs_45Rnd_545X39_7N10_AK";
			count = 7;
		};
	};
	class TransportItems
	{
		class _xx_ToolKit
		{
			name = "ToolKit";
			count = 1;
		};
	};
};
	// ВДВшные РД
class hmg_RD : CUP_B_CivPack_Wdl
{
	displayName = "РД с доп. БК";
	maximumLoad = 335;
		class TransportMagazines
	{
		class _xx_rhs_30Rnd_545x39_7n10_AK
		{
			magazine = "rhs_30Rnd_545x39_7n10_AK";
			count = 7;
		};
		class _xx_rhs_30Rnd_545x39_AK_green
		{
			magazine = "rhs_30Rnd_545x39_AK_green";
			count = 2;
		};
		class _xx_rhs_30Rnd_545x39_7n22_AK
		{
			magazine = "rhs_30Rnd_545x39_7n22_AK";
			count = 2;
		};
	};
	class TransportWeapons
	{
		class _xx_rhs_weap_rsp30_white
		{
			Weapon = "rhs_weap_rsp30_white";
			count = 1;
		};
		class _xx_rhs_weap_rsp30_red
		{
			Weapon = "rhs_weap_rsp30_red";
			count = 1;
		};class _xx_rhs_weap_rsp30_green
		{
			Weapon = "rhs_weap_rsp30_green";
			count = 1;
		};
	};
};

class hmg_RD_saper : CUP_B_CivPack_Wdl
{
	displayName = "Вещмешок с взрывчаткой";
	maximumLoad = 335;
		class TransportMagazines
	{
		class _xx_rhs_mine_pmn2_mag
		{
			magazine = "rhs_mine_pmn2_mag";
			count = 3;
		};
		class _xx_DemoCharge_Remote_Mag
		{
			magazine = "DemoCharge_Remote_Mag";
			count = 2;
		};
		class _xx_SatchelCharge_Remote_Mag
		{
			magazine = "SatchelCharge_Remote_Mag";
			count = 1;
		};
	};
	class TransportWeapons
	{
		class _xx_rhs_weap_rsp30_white
		{
			Weapon = "rhs_weap_rsp30_white";
			count = 1;
		};
		class _xx_rhs_weap_rsp30_red
		{
			Weapon = "rhs_weap_rsp30_red";
			count = 1;
		};class _xx_rhs_weap_rsp30_green
		{
			Weapon = "rhs_weap_rsp30_green";
			count = 1;
		};
	};
};
class hmg_RDMG : CUP_B_CivPack_Wdl
{
	displayName = "Рюкзак с доп. БК";
	maximumLoad = 335;
		class TransportMagazines
	{
		class _xx_rhs_100Rnd_762x54mmR
		{
			magazine = "rhs_100Rnd_762x54mmR";
			count = 2;
		};
	};
	class TransportWeapons
	{
		class _xx_rhs_weap_rsp30_white
		{
			Weapon = "rhs_weap_rsp30_white";
			count = 1;
		};
		class _xx_rhs_weap_rsp30_red
		{
			Weapon = "rhs_weap_rsp30_red";
			count = 1;
		};class _xx_rhs_weap_rsp30_green
		{
			Weapon = "rhs_weap_rsp30_green";
			count = 1;
		};
	};
};
class hmg_RDEng : CUP_B_CivPack_Wdl
{
	displayName = "Рюкзак с рем. комплектом";
	maximumLoad = 335;
		class TransportMagazines
	{
		class _xx_rhs_45Rnd_545X39_7N10_AK
		{
			magazine = "rhs_45Rnd_545X39_7N10_AK";
			count = 7;
		};
	};
	class TransportItems
	{
		class _xx_ToolKit
		{
			name = "ToolKit";
			count = 1;
		};
	};
	class TransportWeapons
	{
		class _xx_rhs_weap_rsp30_white
		{
			Weapon = "rhs_weap_rsp30_white";
			count = 1;
		};
		class _xx_rhs_weap_rsp30_red
		{
			Weapon = "rhs_weap_rsp30_red";
			count = 1;
		};class _xx_rhs_weap_rsp30_green
		{
			Weapon = "rhs_weap_rsp30_green";
			count = 1;
		};
	};
};
class hmg_RDAR : CUP_B_CivPack_Wdl
{
	displayName = "Рюкзак с доп. БК";
	maximumLoad = 335;
		class TransportMagazines
	{
		class _xx_rhs_45Rnd_545X39_7N10_AK
		{
			magazine = "rhs_45Rnd_545X39_7N10_AK";
			count = 3;
		};
	};
	class TransportWeapons
	{
		class _xx_rhs_weap_rsp30_white
		{
			Weapon = "rhs_weap_rsp30_white";
			count = 1;
		};
		class _xx_rhs_weap_rsp30_red
		{
			Weapon = "rhs_weap_rsp30_red";
			count = 1;
		};class _xx_rhs_weap_rsp30_green
		{
			Weapon = "rhs_weap_rsp30_green";
			count = 1;
		};
	};
};
class hmg_sniper : CUP_B_CivPack_Wdl
{
	displayName = "Рюкзак снайпера";
	maximumLoad = 335;
		class TransportWeapons
	{
		class _xx_hlc_rifle_aks74u
		{
			Weapon = "hlc_rifle_aks74u";
			count = 1;
		};
		class _xx_rhs_weap_rsp30_white
		{
			Weapon = "rhs_weap_rsp30_white";
			count = 1;
		};
		class _xx_rhs_weap_rsp30_red
		{
			Weapon = "rhs_weap_rsp30_red";
			count = 1;
		};class _xx_rhs_weap_rsp30_green
		{
			Weapon = "rhs_weap_rsp30_green";
			count = 1;
		};
	};
	class TransportMagazines
	{
		class _xx_rhs_30Rnd_545x39_7n10_AK
		{
			magazine = "rhs_30Rnd_545x39_7n10_AK";
			count = 4;
		};
	};
	class TransportItems
	{
		class _xx_hlc_muzzle_545SUP_AK
		{
			name = "hlc_muzzle_545SUP_AK";
			count = 1;
		};
	};	
};
class hmg_medic_rd: CUP_B_CivPack_Wdl
{
	displayName = "РД с медикаментами";
	maximumLoad = 335;
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
	class TransportWeapons
	{
		class _xx_rhs_weap_rsp30_white
		{
			Weapon = "rhs_weap_rsp30_white";
			count = 1;
		};
		class _xx_rhs_weap_rsp30_red
		{
			Weapon = "rhs_weap_rsp30_red";
			count = 1;
		};class _xx_rhs_weap_rsp30_green
		{
			Weapon = "rhs_weap_rsp30_green";
			count = 1;
		};
	};
};	
// рюкзаки морской пехоты с черными беретиками

class spg_pg : B_AssaultPack_Base
{
	scope = 2;
	model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_rpg";
	picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_rpg_ca.paa";
	Author_Macro
	displayName = "Парплет заряжающего СПГ9";
	hiddenSelectionsTextures[] = {};
	maximumLoad = 410;
	mass = 20;
	
	class TransportMagazines
	{
		class _xx_NLAW_F
		{
			magazine = "PG9_out";
			count = 3;
		};
	};
};

class spg_og : B_AssaultPack_Base
{
	scope = 2;
	model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_rpg";
	picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_rpg_ca.paa";
	Author_Macro
	displayName = "Парплет подносчика СПГ9";
	hiddenSelectionsTextures[] = {};
	maximumLoad = 410;
	mass = 20;
	
	class TransportMagazines
	{
		class _xx_NLAW_F
		{
			magazine = "OG9_out";
			count = 3;
		};
	};
};