class a3ru_ammobox_ind_supp_base : Box_FIA_Support_F {
	vehicleClass =	"a3ru_box_ind";
	displayName = "Ящик независимых (пусто)";
	X_SCOPE(1)
	type = 0;
	transportMaxWeapons = 20;
	transportMaxMagazines = 200;
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class a3ru_ammobox_ind_weap_base : EAST_Box_Base {
	vehicleClass =	"a3ru_box_ind";
	displayName = "Оружие независимых (пусто)";
	model = "rhsafrf\addons\rhs_weapons\crates\rhs_7ya37_1";
	icon = "iconCrateLarge";
	X_SCOPE(1)
	type = 0;
	transportMaxWeapons = 30;
	transportMaxMagazines = 200;
	
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
}; 

class hmg_box_ins_metis : a3ru_ammobox_ind_supp_base {
	X_SCOPE(2)
	displayName = "Независимые: Метис 1 шт. + 2 ТПК";
	class TransportBackpacks { X_BACK(hmg_metis_ruck2,1) };
	class TransportWeapons { X_WEAP(CUP_launch_Metis,1) };
};

class hmg_box_ins_metism1 : hmg_box_ins_metis {
	X_SCOPE(2)
	displayName = "Независимые: Метис-М1 1 шт. + 2 ТПК";
	class TransportWeapons { X_WEAP(MetisM1,1) };
};

class hmg_box_ins_rifles_g3 : a3ru_ammobox_ind_weap_base {
	X_SCOPE(2)
	displayName = "Независимые: винтовки G3 9 шт.";
	class TransportWeapons {
		X_WEAP(hlc_rifle_g3a3,2)
		X_WEAP(hlc_rifle_psg1,2)
		X_WEAP(hlc_rifle_hk51,3)
		X_WEAP(hlc_rifle_hk53,2)
	};
	class transportMagazines {
		X_MAG(hlc_20Rnd_762x51_B_G3,60)
		X_MAG(hlc_20rnd_762x51_T_G3,20)
		X_MAG(hlc_50rnd_762x51_M_G3,10)
	};
	class transportItems {
		X_ITEM(HLC_Optic_ZFSG1,3)
	};
};
class hmg_box_ins_rifles_fn : a3ru_ammobox_ind_weap_base {
	X_SCOPE(2)
	displayName = "Независимые: винтовки FN 8 шт";
	class TransportWeapons {
		X_WEAP(hlc_rifle_l1a1slr,2)
		X_WEAP(hlc_rifle_FAL5061,2)
		X_WEAP(hlc_rifle_osw_GL,2)
		X_WEAP(hlc_rifle_falosw,2)
	};
	class transportMagazines {
		X_MAG(hlc_20Rnd_762x51_B_G3,60)
		X_MAG(hlc_20rnd_762x51_T_G3,20)
		X_MAG(hlc_50rnd_762x51_M_G3,10)
	};
	class transportItems {
		X_ITEM(hlc_optic_suit,2)
		X_ITEM(hlc_optic_PVS4FAL,2)
	};
};
class hmg_box_ins_rifles_ak : a3ru_ammobox_ind_weap_base {
	X_SCOPE(2)
	displayName = "Независимые: патроны, ГП и аксессуары к АК";
	class transportMagazines {
		X_MAG(rhs_30Rnd_762x39mm,20)
		X_MAG(rhs_30Rnd_545x39_AK,20)
		X_MAG(rhs_30Rnd_545x39_AK_green,10)
		X_MAG(rhs_30Rnd_762x39mm_tracer,10)
		X_MAG(rhs_VOG25,40)
		X_MAG(rhs_GRD40_White,20)
	};
	class transportItems {
		X_ITEM(rhs_acc_ekp1,4)
		X_ITEM(rhs_acc_pso1m2,4)
	};
};

class hmg_box_ins_rifles_snip : a3ru_ammobox_ind_weap_base {
	X_SCOPE(2)
	displayName = "Независимые: снайперки - 6 шт.";
	class TransportWeapons {
		X_WEAP(hlc_rifle_psg1,2)
		X_WEAP(hlc_rifle_M14DMR,2)
		X_WEAP(hlc_rifle_c1A1,2)
	};
	class transportMagazines {
		X_MAG(hlc_20Rnd_762x51_B_G3,30)
		X_MAG(hlc_20Rnd_762x51_B_M14,30)
		X_MAG(hlc_20Rnd_762x51_B_fal,30)
	};
	class transportItems {
		X_ITEM(HLC_Optic_ZFSG1,2)
		X_ITEM(hlc_optic_suit,2)
		X_ITEM(hlc_optic_LRT_m14,2)
	};
};

class hmg_box_ins_rifles_lmg : a3ru_ammobox_ind_weap_base {
	X_SCOPE(2)
	displayName = "Независимые: LMG - 3 шт.";
	class TransportWeapons {
		X_WEAP(hlc_rifle_rpk,1)
		X_WEAP(hlc_lmg_minimi,1)
		X_WEAP(hlc_rifle_aughbar_t,1)
	};
	class transportMagazines {
		X_MAG(rhs_30Rnd_762x39mm,10)
		X_MAG(rhsusf_100Rnd_556x45_soft_pouch,8)
		X_MAG(hlc_40Rnd_556x45_B_AUG,16)
	};
};				
class hmg_box_ins_rifles_hmg : a3ru_ammobox_ind_weap_base {
	X_SCOPE(2)
	displayName = "Независимые: HMG - 3 шт.";
	class TransportWeapons {
		X_WEAP(hlc_lmg_m60,1)
		X_WEAP(rhs_weap_pkm,1)
		X_WEAP(rhs_weap_m240B,1)
	};
	class transportMagazines {
		X_MAG(hlc_100Rnd_762x51_B_M60E4,8)
		X_MAG(rhs_100Rnd_762x54mmR,4)
		X_MAG(rhs_100Rnd_762x54mmR_green,4)
		X_MAG(rhsusf_100Rnd_762x51,8)
	};
	class transportItems {
		X_ITEM(ACE_EarPlugs,3)
	};				
};

class hmg_box_ins_radio_st : a3ru_ammobox_ind_supp_base {
	X_SCOPE(2)
	displayName = "Независимые: радиосвязь";
	class transportItems {
		X_ITEM(tf_ex8550,20)
	};
	class transportBackpacks {
		X_BACK(tf_anprc155_coyote,3)
	};
};
class hmg_box_ins_stuff_St : a3ru_ammobox_ind_supp_base {
	X_SCOPE(2)
	displayName = "Независимые: навигация";
	class transportItems {
		X_ITEM(ItemMap,5)
		X_ITEM(ItemSMGR,10)
		X_ITEM(ItemGPS,2)
		X_ITEM(ACE_Vector,2)
		X_ITEM(ACE_EarPlugs,30)
	};
	class transportWeapons {
		X_WEAP(Binocular,4)
	};
};
class hmg_box_ins_rifles_h_snip : a3ru_ammobox_ind_weap_base {
	X_SCOPE(2)
	displayName = "Независимые: ящик с М107";
	class TransportWeapons {
		X_WEAP(Trixie_M107_Green,1)
	};
	class transportMagazines {
		X_MAG(Trixie_10x127_Mag,5)
		X_MAG(Trixie_10x127_HE_Mag,5)
		X_MAG(Trixie_10x127_HEIAP_Mag,5)
		X_MAG(Trixie_10x127_Amax_Mag,5)
	
	};
	class transportItems {
		X_ITEM(ACE_EarPlugs,3)
		X_ITEM(Trixie_LSMARK4_Delta_Camo,1)
		X_ITEM(ACE_Vector,1)
	};
};

class hmg_box_ins_stuff_gil : a3ru_ammobox_ind_supp_base {
	X_SCOPE(2)
	displayName = "Независимые: гилли";
	class transportItems {
		X_ITEM(TRYK_H_ghillie_over_green,1)
		X_ITEM(TRYK_H_ghillie_top_green,1)
		X_ITEM(TRYK_H_ghillie_top_headless_green,1)
		X_ITEM(TRYK_H_ghillie_over,1)
		X_ITEM(TRYK_H_ghillie_top,1)
		X_ITEM(TRYK_H_ghillie_top_headless,1)
	};
};