class CfgMarkers
{
	class Replay_Infantry
	{
		name = "[Replay] Infantry";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconman_ca.paa";
		color[] = {0,0,0,1};
		size = 16;
		shadow = 0;
		scope = 0;
	};
	class Replay_Wounded: Replay_Infantry
	{
		name = "[Replay] Wounded";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconmanmedic_ca.paa";
	};
	class Replay_Hit: Replay_Infantry
	{
		name = "[Replay] Hit";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconexplosiveat_ca.paa";
		color[] = {1,0,0,1};
		size = 32;
	};
	class Replay_APC: Replay_Infantry
	{
		name = "[Replay] APC";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconapc_ca.paa";
	};
	class Replay_Tank: Replay_Infantry
	{
		name = "[Replay] Tank";
		icon = "\A3\ui_f\data\map\VehicleIcons\icontank_ca.paa";
	};
	class Replay_Car: Replay_Infantry
	{
		name = "[Replay] Car";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconcar_ca.paa";
	};
	class Replay_Parachute: Replay_Infantry
	{
		name = "[Replay] Parachute";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconparachute_ca.paa";
	};
	class Replay_Plane: Replay_Infantry
	{
		name = "[Replay] Plane";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconplane_ca.paa";
	};
	class Replay_Helicopter: Replay_Infantry
	{
		name = "[Replay] Helicopter";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconhelicopter_ca.paa";
	};
	class Replay_Ship: Replay_Infantry
	{
		name = "[Replay] Ship";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconship_ca.paa";
	};
	class Replay_Truck: Replay_Infantry
	{
		name = "[Replay] Truck";
		icon = "\A3\ui_f\data\map\VehicleIcons\icontruck_ca.paa";
	};
};