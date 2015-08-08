class CfgPatches
{
	class A3RU_RangeTables
	{
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_UI_F",
			"A3_Weapons_F_Ammoboxes",
			"A3_Weapons_F_Items",
			"extended_eventhandlers",
			"CBA_UI",
			"CBA_XEH",
			"CBA_XEH_A3"
		};
		author[] = {"Blender", "Lolkij"};
		authorUrl = "http://www.arma3.ru";
		version = "0.1";
		versionAr[] = {0, 1};
		versionStr = "0.1";
	};
};

#include "dialog.hpp"
#include "CfgWeapons.hpp"

class Extended_PostInit_EventHandlers
{
	class A3RU_RangeTables
	{
		clientInit = "[] execVM '\x\a3ru\addons\a3ru_main\rangetables\init.sqf'";
	};
};

class CfgVehicles {
	class NATO_Box_Base;
	class a3ru_rangetables_box: NATO_Box_Base {
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "Range Tables";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
		icon = "iconCrateWpns";
		
		class TransportMagazines {};
		
		class TransportWeapons {};
		
		class TransportItems {
			class a3ru_rangetable_2b14_XX {
				name = "a3ru_rangetable_2b14";
				count = 100;
			};
			class a3ru_rangetable_m252_XX {
				name = "a3ru_rangetable_m252";
				count = 100;
			};
			class a3ru_rangetable_ags_XX {
				name = "a3ru_rangetable_ags";
				count = 100;
			};
		};
	};
	class cw_nineliner_and_notepad_box : a3ru_rangetables_box {
		scope = 1;
	};
};