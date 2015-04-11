class CfgVehicles {
	// BASE CLASSES REFERENCE //
	class Man;
	class Car_F;
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class MainTurret;
		class AGM_Actions;
	};
	class StaticGrenadeLauncher:StaticWeapon {};
	class StaticMGWeapon: StaticWeapon {};
	class StaticATWeapon: StaticWeapon {};
	class StaticCannon: StaticWeapon {};
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	class B_AssaultPack_Base;
	// BASE CLASSES REFERENCE //
	
	#include "Static.hpp"
	#include "Vehicles.hpp"
};