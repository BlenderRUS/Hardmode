class CfgPatches
{
	class A3RU_JbadToAIA_fix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAStructures_E_HouseA_A_Office01", "CAStructuresHouse_A_Office01"};
	};
};
/*
	Land_a_office01 - Land_a_office01_EP1
*/
class CfgVehicles
{
	class House;
	class House_EP1: House
	{
		class DestructionEffects;
	};
	Land_A_Office01: House_EP1 {
		#inlcude "Land_a_office01_EP1.hpp";
	};
};