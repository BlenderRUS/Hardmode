#define X_RELOAD(VAR1)	magazineReloadTime = VAR1; \
	autoReload = true; \
	backgroundReload = true

class RHS_weap_AZP23: CannonCore {
	X_RELOAD(0);
};

class rhs_weap_nsvt: DSHKM {
	X_RELOAD(0);
};

class rhs_weap_dshkm: DSHKM {
	X_RELOAD(0);
};

class A3RU_weap_M2: RHS_M2 {
	X_RELOAD(0);
};

class RHS_MK19: GMG_20mm {
	X_RELOAD(0);
};

class A3RU_weap_NSVT: rhs_weap_nsvt_effects {
	X_RELOAD(0);
};