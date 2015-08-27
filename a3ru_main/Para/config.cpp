class CfgPatches
{
	class A3RU_PARA
	{
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {"ACE_Common", "ACE_Interaction"};
		author[] = {"Blender"};
		authorUrl = "http://www.arma3.ru";
		version = "0.1";
		versionAr[] = {0, 1};
		versionStr = "0.1";
	};
};

class CfgFunctions {
	class A3RU_Para {
		class Functions {
			file = "\x\a3ru\addons\a3ru_main\Para\Functions";
			class OpenChute;
			class Ready;
		};
	};
};

class Extended_PostInit_EventHandlers
{
	class A3RU_PARA
	{
		clientInit = "[] execVM '\x\a3ru\addons\a3ru_main\para\init.sqf'";
	};
};

class CfgVehicles {
	class Bag_Base;
	class A3RU_Backpack_ParachuteReady: Bag_Base
	{
		mapSize = 0.55;
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_Parachute";
		scope = 2;
		displayName = "$STR_a3ru_para_chute";
		picture = "\A3\Characters_F\data\ui\icon_b_parachute_ca.paa";
		model = "\A3\Weapons_F\Ammoboxes\Bags\Backpack_Parachute";
		maximumLoad = 0;
		mass = 120;
	};
	class Man;
	class CAManBase : Man {
		class ACE_SelfActions {
			class ACE_Equipment {
				class ACE_Para {
					displayName = $STR_a3ru_para_ready;
					condition = "(backpack _player) isKindOf 'B_Parachute' && !(_player getVariable ['a3ru_para_var_isReady', false])";
					statement = "[15, _this, {(_this select 0) call A3RU_Para_fnc_ready}, { hint parseText format[""<t color='#ffff00'>%1</t><br/>%2"", localize 'STR_A3RU_Para_Title', localize 'str_a3ru_para_cancelled'] }, localize 'str_a3ru_para_process'] spawn ACE_Common_fnc_progressBar;";
					icon = "\x\a3ru\addons\a3ru_main\Para\Data\para_m.paa";
					showDisabled = 0;
					enableInside = 1;
					priority = 1;
				};
			};
		};
	};
};