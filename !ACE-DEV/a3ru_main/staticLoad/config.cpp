//@todo Брать имена оружия и БК из классов для упрощения stringable.csv
//
class CfgPatches {
	class A3RU_StaticLoad {
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
			"mas_vehicleweapons_Core",
			"ACE_Common",
			"a3ru_MAS_Patch"
		};
		weapons[] = {""};
		units[] = {};
		version = "0.3";
		versionAr[] = {0, 3};
		versionStr = "0.3";
	};
};

class CfgFunctions {
	class A3RU_StaticLoad {
		class StaticLoad {
			file = "x\a3ru\addons\a3ru_main\staticLoad\Functions";
			class EndAnim;
			class FindMagazineAround;
			class GetMagazineName;
			class GetMagazinesAround;
			class IsTurretEmpty;
			class LoadMethod;
			class LoadMethodStatic;
			class MetisPackUnpack;
			class StartAnim;
			class StartLoad;
			class StartLoadStatic;
			class StaticReload;
			class TurretsReload;
		};
	};
};

#include "CfgVehicles.hpp"