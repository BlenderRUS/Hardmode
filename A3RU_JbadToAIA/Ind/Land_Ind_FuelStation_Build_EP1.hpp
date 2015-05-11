class Land_Ind_FuelStation_Build_EP1: House_F
{
	scope = 1;
	scopeCurator = 1;
	author = "Milkman & Smokedog";
	mapbuilder_filter = "Jbad Structures";
	displayName = "Fuel Station";
	armor = 500;
	model = "\Jbad_Structures\Ind\Ind_FuelStation\Jbad_Ind_FuelStation_Build.p3d";
	vehicleClass = "jbad_afghan_houses";
	mapSize = 0.89;
	cost = 10000;
	selectionDamage = "DamT_1";
	class HitPoints
	{
		class HitZone_1_hitpoint
		{
			armor = 0.2;
			material = 20;
			name = "dam1";
			visual = "dam1";
			passThrough = 0.01;
			convexComponent = "dam1";
			radius = 50;
			explosionShielding = 0.3;
			minimalHit = 0.25;
			class DestructionEffects
			{
				class Dust
				{
					simulation = "particles";
					type = "HousePartDust";
					position = "Dam_1_effects";
					intensity = 1;
					interval = 1;
					lifeTime = 0.01;
				};
				class Dust2: Dust
				{
					type = "HousePartDustLong";
				};
				class Walls: Dust
				{
					type = "HousePartWall";
				};
				class DamageAround
				{
					simulation = "damageAround";
					type = "DamageAroundHousePart";
					position = "Dam_1_effects";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
		};
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
					type = "BrokenGlass1ND";
					position = "Glass_5_effects";
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
					type = "BrokenGlass1ND";
					position = "Glass_6_effects";
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
		class HitZone_1_source
		{
			source = "Hit";
			hitpoint = "HitZone_1_hitpoint";
			raw = 1;
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
			statement = "([this, 'Door_1'] execVM ""\Jbad_Structures\scripts\DoorNoHandle_open.sqf"")";
		};
		class CloseDoor_1: OpenDoor_1
		{
			displayName = "Close Door";
			priority = 0.2;
			condition = "((this animationPhase 'Door_1') >= 0.5)";
			statement = "([this, 'Door_1'] execVM ""\jbad_structures\scripts\DoorNoHandle_close.sqf"")";
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