// FOR FURTHER RHS COMPATIBILITY
/*
class RHS_MK19;
class RHS_MK19_HMG: RHS_MK19  {
	magazineReloadTime = 0;
};
class RHS_M2;
class RHS_M2_HMG: RHS_M2  {
	magazineReloadTime = 0;
};
*/

class B_mas_cars_LR_BASE :Car_F {
	class AGM_Actions;
};

class B_mas_cars_LR_M2 : B_mas_cars_LR_BASE {
	class AGM_Actions : AGM_Actions {
		class HMG_LoadAmmo1 {
			displayName = "$STR_HMG_Static_LoadM2";
			condition = "[_this select 0, 'M2_cass_out', 1] call HMG_Static_fnc_CheckConditionsGunner";
			statement = "[_this select 0, 'M2_cass_out', 'rhs_mag_100rnd_127x99_mag_Tracer_Red', 10, 'STR_HMG_Static_LoadingM2'] call HMG_Static_fnc_LoadVehicle";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
	};
};

class B_mas_cars_LR_Mk19 : B_mas_cars_LR_M2 {
	class AGM_Actions : AGM_Actions {
		class HMG_LoadAmmo1 {
			displayName = "$STR_HMG_Static_LoadMk19";
			condition = "[_this select 0, 'Mk19_cass_out', 1] call HMG_Static_fnc_CheckConditionsGunner";
			statement = "[_this select 0, 'Mk19_cass_out', 'RHS_48Rnd_40mm_MK19', 15, 'STR_HMG_Static_LoadingMk19'] call HMG_Static_fnc_LoadVehicle";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
	};
};

class B_mas_cars_LR_TOW : B_mas_cars_LR_M2 {
	class AGM_Actions : AGM_Actions {
		class HMG_LoadAmmo1 {
			displayName = "$STR_HMG_Static_LoadTOW";
			condition = "[_this select 0, 'TOW_out', 1] call HMG_Static_fnc_CheckConditionsGunner";
			statement = "[_this select 0, 'TOW_out', 'rhs_mag_1Rnd_TOW', 20, 'STR_HMG_Static_LoadingTOW'] call HMG_Static_fnc_LoadVehicle";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
	};
};

class B_mas_cars_LR_SPG9 : B_mas_cars_LR_TOW {
	class AGM_Actions : AGM_Actions {
		class HMG_LoadAmmo1 {
			displayName = "$STR_HMG_Static_LoadPG9";
			condition = "[_this select 0, 'PG9_out', 1] call HMG_Static_fnc_CheckConditionsGunner";
			statement = "[_this select 0, 'PG9_out', 'RDS_PG9_AT', 10, 'STR_HMG_Static_LoadingPG9'] call HMG_Static_fnc_LoadVehicle";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
		class HMG_LoadAmmo2 {
			displayName = "$STR_HMG_Static_LoadOG9";
			condition = "[_this select 0, 'OG9_out', 1] call HMG_Static_fnc_CheckConditionsGunner";
			statement = "[_this select 0, 'OG9_out', 'RDS_OG9_HE', 10, 'STR_HMG_Static_LoadingOG9'] call HMG_Static_fnc_LoadVehicle";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
	};
};

class I_mas_cars_LR_soft_M2 : B_mas_cars_LR_M2 {
	class AGM_Actions : AGM_Actions {
		class HMG_LoadAmmo1 {
			displayName = "$STR_HMG_Static_LoadM2";
			condition = "[_this select 0, 'M2_cass_out', 1] call HMG_Static_fnc_CheckConditionsGunner";
			statement = "[_this select 0, 'M2_cass_out', 'rhs_mag_100rnd_127x99_mag_Tracer_Red', 10, 'STR_HMG_Static_LoadingM2'] call HMG_Static_fnc_LoadVehicle";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
	};
};
class I_mas_cars_LR_soft_Mk19 : B_mas_cars_LR_Mk19 {
	class AGM_Actions : AGM_Actions {
		class HMG_LoadAmmo1 {
			displayName = "$STR_HMG_Static_LoadMk19";
			condition = "[_this select 0, 'Mk19_cass_out', 1] call HMG_Static_fnc_CheckConditionsGunner";
			statement = "[_this select 0, 'Mk19_cass_out', 'RHS_48Rnd_40mm_MK19', 15, 'STR_HMG_Static_LoadingMk19'] call HMG_Static_fnc_LoadVehicle";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
	};
};

class I_mas_cars_LR_soft_TOW : B_mas_cars_LR_TOW {
	class AGM_Actions : AGM_Actions {
		class HMG_LoadAmmo1 {
			displayName = "$STR_HMG_Static_LoadTOW";
			condition = "[_this select 0, 'TOW_out', 1] call HMG_Static_fnc_CheckConditionsGunner";
			statement = "[_this select 0, 'TOW_out', 'rhs_mag_1Rnd_TOW', 20, 'STR_HMG_Static_LoadingTOW'] call HMG_Static_fnc_LoadVehicle";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
	};
};
class I_mas_cars_LR_soft_SPG9 : B_mas_cars_LR_SPG9 {
	class AGM_Actions : AGM_Actions {
		class HMG_LoadAmmo1 {
			displayName = "$STR_HMG_Static_LoadPG9";
			condition = "[_this select 0, 'PG9_out', 1] call HMG_Static_fnc_CheckConditionsGunner";
			statement = "[_this select 0, 'PG9_out', 'RDS_PG9_AT', 10, 'STR_HMG_Static_LoadingPG9'] call HMG_Static_fnc_LoadVehicle";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
		class HMG_LoadAmmo2 {
			displayName = "$STR_HMG_Static_LoadOG9";
			condition = "[_this select 0, 'OG9_out', 1] call HMG_Static_fnc_CheckConditionsGunner";
			statement = "[_this select 0, 'OG9_out', 'RDS_OG9_HE', 10, 'STR_HMG_Static_LoadingOG9'] call HMG_Static_fnc_LoadVehicle";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
	};
};

class B_mas_cars_Hilux_Base :Car_F {
	class AGM_Actions;
};

class B_mas_cars_Hilux_MG : B_mas_cars_Hilux_Base {
	class AGM_Actions : AGM_Actions {
		class HMG_LoadAmmo1 {
			displayName = "$STR_HMG_Static_Load50x127";
			condition = "[_this select 0, 'RDS_KORD_out', 1] call HMG_Static_fnc_CheckConditionsGunner";
			statement = "[_this select 0, 'RDS_KORD_out', 'rhs_mag_127x108mm_50', 10, 'STR_HMG_Static_LoadingKORD'] call HMG_Static_fnc_LoadVehicle";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
	};
};
class B_mas_cars_Hilux_M2 : B_mas_cars_Hilux_MG {
	class AGM_Actions : AGM_Actions {
		class HMG_LoadAmmo1 {
			displayName = "$STR_HMG_Static_LoadM2";
			condition = "[_this select 0, 'M2_cass_out', 1] call HMG_Static_fnc_CheckConditionsGunner";
			statement = "[_this select 0, 'M2_cass_out', 'rhs_mag_100rnd_127x99_mag_Tracer_Red', 10, 'STR_HMG_Static_LoadingM2'] call HMG_Static_fnc_LoadVehicle";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
	};
};
class B_mas_cars_Hilux_AGS30 : B_mas_cars_Hilux_Base {
	class AGM_Actions : AGM_Actions {
		class HMG_LoadAmmo1 {
			displayName = "$STR_HMG_Static_Load";
			condition = "[_this select 0, 'RDS_29Rnd_30mm_AGS30_out', 1, 'RDS_AGS30'] call HMG_Static_fnc_CheckConditionsGunner";
			statement = "[_this select 0, 'RDS_29Rnd_30mm_AGS30_out', 'RDS_29Rnd_30mm_AGS30', 15, 'STR_HMG_Static_LoadingAGS'] call HMG_Static_fnc_LoadVehicle";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
	};
};

class B_mas_cars_Hilux_SPG9 : B_mas_cars_Hilux_Base {
	class AGM_Actions : AGM_Actions {
		class HMG_LoadAmmo1 {
			displayName = "$STR_HMG_Static_LoadPG9";
			condition = "[_this select 0, 'PG9_out', 1] call HMG_Static_fnc_CheckConditionsGunner";
			statement = "[_this select 0, 'PG9_out', 'RDS_PG9_AT', 10, 'STR_HMG_Static_LoadingPG9'] call HMG_Static_fnc_LoadVehicle";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
		class HMG_LoadAmmo2 {
			displayName = "$STR_HMG_Static_LoadOG9";
			condition = "[_this select 0, 'OG9_out', 1] call HMG_Static_fnc_CheckConditionsGunner";
			statement = "[_this select 0, 'OG9_out', 'RDS_OG9_HE', 10, 'STR_HMG_Static_LoadingOG9'] call HMG_Static_fnc_LoadVehicle";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
	};
};
class Tank_F;
class APC_Tracked_02_base_F : Tank_F {
		class Turrets;
		class MainTurret;
		class AGM_Actions;
	};
	
class rhsusf_m113tank_base : APC_Tracked_02_base_F {
	class AGM_Actions : AGM_Actions {
		class HMG_LoadAmmo1 {
			displayName = "$STR_HMG_Static_Load";
			condition = "[_this select 0, 'M2_cass_out', 1] call HMG_Static_fnc_CheckConditionsCommander";
			statement = "[_this select 0, 'M2_cass_out', 'rhs_mag_100rnd_127x99_mag_Tracer_Red', 10, 'STR_HMG_Static_LoadingM2'] call HMG_Static_fnc_LoadVehicle";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
	};
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			weapons[]={RHS_M2_HMG};
			magazines[]={};
		};
	};

};
class rhsusf_m998_w_4dr_fulltop;
class rhsusf_m1025_w: rhsusf_m998_w_4dr_fulltop {
	class AGM_Actions; 
	class Turrets;
	class MainTurret;
	};
class rhsusf_m1025_w_m2: rhsusf_m1025_w {
	class AGM_Actions : AGM_Actions {
		class HMG_LoadAmmo1 {
			displayName = "$STR_HMG_Static_LoadM2";
			condition = "[_this select 0, 'M2_cass_out', 1] call HMG_Static_fnc_CheckConditionsGunner";
			statement = "[_this select 0, 'M2_cass_out', 'rhs_mag_100rnd_127x99_mag_Tracer_Red', 10, 'STR_HMG_Static_LoadingM2'] call HMG_Static_fnc_LoadVehicle";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
	};
	class Turrets: Turrets {
		class M2_Turret: MainTurret {
			weapons[] = {RHS_M2_HMG};
			magazines[]={};
		};
	};
};
class rhsusf_m1025_w_mk19: rhsusf_m1025_w_m2 {
	class AGM_Actions : AGM_Actions {
		class HMG_LoadAmmo1 {
			displayName = "$STR_HMG_Static_LoadMk19";
			condition = "[_this select 0, 'Mk19_cass_out', 1] call HMG_Static_fnc_CheckConditionsGunner";
			statement = "[_this select 0, 'Mk19_cass_out', 'RHS_48Rnd_40mm_MK19', 15, 'STR_HMG_Static_LoadingMk19'] call HMG_Static_fnc_LoadVehicle";
			showDisabled = 0;
			priority = 2.5;
			icon = "";  // @todo
			enableInside = 1;
		};
	};
	class Turrets: Turrets {
		class M2_Turret: M2_Turret {
			weapons[] = {RHS_MK19_HMG};
			magazines[]={};
		};
	};
};
