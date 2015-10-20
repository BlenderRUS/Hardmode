#define MACRO_REFUELVEHICLE \
    class ACE_Actions { \
        class ACE_MainActions { \
            class a3ru_jerrycan_Refuel { \
                displayName = "Refuel vehicle"; \
                condition = "[_player, _target] call A3RU_JerryCan_fnc_CanRefuel"; \
                statement = "[_player, _target] call A3RU_JerryCan_fnc_RefuelVehicle"; \
                runOnHover = 1; \
                showDisabled = 0; \
                priority = 2; \
                icon = "\A3\ui_f\data\igui\cfg\actions\refuel_ca.paa"; \
                distance = 4; \
            }; \
        }; \
    };

class CfgPatches
{
	class A3RU_JerryCan
	{
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		author[] = {"Blender"};
		authorUrl = "http://www.arma3.ru";
		version = "0.1";
		versionAr[] = {0, 1};
		versionStr = "0.1";
	};
};

#include "CfgFunctions.hpp"

class CfgVehicles {
	class thingX;
	class ACE_RepairItem_Base: thingX {
        class ACE_Actions {
            class ACE_MainActions;
		};
	};
	class A3RU_Item_JerryCan: ACE_RepairItem_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgVehicles_Land_CanisterFuel_F0";
		model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F.p3d";
		ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1.2,0};
        ace_dragging_carryDirection = 0;
		author = "Blender";
		/*
		class ACE_Actions {
			class ACE_MainActions {
				MACRO_LOADABLE
				MACRO_CARRYJERRYCAN
			};
		};
		*/
		icon = "iconObject_circle";
		mapSize = 0.7;
		accuracy = 0.2;
		vehicleClass = "ACE_Logistics_Items";
		destrType = "DesturctNo";
	};
	class LandVehicle;
    class Car: LandVehicle {
        MACRO_REFUELVEHICLE
    };
	
	class Car_F: Car {
		AGM_fuelCapacity = 60;
	};
	class Truck_F: Car_F {
		AGM_fuelCapacity = 240;  // in liter.
	};
	class Wheeled_APC_F: Car_F {
		AGM_fuelCapacity = 600;  // in liter.
	};
	
    class Tank: LandVehicle {
		AGM_fuelCapacity = 1500;  // in liter.
        MACRO_REFUELVEHICLE
    };

    class Ship;
    class Ship_F: Ship {
		AGM_fuelCapacity = 40;  // in liter.
        MACRO_REFUELVEHICLE
    };
};