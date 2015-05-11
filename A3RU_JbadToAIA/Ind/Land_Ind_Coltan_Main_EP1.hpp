class Land_Ind_Coltan_Main_EP1: House_F
{
	scope = 1;
	scopeCurator = 1;
	author = "Milkman & Smokedog";
	displayName = "Main Mining Building";
	armor = 500;
	model = "\Jbad_Structures\Ind\Ind_Coltan_Mine\jbad_Ind_Coltan_Main.p3d";
	vehicleClass = "jbad_misc";
	mapSize = 16.5;
	cost = 40000;
	class DestructionEffects: DestructionEffects
	{
		class Ruin1
		{
			simulation = "ruin";
			type = "\Jbad_Structures\Ind\Ind_Coltan_Mine\jbad_Ind_Coltan_Main_ruins.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class Damage
	{
		tex[] = {};
		mat[] = {};
	};
	class AnimationSources
	{
		class Door_1
		{
			source = "user";
			initPhase = 0;
			animPeriod = 1;
		};
		class Door_2
		{
			source = "user";
			initPhase = 0;
			animPeriod = 1;
		};
	};
	class UserActions
	{
		class OpenDoor_1
		{
			displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName = "Open Door";
			position = "Door_1";
			priority = 0.4;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "((this animationPhase 'Door_1') < 0.5)";
			statement = "([this, 'Door_1','Door_1_Handle','Door_1_Handle_2'] execVM ""\Jbad_Structures\scripts\Door_open.sqf"")";
		};
		class CloseDoor_1: OpenDoor_1
		{
			displayName = "Close Door";
			priority = 0.2;
			condition = "((this animationPhase 'Door_1') >= 0.5)";
			statement = "([this, 'Door_1','Door_1_Handle','Door_1_Handle_2'] execVM ""\jbad_structures\scripts\Door_close.sqf"")";
		};
		class OpenDoor_2
		{
			displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName = "Open Door";
			position = "Door_2";
			priority = 0.4;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "((this animationPhase 'Door_2') < 0.5)";
			statement = "([this, 'Door_2','Door_2_Handle','Door_2_Handle_2'] execVM ""\jbad_structures\scripts\Door_open.sqf"")";
		};
		class CloseDoor_2: OpenDoor_2
		{
			displayName = "Close Door";
			priority = 0.2;
			condition = "((this animationPhase 'Door_2') >= 0.5)";
			statement = "([this, 'Door_2','Door_2_Handle','Door_2_Handle_2'] execVM ""\jbad_structures\scripts\Door_close.sqf"")";
		};
	};
	actionBegin1 = "OpenDoor_1";
	actionEnd1 = "CloseDoor_1";
	actionBegin2 = "OpenDoor_2";
	actionEnd2 = "CloseDoor_2";
	numberOfDoors = 2;
};