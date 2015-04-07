class Car_F;
class B_mas_cars_LR_BASE :Car_F {
	class AGM_Actions;
};
class B_mas_cars_LR_M2 : B_mas_cars_LR_BASE {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadMK2 {
				displayName = "Load M2 Cassete";
				condition = "(typeof cursortarget == 'B_mas_cars_LR_M2') && ('M2_cass_out' in Magazines Player) && ((count magazines cursorTarget)<1)";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadM2;";
				showDisabled = 0;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			};

};
class B_mas_cars_LR_Mk19 : B_mas_cars_LR_M2 {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadMK19 {
				displayName = "Load Mk19 Cassete";
				condition = "(typeof cursortarget == 'B_mas_cars_LR_Mk19') && ('Mk19_cass_out' in Magazines Player) && ((count magazines cursorTarget)<1)";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadMk19;";
				showDisabled = 0;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			};

};
class B_mas_cars_LR_TOW : B_mas_cars_LR_M2 {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadTOW {
				displayName = "Load TOW Missle";
				condition = "(typeof cursortarget == 'B_mas_cars_LR_TOW') && ('TOW_out' in Magazines Player) && ((count magazines cursorTarget)<1)";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadTOW;";
				showDisabled = 0;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			};
};
class B_mas_cars_LR_SPG9 : B_mas_cars_LR_TOW {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadAGSPG {
				displayName = "Зарядить гранату ПГ-9";
				condition = "(typeof cursortarget == 'B_mas_cars_LR_SPG9') && ('PG9_out' in Magazines Player) && ((count magazines cursorTarget)<1)";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadSPG_PG;";
				showDisabled = 0;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			class AGM_LoadAGSOG {
				displayName = "Зарядить гранату ОГ-9";
				condition = "(typeof cursortarget == 'B_mas_cars_LR_SPG9') && ('OG9_out' in Magazines Player) && ((count magazines cursorTarget)<1)";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadSPG_OG;";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};

			};
};


class I_mas_cars_LR_soft_M2 : B_mas_cars_LR_M2 {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadMK2 {
				displayName = "Load M2 Cassete";
				condition = "(typeof cursortarget == 'I_mas_cars_LR_soft_M2') && ('M2_cass_out' in Magazines Player) && ((count magazines cursorTarget)<1)";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadM2;";
				showDisabled = 0;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			};

};
class I_mas_cars_LR_soft_Mk19 : B_mas_cars_LR_Mk19 {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadMK19 {
				displayName = "Load Mk19 Cassete";
				condition = "(typeof cursortarget == 'I_mas_cars_LR_soft_Mk19') && ('Mk19_cass_out' in Magazines Player) && ((count magazines cursorTarget)<1)";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadMk19;";
				showDisabled = 0;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			};

};
class I_mas_cars_LR_soft_TOW : B_mas_cars_LR_TOW {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadTOW {
				displayName = "Load TOW Missle";
				condition = "(typeof cursortarget == 'I_mas_cars_LR_soft_TOW') && ('TOW_out' in Magazines Player) && ((count magazines cursorTarget)<1)";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadTOW;";
				showDisabled = 0;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			};
};
class I_mas_cars_LR_soft_SPG9 : B_mas_cars_LR_SPG9 {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadAGSPG {
				displayName = "Зарядить гранату ПГ-9";
				condition = "(typeof cursortarget == 'I_mas_cars_LR_soft_SPG9') && ('PG9_out' in Magazines Player) && ((count magazines cursorTarget)<1)";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadSPG_PG;";
				showDisabled = 0;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			class AGM_LoadAGSOG {
				displayName = "Зарядить гранату ОГ-9";
				condition = "(typeof cursortarget == 'B_mas_cars_LR_SPG9') && ('OG9_out' in Magazines Player) && ((count magazines cursorTarget)<1)";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadSPG_OG;";
				showDisabled = 1;
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
			class AGM_LoadStMag {
				displayName = "Зарядить короб 50 х 12.7";
				condition = "(typeof cursortarget == 'B_mas_cars_Hilux_MG') && ('RDS_KORD_out' in Magazines Player) && ((count magazines cursorTarget)<1)";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadKORD;";
				showDisabled = 0;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			};
};
class B_mas_cars_Hilux_M2 : B_mas_cars_Hilux_MG {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadMK2 {
				displayName = "Load M2 Cassete";
				condition = "(typeof cursortarget == 'B_mas_cars_Hilux_M2') && ('M2_cass_out' in Magazines Player) && ((count magazines cursorTarget)<1)";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadM2;";
				showDisabled = 0;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			};
};
class B_mas_cars_Hilux_AGS30 : B_mas_cars_Hilux_Base {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadStMag {
				displayName = "Зарядить";
				condition = "(typeof cursortarget == 'B_mas_cars_Hilux_AGS30') && ('RDS_29Rnd_30mm_AGS30_out' in Magazines Player) && ((cursorTarget ammo 'RDS_AGS30')<1)";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadAGS;";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			};
};
class B_mas_cars_Hilux_SPG9 : B_mas_cars_Hilux_Base {
		class AGM_Actions : AGM_Actions {
			class AGM_LoadAGSPG {
				displayName = "Зарядить гранату ПГ-9";
				condition = "(typeof cursortarget == 'B_mas_cars_Hilux_SPG9') && ('PG9_out' in Magazines Player) && ((count magazines cursorTarget)<1)";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadSPG_PG;";
				showDisabled = 0;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			class AGM_LoadAGSOG {
				displayName = "Зарядить гранату ОГ-9";
				condition = "(typeof cursortarget == 'B_mas_cars_Hilux_SPG9') && ('OG9_out' in Magazines Player) && ((count magazines cursorTarget)<1)";
				statement = "[_player] call HMG_Static_fnc_HMG_LoadSPG_OG;";
				showDisabled = 1;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};

			};
};