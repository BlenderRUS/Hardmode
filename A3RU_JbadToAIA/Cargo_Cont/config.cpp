class CfgPatches
{
	class A3RU_JbadToAIA_cargo
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CABuildings2_Misc_Cargo", "Cargo_Cont"};
	};
};
/*
	Land_Misc_Cargo1Ao - Land_Jbad_Cargo1_int
	Land_Misc_Cargo1Bo - Land_Jbad_Cargo2_int
	
*/
class CfgVehicles
{
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class Ruins_F;
	class Land_Misc_Cargo1Ao: House_F
	{
		scope = 1;
		scopeCurator = 1;
		mapbuilder_filter = "Jbad Structures";
		displayName = "Cargo1";
		mapSize = 7;
		vehicleClass = "Jbad_Misc";
		model = "\Jbad_Structures\Cargo_Cont\Jbad_Cargo1_int.p3d";
		class AnimationSources
		{
			class door_1_1
			{
				animPeriod = 2;
				initPhase = 0;
				source = "user";
			};
			class door_1_2: door_1_1{};
			class door_2_1: door_1_1{};
			class door_2_2: door_1_1{};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Cargo Doors";
				position = "Door_1_1";
				priority = 0.4;
				radius = 2;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'Door_1_1') < 0.5)";
				statement = "([this, 'Door_1_1','Door_1_1_Handle','Door_1_1_Handle_2','Door_1_2','Door_1_2_Handle','Door_1_2_Handle_2'] execVM ""\Jbad_Structures\scripts\Doors_open.sqf"")";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName = "Close Cargo Doors";
				priority = 0.2;
				condition = "((this animationPhase 'Door_1_1') >= 0.5)";
				statement = "([this, 'Door_1_1','Door_1_1_Handle','Door_1_1_Handle_2','Door_1_2','Door_1_2_Handle','Door_1_2_Handle_2'] execVM ""\Jbad_Structures\scripts\Doors_close.sqf"")";
			};
			class OpenDoor_2
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Cargo Doors";
				position = "Door_2_2";
				priority = 0.4;
				radius = 2;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'Door_2_1') < 0.5)";
				statement = "([this, 'Door_2_1','Door_2_1_Handle','Door_2_1_Handle_2','Door_2_2','Door_2_2_Handle','Door_2_2_Handle_2'] execVM ""\Jbad_Structures\scripts\Doors_open.sqf"")";
			};
			class CloseDoor_2: OpenDoor_2
			{
				displayName = "Close Cargo Doors";
				priority = 0.2;
				condition = "((this animationPhase 'Door_2_1') >= 0.5)";
				statement = "([this, 'Door_2_1','Door_2_1_Handle','Door_2_1_Handle_2','Door_2_2','Door_2_2_Handle','Door_2_2_Handle_2'] execVM ""\Jbad_Structures\scripts\Doors_close.sqf"")";
			};
		};
		actionBegin1 = "OpenDoor_1";
		actionEnd1 = "CloseDoor_1";
		actionBegin2 = "OpenDoor_2";
		actionEnd2 = "CloseDoor_2";
		numberOfDoors = 2;
	};
	class Land_Misc_Cargo1Bo: Land_Misc_Cargo1Ao
	{
		scope = 1;
		scopeCurator = 1;
		mapbuilder_filter = "Jbad Structures";
		displayName = "Cargo2";
		model = "\Jbad_Structures\Cargo_Cont\Jbad_Cargo2_int.p3d";
		mapSize = 7;
		vehicleClass = "Jbad_Misc";
		class AnimationSources
		{
			class door_1_1
			{
				animPeriod = 2;
				initPhase = 0;
				source = "user";
			};
			class door_1_2: door_1_1{};
			class door_2_1: door_1_1{};
			class door_2_2: door_1_1{};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Cargo Doors";
				position = "Door_1_1";
				priority = 0.4;
				radius = 2;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'Door_1_1') < 0.5)";
				statement = "([this, 'Door_1_1','Door_1_1_Handle','Door_1_1_Handle_2','Door_1_2','Door_1_2_Handle','Door_1_2_Handle_2'] execVM ""\Jbad_Structures\scripts\Doors_open.sqf"")";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName = "Close Cargo Doors";
				priority = 0.2;
				condition = "((this animationPhase 'Door_1_1') >= 0.5)";
				statement = "([this, 'Door_1_1','Door_1_1_Handle','Door_1_1_Handle_2','Door_1_2','Door_1_2_Handle','Door_1_2_Handle_2'] execVM ""\Jbad_Structures\scripts\Doors_close.sqf"")";
			};
			class OpenDoor_2
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Cargo Doors";
				position = "Door_2_2";
				priority = 0.4;
				radius = 2;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'Door_2_1') < 0.5)";
				statement = "([this, 'Door_2_1','Door_2_1_Handle','Door_2_1_Handle_2','Door_2_2','Door_2_2_Handle','Door_2_2_Handle_2'] execVM ""\Jbad_Structures\scripts\Doors_open.sqf"")";
			};
			class CloseDoor_2: OpenDoor_2
			{
				displayName = "Close Cargo Doors";
				priority = 0.2;
				condition = "((this animationPhase 'Door_2_1') >= 0.5)";
				statement = "([this, 'Door_2_1','Door_2_1_Handle','Door_2_1_Handle_2','Door_2_2','Door_2_2_Handle','Door_2_2_Handle_2'] execVM ""\Jbad_Structures\scripts\Doors_close.sqf"")";
			};
		};
		actionBegin1 = "OpenDoor_1";
		actionEnd1 = "CloseDoor_1";
		actionBegin2 = "OpenDoor_2";
		actionEnd2 = "CloseDoor_2";
		numberOfDoors = 2;
	};
};