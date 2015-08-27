class CfgPatches
{
	class A3RU_MISC
	{
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"RHS_US_A2_AirImport", // For C130j disable
			"A3_Weapons_F", "Blastcore_SmokeCS" // Smoke improvements
		};
		author[] = {"Blender"};
		authorUrl = "http://www.arma3.ru";
		version = "0.1";
		versionAr[] = {0, 1};
		versionStr = "0.1";
	};
};

class Extended_InitPost_EventHandlers {
	class LandVehicle {
		A3RU_VehInit = "_this call compile preprocessFileLineNumbers '\x\a3ru\addons\a3ru_main\Misc\Scripts\veh_clear.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class A3RU_AddonsCheck {
		serverInit = "HMG_Check_Post_Init_Var = [] execVM '\x\a3ru\addons\a3ru_main\Misc\Scripts\check_server.sqf'";
		clientInit = "HMG_check_cli_Post_Init_Var = [] execVM '\x\a3ru\addons\a3ru_main\Misc\Scripts\check_client.sqf'";
	};
};

class CfgFunctions {
	class A3RU_Misc {
		class Functions {
			file = "\x\a3ru\addons\a3ru_main\Misc\Functions";
			class ProgressBar;
		};
	};
};

class CfgVehicles {
	class LandVehicle;
    class Car: LandVehicle {
		class ACE_Cargo {
			class Cargo {
				class A3RU_item_JerryCan {
					type = "A3RU_item_JerryCan";
					amount = 1;
				};
			};
		};
    };
	class Tank: LandVehicle {
        class ACE_Cargo {
			class Cargo {
				class ACE_Track {
					type = "ACE_Track";
					amount = 1;
				};
			};
		};
    };
	#include "veh_disabled.hpp"
};

#include "CfgAmmo.hpp"