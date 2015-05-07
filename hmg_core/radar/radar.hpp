class APC_Tracked_03_base_F;
class RHS_M2A2_Base : APC_Tracked_03_base_F {
radartype = 8;
};
class RHS_M2A3_BUSKIII;
class RHS_M3A3_BUSKIII: RHS_M2A3_BUSKIII
	{
		displayName = "M3A3 (BUSK III)";
		radartype = 8;
		commanderCanSee = 1+16+8+32;
		gunnerCanSee = 1+16+8+32;
		transportSoldier = 3;
		weapons[] = {"RHS_weap_M242BC","rhs_weap_m240veh","Rhs_weap_TOW_Launcher"};
		magazines[] = {"rhs_mag_1100Rnd_762x51_M240","rhs_mag_1100Rnd_762x51_M240","rhs_mag_2Rnd_TOW","rhs_mag_2Rnd_TOW","rhs_mag_2Rnd_TOW","rhs_mag_2Rnd_TOW","rhs_mag_2Rnd_TOW","rhs_mag_2Rnd_TOW","rhs_mag_70Rnd_25mm_M242_APFSDS","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_70Rnd_25mm_M242_APFSDS","rhs_mag_70Rnd_25mm_M242_APFSDS","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_230Rnd_25mm_M242_HEI"};		

	};
class RHS_M3A3_BUSKIII_wd: RHS_M3A3_BUSKIII
	{
		faction = "rhs_faction_usarmy_wd";
		displayName = "M3A3 (BUSK III)";
		radartype = 8;
		transportSoldier = 3;
		weapons[] = {"RHS_weap_M242BC","rhs_weap_m240veh","Rhs_weap_TOW_Launcher"};
		magazines[] = {"rhs_mag_1100Rnd_762x51_M240","rhs_mag_1100Rnd_762x51_M240","rhs_mag_2Rnd_TOW","rhs_mag_2Rnd_TOW","rhs_mag_2Rnd_TOW","rhs_mag_2Rnd_TOW","rhs_mag_2Rnd_TOW","rhs_mag_2Rnd_TOW","rhs_mag_70Rnd_25mm_M242_APFSDS","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_70Rnd_25mm_M242_APFSDS","rhs_mag_70Rnd_25mm_M242_APFSDS","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_230Rnd_25mm_M242_HEI"};		
		hiddenSelectionsTextures[] = 
		{
			"\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\base_buskiii_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\a3_buskiii_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa"
		};

	};

class wheeled_APC;
class StrykerBase_DG1DES: wheeled_APC
	{
		radarType = 8;
		commanderCanSee = 1+16;
		gunnerCanSee = 1+16;
		driverCanSee = 1+16;
	};
class RHS_UH60_Base;
class RHS_UH60M_base : RHS_UH60_Base {
radartype = 8;
};
class Heli_Transport_02_base_F;
class RHS_CH_47F_base: Heli_Transport_02_base_F {
radartype = 8;
};