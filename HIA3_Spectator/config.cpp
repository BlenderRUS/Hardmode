#include "functions\defines.sqf"
#include "resource\RscHIA3Spectator.h"
#include "resource\RscHIA3SpectatorGUIext.h"
#include "resource\CfgFunctions.h"
#include "resource\CfgModuls.h"

class CfgPatches 
{
	class HIA3_Spectator 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Functions_F"};
		author[] = {"Ezhuk"};
		authorUrl = "http://www.hia3.com";
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = {1,0,0};	
	};
};

class CfgFactionClasses
{

	class HIA3
	{
		displayName = "HIA3";
		priority = 13;
		side = 7;
	};
};
