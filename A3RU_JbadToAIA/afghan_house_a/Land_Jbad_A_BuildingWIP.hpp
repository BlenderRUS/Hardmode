displayName = "Building WIP";
mapbuilder_filter = "Jbad Structures";
author = "Milkman & Smokedog";
scope = 1;
scopeCurator = 1;
armor = 500;
vehicleClass = "jbad_afghan_houses";
mapSize = 16.5;
cost = 40000;
model = "\Jbad_Structures\afghan_house_a\A_BuildingWIP\jbad_A_BuildingWIP.p3d";
ladders[] = {{ "start1","end1" },{ "start2","end2" }};
class DestructionEffects: DestructionEffects
{
	class Ruin1
	{
		simulation = "ruin";
		type = "\Jbad_Structures\afghan_house_a\A_BuildingWIP\Jbad_A_BuildingWIP_ruins.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};