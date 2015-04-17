////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Sat Apr 18 02:28:07 2015 : Source 'file' date Sat Apr 18 02:28:07 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class lop_c_wep_backpacks : config.bin{
class CfgPatches
{
	class lop_c_wep_backpacks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F_Ammoboxes"};
	};
};
class CfgVehicles
{
	class B_FieldPack_khk;
	class B_FieldPack_cbr;
	class B_FieldPack_oli;
	class B_Carryall_khk;
	class rhs_rpg;
	class LOP_FieldPack_CBR: B_FieldPack_cbr
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_FieldPack_CBR";
		scope = 2;
		displayName = "Field Pack (coyote brown)";
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class LOP_FieldPack_OLV: B_FieldPack_oli
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_FieldPack_OLV";
		scope = 2;
		displayName = "Field Pack (olive)";
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class LOP_FieldPack_KHK: B_FieldPack_oli
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_FieldPack_KHK";
		scope = 2;
		displayName = "Field Pack (khaki)";
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class LOP_Carryall_KHK: B_Carryall_khk
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_Carryall_KHK";
		scope = 2;
		displayName = "Caryall (khaki)";
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class LOP_Carryall_KHK_mg: LOP_Carryall_KHK
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_Carryall_KHK_mg";
		scope = 2;
		class TransportMagazines
		{
			class _xx_rhs_100Rnd_762x54mmR_green
			{
				count = 4;
				magazine = "rhs_100Rnd_762x54mmR_green";
			};
			class _xx_SmokeShell
			{
				count = 2;
				magazine = "SmokeShell";
			};
		};
	};
	class LOP_Carryall_KHK_mg2: LOP_Carryall_KHK
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_Carryall_KHK_mg2";
		scope = 2;
		class TransportMagazines
		{
			class _xx_rhsusf_100Rnd_762x51
			{
				count = 4;
				magazine = "rhsusf_100Rnd_762x51";
			};
			class _xx_SmokeShell
			{
				count = 2;
				magazine = "SmokeShell";
			};
		};
	};
	/*
	class LOP_FieldPack_OLV_marksman: LOP_FieldPack_OLV
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_FieldPack_OLV_marksman";
		scope = 2;
		class TransportMagazines
		{
			class _xx_10Rnd_LOP_762x54_mag
			{
				count = 5;
				magazine = "10Rnd_LOP_762x54_mag";
			};
			class _xx_10Rnd_LOP_762x54_T_mag
			{
				count = 3;
				magazine = "10Rnd_LOP_762x54_T_mag";
			};
		};
	};
	*/
	class LOP_RHS_RPG: rhs_rpg
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_RHS_RPG";
		scope = 2;
		class TransportMagazines
		{
			class _xx_rhs_rpg7_PG7VL_mag
			{
				count = 2;
				magazine = "rhs_rpg7_PG7VL_mag";
			};
			class _xx_SmokeShell
			{
				count = 1;
				magazine = "SmokeShell";
			};
			class _xx_rhs_rpg7_OG7V_mag
			{
				count = 1;
				magazine = "rhs_rpg7_OG7V_mag";
			};
		};
	};
	class LOP_FieldPack_OLV_medic: LOP_FieldPack_OLV
	{
		author = "$STR_LOP_FULL_NAME";
		_generalMacro = "LOP_FieldPack_OLV_medic";
		scope = 2;
		displayName = "Field Pack (olive)";
		class TransportItems
		{
			class _xx_Medikit
			{
				count = 1;
				name = "Medikit";
			};
			class _xx_FirstAidKitt
			{
				count = 7;
				name = "FirstAidKit";
			};
		};
	};
};
class cfgMods
{
	author = "Leights OPFOR Pack";
	timepacked = "1422561993";
};
//};
