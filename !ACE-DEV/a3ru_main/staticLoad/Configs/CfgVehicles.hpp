class CfgVehicles {
	// BASE CLASSES REFERENCE //
	class Man;
	class LandVehicle;
	class Car: LandVehicle {
		class ACE_Actions {
			class ACE_MainActions;
		};
		class ACE_SelfActions;
	};
	class Car_F: Car {};
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class MainTurret;
		class ACE_Actions {
			class ACE_MainActions;
		};
		class ACE_SelfActions;
	};
	class Tank: LandVehicle {
		class ACE_Actions {
			class ACE_MainActions;
		};
		class ACE_SelfActions;
	};
	class Tank_F: Tank {};
	class StaticGrenadeLauncher:StaticWeapon {};
	class StaticMGWeapon: StaticWeapon {};
	class StaticAAWeapon: StaticWeapon {};
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