#include <macros.h>
class rhs_mag_2Rnd_TOW;
class rhs_mag_1Rnd_TOW: rhs_mag_2Rnd_TOW {
	X_IPM(tow,tow2a);
	X_MC(19,1);
};

class Rhs_mag_4Rnd_stinger;
class Rhs_mag_1Rnd_stinger: Rhs_mag_4Rnd_stinger {
	X_IPM(M119,m1);
	X_MC(18,1);
};

class mas_PG9_AT: CA_LauncherMagazine {
	X_IPM(pg9,pg9);
	X_MC(20,1);
};

class mas_OG9_HE: CA_LauncherMagazine {
	X_IPM(og9,pg9);
	X_MC(20,1);
};

class mas_30Rnd_122mmHE_D30;
class mas_1Rnd_122mmHE_D30: mas_30Rnd_122mmHE_D30
{
	X_NAME("3VOF81 HE","3VOF81");
	X_IPM(D30,3vof81);
	X_MC(22,1);
};
class mas_30Rnd_122mmAT_D30;
class mas_1Rnd_122mmAT_D30: mas_30Rnd_122mmAT_D30
{
	X_NAME("3VBK9 HEAT","3VBK9");
	X_IPM(D30,3vbk9);
	X_MC(26,1);
};

// M119
class mas_30Rnd_105mmHE_M119;
class mas_30Rnd_105mmWP_M119;
class mas_30Rnd_105mmLASER_M119;
class mas_30Rnd_105mmSMOKE_M119;
class mas_30Rnd_105mmILLUM_M119;
class mas_1Rnd_105mmHE_M119: mas_30Rnd_105mmHE_M119 {
	X_NAME("M1 High Explosive Cartridge (M119)","M1 HE");
	X_IPM(M119,m1);
	X_MC(18,1);
};
class mas_1Rnd_105mmWP_M119: mas_30Rnd_105mmWP_M119 {
	X_NAME("WP Cartridge (M119)","WP");
	X_IPM(M119,wp);
	X_MC(19,1);
};
class mas_1Rnd_105mmLASER_M119: mas_30Rnd_105mmLASER_M119 {
	X_NAME("Laser Cartridge (M119)","Laser");
	X_IPM(M119,laser);
	X_MC(18,1);
};
class mas_1Rnd_105mmSMOKE_M119: mas_30Rnd_105mmSMOKE_M119 {
	X_NAME("Smoke Cartridge (M119)","Smoke");
	X_IPM(M119,smoke);
	X_MC(19,1);
};
class mas_1Rnd_105mmILLUM_M119: mas_30Rnd_105mmILLUM_M119 {
	X_NAME("M314A3 Illuminating (M119)","M314A3");
	X_IPM(M119,m314a3);
	X_MC(19,1);
};

class mas_29Rnd_30mm_AGS30: VehicleMagazine {
	X_NAME("29rnd cartridge (AGS30)","AGS30");
	X_IPM(AGS30,ags30);
	X_MASS(14);
};

class metis_9m131 : CA_LauncherMagazine {
	X_MODEL(metis);
	X_MC(34,1);
};

class 12Rnd_230mm_rockets;

class A3RU_mag_1Rnd_230mm_Rocket: 12Rnd_230mm_rockets {
	displayName = "BM-24 Rocket 230mm rocket";
	displayNameShort = "BM-24 230mm\nUsed in: MLRS";
	X_IPM(M119,m1);
	X_MC(19,1);
};

/* class RDS_1Rnd_AT13: VehicleMagazine {
	X_IPM(AGS30,ags30)
	X_MC(14,29)
}; */