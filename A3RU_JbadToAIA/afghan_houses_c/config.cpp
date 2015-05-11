class CfgPatches
{
	class A3RU_JbadToAIA_houses_c
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAStructures_E_HouseC", "afghan_houses_c"};
		version = "0.5";
		versionStr = "0.5";
		versionAr[] = {0, 5};
		author[] = {"Blender"};
		authorUrl = "http://www.arma3.ru";
	};
};
/*
	Land_House_C_1_EP1 - Land_jbad_House_c_1
	Land_House_C_1_v2_EP1 - Land_jbad_House_c_1_v2
	Land_House_C_2_EP1 - Land_jbad_house_c_2
	Land_House_C_3_EP1 - Land_jbad_house_c_3
	Land_House_C_4_EP1 - Land_jbad_house_c_4
	Land_House_C_5_EP1 - Land_jbad_house_c_5
	Land_House_C_5_V1_EP1 - Land_jbad_house_c_5_v1
	Land_House_C_5_V2_EP1 - Land_jbad_House_c_5_v2
	Land_House_C_5_V3_EP1 - Land_jbad_House_c_5_v3
	Land_House_C_9_EP1 - Land_jbad_house_c_9
	Land_House_C_10_EP1 - Land_jbad_house_c_10
	Land_House_C_11_EP1 - Land_jbad_house_c_11
	Land_House_C_12_EP1 - Land_Jbad_house_c_12

*/
class CfgVehicles
{
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class Ruins_F;
	class Jbad_House_c: House_F
	{
		scope = 1;
		scopeCurator = 1;
		armor = "2500mapbuilder_filter = ""Jbad Structures""";
		vehicleClass = "jbad_afghan_houses";
		mapSize = 16.5;
		cost = 40000;
	};
	#include "Land_House_C_1_EP1.hpp"
	#include "Land_House_C_1_v2_EP1.hpp"
	#include "Land_House_C_2_EP1.hpp"
	#include "Land_House_C_3_EP1.hpp"
	#include "Land_House_C_4_EP1.hpp"
	#include "Land_House_C_5_EP1.hpp"
	#include "Land_House_C_5_V1_EP1.hpp"
	#include "Land_House_C_5_V2_EP1.hpp"
	#include "Land_House_C_5_V3_EP1.hpp"
	#include "Land_House_C_9_EP1.hpp"
	#include "Land_House_C_10_EP1.hpp"
	#include "Land_House_C_11_EP1.hpp"
	#include "Land_House_C_12_EP1.hpp"
};