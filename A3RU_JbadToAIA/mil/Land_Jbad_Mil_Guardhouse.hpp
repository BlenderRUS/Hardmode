scope = 1;
scopeCurator = 1;
author = "Milkman & Smokedog";
armor = 250;
mapbuilder_filter = "Jbad Structures";
vehicleClass = "jbad_mil";
mapSize = 16.5;
cost = 40000;
armorLights = 0.01;
displayName = "Guard House";
model = "\Jbad_Structures\mil\Jbad_mil_Guardhouse.p3d";
class DestructionEffects: DestructionEffects
{
	class Ruin1
	{
		simulation = "ruin";
		type = "\Jbad_Structures\mil\Jbad_Mil_Guardhouse_ruins.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class Reflectors
{
	class Reflector_1
	{
		color[] = {1900,1800,1700};
		ambient[] = {5,5,5};
		intensity = 1;
		size = 1;
		innerAngle = 100;
		outerAngle = 179;
		coneFadeCoef = 10;
		position = "Light_8_pos";
		direction = "Light_8_dir";
		hitpoint = "Glass_8";
		selection = "";
		useFlare = 1;
		flareSize = 1.0;
		flareMaxDistance = 500;
		blinking = 0;
		dayLight = 0;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 0.3;
			hardLimitStart = 100;
			hardLimitEnd = 150;
		};
	};
};
class HitPoints
{
	class Glass_1_hitpoint
	{
		armor = 0.01;
		material = -1;
		name = "Glass_1";
		visual = "Glass_1_hide";
		passThrough = 0;
		radius = 0.175;
		convexComponent = "Glass_1_hide";
		class DestructionEffects
		{
			class BrokenGlass1
			{
				simulation = "particles";
				type = "BrokenGlass1ND";
				position = "Glass_1_effects";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class BrokenGlass2: BrokenGlass1
			{
				type = "BrokenGlass2ND";
			};
			class BrokenGlass3: BrokenGlass1
			{
				type = "BrokenGlass3ND";
			};
			class BrokenGlass4: BrokenGlass1
			{
				type = "BrokenGlass4ND";
			};
			class BrokenGlass5: BrokenGlass1
			{
				type = "BrokenGlass5ND";
			};
			class BrokenGlass6: BrokenGlass1
			{
				type = "BrokenGlass6ND";
			};
			class BrokenGlass7: BrokenGlass1
			{
				type = "BrokenGlass7ND";
			};
			class BrokenGlass1S: BrokenGlass1
			{
				type = "BrokenGlass1SD";
			};
			class BrokenGlass2S: BrokenGlass1
			{
				type = "BrokenGlass2SD";
			};
			class BrokenGlass3S: BrokenGlass1
			{
				type = "BrokenGlass3SD";
			};
			class BrokenGlass4S: BrokenGlass1
			{
				type = "BrokenGlass4SD";
			};
			class BrokenGlass5S: BrokenGlass1
			{
				type = "BrokenGlass5SD";
			};
			class BrokenGlass6S: BrokenGlass1
			{
				type = "BrokenGlass6SD";
			};
			class BrokenGlass7S: BrokenGlass1
			{
				type = "BrokenGlass7SD";
			};
		};
	};
	class Glass_2_hitpoint
	{
		armor = 0.01;
		material = -1;
		name = "Glass_2";
		visual = "Glass_2_hide";
		passThrough = 0;
		radius = 0.175;
		convexComponent = "Glass_2_hide";
		class DestructionEffects
		{
			class BrokenGlass1
			{
				simulation = "particles";
				type = "BrokenGlass1NN";
				position = "Glass_2_effects";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class BrokenGlass2: BrokenGlass1
			{
				type = "BrokenGlass2NN";
			};
			class BrokenGlass3: BrokenGlass1
			{
				type = "BrokenGlass3NN";
			};
			class BrokenGlass4: BrokenGlass1
			{
				type = "BrokenGlass4NN";
			};
			class BrokenGlass5: BrokenGlass1
			{
				type = "BrokenGlass5NN";
			};
			class BrokenGlass6: BrokenGlass1
			{
				type = "BrokenGlass6NN";
			};
			class BrokenGlass7: BrokenGlass1
			{
				type = "BrokenGlass7NN";
			};
			class BrokenGlass1S: BrokenGlass1
			{
				type = "BrokenGlass1SN";
			};
			class BrokenGlass2S: BrokenGlass1
			{
				type = "BrokenGlass2SN";
			};
			class BrokenGlass3S: BrokenGlass1
			{
				type = "BrokenGlass3SN";
			};
			class BrokenGlass4S: BrokenGlass1
			{
				type = "BrokenGlass4SN";
			};
			class BrokenGlass5S: BrokenGlass1
			{
				type = "BrokenGlass5SN";
			};
			class BrokenGlass6S: BrokenGlass1
			{
				type = "BrokenGlass6SN";
			};
			class BrokenGlass7S: BrokenGlass1
			{
				type = "BrokenGlass7SN";
			};
		};
	};
	class Glass_3_hitpoint
	{
		armor = 0.01;
		material = -1;
		name = "Glass_3";
		visual = "Glass_3_hide";
		passThrough = 0;
		radius = 0.175;
		convexComponent = "Glass_3_hide";
		class DestructionEffects
		{
			class BrokenGlass1
			{
				simulation = "particles";
				type = "BrokenGlass1NN";
				position = "Glass_3_effects";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class BrokenGlass2: BrokenGlass1
			{
				type = "BrokenGlass2NN";
			};
			class BrokenGlass3: BrokenGlass1
			{
				type = "BrokenGlass3NN";
			};
			class BrokenGlass4: BrokenGlass1
			{
				type = "BrokenGlass4NN";
			};
			class BrokenGlass5: BrokenGlass1
			{
				type = "BrokenGlass5NN";
			};
			class BrokenGlass6: BrokenGlass1
			{
				type = "BrokenGlass6NN";
			};
			class BrokenGlass7: BrokenGlass1
			{
				type = "BrokenGlass7NN";
			};
			class BrokenGlass1S: BrokenGlass1
			{
				type = "BrokenGlass1SN";
			};
			class BrokenGlass2S: BrokenGlass1
			{
				type = "BrokenGlass2SN";
			};
			class BrokenGlass3S: BrokenGlass1
			{
				type = "BrokenGlass3SN";
			};
			class BrokenGlass4S: BrokenGlass1
			{
				type = "BrokenGlass4SN";
			};
			class BrokenGlass5S: BrokenGlass1
			{
				type = "BrokenGlass5SN";
			};
			class BrokenGlass6S: BrokenGlass1
			{
				type = "BrokenGlass6SN";
			};
			class BrokenGlass7S: BrokenGlass1
			{
				type = "BrokenGlass7SN";
			};
		};
	};
	class Glass_4_hitpoint
	{
		armor = 0.01;
		material = -1;
		name = "Glass_4";
		visual = "Glass_4_hide";
		passThrough = 0;
		radius = 0.175;
		convexComponent = "Glass_4_hide";
		class DestructionEffects
		{
			class BrokenGlass1
			{
				simulation = "particles";
				type = "BrokenGlass1NN";
				position = "Glass_4_effects";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class BrokenGlass2: BrokenGlass1
			{
				type = "BrokenGlass2NN";
			};
			class BrokenGlass3: BrokenGlass1
			{
				type = "BrokenGlass3NN";
			};
			class BrokenGlass4: BrokenGlass1
			{
				type = "BrokenGlass4NN";
			};
			class BrokenGlass5: BrokenGlass1
			{
				type = "BrokenGlass5NN";
			};
			class BrokenGlass6: BrokenGlass1
			{
				type = "BrokenGlass6NN";
			};
			class BrokenGlass7: BrokenGlass1
			{
				type = "BrokenGlass7NN";
			};
			class BrokenGlass1S: BrokenGlass1
			{
				type = "BrokenGlass1SN";
			};
			class BrokenGlass2S: BrokenGlass1
			{
				type = "BrokenGlass2SN";
			};
			class BrokenGlass3S: BrokenGlass1
			{
				type = "BrokenGlass3SN";
			};
			class BrokenGlass4S: BrokenGlass1
			{
				type = "BrokenGlass4SN";
			};
			class BrokenGlass5S: BrokenGlass1
			{
				type = "BrokenGlass5SN";
			};
			class BrokenGlass6S: BrokenGlass1
			{
				type = "BrokenGlass6SN";
			};
			class BrokenGlass7S: BrokenGlass1
			{
				type = "BrokenGlass7SN";
			};
		};
	};
	class Glass_5_hitpoint
	{
		armor = 0.01;
		material = -1;
		name = "Glass_5";
		visual = "Glass_5_hide";
		passThrough = 0;
		radius = 0.175;
		convexComponent = "Glass_5_hide";
		class DestructionEffects
		{
			class BrokenGlass1
			{
				simulation = "particles";
				type = "BrokenGlass1NN";
				position = "Glass_5_effects";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class BrokenGlass2: BrokenGlass1
			{
				type = "BrokenGlass2NN";
			};
			class BrokenGlass3: BrokenGlass1
			{
				type = "BrokenGlass3NN";
			};
			class BrokenGlass4: BrokenGlass1
			{
				type = "BrokenGlass4NN";
			};
			class BrokenGlass5: BrokenGlass1
			{
				type = "BrokenGlass5NN";
			};
			class BrokenGlass6: BrokenGlass1
			{
				type = "BrokenGlass6NN";
			};
			class BrokenGlass7: BrokenGlass1
			{
				type = "BrokenGlass7NN";
			};
			class BrokenGlass1S: BrokenGlass1
			{
				type = "BrokenGlass1SN";
			};
			class BrokenGlass2S: BrokenGlass1
			{
				type = "BrokenGlass2SN";
			};
			class BrokenGlass3S: BrokenGlass1
			{
				type = "BrokenGlass3SN";
			};
			class BrokenGlass4S: BrokenGlass1
			{
				type = "BrokenGlass4SN";
			};
			class BrokenGlass5S: BrokenGlass1
			{
				type = "BrokenGlass5SN";
			};
			class BrokenGlass6S: BrokenGlass1
			{
				type = "BrokenGlass6SN";
			};
			class BrokenGlass7S: BrokenGlass1
			{
				type = "BrokenGlass7SN";
			};
		};
	};
	class Glass_6_hitpoint
	{
		armor = 0.01;
		material = -1;
		name = "Glass_6";
		visual = "Glass_6_hide";
		passThrough = 0;
		radius = 0.175;
		convexComponent = "Glass_6_hide";
		class DestructionEffects
		{
			class BrokenGlass1
			{
				simulation = "particles";
				type = "BrokenGlass1NN";
				position = "Glass_6_effects";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class BrokenGlass2: BrokenGlass1
			{
				type = "BrokenGlass2NN";
			};
			class BrokenGlass3: BrokenGlass1
			{
				type = "BrokenGlass3NN";
			};
			class BrokenGlass4: BrokenGlass1
			{
				type = "BrokenGlass4NN";
			};
			class BrokenGlass5: BrokenGlass1
			{
				type = "BrokenGlass5NN";
			};
			class BrokenGlass6: BrokenGlass1
			{
				type = "BrokenGlass6NN";
			};
			class BrokenGlass7: BrokenGlass1
			{
				type = "BrokenGlass7NN";
			};
			class BrokenGlass1S: BrokenGlass1
			{
				type = "BrokenGlass1SN";
			};
			class BrokenGlass2S: BrokenGlass1
			{
				type = "BrokenGlass2SN";
			};
			class BrokenGlass3S: BrokenGlass1
			{
				type = "BrokenGlass3SN";
			};
			class BrokenGlass4S: BrokenGlass1
			{
				type = "BrokenGlass4SN";
			};
			class BrokenGlass5S: BrokenGlass1
			{
				type = "BrokenGlass5SN";
			};
			class BrokenGlass6S: BrokenGlass1
			{
				type = "BrokenGlass6SN";
			};
			class BrokenGlass7S: BrokenGlass1
			{
				type = "BrokenGlass7SN";
			};
		};
	};
	class Glass_7_hitpoint
	{
		armor = 0.01;
		material = -1;
		name = "Glass_7";
		visual = "Glass_7_hide";
		passThrough = 0;
		radius = 0.175;
		convexComponent = "Glass_7_hide";
		class DestructionEffects
		{
			class BrokenGlass1
			{
				simulation = "particles";
				type = "BrokenGlass1NN";
				position = "Glass_7_effects";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class BrokenGlass2: BrokenGlass1
			{
				type = "BrokenGlass2NN";
			};
			class BrokenGlass3: BrokenGlass1
			{
				type = "BrokenGlass3NN";
			};
			class BrokenGlass4: BrokenGlass1
			{
				type = "BrokenGlass4NN";
			};
			class BrokenGlass5: BrokenGlass1
			{
				type = "BrokenGlass5NN";
			};
			class BrokenGlass6: BrokenGlass1
			{
				type = "BrokenGlass6NN";
			};
			class BrokenGlass7: BrokenGlass1
			{
				type = "BrokenGlass7NN";
			};
			class BrokenGlass1S: BrokenGlass1
			{
				type = "BrokenGlass1SN";
			};
			class BrokenGlass2S: BrokenGlass1
			{
				type = "BrokenGlass2SN";
			};
			class BrokenGlass3S: BrokenGlass1
			{
				type = "BrokenGlass3SN";
			};
			class BrokenGlass4S: BrokenGlass1
			{
				type = "BrokenGlass4SN";
			};
			class BrokenGlass5S: BrokenGlass1
			{
				type = "BrokenGlass5SN";
			};
			class BrokenGlass6S: BrokenGlass1
			{
				type = "BrokenGlass6SN";
			};
			class BrokenGlass7S: BrokenGlass1
			{
				type = "BrokenGlass7SN";
			};
		};
	};
	class Glass_8_hitpoint
	{
		armor = 0.01;
		material = -1;
		name = "Glass_8";
		visual = "Glass_8_hide";
		passThrough = 0;
		radius = 0.175;
		convexComponent = "Glass_8_hide";
		class DestructionEffects
		{
			class BrokenGlass1
			{
				simulation = "particles";
				type = "BrokenGlass1ND";
				position = "Glass_8_effects";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class BrokenGlass2: BrokenGlass1
			{
				type = "BrokenGlass2ND";
			};
			class BrokenGlass3: BrokenGlass1
			{
				type = "BrokenGlass3ND";
			};
			class BrokenGlass4: BrokenGlass1
			{
				type = "BrokenGlass4ND";
			};
			class BrokenGlass5: BrokenGlass1
			{
				type = "BrokenGlass5ND";
			};
			class BrokenGlass6: BrokenGlass1
			{
				type = "BrokenGlass6ND";
			};
			class BrokenGlass7: BrokenGlass1
			{
				type = "BrokenGlass7ND";
			};
			class BrokenGlass1S: BrokenGlass1
			{
				type = "BrokenGlass1SD";
			};
			class BrokenGlass2S: BrokenGlass1
			{
				type = "BrokenGlass2SD";
			};
			class BrokenGlass3S: BrokenGlass1
			{
				type = "BrokenGlass3SD";
			};
			class BrokenGlass4S: BrokenGlass1
			{
				type = "BrokenGlass4SD";
			};
			class BrokenGlass5S: BrokenGlass1
			{
				type = "BrokenGlass5SD";
			};
			class BrokenGlass6S: BrokenGlass1
			{
				type = "BrokenGlass6SD";
			};
			class BrokenGlass7S: BrokenGlass1
			{
				type = "BrokenGlass7SD";
			};
		};
	};
};
class AnimationSources
{
	class Door_1
	{
		source = "user";
		initPhase = 0;
		animPeriod = 1;
	};
	class Door_2: Door_1
	{
		animPeriod = 5;
	};
	class Glass_1_source
	{
		source = "Hit";
		hitpoint = "Glass_1_hitpoint";
		raw = 1;
	};
	class Glass_2_source: Glass_1_source
	{
		hitpoint = "Glass_2_hitpoint";
	};
	class Glass_3_source: Glass_1_source
	{
		hitpoint = "Glass_3_hitpoint";
	};
	class Glass_4_source: Glass_1_source
	{
		hitpoint = "Glass_4_hitpoint";
	};
	class Glass_5_source: Glass_1_source
	{
		hitpoint = "Glass_5_hitpoint";
	};
	class Glass_6_source: Glass_1_source
	{
		hitpoint = "Glass_6_hitpoint";
	};
	class Glass_7_source: Glass_1_source
	{
		hitpoint = "Glass_7_hitpoint";
	};
	class Glass_8_source: Glass_1_source
	{
		hitpoint = "Glass_8_hitpoint";
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
		displayName = "Close Doors";
		priority = 0.2;
		condition = "((this animationPhase 'Door_1') >= 0.5)";
		statement = "([this, 'Door_1','Door_1_Handle','Door_1_Handle_2'] execVM ""\jbad_structures\scripts\Door_close.sqf"")";
	};
	class OpenDoor_2
	{
		displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
		displayName = "Use Computer and Open Cell Door";
		position = "Door_2";
		priority = 0.4;
		radius = 1.5;
		onlyForPlayer = 1;
		condition = "((this animationPhase 'Door_2') < 0.5)";
		statement = "([this, 'jbad_keyboard','jbad_electric_door_open','Door_2'] execVM ""\Jbad_Structures\scripts\Cell_Door_Open.sqf"")";
	};
	class CloseDoor_2: OpenDoor_2
	{
		displayName = "Use Computer and Close Cell Door";
		priority = 0.2;
		condition = "((this animationPhase 'Door_2') >= 0.5)";
		statement = "([this, 'jbad_keyboard','jbad_electric_door_open','Door_2'] execVM ""\jbad_structures\scripts\Cell_Door_Close.sqf"")";
	};
};
actionBegin1 = "OpenDoor_1";
actionEnd1 = "CloseDoor_1";
actionBegin2 = "OpenDoor_2";
actionEnd2 = "CloseDoor_2";
numberOfDoors = 2;