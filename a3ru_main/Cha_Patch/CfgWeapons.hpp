class CfgWeapons {
	class Missiles_Scalpel;	
	class Cha_BRDM2_AT5_Launcher : Missiles_Scalpel {
		canlock = 0;
		magazines[] = {"Cha_BRDM2_5Rnd_At5", "rhs_mag_9m113_5"};
		displayname = "9M113 Konkurs";
		magazineReloadTime = 300;
	};
	// LAV-25
	class autocannon_Base_F;
	class autocannon_30mm_CTWS: autocannon_Base_F
	{
		class HE: autocannon_Base_F
		{
			class player;
			class close;
			class short;
			class medium;
			class far;
		};
		class AP: autocannon_Base_F
		{
			class player;
			class close;
			class short;
			class medium;
			class far;
		};
	};
	class RHS_weap_M242BC: autocannon_30mm_CTWS	{};
	class a3ru_weap_m242_lav25: RHS_weap_M242BC {
		class HE: HE
		{
			magazines[] = {"a3ru_mag_210Rnd_25mm_M242_HEI","a3ru_mag_210Rnd_25mm_M242_APFSDS"};
		};
		class AP: AP
		{
			magazines[] = {"a3ru_mag_210Rnd_25mm_M242_APFSDS"};
		};
	};
	class rhs_weap_m240_abrams_coax;
	class a3ru_weap_m240_lav25: rhs_weap_m240_abrams_coax {
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun1";
				positionName = "Konec hlavne2";
				directionName = "Usti hlavne2";
			};
		};
	};
	class a3ru_weap_m240_lav25_pintle: a3ru_weap_m240_lav25
	{
		autoReload = 0;
		displayName = "M240 7.62 Pintle Mount";
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun1";
				positionName = "Usti hlavne";
				directionName = "Usti hlavne";
			};
		};
	};
	class a3ru_weap_m240_lav25_pintle_2: a3ru_weap_m240_lav25
	{
		autoReload = 0;
		displayName = "M240 7.62 Pintle Mount";
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun1";
				positionName = "Usti hlavne3";
				directionName = "Usti hlavne3";
			};
		};
		muzzlePos = "usti hlavne3";
		muzzleEnd = "konec hlavne3";
	};
};