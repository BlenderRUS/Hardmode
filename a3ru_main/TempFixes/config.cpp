class CfgPatches {
    class a3ru_tempFixes {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.48;
        requiredAddons[] = {"A3_Data_F"};
        author[] = { "Blender" };
    };
};

class CfgVehicles {
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	class HMG_Module_Para: Module_F
	{
		scope = 1;
		displayName = "HMG_Para (DEPRECATED)";
		category = "Effects";
		isGlobal = 0;
	};
};