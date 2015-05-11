class CfgPatches
{
	class A3RU_JbadToAIA_houses
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAStructures_E_HouseA_A_BuildingWIP", "afghan_houses"};
	};
};
/*
	Land_House_K_2_EP1 - Land_jbad_House2_basehide
	Land_House_K_1_EP1 - Land_jbad_House_1
	Land_House_K_3_EP1 - Land_jbad_House_3
	Land_House_K_5_EP1 - Land_jbad_House_5
	Land_House_K_6_EP1 - Land_jbad_House_6
	Land_House_K_7_EP1 - Land_jbad_House_7
	Land_House_K_8_EP1 - Land_jbad_House_8
	Land_Terrace_K_1_EP1 - Land_jbad_terrace
*/

class CfgVehicles
{
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class Ruins_F;
	class Jbad_House: House_F
	{
		scope = 1;
		scopeCurator = 1;
		armor = 1500;
		mapbuilder_filter = "Jbad Structures";
		vehicleClass = "jbad_afghan_houses";
		mapSize = 16.5;
		cost = 40000;
	};
	#include "Land_House_K_2_EP1.hpp"
	#include "Land_House_K_1_EP1.hpp"
	#include "Land_House_K_3_EP1.hpp"
	#include "Land_House_K_5_EP1.hpp"
	#include "Land_House_K_6_EP1.hpp"
	#include "Land_House_K_7_EP1.hpp"
	#include "Land_House_K_8_EP1.hpp"
	#include "Land_Terrace_K_1_EP1.hpp"
};