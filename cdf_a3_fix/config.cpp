class CfgPatches
{
	class cdf_a3_nobrdm
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "cdf_a3_main_c" };
		version = "0.2";
		versionStr = "0.2";
		versionAr[] = {0, 2};
		author[] = {"Blender", "Lolkij"};
		authorUrl = "http://www.arma3.ru";
		description = "Scope=0 to BRDM";
	};
};

class CfgVehicles {
	class CDF_A3_BRDM2_Base;
	class CDF_A3_BRDM2: CDF_A3_BRDM2_Base {
		scope = 0;
		scopeCurator = 0;
	};
	class CDF_A3_BRDM2_ATGM_Base;
	class CDF_A3_BRDM2_ATGM: CDF_A3_BRDM2_ATGM_Base {
		scope = 0;
		scopeCurator = 0;
	};
	class CDF_A3_BRDM2_HQ_Base;
	class CDF_A3_BRDM2_HQ: CDF_A3_BRDM2_HQ_Base {
		scope = 0;
		scopeCurator = 0;
	};
};