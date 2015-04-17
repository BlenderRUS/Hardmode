class CfgPatches {
	class HMG_check_cli {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.6;
		requiredAddons[] = {"AGM_Core"};
		version = "";
		versionStr = "0.600.0";
	};
};
class Extended_PostInit_EventHandlers {
	class HMG_check_cli {
		  clientInit = "HMG_check_cli_Post_Init_Var = [] execVM ""\HMG_check_cli\init.sqf""";
	};
};
