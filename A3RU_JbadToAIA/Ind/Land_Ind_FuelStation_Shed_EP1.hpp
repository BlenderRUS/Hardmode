class Land_Ind_FuelStation_Shed_EP1: House_F
{
	scope = 1;
	scopeCurator = 1;
	author = "Milkman & Smokedog";
	displayName = "Fuel Shed";
	armor = 500;
	model = "\Jbad_Structures\Ind\Ind_FuelStation\Jbad_Ind_FuelStation_Shed.p3d";
	vehicleClass = "jbad_afghan_houses";
	mapSize = 0.89;
	cost = 10000;
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
	};
};