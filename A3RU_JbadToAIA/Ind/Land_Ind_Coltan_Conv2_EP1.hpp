class Land_Ind_Coltan_Conv2_EP1: House_F
{
	scope = 1;
	scopeCurator = 1;
	author = "Milkman & Smokedog";
	mapbuilder_filter = "Jbad Structures";
	displayName = "Ind Conv2";
	model = "\Jbad_Structures\Ind\Ind_Coltan_Mine\Jbad_Ind_Coltan_Conv2.p3d";
	armor = 200;
	vehicleClass = "jbad_misc";
	mapSize = 5.5;
	cost = 40000;
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
			armor = 0.25;
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