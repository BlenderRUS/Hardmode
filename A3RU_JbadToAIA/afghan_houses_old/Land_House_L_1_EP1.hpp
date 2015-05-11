class Land_House_L_1_EP1: Jbad_House_old
{
	scope = 2;
	scopeCurator = 2;
	author = "Milkman & Smokedog";
	armor = 250;
	displayName = "Afghan House 1 Old";
	model = "\Jbad_Structures\afghan_houses_old\jbad_house_1_old.p3d";
	selectionDamage = "DamT_1";
	class DestructionEffects: DestructionEffects
	{
		class Ruin1
		{
			simulation = "ruin";
			type = "\Jbad_Structures\afghan_houses_old\jbad_house_1_old_ruins.p3d";
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
};