class CfgPatches
{
	class A3RU_JbadToAIA_mil
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAStructures_Mil", "CAStructures_E_Mil", "mil"};
	};
};
/*
	Land_Mil_Barracks_EP1 - Land_Jbad_Mil_Barracks
	* Land_Mil_Barracks - Land_Jbad_Mil_Barracks
	Land_Mil_ControlTower_EP1 - Land_Jbad_Mil_ControlTower
	* Land_Mil_ControlTower - Land_Jbad_Mil_ControlTower
	Land_Mil_Guardhouse_EP1 - Land_Jbad_Mil_Guardhouse
	* Land_Mil_Guardhouse - Land_Jbad_Mil_Guardhouse
	Land_Mil_House_EP1 - Land_Jbad_Mil_House
	* Land_Mil_House - Land_Jbad_Mil_House
*/
class CfgVehicles
{
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class Land_Mil_Barracks_EP1: House_F { #include "Land_Jbad_Mil_Barracks.hpp" };
	class Land_Mil_Barracks: House_F { #include "Land_Jbad_Mil_Barracks.hpp" };
	class Land_Mil_ControlTower_EP1: House_F { #include "Land_Jbad_Mil_ControlTower.hpp" };
	class Land_Mil_ControlTower: House_F { #include "Land_Jbad_Mil_ControlTower.hpp" };
	class Land_Mil_Guardhouse_EP1: House_F { #include "Land_Jbad_Mil_Guardhouse.hpp" };
	class Land_Mil_Guardhouse: House_F { #include "Land_Jbad_Mil_Guardhouse.hpp" };
	class Land_Mil_House_EP1: House_F { #include "Land_Jbad_Mil_House.hpp" };
	class Land_Mil_House: House_F { #include "Land_Jbad_Mil_House.hpp" };
};