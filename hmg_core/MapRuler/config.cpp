class CfgPatches
{
	class MapRuler
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.00;
		requiredAddons[] = {"a3_ui_f", "WMT_Main"};
		author[] = {"Ezhuk"};
		version = 0.1.0;
		versionStr = "0.1.0";
		versionAr[] = {0,1,0};
	};
};

class Extended_PreInit_EventHandlers {
	class MapRuler {
		init = "call compile preprocessFileLineNumbers '\MapRuler\functions\fn_precompile.sqf'";
	};
};