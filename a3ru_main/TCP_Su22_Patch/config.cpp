class CfgPatches
{
	class a3ru_TCP_Su22_Patch
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"TCP_Su22"};
		version = "0.2";
		versionStr = "0.2";
		versionAr[] = {0, 2};
		author[] = {"Blender", "lolkij"};
		authorUrl = "http://www.arma3.ru";
	};
};

class CfgVehicles
{
	class O_Plane_CAS_02_F;
	class TCP_Su22: O_Plane_CAS_02_F
	{
		class EventHandlers {
			landedtouchdown = "_this execVM ""\x\a3ru\addons\a3ru_main\TCP_Su22_Patch\scripts\BrakeChute.sqf""";
		};
		driverOpticsModel = "";
	};
};