class CfgPatches
{
	class Su22Tweaks
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
			landedtouchdown = "_this execVM ""\x\a3ru\addons\su22tweaks\scripts\BrakeChute.sqf""";
		};
		driverOpticsModel = "";
	};
};