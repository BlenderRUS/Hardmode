class Bag_Base;
class Weapon_Bag_Base: Bag_Base
{
	class assembleInfo;
};
class RDS_DShkM_Gun_Bag: Weapon_Bag_Base {};
class RDS_DShkM_TripodHigh_Bag: Weapon_Bag_Base
{
	mass=100;
	maximumLoad = 1600;
};
class RDS_Kord_Tripod_Bag: RDS_DShkM_TripodHigh_Bag
{
	mass=100;
};
class RDS_Podnos_Bipod_Bag: RDS_DShkM_TripodHigh_Bag
{
	mass=100;
};
class RDS_M2_Tripod_Bag: RDS_DShkM_TripodHigh_Bag
{
	mass=250;
};
class RDS_M2_MiniTripod_Bag: RDS_DShkM_TripodHigh_Bag
{
	mass=100;
};
class RDS_Mk19_Tripod_Bag: RDS_DShkM_TripodHigh_Bag
{
	mass=100;
};
class RDS_TOW_Tripod_Bag: RDS_DShkM_TripodHigh_Bag
{
	mass=100;
};
class RDS_M252_Bipod_Bag: RDS_DShkM_TripodHigh_Bag
{
	mass=100;
};

// BAGS - OLDER VERSION OF RDS
class RDS_DShkM_Gun_Bag_CSAT : Weapon_Bag_Base
{
	author="$STR_A3_Bohemia_Interactive";
	displayName="DShkM Gun Bag";
	_generalMacro="DSHKM_Ins";
	mass=380;
	model = "\RDS_StaticW\bags\StaticX.p3d";
	picture = "\RDS_StaticW\bags\staticX_CA.paa";
	icon = "\RDS_StaticW\bags\mapIcon_backpack_CA.paa";
	class assembleInfo
	{
		primary=0;
		base="";
		assembleTo="";
		dissasembleTo[]={};
		displayName="";
	};
	faction="OPF_F";
};
class RDS_DShkM_TripodHigh_Bag_CSAT : Weapon_Bag_Base
{
	mass=100;
	author="$STR_A3_Bohemia_Interactive";
	displayName="DShkM High Tripod Bag";
	_generalMacro="DSHKM_CSAT";
	model = "\RDS_StaticW\bags\StaticY.p3d";
	picture = "\RDS_StaticW\bags\staticY_CA.paa";
	icon = "\RDS_StaticW\bags\mapIcon_backpack_CA.paa";
	faction="IND_F";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_HMG_01_Wpn_assembleInfo0";
		assembleTo="RDS_DSHKM_CSAT";
		base[]=
		{
			"RDS_DShkM_Gun_Bag_CSAT"
		};
	};
};
class RDS_DShkM_TripodLow_Bag_CSAT : RDS_DShkM_TripodHigh_Bag
{
	mass=300;
	displayName="DShkM Low Tripod Bag";
	class assembleInfo: assembleInfo
	{
		assembleTo="RDS_DSHkM_Mini_TriPod";
	};
};
class RDS_Kord_Gun_Bag_CSAT : RDS_DShkM_Gun_Bag
{
	displayName="Kord Gun Bag";
	_generalMacro="RDS_KORD_CSAT";
	mass=250;
};
class RDS_Kord_Tripod_Bag_CSAT : RDS_DShkM_TripodHigh_Bag
{
	mass=450;
	displayName="Kord Tripod Bag";
	_generalMacro="RDS_Kord_CSAT";
	class assembleInfo: assembleInfo
	{
		assembleTo="RDS_Kord_CSAT";
		base[]=
		{
			"RDS_Kord_Gun_Bag_CSAT"
		};
	};
};
class RDS_Metis_Gun_Bag_CSAT : RDS_DShkM_Gun_Bag
{
	displayName="Metis Gun Bag";
	_generalMacro="RDS_Metis";
	mass=80;
};
class RDS_Metis_Tripod_Bag_CSAT : RDS_DShkM_TripodHigh_Bag
{
	mass=70;
	displayName="Metis Tripod Bag";
	_generalMacro="RDS_Metis_CSAT";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
		assembleTo="RDS_Metis_CSAT";
		base[]=
		{
			"RDS_Metis_Gun_Bag_CSAT"
		};
	};
};
class RDS_AGS30_Gun_Bag_CSAT : RDS_DShkM_Gun_Bag
{
	displayName="AGS30 Gun Bag";
	_generalMacro="RDS_AGS_CSAT";
	mass=100;
};
class RDS_AGS30_Tripod_Bag_CSAT : RDS_DShkM_TripodHigh_Bag
{
	mass=60;
	displayName="AGS30 Tripod Bag";
	_generalMacro="RDS_AGS_CSAT";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_gmg_01_Wpn_assembleInfo0";
		assembleTo="RDS_AGS_CSAT";
		base[]=
		{
			"RDS_AGS30_Gun_Bag_CSAT"
		};
	};
};
class RDS_SPG9_Gun_Bag_CSAT : RDS_DShkM_Gun_Bag
{
	displayName="SPG9 Gun Bag";
	_generalMacro="RDS_SPG9_CSAT";
	mass=470;
};
class RDS_SPG9_Tripod_Bag_CSAT : RDS_DShkM_TripodHigh_Bag
{
	mass=110;
	displayName="SPG9 Tripod Bag";
	_generalMacro="RDS_SPG9_CSAT";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
		assembleTo="RDS_SPG9_CSAT";
		base[]=
		{
			"RDS_SPG9_Gun_Bag_CSAT"
		};
	};
};
class RDS_Podnos_Gun_Bag_CSAT : RDS_DShkM_Gun_Bag
{
	displayName="Podnos Gun Bag";
	_generalMacro="RDS_2b14_82mm_CSAT";
	mass=162;
};
class RDS_Podnos_Bipod_Bag_CSAT : RDS_DShkM_TripodHigh_Bag
{
	mass=100;
	displayName="Podnos Bipod Bag";
	_generalMacro="RDS_2b14_82mm_CSAT";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_Mortar_01_Wpn_assembleInfo0";
		assembleTo="RDS_2b14_82mm_CSAT";
		base[]=
		{
			"RDS_Podnos_Gun_Bag_CSAT"
		};
	};
};



class RDS_M2_Gun_Bag_CSAT : RDS_DShkM_Gun_Bag
{
	displayName="M2 Gun Bag";
	_generalMacro="RDS_M2StaticMG_CSAT";
	mass=382;
};
class RDS_M2_Tripod_Bag_CSAT : RDS_DShkM_TripodHigh_Bag
{
	mass=100;
	displayName="M2 Tripod Bag";
	_generalMacro="RDS_M2StaticMG_CSAT";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_HMG_01_Wpn_assembleInfo0";
		assembleTo="RDS_M2StaticMG_CSAT";
		base[]=
		{
			"RDS_M2_Gun_Bag_CSAT"
		};
	};
};
class RDS_M2_MiniTripod_Bag_CSAT : RDS_DShkM_TripodHigh_Bag
{
	mass=200;
	displayName="M3 Minitripod Bag";
	_generalMacro="RDS_M2StaticMG_MiniTripod_CSAT";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_HMG_01_Wpn_assembleInfo0";
		assembleTo="RDS_M2StaticMG_MiniTripod_CSAT";
		base[]=
		{
			"RDS_M2_Gun_Bag_CSAT"
		};
	};
};
class RDS_Mk19_Gun_Bag_CSAT : RDS_DShkM_Gun_Bag
{
	displayName="Mk19 Gun Bag";
	_generalMacro="RDS_Mk19_CSAT";
	mass=302;
};
class RDS_Mk19_Tripod_Bag_CSAT : RDS_DShkM_TripodHigh_Bag
{
	mass=100;
	displayName="Mk19 Tripod Bag";
	_generalMacro="RDS_Mk19_CSAT";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_gmg_01_Wpn_assembleInfo0";
		assembleTo="RDS_MK19_TriPod_CSAT";
		base[]=
		{
			"RDS_Mk19_Gun_Bag_CSAT"
		};
	};
};
class RDS_Tow_Gun_Bag_CSAT : RDS_DShkM_Gun_Bag
{
	displayName="TOW Gun Bag";
	_generalMacro="RDS_TOW_CSAT";
	mass=302;
};
class RDS_TOW_Tripod_Bag_CSAT : RDS_DShkM_TripodHigh_Bag
{
	mass=100;
	displayName="TOW Tripod Bag";
	_generalMacro="RDS_TOW_CSAT";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
		assembleTo="RDS_TOW_TriPod_CSAT";
		base[]=
		{
			"RDS_TOW_Gun_Bag_CSAT"
		};
	};
};
class RDS_M252_Gun_Bag_CSAT : RDS_DShkM_Gun_Bag
{
	displayName="M252 Gun Bag";
	_generalMacro="RDS_M252_CSAT";
	mass=162;
};
class RDS_M252_Bipod_Bag_CSAT : RDS_DShkM_TripodHigh_Bag
{
	mass=100;
	displayName="M252 Tripod Bag";
	_generalMacro="RDS_M252_CSAT";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_Mortar_01_Wpn_assembleInfo0";
		assembleTo="RDS_M252_CSAT";
		base[]=
		{
			"RDS_M252_Gun_Bag_CSAT"
		};
	};
};


class RDS_DShkM_Gun_Bag_FIA : Weapon_Bag_Base
{
	author="$STR_A3_Bohemia_Interactive";
	displayName="DShkM Gun Bag";
	_generalMacro="DSHKM_Ins";
	mass=380;
	model = "\RDS_StaticW\bags\StaticX.p3d";
	picture = "\RDS_StaticW\bags\staticX_CA.paa";
	icon = "\RDS_StaticW\bags\mapIcon_backpack_CA.paa";
	class assembleInfo
	{
		primary=0;
		base="";
		assembleTo="";
		dissasembleTo[]={};
		displayName="";
	};
	faction="BLU_F";
};
class RDS_DShkM_TripodHigh_Bag_FIA : Weapon_Bag_Base
{
	mass=100;
	author="$STR_A3_Bohemia_Interactive";
	displayName="DShkM High Tripod Bag";
	_generalMacro="DSHKM_FIA";
	model = "\RDS_StaticW\bags\StaticY.p3d";
	picture = "\RDS_StaticW\bags\staticY_CA.paa";
	icon = "\RDS_StaticW\bags\mapIcon_backpack_CA.paa";
	faction="IND_F";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_HMG_01_Wpn_assembleInfo0";
		assembleTo="RDS_DSHKM_FIA";
		base[]=
		{
			"RDS_DShkM_Gun_Bag_FIA"
		};
	};
};
class RDS_DShkM_TripodLow_Bag_FIA : RDS_DShkM_TripodHigh_Bag
{
	mass=300;
	displayName="DShkM Low Tripod Bag";
	class assembleInfo: assembleInfo
	{
		assembleTo="RDS_DSHkM_Mini_TriPod";
	};
};
class RDS_Kord_Gun_Bag_FIA : RDS_DShkM_Gun_Bag
{
	displayName="Kord Gun Bag";
	_generalMacro="RDS_KORD_FIA";
	mass=250;
};
class RDS_Kord_Tripod_Bag_FIA : RDS_DShkM_TripodHigh_Bag
{
	mass=450;
	displayName="Kord Tripod Bag";
	_generalMacro="RDS_Kord_FIA";
	class assembleInfo: assembleInfo
	{
		assembleTo="RDS_Kord_FIA";
		base[]=
		{
			"RDS_Kord_Gun_Bag_FIA"
		};
	};
};
class RDS_Metis_Gun_Bag_FIA : RDS_DShkM_Gun_Bag
{
	displayName="Metis Gun Bag";
	_generalMacro="RDS_Metis";
	mass=80;
};
class RDS_Metis_Tripod_Bag_FIA : RDS_DShkM_TripodHigh_Bag
{
	mass=70;
	displayName="Metis Tripod Bag";
	_generalMacro="RDS_Metis_FIA";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
		assembleTo="RDS_Metis_FIA";
		base[]=
		{
			"RDS_Metis_Gun_Bag_FIA"
		};
	};
};
class RDS_AGS30_Gun_Bag_FIA : RDS_DShkM_Gun_Bag
{
	displayName="AGS30 Gun Bag";
	_generalMacro="RDS_AGS_FIA";
	mass=100;
};
class RDS_AGS30_Tripod_Bag_FIA : RDS_DShkM_TripodHigh_Bag
{
	mass=60;
	displayName="AGS30 Tripod Bag";
	_generalMacro="RDS_AGS_FIA";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_gmg_01_Wpn_assembleInfo0";
		assembleTo="RDS_AGS_FIA";
		base[]=
		{
			"RDS_AGS30_Gun_Bag_FIA"
		};
	};
};
class RDS_SPG9_Gun_Bag_FIA : RDS_DShkM_Gun_Bag
{
	displayName="SPG9 Gun Bag";
	_generalMacro="RDS_SPG9_FIA";
	mass=470;
};
class RDS_SPG9_Tripod_Bag_FIA : RDS_DShkM_TripodHigh_Bag
{
	mass=110;
	displayName="SPG9 Tripod Bag";
	_generalMacro="RDS_SPG9_FIA";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
		assembleTo="RDS_SPG9_FIA";
		base[]=
		{
			"RDS_SPG9_Gun_Bag_FIA"
		};
	};
};
class RDS_Podnos_Gun_Bag_FIA : RDS_DShkM_Gun_Bag
{
	displayName="Podnos Gun Bag";
	_generalMacro="RDS_2b14_82mm_FIA";
	mass=162;
};
class RDS_Podnos_Bipod_Bag_FIA : RDS_DShkM_TripodHigh_Bag
{
	mass=100;
	displayName="Podnos Bipod Bag";
	_generalMacro="RDS_2b14_82mm_FIA";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_Mortar_01_Wpn_assembleInfo0";
		assembleTo="RDS_2b14_82mm_FIA";
		base[]=
		{
			"RDS_Podnos_Gun_Bag_FIA"
		};
	};
};



class RDS_M2_Gun_Bag_FIA : RDS_DShkM_Gun_Bag
{
	displayName="M2 Gun Bag";
	_generalMacro="RDS_M2StaticMG_FIA";
	mass=382;
};
class RDS_M2_Tripod_Bag_FIA : RDS_DShkM_TripodHigh_Bag
{
	mass=100;
	displayName="M2 Tripod Bag";
	_generalMacro="RDS_M2StaticMG_FIA";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_HMG_01_Wpn_assembleInfo0";
		assembleTo="RDS_M2StaticMG_FIA";
		base[]=
		{
			"RDS_M2_Gun_Bag_FIA"
		};
	};
};
class RDS_M2_MiniTripod_Bag_FIA : RDS_DShkM_TripodHigh_Bag
{
	mass=100;
	displayName="M3 Minitripod Bag";
	_generalMacro="RDS_M2StaticMG_MiniTripod_FIA";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_HMG_01_Wpn_assembleInfo0";
		assembleTo="RDS_M2StaticMG_MiniTripod_FIA";
		base[]=
		{
			"RDS_M2_Gun_Bag_FIA"
		};
	};
};
class RDS_Mk19_Gun_Bag_FIA : RDS_DShkM_Gun_Bag
{
	displayName="Mk19 Gun Bag";
	_generalMacro="RDS_Mk19_FIA";
	mass=302;
};
class RDS_Mk19_Tripod_Bag_FIA : RDS_DShkM_TripodHigh_Bag
{
	mass=100;
	displayName="Mk19 Tripod Bag";
	_generalMacro="RDS_Mk19_FIA";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_gmg_01_Wpn_assembleInfo0";
		assembleTo="RDS_MK19_TriPod_FIA";
		base[]=
		{
			"RDS_Mk19_Gun_Bag_FIA"
		};
	};
};
class RDS_Tow_Gun_Bag_FIA : RDS_DShkM_Gun_Bag
{
	displayName="TOW Gun Bag";
	_generalMacro="RDS_TOW_FIA";
	mass=302;
};
class RDS_TOW_Tripod_Bag_FIA : RDS_DShkM_TripodHigh_Bag
{
	mass=100;
	displayName="TOW Tripod Bag";
	_generalMacro="RDS_TOW_FIA";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
		assembleTo="RDS_TOW_TriPod_FIA";
		base[]=
		{
			"RDS_TOW_Gun_Bag_FIA"
		};
	};
};
class RDS_M252_Gun_Bag_FIA : RDS_DShkM_Gun_Bag
{
	displayName="M252 Gun Bag";
	_generalMacro="RDS_M252_FIA";
	mass=162;
};
class RDS_M252_Bipod_Bag_FIA : RDS_DShkM_TripodHigh_Bag
{
	mass=100;
	displayName="M252 Tripod Bag";
	_generalMacro="RDS_M252_FIA";
	class assembleInfo: assembleInfo
	{
		displayName="$STR_A3_CfgVehicles_B_Mortar_01_Wpn_assembleInfo0";
		assembleTo="RDS_M252_FIA";
		base[]=
		{
			"RDS_M252_Gun_Bag_FIA"
		};
	};
};