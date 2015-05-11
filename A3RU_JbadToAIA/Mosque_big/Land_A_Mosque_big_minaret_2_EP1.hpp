class Land_A_Mosque_big_minaret_2_EP1: House_F
{
	scope = 1;
	scopeCurator = 1;
	author = "Milkman & Smokedog";
	displayName = "Minaret2";
	model = "\Jbad_Structures\mosque_big\jbad_mosque_big_minaret_2.p3d";
	armor = 1000;
	mapbuilder_filter = "Jbad Structures";
	vehicleClass = "jbad_mosques";
	mapSize = 16.5;
	cost = 40000;
	ladders[] = {{ "start1","end1" }};
	selectionDamage = "DamT_1";
	replaceDamagedHitpoints[] = {"HitZone_1_Hitpoint"};
	replaceDamaged = "Land_jbad_mosque_big_minaret_2_dam";
	class DestructionEffects: DestructionEffects
	{
		class Ruin1
		{
			simulation = "ruin";
			type = "\Jbad_Structures\mosque_big\jbad_mosque_big_minaret_2_ruins.p3d";
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
			material = 20;
			name = "dam1";
			visual = "dam1";
			passThrough = 0.08;
			convexComponent = "dam1";
			radius = 50;
			explosionShielding = 0.125;
			minimalHit = 0.01;
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