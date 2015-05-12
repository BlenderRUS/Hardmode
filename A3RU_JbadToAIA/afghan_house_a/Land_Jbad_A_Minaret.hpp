displayName = "Minaret";
mapbuilder_filter = "Jbad Structures";
author = "Milkman & Smokedog";
scope = 1;
scopeCurator = 1;
armor = 1000;
vehicleClass = "jbad_afghan_houses";
mapSize = 16.5;
cost = 40000;
model = "\Jbad_Structures\afghan_house_a\A_Minaret\Jbad_A_Minaret.p3d";
selectionDamage = "DamT_1";
replaceDamagedHitpoints[] = {"HitZone_1_Hitpoint"};
replaceDamaged = "Land_Jbad_A_Minaret_dam";
class DestructionEffects: DestructionEffects
{
	class Ruin1
	{
		simulation = "ruin";
		type = "\Jbad_Structures\afghan_house_a\A_Minaret\Jbad_A_Minaret_ruins.p3d";
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
		armor = 0.085;
		material = -1;
		name = "dam1";
		visual = "dam1";
		passThrough = 0.0;
		convexComponent = "dam1";
		radius = 0.4;
		explosionShielding = 60;
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