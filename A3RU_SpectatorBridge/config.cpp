class CfgPatches
{
	class A3RU_SpectatorBridge
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "A3_UI_F", "A3_Functions_F", "HIA3_Spectator", "CSSA3" };
		version = "1.1";
		versionStr = "1.1";
		versionAr[] = { 1, 1 };
	};
};

class CfgFunctions {
	class A3RU_SpectatorBridge {
		class Spectator {
			file = "\A3RU_SpectatorBridge\Functions";
			class respawn {};
			class spectator {};
		};
	};
};

class CfgRespawnTemplates
{
	class Spectator
	{
		onPlayerKilled = "";
		onPlayerRespawn = "A3RU_SpectatorBridge_fnc_spectator";
	};
	class Seagull
	{
		onPlayerRespawn = "A3RU_SpectatorBridge_fnc_respawn";
	};
};