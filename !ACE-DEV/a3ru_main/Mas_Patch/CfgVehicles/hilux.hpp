// HILUX
class B_mas_cars_Hilux_Base: Car_F {
	X_TURRET(rhs_weap_dshkm);
};

class B_mas_cars_Hilux_MG: B_mas_cars_Hilux_Base {
	X_TURRET(rhs_weap_dshkm);
	class AnimationSources: AnimationSources {
		class ReloadAnim {
			weapon = "rhs_weap_dshkm";
		};
		class ReloadMagazine {
			weapon = "rhs_weap_dshkm";
		};
		class Revolving {
			weapon = "rhs_weap_dshkm";
		};
	};
};

class B_mas_cars_Hilux_M2: B_mas_cars_Hilux_MG {
	X_TURRET(A3RU_weap_M2);
	class AnimationSources: AnimationSources {
		class ReloadAnim {
			weapon = "A3RU_weap_M2";
		};
		class ReloadMagazine {
			weapon = "A3RU_weap_M2";
		};
		class Revolving {
			weapon = "A3RU_weap_M2";
		};
	};
};

class B_mas_cars_Hilux_AGS30: B_mas_cars_Hilux_Base {
	X_TURRETMAG;
};

class B_mas_cars_Hilux_SPG9: B_mas_cars_Hilux_Base {
	X_TURRETMAG;
};

class B_mas_cars_Hilux_RKTS: B_mas_cars_Hilux_SPG9 {
	X_TURRET(A3RU_weap_RKTS);
};