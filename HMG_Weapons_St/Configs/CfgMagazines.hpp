class CfgMagazines {
	class CA_Magazine;
	class CA_LauncherMagazine;
	class rhs_mag_2Rnd_TOW;
	class rhs_mag_1Rnd_TOW: CA_LauncherMagazine
	{
		scope = 2;
		ammo = "rhs_ammo_TOW2_AT";
		displayname = "1 rnd BGM-71E TOW-2A";
		displaynameshort = "1 rnd BGM-71E";
		nameSound = "missiles";
		count = 1;
		initSpeed = 55.71;
	};
	class TOW_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\tow_static_ca.paa";
		picture = "\HMG_Weapons_St\tow_static_ca";
		model = "HMG_Weapons_St\tow.p3d";
		displayName = "TOW AT";
		mass = 502;
	};
	class D30_at_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m119_ca.paa";
		picture = "\HMG_Weapons_St\m119_ca";
		model = "HMG_Weapons_St\m119_m1.p3d";
		displayName = "Кумулятивный снаряд Д-30";
		mass = 502;
	};
	class D30_he_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m119_ca.paa";
		picture = "\HMG_Weapons_St\m119_ca";
		model = "HMG_Weapons_St\m119_m1.p3d";
		displayName = "ОФ снаряд Д-30";
		mass = 502;
	};
	class M119_at_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m119_ca.paa";
		picture = "\HMG_Weapons_St\m119_ca";
		model = "HMG_Weapons_St\m119_m1.p3d";
		displayName = "M119 M1 HE Shell";
		mass = 502;
	};
	class M119_wp_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m119_ca.paa";
		picture = "\HMG_Weapons_St\m119_ca";
		model = "HMG_Weapons_St\m119_m1.p3d";
		displayName = "M119 WP Shell";
		mass = 502;
	};
	class M119_laser_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m119_ca.paa";
		picture = "\HMG_Weapons_St\m119_ca";
		model = "HMG_Weapons_St\m119_m1.p3d";
		displayName = "M119 Laser Guided Shell";
		mass = 502;
	};
	class M119_smoke_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m119_ca.paa";
		picture = "\HMG_Weapons_St\m119_ca";
		model = "HMG_Weapons_St\m119_m1.p3d";
		displayName = "M119 Smoke Shell";
		mass = 502;
	};
	class M119_illum_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m119_ca.paa";
		picture = "\HMG_Weapons_St\m119_ca";
		model = "HMG_Weapons_St\m119_m1.p3d";
		displayName = "M119 Illumination Shell";
		mass = 502;
	};
	class metis_9m131 : CA_LauncherMagazine {
		scope = 2;
		count = 1;
		displayName = "$STR_HMG_Static_Missile_9K115";
		displayNameShort = "9М131";
		model = "\HMG_Weapons_St\metis_tpk.p3d";
		ammo = "metis_9M115_PTUR";
		type = 6 * 		256;
		picture = "\metis\data\pic\9m115_ca";
		initSpeed = 40;
		maxLeadSpeed = 830;
		descriptionShort = "Выстрел 9М131 тандемный";
		mass = 306;
	};

	class 8Rnd_82mm_Mo_shells;
	class AGM_8Rnd_81mmShell_HE: 8Rnd_82mm_Mo_shells {
   	 	count = 1;
		initSpeed = 261;
    		displayName = "2b14 HE";
    		displayNameShort = "HE";
    		ammo = "AGM_81mmShell_AMMO_HE";
  	};
	class AGM_8Rnd_81mmShell_252_HE: 8Rnd_82mm_Mo_shells {
   	 	count = 1;
		initSpeed = 305;
    		displayName = "M252 HE";
    		displayNameShort = "HE";
    		ammo = "AGM_81mmShell_252_AMMO_HE";
  	};
	class RDS_29Rnd_30mm_AGS30_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m_ags30_ca.paa";
		picture = "\HMG_Weapons_St\m_ags30_ca";
		model = "HMG_Weapons_St\ace_ags30_mag.p3d";
		displayName = "AGS-30 29rnd";
		ammo=RDS_G_30mm_HE;
		mass = 20;
	};
	class Mk19_cass_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m_mk19_ca.paa";
		picture = "\HMG_Weapons_St\m_mk19_ca";
		model = "HMG_Weapons_St\mk19_box.p3d";
		displayName = "Mk-19 48rnd";
		ammo=RDS_G_30mm_HE;
		mass = 20;
	};
	class M2_cass_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\m_m2_ca.paa";
		picture = "\HMG_Weapons_St\m_m2_ca";
		model = "HMG_Weapons_St\m2_box.p3d";
		displayName = "M2 100rnd";
		ammo=RDS_G_30mm_HE;
		mass = 20;
	};

	class RDS_KORD_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\dshkm_co.paa";
		picture = "\HMG_Weapons_St\dshkm_mg_ca";
		model = "HMG_Weapons_St\ace_kord_mag.p3d";
		displayName = "Magazine B-30";
		mass = 20;
	};
	class PG9_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\spg9_ca.paa";
		picture = "\HMG_Weapons_St\spg9_ca";
		model = "HMG_Weapons_St\pg9.p3d";
		displayName = "SPG PG9";
		mass = 20;
	};
	class OG9_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\spg9_ca.paa";
		picture = "\HMG_Weapons_St\spg9_ca";
		model = "HMG_Weapons_St\og9.p3d";
		displayName = "SPG OG9";
		mass = 20;
	};

	class HMG_Mine_82_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\podnos_2b14_ca.paa";
		picture = "\HMG_Weapons_St\podnos_2b14_ca";
		model = "HMG_Weapons_St\mort82mm_shell.p3d";
		displayName = "2b14 HE";
		mass = 100;
	};
	class HMG_Mine_81_out: CA_Magazine
	{
		scope = 2;
		icon = "HMG_Weapons_St\mortar_m251_ca.paa";
		picture = "\HMG_Weapons_St\mortar_m251_ca";
		model = "HMG_Weapons_St\mort82mm_shell.p3d";
		displayName = "M252 HE";
		mass = 100;
	};
};