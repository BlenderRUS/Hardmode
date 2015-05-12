scope = 1;
scopeCurator = 1;
armor = 1000;
author = "Milkman & Smokedog";
mapbuilder_filter = "Jbad Structures";
vehicleClass = "jbad_mosques";
mapSize = 16.5;
cost = 40000;
displayName = "Small Mosque";
model = "\Jbad_Structures\afghan_house_a\A_Mosque_small\Jbad_A_Mosque_small_1.p3d";
selectionDamage = "DamT_1";
replaceDamagedHitpoints[] = {"HitZone_1_Hitpoint","HitZone_3_Hitpoint","HitZone_3_Hitpoint"};
replaceDamaged = "Land_Jbad_A_Mosque_small_1_dam";
class DestructionEffects: DestructionEffects
{
	class Ruin1
	{
		simulation = "ruin";
		type = "\Jbad_Structures\afghan_house_a\A_Mosque_small\Jbad_A_Mosque_small_1_ruins.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class HitPoints
{
	class HitZone_1_hitpoint
	{
		armor = 0.152;
		material = -1;
		name = "dam1";
		visual = "dam1";
		passThrough = 0.0;
		convexComponent = "dam1";
		radius = 0.01;
		explosionShielding = 10;
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
		armor = 0.1;
		material = -1;
		name = "dam2";
		visual = "dam2";
		passThrough = 0.0;
		convexComponent = "dam2";
		radius = 0.01;
		explosionShielding = 10;
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
		armor = 0.1;
		material = -1;
		name = "dam3";
		visual = "dam3";
		passThrough = 0.0;
		convexComponent = "dam3";
		radius = 0.01;
		explosionShielding = 10;
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
};