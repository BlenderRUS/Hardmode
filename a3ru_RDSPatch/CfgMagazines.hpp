class CfgMagazines {
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
	#include "CfgMagazines_AGM.hpp"
};