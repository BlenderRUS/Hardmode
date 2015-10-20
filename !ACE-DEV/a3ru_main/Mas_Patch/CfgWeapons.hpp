class mas_DSHKM: MGun
{
	magazines[] =
	{
		"mas_50Rnd_127x107_DSHKM",
		"mas_150Rnd_127x107_DSHKM",
		"rhs_mag_127x108mm_50",
		"rhs_mag_127x108mm_150"
	};
};
class mas_KORD: MGun
{
	magazines[] = {
		"mas_150Rnd_127x108_KORD",
		"mas_50Rnd_127x108_KORD",
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
class mas_AT13LauncherSingle: missiles_titan
{
	magazines[]={ "metis_9m131" };
};
class mas_D30: mortar_155mm_AMOS
{
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
class mas_M119: mas_D30 {
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