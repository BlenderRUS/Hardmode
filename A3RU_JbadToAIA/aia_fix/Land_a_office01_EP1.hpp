scope = 1;
armor = 500;
model = "\ca\Structures_E\HouseA\A_Office01\A_Office01_ep1.p3d";
ladders[] = {{ "start1","end1" },{ "start2","end2" },{ "start3","end3" }};
class DestructionEffects: DestructionEffects
{
	class Ruin1
	{
		simulation = "ruin";
		type = "\ca\Structures_E\HouseA\A_Office01\A_Office01_ruins_ep1.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class HitPoints
{
	class Hit1
	{
		armor = 1;
		material = -1;
		name = "dam 1";
		visual = "damT1";
		passThrough = 0;
		convexComponent = "dam 1";
		class DestructionEffects
		{
			class Dust
			{
				simulation = "particles";
				type = "HousePartDust";
				position = "";
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
		};
	};
};
class Damage
{
	tex[] = {};
	mat[] = {};
};