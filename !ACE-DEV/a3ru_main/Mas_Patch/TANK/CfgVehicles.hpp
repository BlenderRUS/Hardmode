class I_mas_T72_base: Tank_F { X_SCOPE(0) };
class I_mas_T72_AAF_base: I_mas_T72_base {};
class I_mas_T72_AAF_01: I_mas_T72_AAF_base { X_SCOPE(0) };
class O_mas_T72_OPF_01: I_mas_T72_AAF_01 { X_SCOPE(0) };
class I_mas_T72B_Early_AAF_01: I_mas_T72_AAF_01 {};
class O_mas_T72B_Early_OPF_01: I_mas_T72B_Early_AAF_01 { X_SCOPE(0) };
class I_mas_T72B_AAF_01: I_mas_T72B_Early_AAF_01 {};
class O_mas_T72B_OPF_01: I_mas_T72B_AAF_01 { X_SCOPE(0) };
class I_mas_T72BM_AAF_01: I_mas_T72B_AAF_01 {};
class O_mas_T72BM_OPF_01: I_mas_T72BM_AAF_01 { X_SCOPE(0) };
class I_mas_ZSU_Base: I_mas_T72_base {};
class I_mas_ZSU_AAF_base: I_mas_ZSU_Base {};
class I_mas_ZSU_AAF_01: I_mas_ZSU_AAF_base { X_SCOPE(0) };
class O_mas_ZSU_OPF_01: I_mas_ZSU_AAF_01 { X_SCOPE(0) };