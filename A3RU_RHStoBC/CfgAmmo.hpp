#define X_FLARE(CCLASS,CBASE) class CCLASS: CBASE { \
useFlare=1; \
flareSize=30; \
brightness=2000000; \
intensity=3000000; \
};

class CfgAmmo {
	class rhs_g_vog25;
	class F_40mm_White;
	class F_40mm_Red;
	class F_40mm_Green;
	class rhs_g_vog25p: rhs_g_vog25
	{
		explosive=0.1;
		explosionEffects="30mmExplode";
	};
	class rhs_g_vg40tb: rhs_g_vog25
	{
		explosive=0.1;
		explosionEffects="RHS_Thermobaric_Explosion";
	};
	class rhs_g_vg40sz: rhs_g_vog25
	{
		explosive=0.1;
		explosionEffects="RHS_flashbang_10";
	};
	class GrenadeHand;
	class SmokeShell: GrenadeHand
	{
		effectsSmoke = "SmokeShellWhite";
	};
	class SmokeShellRed: SmokeShell
	{
		effectsSmoke = "SmokeShellWhite";
	};
	class SmokeShellGreen: SmokeShell
	{
		effectsSmoke = "SmokeShellWhite";
	};
	class SmokeShellYellow: SmokeShell
	{
		effectsSmoke = "SmokeShellWhite";
	};
	class SmokeShellPurple: SmokeShell
	{
		effectsSmoke = "SmokeShellWhite";
	};
	class SmokeShellBlue: SmokeShell
	{
		effectsSmoke = "SmokeShellWhite";
	};
	class SmokeShellOrange: SmokeShell
	{
		effectsSmoke = "SmokeShellWhite";
	};
	/*
	X_FLARE(rhs_40mm_white,F_40mm_White)
	X_FLARE(rhs_40mm_red,F_40mm_Red)
	X_FLARE(rhs_40mm_green,F_40mm_Green)
	X_FLARE(rhsusf_40mm_white,F_40mm_White)
	X_FLARE(rhsusf_40mm_red,F_40mm_Red)
	X_FLARE(rhsusf_40mm_green,F_40mm_Green)
	*/
};