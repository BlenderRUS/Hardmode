class B_mas_cars_LR_BASE: Car_F {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			weapons[] = {"A3RU_weap_M2"};
			magazines[] = {};
		};
	};
};

class B_mas_cars_LR_M2: B_mas_cars_LR_BASE {
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

class B_mas_cars_LR_Mk19: B_mas_cars_LR_M2 {
	X_TURRET(RHS_MK19);
	class AnimationSources: AnimationSources {
		class ReloadAnim {
			weapon = "RHS_MK19";
		};
		class ReloadMagazine {
			weapon = "RHS_MK19";
		};
		class Revolving {
			weapon = "RHS_MK19";
		};
	};
};

class B_mas_cars_LR_TOW: B_mas_cars_LR_M2 {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			weapons[] = {"a3ru_weap_TOW_launcher"};
			magazines[] = {};
		};
	};
};

class B_mas_cars_LR_SPG9: B_mas_cars_LR_TOW {
	X_TURRETMAG;
};