class Land_Ind_FuelStation_Feed_EP1: Strategic
{
	scope = 1;
	scopeCurator = 1;
	author = "Milkman & Smokedog";
	displayName = "Fuel Pump";
	armor = 10;
	//destrType = 3;
	transportFuel = 50000;
	model = "\Jbad_Structures\Ind\Ind_FuelStation\Jbad_Ind_FuelStation_Feed.p3d";
	vehicleClass = "jbad_afghan_houses";
	mapSize = 0.89;
	cost = 10000;
	memoryPointSupply = "Refuel_pos";
	class DestructionEffects
	{
		class FuelStationSmk1
		{
			simulation = "particles";
			type = "FuelStationSmk1";
			position = "";
			intensity = 0.15;
			interval = 1;
			lifeTime = 0.001;
		};
		class Light1
		{
			simulation = "light";
			type = "ObjectDestructionLight";
			position = "DestructionFire";
			intensity = 0.001;
			interval = 1;
			lifeTime = 0.5;
		};
		class FuelFire1
		{
			simulation = "particles";
			type = "FuelFire1";
			position = "DestructionFire";
			intensity = 0.15;
			interval = 1;
			lifeTime = 0.5;
		};
		class FuelDestr
		{
			simulation = "destroy";
			type = "FuelStationDestr";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
		class FuelSmoke1
		{
			simulation = "particles";
			type = "FuelFire1";
			position = "ObjectDestructionSmokeFuelS";
			intensity = 0.15;
			interval = 1;
			lifeTime = 0.5;
		};
		class FuelSmoke2
		{
			simulation = "particles";
			type = "ObjectDestructionSmokeFuelS1_2";
			position = "DestructionFire";
			intensity = 0.15;
			interval = 1;
			lifeTime = 0.5;
		};
	};
};