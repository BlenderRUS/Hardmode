	// US ARMY IBCT ННС Scout platoon UCP 2005
class us_army_ucp_2005_sscout : rhsusf_army_ocp_rifleman {
			UCP_Uni_Macro	
			icon = "iconMan";
			items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A", "RH_pas13cl"};
			displayName = "Scout(ucp)";
        	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemRadio"};
			weapons[] = {"rhs_weap_m4_m320","Throw","Put"};
			respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put"};
			magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red"
			};
			Backpack = "rhsusf_assault_eagleaiii_ucp_scout";
};
class us_army_ucp_2005_scout : us_army_ucp_2005_sscout{
			icon = "iconManAT";
			displayName = "Scout Javelin (ucp)";
			items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A", "RH_pas13cl"};
	        linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemRadio"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemRadio"};
			weapons[] = {"rhs_weap_m4_m320","Throw","Put","rhs_weap_fgm148"};
			respawnWeapons[] = {"rhs_weap_m4_m320","Throw","Put","rhs_weap_fgm148"};
			magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"rhs_fgm148_magazine_AT"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"rhs_fgm148_magazine_AT"
			};
			Backpack = "rhsusf_assault_eagleaiii_ucp_scout";
};
class us_army_ucp_2005_ASLscout : us_army_ucp_2005_sscout{
			icon = "iconManLeader";
			displayName = "Asst Squad leader (ucp)";
			items[] = {"G_Combat","AGM_Bandage", "AGM_Bandage", "AGM_Bandage", "rhsusf_acc_anpeq15A", "rhsusf_acc_ACOG3_USMC"};
			linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemRadio", "ItemSMGR", "Laserdesignator"};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_Rifleman","ItemCompass","ItemWatch", "NVGoggles","ItemRadio", "ItemSMGR", "Laserdesignator"};
			magazines[] = 		{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M433_HEDP"
			};
			respawnMagazines[] = 
			{
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"rhs_mag_30Rnd_556x45_M855A1_Stanag",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"30Rnd_556x45_Stanag_Tracer_Red",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M433_HEDP"
			};
			Backpack = "rhsusf_assault_eagleaiii_ucp_scoutL";
};
class us_army_ucp_2005_Lscout : us_army_ucp_2005_ASLscout {
			displayName = "Scout Squad leader (ucp)";
			backpack = "tf_rt1523g_big_rhs";
};
class us_army_ucp_2005_PLTSscout : us_army_ucp_2005_Lscout {
			displayName = "Scout platoon sergeant (ucp)";
};

class us_army_ucp_2005_PLTLscout : us_army_ucp_2005_ASLscout {
			icon = "iconMan";
			displayName = "Scout platoon leader (ucp)";
};