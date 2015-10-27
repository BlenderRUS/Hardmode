class CfgPatches {
	class A3RU_HideFromList {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			A3_Characters_F_Civil,
			A3_Characters_F,
			A3_Characters_F_BLUFOR,
			A3_Characters_F_Beta,
			A3_Characters_F_Gamma,
			A3_UAV_F_Characters_F_Gamma,
			A3_Data_F_Curator_Characters,
			A3_Characters_F_EPA,
			A3_Characters_F_EPC,
			A3_Characters_F_INDEP,
			A3_Characters_F_OPFOR,
			A3_Characters_F_Kart,
			A3_Characters_F_Bootcamp,
			A3_Characters_F_Mark,
			A3_Static_F,
			A3_Static_F_Gamma,
			A3_Static_F_Mortar_01,
			A3_Static_F_Beta_Mortar_01,
			A3_Static_F_Mark_Designator_01,
			A3_Static_F_Mark_Designator_02,
			A3_Air_F_Heli_Light_01,
			A3_Air_F_Heli_Heli_Light_01,
			A3_Air_F_Heli_Light_02,
			A3_Air_F_Heli_Heli_Light_02,
			A3_Air_F_Beta_Heli_Attack_01,
			A3_Air_F_Beta_Heli_Attack_02,
			A3_Air_F_Beta_Heli_Transport_01,
			A3_Air_F_Beta_Heli_Transport_02,
			A3_Air_F_EPB_Heli_Light_03,
			A3_Air_F_EPC_Plane_CAS_01,
			A3_Air_F_EPC_Plane_CAS_02,
			A3_Air_F_Gamma_Plane_Fighter_03,
			A3_Air_F_EPC_Plane_Fighter_03,
			A3_Air_F_Heli_Heli_Transport_03,
			A3_Air_F_Heli_Heli_Transport_04,
			A3_Armor_F_Panther,
			A3_armor_f_beta_APC_Tracked_02,
			A3_Armor_F_EPB_APC_tracked_03,
			A3_Armor_F_EPB_MBT_03,
			A3_Armor_F_Slammer,
			A3_Armor_F_T100K,
			A3_Boat_F_Boat_Armed_01,
			A3_Boat_F_Heli_Boat_Armed_01,
			A3_Boat_F_Boat_Transport_01,
			A3_Boat_F_Beta_Boat_Armed_01,
			A3_Boat_F_SDV_01,
			A3_Boat_F_Heli_SDV_01,
			A3_Boat_F_Civilian_Boat,
			A3_Boat_F_Gamma_Boat_Transport_01,
			A3_Data_F_Curator_Virtual,
			A3_Air_F_Gamma_UAV_01,
			A3_Air_F_Gamma_UAV_02,
			A3_Soft_F_MRAP_01,
			A3_Soft_F_Heli_MRAP_01,
			A3_Soft_F_MRAP_02,
			A3_Soft_F_Heli_MRAP_02,
			A3_Soft_F_Offroad_01,
			A3_Soft_F_Bootcamp_Offroad_01,
			A3_Soft_F_Gamma_Offroad,
			A3_Soft_F_Quadbike,
			A3_Soft_F_Heli_Quadbike,
			A3_Soft_F_Gamma_Quadbike,
			A3_Soft_F_Bootcamp_Quadbike,
			A3_Soft_F_MRAP_03,
			A3_Soft_F_Heli_MRAP_03,
			A3_Soft_F_HEMTT,
			A3_Soft_F_TruckHeavy,
			A3_Soft_F_Gamma_TruckHeavy,
			A3_Soft_F_EPC_Truck_03,
			A3_Soft_F_Car,
			A3_Soft_F_Heli_Car,
			A3_Soft_F_SUV,
			A3_Soft_F_Heli_SUV,
			A3_Soft_F_Gamma_HEMTT,
			A3_Soft_F_Truck,
			A3_Soft_F_Heli_Truck,
			A3_Soft_F_Bootcamp_Truck,
			A3_Soft_F_Kart_Kart_01,
			A3_Static_F_Gamma_AA,
			A3_Static_F_Gamma_AT,
			A3_Armor_F_AMV,
			A3_Armor_F_Marid,
			A3_Armor_F_EPC_MBT_01,
			A3_Armor_F_APC_Wheeled_03,
			A3_Soft_F_Crusher_UGV,
			A3_Soft_F_Heli_Crusher_UGV
		};
		author[] = {"Blender"};
		versionAr[] = {1, 0};
		version = "1.0";
		versionStr = "1.0";
	};
};

class CfgVehicles {
	#include "Air.hpp"
	#include "car.hpp"
	#include "man.hpp"
	#include "ship.hpp"
	#include "static.hpp"
	#include "tank.hpp"
};