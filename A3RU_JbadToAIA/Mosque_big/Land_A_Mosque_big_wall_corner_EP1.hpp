class Land_A_Mosque_big_wall_corner_EP1: House_F
{
	scope = 1;
	scopeCurator = 1;
	author = "Milkman & Smokedog";
	displayName = "Mosque Wall Corner";
	model = "\Jbad_Structures\mosque_big\jbad_mosque_big_wall_corner.p3d";
	armor = 250;
	mapbuilder_filter = "Jbad Structures";
	vehicleClass = "jbad_mosques";
	mapSize = 16.5;
	cost = 40000;
	class DestructionEffects: DestructionEffects
	{
		class Ruin1
		{
			simulation = "ruin";
			type = "\Jbad_Structures\mosque_big\jbad_mosque_big_wall_corner_ruins.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};