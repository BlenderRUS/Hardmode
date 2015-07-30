class CfgWeapons {
	class MGun;
	class missiles_titan;
	class mortar_155mm_AMOS;
	class RDS_DSHKM: MGun
	{
		magazines[] =
		{
			"RDS_50Rnd_127x107_DSHKM",
			"RDS_150Rnd_127x107_DSHKM",
			"rhs_mag_127x108mm_50",
			"rhs_mag_127x108mm_150"
		};
	};
	class RDS_KORD: MGun
	{
		magazines[] = {
			"RDS_150Rnd_127x108_KORD",
			"RDS_50Rnd_127x108_KORD",
			"rhs_mag_127x108mm_50",
			"rhs_mag_127x108mm_150"
		};
	};
	class Rhs_weap_TOW_Launcher;
	class A3ru_weap_TOW_launcher: Rhs_weap_TOW_Launcher {
		displayName = "BGM-71 TOW2A Static";
		magazines[] = { "rhs_mag_1Rnd_TOW" };
	};
	class rhs_weap_igla;
	class A3ru_weap_igla: rhs_weap_igla
	{
		magazines[] = {"rhs_mag_9k38_rocket"};
		reloadTime = 1;
		autoReload = 1;
		magazineReloadTime = 1;
		backgroundReload = 1;
	};
	class RDS_AT13LauncherSingle: missiles_titan
	{
		magazines[]={ "metis_9m131" };
	};
	class RDS_D30: mortar_155mm_AMOS
	{
		magazines[] = {"RDS_1Rnd_122mmHE_D30", "RDS_1Rnd_122mmAT_D30"};
	};
	#include "CfgWeapons_AGM.hpp"
};