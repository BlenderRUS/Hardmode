class Land_Ind_Shed_02_EP1: House_F
{
	scope = 2;
	scopeCurator = 2;
	author = "Milkman & Smokedog";
	mapbuilder_filter = "Jbad Structures";
	armor = 150;
	displayName = "Shed 2";
	model = "\Jbad_Structures\Ind\Ind_Shed\Jbad_Ind_Shed_02.p3d";
	vehicleClass = "jbad_afghan_houses";
	mapSize = 0.89;
	cost = 10000;
	selectionDamage = "DamT_1";
	class DestructionEffects: DestructionEffects
	{
		class Ruin1
		{
			simulation = "ruin";
			type = "\Jbad_Structures\Ind\Ind_Shed\Jbad_Ind_Shed_02_ruins.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class AnimationSources
	{
		class HitZone_1_source
		{
			source = "Hit";
			hitpoint = "HitZone_1_hitpoint";
			raw = 1;
		};
	};
	class HitPoints
	{
		class HitZone_1_hitpoint
		{
			armor = 0.05;
			material = -1;
			name = "dam1";
			visual = "dam1";
			passThrough = 0.0;
			convexComponent = "dam1";
			radius = 0.3;
			explosionShielding = 30;
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
	};
	class Damage
	{
		tex[] = {};
		mat[] = {};
	};
};