class CfgMagazines {
	class CA_LauncherMagazine;
	class RDS_PG9_AT: CA_LauncherMagazine
	{
		model = "\x\a3ru\addons\a3ru_main\RDSPatch\spg9\pg9";
	};
	class RDS_OG9_HE: CA_LauncherMagazine
	{
		model = "\x\a3ru\addons\a3ru_main\RDSPatch\spg9\og9";
	};
	class rhs_mag_2Rnd_TOW;
	class rhs_mag_1Rnd_TOW: rhs_mag_2Rnd_TOW {
		count = 1;
	};
	class RDS_30Rnd_122mmHE_D30;
	class RDS_1Rnd_122mmHE_D30: RDS_30Rnd_122mmHE_D30
	{
		count = 1;
	};
	class RDS_30Rnd_122mmAT_D30;
	class RDS_1Rnd_122mmAT_D30: RDS_30Rnd_122mmAT_D30
	{
		count = 1;
	};
	// M119
	class RDS_30Rnd_105mmHE_M119;
	class RDS_1Rnd_105mmHE_M119: RDS_30Rnd_105mmHE_M119 { count = 1; };
	class RDS_30Rnd_105mmWP_M119;
	class RDS_1Rnd_105mmWP_M119: RDS_30Rnd_105mmWP_M119 { count = 1; };
	class RDS_30Rnd_105mmLASER_M119;
	class RDS_1Rnd_105mmLASER_M119: RDS_30Rnd_105mmLASER_M119 { count = 1; };
	class RDS_30Rnd_105mmSMOKE_M119;
	class RDS_1Rnd_105mmSMOKE_M119: RDS_30Rnd_105mmSMOKE_M119 { count = 1; };
	class RDS_30Rnd_105mmILLUM_M119;
	class RDS_1Rnd_105mmILLUM_M119: RDS_30Rnd_105mmILLUM_M119 { count = 1; };
	#include "CfgMagazines_AGM.hpp"
};