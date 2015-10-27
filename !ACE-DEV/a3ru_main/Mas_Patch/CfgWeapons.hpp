#define X_RELOAD(VAR1)	magazineReloadTime = VAR1; \
	autoReload = true; \
	backgroundReload = true
class Rhs_weap_TOW_Launcher;
class a3ru_weap_TOW_launcher: Rhs_weap_TOW_Launcher {
	displayName = "BGM-71 TOW2A Static";
	magazines[] = { "rhs_mag_1Rnd_TOW" };
	X_RELOAD(1);
};
class Rhs_weap_stinger_Launcher: Rhs_weap_TOW_Launcher {
	magazines[] += { Rhs_mag_1Rnd_stinger };
	a3ru_maxMagazines = 2;
	X_RELOAD(1);
};
class rhs_weap_igla;
class a3ru_weap_igla: rhs_weap_igla
{
	magazines[] = {"rhs_mag_9k38_rocket"};
	X_RELOAD(1);
	a3ru_maxMagazines = 2;
};
class mas_AT13LauncherSingle: missiles_titan
{
	magazines[]={ "metis_9m131" };
	X_RELOAD(0);
};
class mas_AGS30: GMG_20mm
{
	X_RELOAD(0);
};
class mas_SPG9: RocketPods
{
	X_RELOAD(0);
};
class rockets_230mm_GAT;
class A3RU_weap_RKTS: rockets_230mm_GAT {
	X_RELOAD(1);
	a3ru_maxMagazines = 12;
	magazines[] = {"A3RU_mag_1Rnd_230mm_Rocket"};
};
class a3ru_weap_D30: mortar_155mm_AMOS
{
	X_RELOAD(0);
	a3ru_reloadTime = 7;
	modes[] = {"Charge0", "Charge1", "Charge2", "Charge3", "Charge4", "Burst1", "Burst2", "Burst3"};
	class Charge0: Mode_SemiAuto {
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Cannons\cannon_2",2.5118864,1,1500};
			soundBegin[] = {"begin1",1};
		};
		reloadSound[] = {"A3\sounds_f\dummysound",1.0,1,20};
		reloadTime = 8;
		minRange = 0;
		midRange = 0;
		maxRange = 0;
		artilleryDispersion = 3.2;
		displayname = "Charge 0";
		artilleryCharge = 0.11;
	};
	class Charge1: Charge0 {
		displayname = "Charge 1";
		artilleryCharge = 0.16;
	};
	class Charge2: Charge0 {
		displayname = "Charge 2";
		artilleryCharge = 0.24;
	};
	class Charge3: Charge0 {
		displayname = "Charge 3";
		artilleryCharge = 0.3;
	};
	class Charge4: Charge0 {
		displayname = "Charge 4";
		artilleryCharge = 0.48;
	};
	magazines[] = {"mas_1Rnd_122mmHE_D30", "mas_1Rnd_122mmAT_D30"};
};
class a3ru_weap_M119: a3ru_weap_D30 {
	X_RELOAD(0);
	scope = 1;
	displayName = "M119";
	class Charge0;
	class Charge4: Charge0 {
		displayname = "Charge 4";
		artilleryCharge = 0.453;
	};
	magazines[] = {
		"mas_1Rnd_105mmHE_M119",
		"mas_1Rnd_105mmWP_M119",
		"mas_1Rnd_105mmLASER_M119",
		"mas_1Rnd_105mmSMOKE_M119",
		"mas_1Rnd_105mmILLUM_M119"
	};
};

class rhs_weap_m240veh;
class A3RU_weap_M240_veh: rhs_weap_m240veh {
	magazines[] = {"rhs_mag_762x51_M240", "rhs_mag_762x51_M240_200"};
	X_RELOAD(0);
};