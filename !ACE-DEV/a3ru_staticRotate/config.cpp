#include <macros.h>

class CfgPatches
{
	class A3RU_StaticRotate
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_interact_menu"};
	};
};

class CfgFunctions {
	class a3ru_staticRotate {
		class StaticRotate {
			file = PATH(functions);
			class CanRotate;
			class Release;
			class Rotate;
			class StartRotate;
		};
	};
};

class CfgVehicles {
	class LandVehicle;
	class StaticWeapon: LandVehicle {
		class ACE_Actions {
			class ACE_MainActions {
				class A3RU_StaticRotate {
					displayName = "$STR_A3RU_StaticRotate";
					condition = "_this call a3ru_staticRotate_fnc_CanRotate";
					statement = "_this spawn a3ru_staticRotate_fnc_StartRotate";
					showDisabled = 0;
					priority = 2.5;
					icon = "";  // @todo
				};
			};
		};
	};
};