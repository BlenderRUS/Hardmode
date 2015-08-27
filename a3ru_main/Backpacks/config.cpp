class CfgPatches
{
	class A3RU_BACKPACKS
	{
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[] = { "CUP_Weapons_Backpacks" };
		author[] = {"Blender"};
		authorUrl = "http://www.arma3.ru";
		version = "0.1";
		versionAr[] = {0, 1};
		versionStr = "0.1";
	};
};

class CfgVehicles {
	class CUP_B_USPack_Coyote;
	class a3ru_backpack_verybig: CUP_B_USPack_Coyote {
		scope = 2;
		displayName = "Very Big Backpack";
		descriptionShort = "Very Big Backpack";
		maximumLoad = 1120;
		picture = "\CUP\Weapons\CUP_Weapons_Backpacks\data\ui\icon_b_c_uspack_cbr_ca.paa";
		hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Backpacks\data\backpack_us_co.paa"};
	};
	class HMG_VeryBigBP: a3ru_backpack_verybig {
		scope = 1;
		displayName = "Very Big Backpack (DEPRECATED)";
		descriptionShort = "Very Big Backpack (DEPRECATED)";
	};

	class Bag_Base;
	class HMG_RD54_EMP : Bag_Base {
		displayname = "РД-54 (ЕМР)";
		model = "\CUP\Weapons\CUP_Weapons_Backpacks\CUP_AssaultPack_Civ.p3d";
		hiddenSelectionsTextures[] = {"\x\a3ru\addons\a3ru_main\backpacks\Data\backpack_civil_assault_co1.paa"};
		maximumLoad = 280;
		mass = 50;
	};
	class HMG_RD54_TAN : Bag_Base {
		displayname = "РД-54 (песок)";
		model = "\CUP\Weapons\CUP_Weapons_Backpacks\CUP_AssaultPack_Civ.p3d";
		hiddenSelectionsTextures[] = {"\x\a3ru\addons\a3ru_main\backpacks\Data\backpack_civil_assault_co2.paa"};
		maximumLoad = 280;
		mass = 50;
	};

	class B_AssaultPack_Base;
	class hmg_metis_ruck : B_AssaultPack_Base
	{
		scope = 2;
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_rpg";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_rpg_ca.paa";
		displayName = "$STR_HMG_Static_MetisBP_2rnd";
		hiddenSelectionsTextures[] = {};
		maximumLoad = 620;
		mass = 20;
		class TransportMagazines
		{
			class _xx_metis_9m131
			{
				magazine = "metis_9m131";
				count = 2;
			};
		};
	};
	class hmg_metis_ruck2 : B_AssaultPack_Base
	{
		scope = 2;
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_rpg";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_rpg_ca.paa";
		displayName = "$STR_HMG_Static_MetisBP_1rnd";
		hiddenSelectionsTextures[] = {};
		maximumLoad = 310;
		mass = 20;
		class TransportMagazines
		{
			class _xx_metis_9m131
			{
				magazine = "metis_9m131";
				count = 1;
			};
		};
	};
};