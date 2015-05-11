class Land_House_L_7_EP1: Jbad_House_old
{
	scope = 2;
	scopeCurator = 2;
	author = "Milkman & Smokedog";
	displayName = "Afghan House 7 Old";
	model = "\Jbad_Structures\afghan_houses_old\jbad_house_7_old.p3d";
	selectionDamage = "DamT_1";
	replaceDamagedHitpoints[] = {"HitZone_1_Hitpoint","HitZone_2_Hitpoint","HitZone_3_Hitpoint"};
	replaceDamaged = "Land_jbad_house_7_old_dam";
	class DestructionEffects: DestructionEffects
	{
		class Ruin1
		{
			simulation = "ruin";
			type = "\Jbad_Structures\afghan_houses_old\jbad_house_7_old_ruins.p3d";
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
	class HitPoints
	{
		class HitZone_1_hitpoint
		{
			armor = 0.125;
			material = -1;
			name = "dam1";
			visual = "dam1";
			passThrough = 0.0;
			convexComponent = "dam1";
			radius = 0.125;
			explosionShielding = 45;
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
		class HitZone_2_hitpoint
		{
			armor = 0.085;
			material = -1;
			name = "dam2";
			visual = "dam2";
			passThrough = 0.0;
			convexComponent = "dam2";
			radius = 0.125;
			explosionShielding = 45;
			minimalHit = 0.25;
			class DestructionEffects
			{
				class Dust
				{
					simulation = "particles";
					type = "HousePartDust";
					position = "Dam_2_effects";
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
					position = "Dam_2_effects";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
		};
		class HitZone_3_hitpoint
		{
			armor = 0.125;
			material = -1;
			name = "dam3";
			visual = "dam3";
			passThrough = 0.0;
			convexComponent = "dam3";
			radius = 0.125;
			explosionShielding = 45;
			minimalHit = 0.25;
			class DestructionEffects
			{
				class Dust
				{
					simulation = "particles";
					type = "HousePartDust";
					position = "Dam_3_effects";
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
					position = "Dam_3_effects";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
		};
		class Glass_1_hitpoint
		{
			armor = 0.001;
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
					type = "BrokenGlass1NN";
					position = "Glass_1_effects";
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
		class Glass_2_hitpoint
		{
			armor = 0.001;
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
			armor = 0.001;
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
	};
	class AnimationSources
	{
		class Door_1
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
			condition = "((this animationPhase 'Door_1') < 0.5) && ((this animationPhase 'Hitzone_3_hide') < 0.99999)";
			statement = "([this, 'Door_1'] execVM ""\Jbad_Structures\scripts\DoorNoHandle_open.sqf"")";
		};
		class CloseDoor_1: OpenDoor_1
		{
			displayName = "Close Door";
			priority = 0.2;
			condition = "((this animationPhase 'Door_1') >= 0.5) && ((this animationPhase 'Hitzone_3_hide') < 0.99999)";
			statement = "([this, 'Door_1'] execVM ""\jbad_structures\scripts\DoorNoHandle_close.sqf"")";
		};
	};
	actionBegin1 = "OpenDoor_1";
	actionEnd1 = "CloseDoor_1";
	numberOfDoors = 1;
};
