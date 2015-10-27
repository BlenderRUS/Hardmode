class rhsusf_M1078A1P2_B_M2_wd_fmtv_usarmy: rhsusf_M1078A1P2_B_wd_fmtv_usarmy {
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
		class muzzle_rot_MG {
			weapon = "A3RU_weap_M2";
		};
	};
	class Turrets: Turrets {
		class M2_Turret: MainTurret {
			weapons[] = {"A3RU_weap_M2"};
			magazines[] = {};
		};
	};
};

class rhsusf_m1025_w_m2: rhsusf_m1025_w {
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
		class muzzle_rot_MG {
			weapon = "A3RU_weap_M2";
		};
	};
	class Turrets: Turrets {
		class M2_Turret: MainTurret {
			weapons[] = {"A3RU_weap_M2"};
			magazines[] = {};
		};
	};
};

class rhsusf_m1025_w_mk19: rhsusf_m1025_w_m2 {
	class Turrets: Turrets {
		class M2_Turret: M2_Turret {
			magazines[] = {};
		};
	};
};

class rhsusf_m113tank_base: APC_Tracked_02_base_F {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			weapons[] = {"A3RU_weap_M2","SmokeLauncher"};
			magazines[] = {"SmokeLauncherMag"};
		};
	};
};

class rhsusf_m113_usarmy_MK19: rhsusf_m113tank_base {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
};

class rhsusf_rg33_base: MRAP_01_base_F {};
class rhsusf_rg33_m2_d: rhsusf_rg33_base {
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
		class muzzle_rot_MG {
			weapon = "A3RU_weap_M2";
		};
	};
	class Turrets: Turrets {
		class M2_Turret: MainTurret {
			weapons[] = {"A3RU_weap_M2"};
			magazines[] = {};
		};
	};
};

class rhs_m2staticmg_base: StaticMGWeapon {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			weapons[] = {"A3RU_weap_M2"};
			magazines[] = {};
		};
	};
	class AnimationSources {
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

class rhs_nsv_tripod_base: StaticMGWeapon {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			weapons[] = {"A3RU_weap_NSVT"};
			magazines[] = {};
		};
	};
	class AnimationSources {
		class ReloadAnim {
			weapon = "A3RU_weap_NSVT";
		};
	};
};

class RHS_MK19_TriPod_base: StaticGrenadeLauncher {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
};