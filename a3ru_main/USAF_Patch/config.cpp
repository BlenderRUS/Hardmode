class CfgPatches
{
	class A3RU_USAF_Patch
	{
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[] = { USAF_C17, USAF_C130J, rhsusf_c_troops };
		author[] = {"Blender"};
		authorUrl = "http://www.arma3.ru";
		version = "0.3";
		versionAr[] = {0, 3};
		versionStr = "0.3";
	};
};

class CfgFactionClasses {
	class USAF {
		displayName = "USAF";
		priority = 100;
		side = 1;
        icon = "\x\a3ru\addons\a3ru_main\USAF_Patch\Icon.paa";
     };
};

class CfgFunctions
{
	class Lala_C17
	{
		class Cargo_C17
		{
			file = "\x\a3ru\addons\a3ru_main\USAF_Patch\C17\Functions\Cargo";
			class getHeight {};
		};
	};
	class USAF_C130
	{
		class Cargo_C130
		{
			file = "\x\a3ru\addons\a3ru_main\USAF_Patch\C130\Functions\Cargo";
		};
	};
};

class CfgVehicles {
	class Plane;
	class USAF_C17: Plane
	{
		class MFD
		{
			class HUD
			{
				class Draw
				{
					class RadarTargets
					{
						points[] = {};
					};
				};
			};
		};
		crew = "rhsusf_airforce_pilot";
		attendant = 0;
		transportFuel = 0;
		radarType = 0;
		armor = 60;
		class EventHandlers
		{
			init = "[(_this select 0)] spawn Lala_C17_fnc_addActions;";
			Gear = "";
		};
		class UserActions
		{
			class OpenRear
			{
				displayName = "<t color='#0088ff'>Open Rear Cargo</t";
				onlyforplayer = 1;
				position = "pos nose open";
				radius = 100;
				showWindow = 0;
				condition = "this animationPhase ""back_ramp_switch"" == 0 and (getpos this select 2) < 100 and this animationPhase ""back_ramp_half_switch"" == 0 && (player == driver this)";
				statement = "this animate [""back_ramp_switch"",1]; [this] execVM ""\USAF_C17\scripts\back_rampdown.sqf""";
			};
			class CloseRear
			{
				onlyforplayer = 1;
				displayName = "<t color='#0088ff'>Close Rear Cargo</t";
				position = "pos nose open";
				radius = 100;
				showWindow = 0;
				condition = "this animationPhase ""back_ramp_switch"" == 1 and this animationPhase ""back_ramp_half_switch"" == 0 && (player == driver this)";
				statement = "this animate [""back_ramp_switch"",0]; [this] execVM ""\USAF_C17\scripts\back_rampclose.sqf""";
			};
			class OpenRearHalf
			{
				displayName = "<t color='#0088ff'>Open Rear Cargo Half</t";
				onlyforplayer = 1;
				position = "pos nose open";
				radius = 100;
				showWindow = 0;
				condition = "this animationPhase ""back_ramp_half_switch"" == 0 and this animationPhase ""back_ramp_switch"" == 0 && (player == driver this)";
				statement = "this animate [""back_ramp_half_switch"",1]; [this] execVM ""\USAF_C17\scripts\back_rampdown_half.sqf""";
			};
			class MoveInside
			{
				displayName = "Move inside";
				position = "pos nose open";
				onlyforplayer = 1;
				radius = 0;
				condition = "false";
				statement = "false";
			};
		};
	};
	class USAF_C130J_Base: Plane
	{
		armor = 60;
		radarType = 0;
	};
	class USAF_C130J: USAF_C130J_Base
	{
		class EventHandlers
		{
			init = "[(_this select 0)] spawn USAF_C130_fnc_boxCargo_init";
		};
		crew = "rhsusf_airforce_pilot";
		class UserActions
		{
			class OpenRamp
			{
				displayName = "Open Cargo Ramp";
				position = "pilotcontrol";
				onlyforplayer = 1;
				radius = 5;
				showwindow = 0;
				condition = "(this animationPhase ""ramp_bottom"" == 0) AND Alive(this)";
				statement = "this animate [""ramp_bottom"",1];this animate [""ramp_top"",1];";
			};
			class MoveInside
			{
				displayName = "Move inside";
				position = "pos nose open";
				onlyforplayer = 1;
				radius = 0;
				condition = "false";
				statement = "false";
			};
		};
	};
};