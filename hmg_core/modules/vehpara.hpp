	class HMG_Module_Para_Veh : Module_F {
		author = "pride";
		category = AGM;
		displayName = "Vehicle paradrop";
		function = "HMG_Core_fnc_HMGVehPara";
		scope = 2;
		isGlobal = 1;
		icon = "\hmg_core\pic\para_m.paa";
		class Arguments : ArgumentsBaseUnits {
			class Para_Veh_Type {
				displayName = "Тип техники для сброса";
				description = "";
				typeName 	= "STRING";
				class values
				{
					class bmd2	{ name = "БМД-2"; 		value = "rhs_bmd2"; default = "rhs_bmd2";};
					class bmd2k { name = "БМД-2К"; 	value = "rhs_bmd2k";};
					class bmd2m	{ name = "БМД-2М"; 		value = "rhs_bmd2m";};
					class bmd4	{ name = "БМД-4"; 		value = "rhs_bmd4_vdv";};
					class bmd4k	{ name = "БМД-4"; 		value = "rhs_bmd4k_vdv";};
					class bmd4m	{ name = "БМД-4М"; 	value = "rhs_bmd4m_vdv";};
					class gaz66	{ name = "ГАЗ-66"; 	value = "rhs_gaz66_vdv";};
					class tigr_vdv	{ name = "ГАЗ-233011"; 	value = "rhs_tigr_vdv";};

				};
			};			
			class Para_Veh_Count {
				displayName = "Количество техники";
				description = "";
				typeName 	= "NUMBER";
				class values
				{
					class CountSquad		{ name = "1 машина (отделение, командование)"; 		value = 1; default = 1;};
					class CountCompanyOnly 	{ name = "2 Машины (командование)"; 	value = 2;};
					class CountPlatoon 		{ name = "4 машины (взвод)"; 		value = 4;};
					class CountCompany		{ name = "8 машин (рота)"; 		value = 8;};

				};
			};
		};
	
	};
	
