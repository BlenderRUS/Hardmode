class CfgVehicles {
	// BASE CLASSES REFERENCE //
	class Man;
	class LandVehicle;
	class Car: LandVehicle {
		class ACE_Actions {
			class ACE_MainActions {
				class ACE_LoadVehicleMagazine {
					displayName = "Load magazine";
					condition = "true";
					statement = "";
					insertChildren = "_this call a3ru_staticLoad_fnc_TurretsReload";
				};
			};
		};
		class ACE_SelfActions {
			class ACE_LoadVehicleMagazine {
				displayName = "Load magazine";
				condition = "true";
				statement = "";
				insertChildren = "_this call a3ru_staticLoad_fnc_TurretsReload";
			};
		};
		class NewTurret;
	};
	class Car_F: Car {
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class MainTurret;
		class ACE_Actions {
			class ACE_MainActions {
				class ACE_LoadVehicleMagazine {
					displayName = "Load magazine";
					condition = "true";
					statement = "";
					insertChildren = "_this call a3ru_staticLoad_fnc_StaticReload";
				};
			};
		};
		class ACE_SelfActions {
			class ACE_LoadVehicleMagazine {
				displayName = "Load magazine";
				condition = "true";
				statement = "";
				insertChildren = "_this call a3ru_staticLoad_fnc_StaticReload";
			};
		};
	};
	class Tank: LandVehicle {
		class ACE_Actions {
			class ACE_MainActions {
				class ACE_LoadVehicleMagazine {
					displayName = "Load magazine";
					condition = "true";
					statement = "";
					insertChildren = "_this call a3ru_staticLoad_fnc_TurretsReload";
				};
			};
		};
		class ACE_SelfActions {
			class ACE_LoadVehicleMagazine {
				displayName = "Load magazine";
				condition = "true";
				statement = "";
				insertChildren = "_this call a3ru_staticLoad_fnc_TurretsReload";
			};
		};
	};
};