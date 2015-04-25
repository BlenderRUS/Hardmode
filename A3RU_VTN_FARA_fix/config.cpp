class CfgPatches
{
	class A3RU_VTN_FARA_fix
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = { "VTN_FARA_PV_CF", "rhs_main" };
		version = "1.0";
		versionStr = "1.0";
		versionAr[] = { 1, 0 };
	};
};

class CfgVehicles {
	class VTN_FARA_STATIC;
	class VTN_FARA_PV: VTN_FARA_STATIC
	{
		faction = "rhs_faction_msv";
		crew = "rhs_msv_combatcrew";
	};
	class VTN_FARA_PV_PULT: VTN_FARA_STATIC
	{
		faction = "rhs_faction_msv";
		crew = "rhs_msv_combatcrew";
	};
};