class B_mas_HMMWV_Base: Car_F {
	X_TURRET(A3RU_weap_M2);
};

class B_mas_HMMWV_M2: B_mas_HMMWV_Base {
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

class B_mas_HMMWV_M134: B_mas_HMMWV_Base { scope = 0; };
class B_mas_HMMWV_SOV: B_mas_HMMWV_Base {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			weapons[] = {"RHS_MK19"}; // RHS_48Rnd_40mm_MK19
			magazines[] = {};
		};
		class SideTurret: MainTurret {
			weapons[] = {"A3RU_weap_M240_veh"};
			magazines[] = {}; // rhs_mag_762x51_M240, rhs_mag_762x51_M240_200
		};
	};
	class AnimationSources: AnimationSources {
		class ReloadAnim {
			weapon = "A3RU_weap_M240_veh";
		};
		class ReloadMagazine {
			weapon = "A3RU_weap_M240_veh";
		};
		class Revolving {
			weapon = "A3RU_weap_M240_veh";
		};
	};
};
class B_mas_HMMWV_SOV_M134: B_mas_HMMWV_SOV { scope = 0; };

class B_mas_HMMWV_TOW: B_mas_HMMWV_Base {
	X_TURRET(a3ru_weap_TOW_launcher); // rhs_mag_1Rnd_TOW
	class AnimationSources: AnimationSources {
		class Missiles_revolving {
			weapon = "a3ru_weap_TOW_launcher";
		};
	};
};

class B_mas_HMMWV_MK19: B_mas_HMMWV_Base {
	X_TURRET(RHS_MK19); // RHS_48Rnd_40mm_MK19
	class AnimationSources: AnimationSources {
		class belt_rotation {
			weapon = "RHS_MK19";
		};
	};
};

class B_mas_HMMWV_SOV_M134_des: B_mas_HMMWV_SOV_M134 { scope = 0; };