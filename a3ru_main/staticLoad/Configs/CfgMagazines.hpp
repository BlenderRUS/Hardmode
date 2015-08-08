#include "macros.h"

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
		displayName = "TOW AT";
		X_IPM(tow_static_ca,tow_static_ca,tow);
		X_MASS(502);
	};
	class D30_at_out: CA_Magazine
	{
		scope = 2;
		displayName = "Кумулятивный снаряд Д-30";
		X_IPM(m119_ca,m119_ca,m119_m1);
		X_MASS(502);
	};
	class D30_he_out: CA_Magazine
	{
		scope = 2;
		displayName = "ОФ снаряд Д-30";
		X_IPM(m119_ca,m119_ca,m119_m1);
		X_MASS(502);
	};
	class M119_at_out: CA_Magazine
	{
		scope = 2;
		displayName = "M119 M1 HE Shell";
		X_IPM(m119_ca,m119_ca,m119_m1);
		X_MASS(502);
	};
	class M119_wp_out: CA_Magazine
	{
		scope = 2;
		displayName = "M119 WP Shell";
		X_IPM(m119_ca,m119_ca,m119_m1);
		X_MASS(502);
	};
	class M119_laser_out: CA_Magazine
	{
		scope = 2;
		displayName = "M119 Laser Guided Shell";
		X_IPM(m119_ca,m119_ca,m119_m1);
		X_MASS(502);
	};
	class M119_smoke_out: CA_Magazine
	{
		scope = 2;
		displayName = "M119 Smoke Shell";
		X_IPM(m119_ca,m119_ca,m119_m1);
		X_MASS(502);
	};
	class M119_illum_out: CA_Magazine
	{
		scope = 2;
		displayName = "M119 Illumination Shell";
		X_IPM(m119_ca,m119_ca,m119_m1);
		X_MASS(502);
	};
	class metis_9m131 : CA_LauncherMagazine {
		scope = 2;
		count = 1;
		displayName = "$STR_HMG_Static_Missile_9K115";
		displayNameShort = "9М131";
		X_MODEL(metis_tpk);
		picture = "\metis\data\pic\9m115_ca";
		ammo = "metis_9M115_PTUR";
		type = 6 * 		256;
		initSpeed = 40;
		maxLeadSpeed = 830;
		descriptionShort = "Выстрел 9М131 тандемный";
		X_MASS(306);
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
		X_IPM(m_ags30_ca,m_ags30_ca,ace_ags30_mag);
		displayName = "AGS-30 29rnd";
		ammo=RDS_G_30mm_HE;
		X_MASS(20);
	};
	class Mk19_cass_out: CA_Magazine
	{
		scope = 2;
		X_IPM(m_mk19_ca,m_mk19_ca,mk19_box);
		displayName = "Mk-19 48rnd";
		ammo=RDS_G_30mm_HE;
		X_MASS(20);
	};
	class M2_cass_out: CA_Magazine
	{
		scope = 2;
		X_IPM(m_m2_ca,m_m2_ca,m2_box);
		displayName = "M2 100rnd";
		ammo=RDS_G_30mm_HE;
		X_MASS(20);
	};

	class RDS_KORD_out: CA_Magazine
	{
		scope = 2;
		X_IPM(dshkm_co,dshkm_mg_ca,ace_kord_mag);
		displayName = "Magazine B-30";
		X_MASS(20);
	};
	class PG9_out: CA_Magazine
	{
		scope = 2;
		X_IPM(spg9_ca,spg9_ca,pg9);
		displayName = "SPG PG9";
		X_MASS(20);
	};
	class OG9_out: CA_Magazine
	{
		scope = 2;
		X_IPM(spg9_ca,spg9_ca,og9);
		displayName = "SPG OG9";
		X_MASS(20);
	};

	class HMG_Mine_82_out: CA_Magazine
	{
		scope = 2;
		X_IPM(podnos_2b14_ca,podnos_2b14_ca,mort82mm_shell);
		displayName = "2b14 HE";
		X_MASS(100);
	};
	class HMG_Mine_81_out: CA_Magazine
	{
		scope = 2;
		X_IPM(mortar_m251_ca,mortar_m251_ca,mort82mm_shell);
		displayName = "M252 HE";
		X_MASS(100);
	};
	class Igla_out: CA_Magazine
	{
		scope = 2;
		X_IPM(tow_static_ca,tow_static_ca,tow);
		displayName = "Igla AA Rocket";
		X_MASS(100);
	};
};