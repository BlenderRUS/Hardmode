class Land_House_L_9_EP1: Jbad_House_old
{
	scope = 2;
	scopeCurator = 2;
	author = "Milkman & Smokedog";
	displayName = "Afghan House 9 Old";
	model = "\Jbad_Structures\afghan_houses_old\jbad_house_9_old.p3d";
	armor = 250;
	selectionDamage = "DamT_1";
	class DestructionEffects: DestructionEffects
	{
		class Ruin1
		{
			simulation = "ruin";
			type = "\Jbad_Structures\afghan_houses_old\jbad_house_9_old_ruins.p3d";
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
