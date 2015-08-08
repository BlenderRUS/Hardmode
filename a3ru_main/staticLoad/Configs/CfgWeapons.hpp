class CfgWeapons {
	class missiles_titan;
	class Rhs_weap_TOW_Launcher;
	class RocketPods;
	class GMG_20mm;
	class HMG_M2;
	class DSHKM;
	class MGun;
	class cannon_120mm;
	class mortar_155mm_AMOS;
	class RHS_MK19: GMG_20mm 
	{
		magazineReloadTime = 0;
	};
	class RDS_AGS30: GMG_20mm
	{
		magazineReloadTime = 0;
	};
	class RHS_M2: HMG_M2
	{
		magazineReloadTime = 0;
	};
	class rhs_weap_nsvt : DSHKM
	{
		magazineReloadTime = 0;
	}; 
	class RDS_DSHKM: MGun
	{
		magazineReloadTime = 0;
	};
	class RDS_SPG9: RocketPods
	{
		magazineReloadTime = 0;	
	};
	class A3ru_weap_TOW_launcher : Rhs_weap_TOW_Launcher
	{
		magazineReloadTime = 0;	
	};
	class RDS_AT13LauncherSingle: missiles_titan
	{
		magazineReloadTime = 0;
	};
	class RDS_D30: mortar_155mm_AMOS
	{
		magazineReloadTime = 0;
	};
};