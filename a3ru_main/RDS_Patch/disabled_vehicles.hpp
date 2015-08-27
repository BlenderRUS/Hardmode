#define X_NOSCOPE scope = 0; \
scopeCurator = 0;

// APC
class RDS_BMP1_AAF_base;
class RDS_BMP1P_AAF_base;
class RDS_BMP2_AAF_base;
class RDS_BMP2_HQ_AAF_base;
class RDS_BMP2_Ambul_AAF_base;
class RDS_BMP1_AAF_01: RDS_BMP1_AAF_base { X_NOSCOPE };
class RDS_BMP1P_AAF_01: RDS_BMP1P_AAF_base { X_NOSCOPE };
class RDS_BMP2_AAF_01: RDS_BMP2_AAF_base { X_NOSCOPE };
class RDS_BMP2_HQ_AAF_01: RDS_BMP2_HQ_AAF_base { X_NOSCOPE };
class RDS_BMP2_Ambul_01: RDS_BMP2_Ambul_AAF_base { X_NOSCOPE };

// TANK
class RDS_T72_AAF_base;
class RDS_ZSU_AAF_base;
class RDS_T55_AAF_base;
class RDS_T34_AAF_base;
class RDS_T72_AAF_01: RDS_T72_AAF_base { X_NOSCOPE };
class RDS_ZSU_AAF_01: RDS_ZSU_AAF_base { X_NOSCOPE };
//class RDS_T55_AAF_01: RDS_T55_AAF_base { X_NOSCOPE };
//class RDS_T34_AAF_01: RDS_T34_AAF_base { X_NOSCOPE };