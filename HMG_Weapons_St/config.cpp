//@todo Брать имена оружия и БК из классов для упрощения stringable.csv
//
class CfgPatches {
	class HMG_Weapons_St {
		requiredaddons[] = {
			"A3_Data_F",
			"hlcweapons_aks",
			"rhs_c_weapons",
			"rhs_c_heavyweapons",
			"rhsusf_c_heavyweapons",
			"A3_Anims_F",
			"A3_Anims_F_Config_Sdr",
			"A3_Weapons_F",
			"asdg_jointrails",
			"hlcweapons_core",
			"RDS_StaticWeapons_Core",
			"AGM_Core",
			"hmg_core",
			"a3ru_RDSPatch"
		};
		weapons[] = {""};
		units[] = {};
		version = "0.3";
		versionAr[] = {0, 3};
		versionStr = "0.3";
	};
};

class CfgFunctions {
	class HMG_Static {
		class HMG_Static {
			file = "HMG_Weapons_St\Functions";
			class CheckConditions;
			class CheckConditionsGunner;
			class CheckConditionsCommander;
			class LoadStatic;
			class LoadVehicle;
			class MetisPackUnpack;
		};
	};
};

#include "Configs\CfgMagazines.hpp"
#include "Configs\CfgWeapons.hpp"
#include "Configs\CfgVehicles.hpp"