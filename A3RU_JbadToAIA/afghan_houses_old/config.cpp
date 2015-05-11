class CfgPatches
{
	class A3RU_JbadToAIA_houses_old
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAStructures_E_HouseL", "afghan_houses_old"};
		version = "0.5";
		versionStr = "0.5";
		versionAr[] = {0, 5};
		author[] = {"Blender"};
		authorUrl = "http://www.arma3.ru";
	};
};
/*
	Land_House_L_1_EP1 - Land_jbad_House_1_old
	Land_House_L_3_EP1 - Land_jbad_House_3_old
	Land_House_L_4_EP1 - Land_jbad_House_4_old
	Land_House_L_6_EP1 - Land_jbad_House_6_old
	Land_House_L_7_EP1 - Land_jbad_House_7_old
	Land_House_L_8_EP1 - Land_jbad_House_8_old
	Land_House_L_9_EP1 - Land_jbad_House_9_old
*/
class CfgVehicles
{
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class Ruins_F;
	class Jbad_House_old: House_F
	{
		scope = 1;
		scopeCurator = 1;
		armor = 2000;
		mapbuilder_filter = "Jbad Structures";
		vehicleClass = "jbad_afghan_houses";
		mapSize = 16.5;
		cost = 40000;
	};
	#include "Land_House_L_1_EP1.hpp"
	#include "Land_House_L_3_EP1.hpp"
	#include "Land_House_L_4_EP1.hpp"
	#include "Land_House_L_6_EP1.hpp"
	#include "Land_House_L_7_EP1.hpp"
	#include "Land_House_L_8_EP1.hpp"
	#include "Land_House_L_9_EP1.hpp"
};