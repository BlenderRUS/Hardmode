class CfgPatches
{
	class A3RU_SpectatorBridge
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "A3_UI_F", "A3_Functions_F", "d_uac" };
		version = "1.0";
		versionStr = "1.0";
		versionAr[] = { 1, 0 };
	};
};

class CfgFunctions {
	class A3RU_SpectatorBridge {
		class Spectator {
			file = "\A3RU_SpectatorBridge\Functions";
			class init {};
		};
	};
};

class CfgRespawnTemplates
{
	class Spectator
	{
		onPlayerKilled = "";
		onPlayerRespawn = "A3RU_SpectatorBridge_fnc_init";
	};
	class Seagull
	{
		onPlayerRespawn = "A3RU_SpectatorBridge_fnc_init";
	};
};