class CfgPatches
{
	class A3RU_JbadToAIA_ind
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"AiA_Buildings_Config", "CAStructures_E_Ind_Ind_Coltan_Mine", "CAStructures_E_Ind_Ind_FuelStation", "CAStructures_E_Ind_Misc_PowerStation", "CAStructures_E_Ind_Ind_Shed", "hangar_2", "Ind_Coltan_Mine", "Ind_FuelStation", "Ind_Garage01", "Ind_PowerStation", "Ind_Shed"};
	};
};
/*
	Land_Hangar_2 - Land_jbad_hangar_2
	Land_Ind_Coltan_Conv1_10_EP1 - Land_Jbad_Ind_Coltan_Conv1_10
	Land_Ind_Coltan_Conv1_end_EP1 - Land_Jbad_Ind_Coltan_Conv1_End
	Land_Ind_Coltan_Conv1_Main_EP1 - Land_Jbad_Ind_Coltan_Conv1_Main
	Land_Ind_Coltan_Conv2_EP1 - Land_Jbad_Ind_Coltan_Conv2
	Land_Ind_Coltan_Hopper_EP1 - Land_Jbad_Ind_Coltan_Hopper
	Land_Ind_Coltan_Main_EP1 - Land_Jbad_Ind_Coltan_Main
	Land_Misc_Coltan_Heap_EP1 - Land_Jbad_Misc_Coltan_Heap
	Land_Ind_FuelStation_Build_EP1 - Land_Jbad_Ind_FuelStation_Build
	Land_Ind_FuelStation_Feed_EP1 - Land_Jbad_Ind_FuelStation_Feed
	Land_Ind_FuelStation_Shed_EP1 - Land_Jbad_Ind_FuelStation_Shed
	Land_Ind_Garage01 - Land_Jbad_Ind_Garage01
	Land_Ind_PowerStation_EP1 - Land_Jbad_Ind_PowerStation
	Land_Ind_Shed_01_EP1 - Land_Jbad_Ind_Shed_01
	Land_Ind_Shed_02_EP1 - Land_Jbad_Ind_Shed_02
*/
class CfgVehicles
{
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class Strategic;
	#include "Land_Hangar_2.hpp"
	#include "Land_Ind_Coltan_Conv1_10_EP1.hpp"
	#include "Land_Ind_Coltan_Conv1_end_EP1.hpp"
	#include "Land_Ind_Coltan_Conv1_Main_EP1.hpp"
	#include "Land_Ind_Coltan_Conv2_EP1.hpp"
	#include "Land_Ind_Coltan_Hopper_EP1.hpp"
	#include "Land_Ind_Coltan_Main_EP1.hpp"
	#include "Land_Misc_Coltan_Heap_EP1.hpp"
	#include "Land_Ind_FuelStation_Build_EP1.hpp"
	//#include "Land_Ind_FuelStation_Feed_EP1.hpp"
	//#include "Land_Ind_FuelStation_Shed_EP1.hpp"
	#include "Land_Ind_Garage01.hpp"
	#include "Land_Ind_PowerStation_EP1.hpp"
	#include "Land_Ind_Shed_01_EP1.hpp"
	#include "Land_Ind_Shed_02_EP1.hpp"
};