class CfgPatches {
	class hmg_core {
		units[] = {
			RHS_M3A3_BUSKIII,
			RHS_M3A3_BUSKIII_wd
		};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Ammoboxes", "A3_Weapons_F_beta", "A3_Weapons_F_Acc", "rhsusf_main","rhs_main",
			"A3_Data_F",
			"Blastcore_MainCore",
			"AGM_Core",
			"Delta_strykerpack",
			"rhs_c_btr",
			"rhs_c_weapons",
			"rhsusf_c_weapons",
			"Cha_LAV25",
			"RHS_US_A2Port_Armor",
			"RHS_US_A2_AirImport",
			"CUP_Weapons_WeaponsCore",
			"tmr_core",
			"tmr_blastfrag"
	
		};
		version = "";
		versionStr = "0.603.0";
		versionAr[] = {0, 603, 0};
	};
};
class cfgFunctions {
	class HMG_Core {
		class HMG_Core {
			file = "hmg_core\functions";
			class Schi;	// External class reference
			class HMGPara;
			class HMGVehDrop;
			class HMGVehPara;
			//class visRange;
			class HMG_LBoxes;
			class HMG_CanShoot;
		};
	};
};
class Extended_PostInit_EventHandlers {
	class HMG_Check {
		serverInit = "HMG_Check_Post_Init_Var = [] execVM ""\hmg_core\check\init.sqf""";
	};
};
class Mode_FullAuto;

#include "boxes\vehclass.hpp"
class cfgAmmo {
	#include "blastcore\blastcore_a.hpp"
	#include "javelin\javelin_a.hpp"
	#include "blastfrag\ammo.hpp"
};
class cfgMagazines {
	#include "blastcore\blastcore_m.hpp"
};
class cfgWeapons {
	class WeaponSlotsInfo;
	#include "blastcore\blastcore_w.hpp"
	#include "javelin\javelin_w.hpp"
	#include "optics\rhs.hpp"
	#include "weapons\rhs_m249.hpp"
};
class ArgumentsBaseUnits;
class cfgVehicles {
	class Logic;
	class Module_F: Logic
	{
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	#include "c130\c130j.hpp"
	#include "modules\para.hpp"
	#include "modules\lockBox.hpp"
	#include "modules\canShoot.hpp"
	#include "modules\vehpara.hpp"
	#include "agm\actions.hpp"
	#include "vehicle\veh.hpp"
	#include "vehicle\wheels.hpp"
	#include "logistics\logistic_v.hpp"
	#include "radar\radar.hpp"
	#include "boxes\base.hpp"
	#include "boxes\ru.hpp"
	#include "boxes\us.hpp"
	#include "boxes\mines.hpp"
	#include "boxes\insurg.hpp"
	#include "boxes\static.hpp"
	#include "vehicle\deprecate.hpp"
};

class Extended_InitPost_EventHandlers
{
       class hmg_box_ins_rifles {
		HMG_box_init_ins_rifles = "[_this,'rifles'] call compile preprocessFileLineNumbers 'hmg_core\boxes\random.sqf'";
		};
    	class hmg_box_ins_lmg
    	{
		HMG_box_init_ins_lmg = "[_this,'lmg'] call compile preprocessFileLineNumbers 'hmg_core\boxes\random.sqf'";
    	};
    	class hmg_box_ins_hmg
		{
		HMG_box_init_ins_hmg = "[_this,'hmg'] call compile preprocessFileLineNumbers 'hmg_core\boxes\random.sqf'";
    	};
    	class hmg_box_ins_radio
    	{
		HMG_box_init_ins_radio = "[_this,'radio'] call compile preprocessFileLineNumbers 'hmg_core\boxes\random.sqf'";
    	};
		class hmg_box_ins_stuff
		{
		HMG_box_init_ins_stuff = "[_this,'stuff'] call compile preprocessFileLineNumbers 'hmg_core\boxes\random.sqf'";
		};
		class hmg_box_ins_snip
		{
		HMG_box_init_ins_snip = "[_this,'snip'] call compile preprocessFileLineNumbers 'hmg_core\boxes\random.sqf'";
		};
		class LandVehicle {
		HMG_veh_init = "[_this] call compile preprocessFileLineNumbers 'hmg_core\vehicle\clear.sqf'";
		};
		class hmg_box_ins_maps
		{
		HMG_box_init_ins_maps = "[_this,'maps'] call compile preprocessFileLineNumbers 'hmg_core\boxes\random.sqf'";
		};
//		class StaticMortar {
//		HMG_veh_init_mort = "[_this] call compile preprocessFileLineNumbers 'hmg_core\vehicle\mortars.sqf'";
//		};
//		class RDS_AGS_base {
//		HMG_veh_init_ags = "[_this] call compile preprocessFileLineNumbers 'hmg_core\vehicle\ags.sqf'";
//		};

//		class Man {
			//HMG_VIS_init = "[_this] call HMG_Core_fnc_visRange";
		//};
};

