class CfgPatches
{
	class A3RU_JbadToAIA_mil
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAStructures_E_Mil", "mil"};
		version = "0.5";
		versionStr = "0.5";
		versionAr[] = {0, 5};
		author[] = {"Blender"};
		authorUrl = "http://www.arma3.ru";
	};
};
/*
	Land_Mil_Barracks_EP1 - Land_Jbad_Mil_Barracks
	Land_Mil_ControlTower_EP1 - Land_Jbad_Mil_ControlTower
	Land_Mil_Guardhouse_EP1 - Land_Jbad_Mil_Guardhouse
	Land_Mil_House_EP1 - Land_Jbad_Mil_House
*/
class CfgVehicles
{
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	#include "Land_Mil_Barracks_EP1.hpp"
	#include "Land_Mil_ControlTower_EP1.hpp"
	#include "Land_Mil_Guardhouse_EP1.hpp"
	#include "Land_Mil_House_EP1.hpp"
};