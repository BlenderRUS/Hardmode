class CfgPatches
{
	class A3RU_JbadToAIA_house_a
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAStructures_E_HouseA_A_BuildingWIP", "CAStructures_E_HouseA_A_Minaret", "CAStructures_E_HouseA_A_Minaret_Porto", "CAStructures_E_HouseA_A_Mosque_small", "CAStructures_E_HouseA_a_stationhouse", "CAStructures_E_HouseA_A_Villa", "A_BuildingWIP", "A_Minaret", "A_Minaret_Porto", "A_Mosque_small", "A_stationhouse", "A_Villa"};
	};
};
/*
	Land_A_BuildingWIP_EP1 - Land_Jbad_A_BuildingWIP
	Land_A_Minaret_EP1 - Land_Jbad_A_Minaret
	Land_A_Minaret_Porto_EP1 - Land_Jbad_A_Minaret_porto
	Land_A_Mosque_small_1_EP1 - Land_Jbad_A_Mosque_small_1
	Land_A_Mosque_small_2_EP1 - Land_Jbad_A_Mosque_small_2
	Land_A_Stationhouse_EP1 - Land_Jbad_A_Stationhouse
	* Land_A_Stationhouse - Land_Jbad_A_Stationhouse
	Land_A_Villa_EP1 - Land_Jbad_A_Villa
*/
class CfgVehicles {
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class Land_A_BuildingWIP_EP1: House_F
	{
		#include "Land_Jbad_A_BuildingWIP.hpp"
	};
	class Land_A_Minaret_EP1: House_F
	{
		#include "Land_Jbad_A_Minaret.hpp"
	};
	class Land_A_Minaret_Porto_EP1: House_F
	{
		#include "Land_Jbad_A_Minaret_porto.hpp"
	};
	class Land_A_Mosque_small_1_EP1: House_F
	{
		#include "Land_Jbad_A_Mosque_small_1.hpp"
	};
	class Land_A_Mosque_small_2_EP1: House_F
	{
		#include "Land_Jbad_A_Mosque_small_2.hpp"
	};
	class Land_A_Stationhouse_EP1: House_F
	{
		#include "Land_Jbad_A_Stationhouse.hpp"
	};
	class Land_A_Stationhouse: House_F {
		#include "Land_Jbad_A_Stationhouse.hpp"
	};
	class Land_A_Villa_EP1: House_F
	{
		#include "Land_Jbad_A_Villa.hpp"
	};
};