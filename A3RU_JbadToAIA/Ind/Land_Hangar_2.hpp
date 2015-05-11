class Land_Hangar_2: House_F
{
	scope = 1;
	scopeCurator = 1;
	author = "Milkman & Smokedog";
	mapbuilder_filter = "Jbad Structures";
	displayName = "Warehouse";
	armor = 500;
	model = "\Jbad_Structures\Ind\hangar_2\jbad_hangar_2.p3d";
	vehicleClass = "jbad_misc";
	mapSize = 16.5;
	cost = 40000;
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
					type = "BrokenGlass1NB";
					position = "Glass_1_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
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
					type = "BrokenGlass1NB";
					position = "Glass_2_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
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
					type = "BrokenGlass1NB";
					position = "Glass_3_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
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
					type = "BrokenGlass1NB";
					position = "Glass_4_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
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
					type = "BrokenGlass1NB";
					position = "Glass_5_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
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
					type = "BrokenGlass1NB";
					position = "Glass_6_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
				};
			};
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
		class Door_2: Door_1{};
		class Door_3: Door_1
		{
			animPeriod = 3;
		};
		class Door_4: Door_3{};
		class Door_5: Door_3{};
		class Door_6: Door_3{};
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
	};
	class UserActions
	{
		class OpenDoor_1
		{
			displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName = "Open Doors";
			position = "Door_1";
			priority = 0.4;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "((this animationPhase 'Door_1') < 0.5) && ((this animationPhase 'Door_5') < 0.01)";
			statement = "([this, 'Door_1','Door_2'] execVM ""\Jbad_Structures\scripts\DoorsNoHandle_open.sqf"")";
		};
		class CloseDoor_1: OpenDoor_1
		{
			displayName = "Close Doors";
			priority = 0.2;
			condition = "((this animationPhase 'Door_1') >= 0.5) && ((this animationPhase 'Door_5') < 0.01)";
			statement = "([this, 'Door_1','Door_2'] execVM ""\jbad_structures\scripts\DoorsNoHandle_close.sqf"")";
		};
		class OpenDoor_2
		{
			displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName = "Open Sliding Doors";
			position = "Door_3";
			priority = 0.4;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "((this animationPhase 'Door_3') < 0.5)";
			statement = "([this, 'Door_3','Door_4'] execVM ""\Jbad_Structures\scripts\DoorsNoHandle_open.sqf"")";
		};
		class CloseDoor_2: OpenDoor_2
		{
			displayName = "Close Sliding Doors";
			priority = 0.2;
			condition = "((this animationPhase 'Door_3') >= 0.5)";
			statement = "([this, 'Door_3','Door_4'] execVM ""\jbad_structures\scripts\DoorsNoHandle_close.sqf"")";
		};
		class OpenDoor_3
		{
			displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName = "Open Sliding Doors";
			position = "Door_5";
			priority = 0.4;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "((this animationPhase 'Door_5') < 0.5) && ((this animationPhase 'Door_1') < 0.01)";
			statement = "([this, 'Door_5','Door_6'] execVM ""\Jbad_Structures\scripts\DoorsNoHandle_open.sqf"")";
		};
		class CloseDoor_3: OpenDoor_3
		{
			displayName = "Close Sliding Doors";
			priority = 0.2;
			condition = "((this animationPhase 'Door_5') >= 0.5)&& ((this animationPhase 'Door_1') < 0.01)";
			statement = "([this, 'Door_5','Door_6'] execVM ""\jbad_structures\scripts\DoorsNoHandle_close.sqf"")";
		};
	};
	actionBegin1 = "OpenDoor_1";
	actionEnd1 = "CloseDoor_1";
	actionBegin2 = "OpenDoor_2";
	actionEnd2 = "CloseDoor_2";
	numberOfDoors = 2;
};