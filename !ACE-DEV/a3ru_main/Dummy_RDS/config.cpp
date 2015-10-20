#define X_SCOPE(XSCOPE) scope = XSCOPE; \
scopeCurator = XSCOPE;

class CfgPatches
{
	class RDS_Tanks
	{
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		author[] = {"Blender"};
		authorUrl = "http://www.arma3.ru";
		version = "0.1";
		versionAr[] = {0, 1};
		versionStr = "0.1";
	};
	class RDS_APC
	{
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		author[] = {"Blender"};
		authorUrl = "http://www.arma3.ru";
		version = "0.1";
		versionAr[] = {0, 1};
		versionStr = "0.1";
	};
};

class CfgVehicles {
	class Tank_F;
	class RDS_T72_AAF_04: Tank_F { X_SCOPE(0) };
	class RDS_BMP2_AAF_01: Tank_F { X_SCOPE(0) };
	class RDS_BMP2_HQ_AAF_01: Tank_F { X_SCOPE(0) };
	class RDS_BMP2_Ambul_01: Tank_F { X_SCOPE(0) };
	class RDS_ZSU_AAF_04: Tank_F { X_SCOPE(0) };
	class RDS_ZU23_AAF: Tank_F { X_SCOPE(0) };
	class RDS_DSHKM_AAF: Tank_F { X_SCOPE(0) };
	class RDS_DSHkM_Mini_TriPod: Tank_F { X_SCOPE(0) };
	class RDS_AGS_AAF: Tank_F { X_SCOPE(0) };
	class RDS_SPG9_AAF: Tank_F { X_SCOPE(0) };
	class RDS_2b14_82mm_AAF: Tank_F { X_SCOPE(0) };
	class RDS_D30_AAF: Tank_F { X_SCOPE(0) };
};