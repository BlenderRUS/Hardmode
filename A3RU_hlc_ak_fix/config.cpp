class CfgPatches
{
	class hlc_ak_fix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "hlcweapons_aks" };
		version = "0.1";
		versionStr = "0.1";
		versionAr[] = {0, 1};
		author[] = {"Blender"};
		authorUrl = "http://www.arma3.ru";
		description = "Fixes HLC AK's init.sqf expression error";
	};
};

class Extended_PostInit_EventHandlers
{
	class VOG25P
	{
		clientInit = "call compile preprocessFileLineNumbers 'x\a3ru\addons\hlc_ak_fix\Init.sqf'";
	};
};