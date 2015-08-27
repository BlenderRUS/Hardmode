class a3ru_ammobox_us_small_base : Box_NATO_Ammo_F {
	X_SCOPE(1)
	vehicleClass =	"a3ru_box_us";
	displayName = "Ящик US мал. (пуст)";
	icon = "iconCrateLarge";
	transportMaxWeapons = 5;
	transportMaxMagazines = 200;
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};

class a3ru_ammobox_us_big_base : Box_NATO_Ammo_F {
	X_SCOPE(1)
	displayName = "Ящик US больш. (пуст)";
	vehicleClass =	"a3ru_box_us";
	transportMaxWeapons = 10;
	transportMaxMagazines = 600;
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};

class a3ru_ammobox_us_gren_base : Box_NATO_Grenades_F {
	X_SCOPE(1)
	displayName = "Ящик US гранаты (пуст)";
	vehicleClass =	"a3ru_box_us";
	transportMaxWeapons = 10;
	transportMaxMagazines = 100;
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};

class a3ru_ammobox_us_launch_base : Box_NATO_Grenades_F {
	X_SCOPE(1)
	displayName = "Ящик US гранатометы (пуст)";
	vehicleClass =	"a3ru_box_us";
	transportMaxWeapons = 10;
	transportMaxMagazines = 100;
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};

class hmg_us_box_gren50: a3ru_ammobox_us_gren_base {
	X_SCOPE(2)
	displayName = "Ящик с гранатами 50 шт. (US)";
	class TransportMagazines {
		X_MAG(rhs_mag_m67,30)
		X_MAG(rhs_mag_mk84,10)
		X_MAG(SmokeShell,10)
	};
};
class hmg_us_box_gren20: a3ru_ammobox_us_gren_base {
	X_SCOPE(2)
	displayName = "Ящик с гранатами 20 шт. (US)";
	class TransportMagazines {
		X_MAG(rhs_mag_m67,10)
		X_MAG(rhs_mag_mk84,10)
		X_MAG(SmokeShell,10)
	};
};
class hmg_us_box_gren10: a3ru_ammobox_us_gren_base {
	X_SCOPE(2)
	displayName = "Ящик с гранатами 10 шт. (US)";
	class TransportMagazines {
		X_MAG(rhs_mag_m67,10)
	};
};
class hmg_us_box_at4heat: a3ru_ammobox_us_launch_base {
	X_SCOPE(2)
	displayName = "Ящик АТ4 (HEAT) 4 шт. (US)";
	class TransportWeapons {
		X_WEAP(rhs_weap_M136,4)
	};
	class TransportMagazines {
		X_MAG(rhs_m136_mag,4)
	};
};

class hmg_us_box_at4hedp: a3ru_ammobox_us_launch_base {
	X_SCOPE(2)
	displayName = "Ящик АТ4 (HEDP) 4 шт. (US)";
	class TransportWeapons {
		X_WEAP(rhs_weap_M136_hedp,4)
	};
	class TransportMagazines {
		X_MAG(rhs_m136_hedp_mag,4)
	};
};

class hmg_us_box_at4hp: a3ru_ammobox_us_launch_base {
	X_SCOPE(2)
	displayName = "Ящик АТ4 (HP) 4 шт. (US)";
	class TransportWeapons {
		X_WEAP(rhs_weap_M136_hp,4)
	};
	class TransportMagazines {
		X_MAG(rhs_m136_hp_mag,4)
	};
};

class hmg_us_box_smaaw : a3ru_ammobox_us_launch_base {
	X_SCOPE(2)
	displayName = "Ящик SMAAW + 4 выстрела. (US)";
	class TransportWeapons {
		X_WEAP(,4)
			class _xx_Trixie_SMAW {
				weapon = "Trixie_SMAW";
				count = 1;
			};

	};
	class TransportMagazines {
		X_MAG(Trixie_SMAW_HEDP,2)
		X_MAG(Trixie_SMAW_HEAA,2)
	};
};

class hmg_us_box_javelin : a3ru_ammobox_us_launch_base {
	X_SCOPE(2)
	displayName = "Ящик Javelin 1 ТПК + 1 КЛУ. (US)";
	class TransportWeapons {
		X_WEAP(rhs_weap_fgm148,1)
	};
	class TransportMagazines {
		X_MAG(rhs_fgm148_magazine_AT,1)
	};
};

//--------------------------------------------------------------------АРМИЯ США
class hmg_us_box_ibct_comp_hq : a3ru_ammobox_us_small_base {
	X_SCOPE(2)
	displayName = "Ящик имущество IBCT Rifle Company HQ 2005 (US)";
	class TransportWeapons {
		X_WEAP(rhs_weap_m240b_elcan,2)
	};
	class TransportMagazines {
		X_MAG(rhsusf_100Rnd_762x51,16)
	};
	class TransportItems {
		X_ITEM(ACE_CableTie,20)
		X_ITEM(RH_pas13cmg,2)
	};
	class TransportBackpacks {
		X_BACK(RHS_M2_Gun_Bag,1)
		X_BACK(RHS_M2_Tripod_Bag,1)
		X_BACK(tf_rt1523g_rhs,6)
	};
};

class hmg_us_box_ibct_comp_hq_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК IBCT Rifle Company HQ (US)";
	class TransportMagazines {
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,35)
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,15)
		X_MAG(CUP_15Rnd_9x19_M9,2)
		X_MAG(rhs_mag_M441_HE,42)
	};
};

class hmg_us_box_ibct_rif_plat_hq_adv : a3ru_ammobox_us_small_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК IBCT Rifle platoon HQ (US)";
	class TransportMagazines {
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,15)
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,6)
	};
};

class hmg_us_box_ibct_rif_squad_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК IBCT Rifle Squad (US)";
	class TransportMagazines {
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,35)
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,10)
		X_MAG(rhsusf_100Rnd_556x45_soft_pouch,16)
		X_MAG(rhs_mag_M441_HE,42)
	};
};

class hmg_us_box_ibct_weap_squad_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК IBCT Weapon Squad (US)";
	class TransportMagazines {
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,25)
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,10)
		X_MAG(rhsusf_100Rnd_762x51,16)
		X_MAG(CUP_15Rnd_9x19_M9,4)
		X_MAG(rhs_fgm148_magazine_AT,6)
	};
};

class hmg_us_box_ibct_comp_hq2015 : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик имущество IBCT Rifle Company HQ 2015 (US)";
	class TransportWeapons {
		X_WEAP(rhs_weap_m240b_elcan,2)
	};
	class TransportMagazines {
		X_MAG(rhsusf_100Rnd_762x51_m80a1epr,16)
	};
	class TransportItems {
		X_ITEM(ACE_CableTie,20)
		X_ITEM(B_UavTerminal,2)
		X_ITEM(RH_pas13cmg,2)
	};
	class TransportBackpacks {
		X_BACK(tf_rt1523g_rhs,6)
		X_BACK(B_UAV_01_backpack_F,2)
	};
};

class hmg_us_box_sbct_comp_hq : a3ru_ammobox_us_small_base {
	X_SCOPE(2)
	displayName = "Ящик имущество SBCT Rifle Company HQ (US)";
	class TransportItems {
		X_ITEM(ACE_CableTie,20)
	};
	class TransportBackpacks {
		X_BACK(RHS_M2_Gun_Bag,1)
		X_BACK(RHS_M2_Tripod_Bag,1)
	};
};

class hmg_us_box_sbct_snip : a3ru_ammobox_us_small_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК SBCT Sniper Team (US)";
	class TransportMagazines {
		X_MAG(Trixie_10x127_Mag,2)
		X_MAG(Trixie_10x127_HE_Mag,2)
		X_MAG(Trixie_10x127_HEIAP_Mag,2)
	};
};

class hmg_us_box_sbct_rif_squad_adv: a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик имущество и доп. БК SBCT Rifle squad (US)";
	class TransportItems {
		X_ITEM(Trixie_LSMARK4_Delta,1)
	};
	class TransportWeapons {
		X_WEAP(Trixie_M24_Black,1)
	};
	class TransportMagazines {
		X_MAG(Trixie_5x762_Mag,10)
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,35)
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,15)
		X_MAG(rhsusf_100Rnd_556x45_soft_pouch,12)
		X_MAG(rhs_mag_M441_HE,42)
		X_MAG(rhs_fgm148_magazine_AT,3)
	};
};

class hmg_us_box_sbct_weap_squad_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК SBCT Weapon Squad (US)";
	class TransportMagazines {
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,25)
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,10)
		X_MAG(rhsusf_100Rnd_762x51,16)
		X_MAG(CUP_15Rnd_9x19_M9,4)
	};
};

class hmg_us_box_sbct_mgs : a3ru_ammobox_us_small_base {
	X_SCOPE(2)
	displayName = "Ящик SBCT MSG Stryker (US)";
	class TransportWeapons {
		X_WEAP(rhs_weap_m240b_elcan,1)
	};
	class TransportMagazines {
		X_MAG(rhsusf_100Rnd_762x51,8)
	};
	class TransportItems {
		X_ITEM(RH_pas13cmg,1)
	};
};

class hmg_us_box_hbct_rif_comp_hq_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик имущество HBCT Rifle Company 2005 (US)";
	class TransportWeapons {
		X_WEAP(rhs_weap_m240b_elcan,2)
	};
	class TransportMagazines {
		X_MAG(rhsusf_100Rnd_762x51,16)
	};
	class TransportItems {
		X_ITEM(RH_pas13cmg,2)
	};
};

class hmg_us_box_hbct_rif_squad_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик имущество и доп. БК HBCT Rifle Squad (US)";
	class TransportWeapons {
		X_WEAP(rhs_weap_m240b_elcan,1)
	};
	class TransportMagazines {
		X_MAG(rhsusf_100Rnd_762x51,8)
		X_MAG(30Rnd_556x45_Stanag,35)
		X_MAG(30Rnd_556x45_Stanag_Tracer_Red,15)
		X_MAG(rhs_200rnd_556x45_M_SAW,6)
		X_MAG(rhs_mag_M433_HEDP,42)
		X_MAG(rhs_fgm148_magazine_AT,1)
	};
	class TransportItems {
		X_ITEM(RH_pas13cmg,1)
	};
};

class hmg_us_box_HBCT_sniper_section_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик имущество HBCT sniper section 2005 (US)";
	class TransportWeapons {
		X_WEAP(Trixie_M107_Black,1)
		X_WEAP(Trixie_M24_Black_Clean,1)
	};
	class TransportMagazines {
		X_MAG(Trixie_10x127_Mag,3)
		X_MAG(Trixie_10x127_HE_Mag,3)
		X_MAG(Trixie_10x127_HEIAP_Mag,3)
		X_MAG(Trixie_5x762_Mag,20)
	};
	class TransportItems {
		X_ITEM(rhsusf_acc_LEUPOLDMK4_2,1)
		X_ITEM(rhsusf_acc_LEUPOLDMK4,1)
		X_ITEM(RH_pas13ch,1)
		X_ITEM(RH_anpvs10,1)
	};
};

class hmg_us_box_HBCT_scout_platoon_section_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик имущество HBCT Scout section 2005 (US)";
	class TransportWeapons {
		X_WEAP(rhs_weap_m240b_elcan,1)
	};
	class TransportMagazines {
		X_MAG(rhsusf_100Rnd_762x51,8)
		X_MAG(DemoCharge_remote_mag,3)
		X_MAG(SatchelCharge_Remote_Mag,3)
	};
	class TransportItems {
		X_ITEM(RH_pas13cmg,1)
		X_ITEM(ACE_M26_Clacker,1)
	};
};

class hmg_us_box_HBCT_scout_platoon_hq_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик имущество HBCT Scout Platoon HQ 2005 (US)";
	class TransportWeapons {
		X_WEAP(rhs_weap_m240b_elcan,1)
	};
	class TransportMagazines {
		X_MAG(rhsusf_100Rnd_762x51,8)
		X_MAG(DemoCharge_remote_mag,3)
		X_MAG(SatchelCharge_Remote_Mag,3)
	};
	class TransportItems {
		X_ITEM(RH_pas13cmg,1)
		X_ITEM(ACE_M26_Clacker,1)
	};
};

class hmg_us_box_HBCT_tank_comp_hq : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик доп.бк HBCT tank Company 2005 (US)";
	class TransportMagazines {
		X_MAG(CUP_15Rnd_9x19_M9,18)
		X_MAG(30Rnd_556x45_Stanag,40)
		X_MAG(30Rnd_556x45_Stanag_Tracer_Red,16)
		X_MAG(rhs_mag_M441_HE,16)
		X_MAG(rhs_mag_M433_HEDP,24)
		X_MAG(rhs_mag_m714_White,24)
	};
};
class hmg_us_box_hbct_tank_platoon : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик  доп. БК HBCT Tank platoon (US)";
	class TransportMagazines {
		X_MAG(CUP_15Rnd_9x19_M9,24)
		X_MAG(30Rnd_556x45_Stanag,30)
		X_MAG(30Rnd_556x45_Stanag_Tracer_Red,16)
	};
};	
class hmg_us_box_Abct_rif_squad : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик  доп. БК ABCT Rifle Squad (US)";
	class TransportMagazines {
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,35)
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,15)
		X_MAG(rhsusf_200Rnd_556x45_soft_pouch,12)
		X_MAG(rhs_mag_M433_HEDP,42)
		X_MAG(rhs_fgm148_magazine_AT,1)
	};
};

class hmg_us_box_Abct_rif_squad_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик имущество ABCT Rifle Squad 2015 (US)";
	class TransportWeapons {
		X_WEAP(rhs_weap_m240b_elcan,1)
		X_WEAP(rhs_weap_M590_5RD,1)
	};
	class TransportMagazines {
		X_MAG(rhsusf_100Rnd_762x51_m80a1epr,8)
		X_MAG(rhsusf_5Rnd_00Buck,14)
	};
	class TransportItems {
		X_ITEM(RH_pas13cmg,1)
	};
};

class hmg_us_box_Abct_rif_comp_hq_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик имущество ABCT Rifle Company 2015 (US)";
	class TransportItems {
		X_ITEM(RH_pas13ch,1)
	};
	class TransportBackpacks {
		X_BACK(RHS_Mk19_Gun_Bag,1)
		X_BACK(RHS_Mk19_Tripod_Bag,1)
		X_BACK(tf_rt1523g_black,6)
		X_BACK(B_rhsusf_B_BACKPACK,2)
	};
};

class hmg_us_box_Abct_sniper_section_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик имущество ABCT sniper section 2015 (US)";
	class TransportWeapons {
		X_WEAP(Trixie_M107_Black,1)
		X_WEAP(rhs_weap_XM2010,1)
		X_WEAP(RH_m110,1)
		X_WEAP(rhs_weap_M320,1)
	};
	class TransportMagazines {
		X_MAG(Trixie_10x127_Mag,3)
		X_MAG(Trixie_10x127_HE_Mag,3)
		X_MAG(Trixie_10x127_HEIAP_Mag,3)
		X_MAG(rhsusf_5Rnd_300winmag_xm2010,20)
		X_MAG(rhsusf_20Rnd_762x51_m993_Mag,2)
		X_MAG(RH_20Rnd_762x51_Mk316LR,1)
		X_MAG(rhsusf_20Rnd_762x51_m118_special_Mag,2)
		X_MAG(rhs_mag_M433_HEDP,10)
		X_MAG(rhs_mag_M441_HE,10)
	};
	class TransportItems {
		X_ITEM(rhsusf_acc_LEUPOLDMK4_2,2)
		X_ITEM(rhsusf_acc_LEUPOLDMK4,1)
		X_ITEM(rhsusf_acc_M2010S,1)
		X_ITEM(rhsusf_acc_harris_bipod,1)
		X_ITEM(RH_m110sd_t,1)
		X_ITEM(RH_HBLM,1)
		X_ITEM(RH_pas13cl,1)
		X_ITEM(RH_pas13ch,1)
		X_ITEM(RH_anpvs10,1)
	};
};

class hmg_us_box_Abct_scout_platoon_section_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик имущество ABCT Scout section 2015 (US)";
	class TransportWeapons {
		X_WEAP(rhs_weap_m240b_elcan,2)
		X_WEAP(rhs_weap_M590_5RD,2)
	};
	class TransportMagazines {
		X_MAG(rhsusf_100Rnd_762x51_m80a1epr,8)
		X_MAG(rhsusf_5Rnd_00Buck,14)
		X_MAG(DemoCharge_remote_mag,3)
		X_MAG(SatchelCharge_Remote_Mag,3)
	};
	class TransportItems {
		X_ITEM(RH_pas13cmg,2)
		X_ITEM(ACE_M26_Clacker,1)
		X_ITEM(MineDetector,2)
	};
};

class hmg_us_box_Abct_scout_platoon_hq_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик имущество ABCT Scout Platoon HQ 2015 (US)";
	class TransportWeapons {
		X_WEAP(rhs_weap_m240b_elcan,2)
		X_WEAP(rhs_weap_M590_5RD,2)
	};
	class TransportMagazines {
		X_MAG(rhsusf_100Rnd_762x51_m80a1epr,8)
		X_MAG(rhsusf_5Rnd_00Buck,14)
		X_MAG(DemoCharge_remote_mag,3)
		X_MAG(SatchelCharge_Remote_Mag,3)
	};
	class TransportItems {
		X_ITEM(RH_pas13cmg,2)
		X_ITEM(ACE_M26_Clacker,1)
		X_ITEM(MineDetector,2)
	};
	class TransportBackpacks {
		X_BACK(B_rhsusf_B_BACKPACK,3)
	};
};

class hmg_us_box_Abct_tank_comp_hq : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик доп.бк ABCT tank Company 2015 (US)";
	class TransportMagazines {
		X_MAG(CUP_15Rnd_9x19_M9,18)
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,40)
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,16)
		X_MAG(rhs_mag_M441_HE,16)
		X_MAG(rhs_mag_M433_HEDP,24)
		X_MAG(rhs_mag_m714_White,24)
		X_MAG(DemoCharge_Remote_Mag,3)
	};
};

class hmg_us_box_Abct_tank_platoon : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик  доп. БК ABCT Tank platoon (US)";
	class TransportMagazines {
		X_MAG(CUP_15Rnd_9x19_M9,24)
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,30)
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,16)
	};
};

//--------------------------------------------------------------------КМП 2015
class hmg_us_box_usmc_comp_hq2015 : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик имущество USMC Company HQ 2015 (US)";
	class TransportWeapons {
		X_WEAP(rhs_weap_m249_pip_L,9)
		X_WEAP(rhs_weap_M590_5RD,2)
		X_WEAP(STI_M32,2)
	};
	class TransportMagazines {
		X_MAG(rhsusf_200Rnd_556x45_soft_pouch,54)
		X_MAG(rhsusf_5Rnd_00Buck,14)
		X_MAG(6Rnd_HE_Grenade_M32_pack,9)
		X_MAG(6Rnd_SmokeGreen_M32_pack,6)
		X_MAG(6Rnd_Smoke_Grenade_M32_pack,6)
	};
	class TransportItems {
		X_ITEM(RH_pas13cmg,9)
	};
	class TransportBackpacks {
		X_BACK(B_rhsusf_B_BACKPACK,2)
	};
};

class hmg_us_box_usmc_comp_hq2015_adv : a3ru_ammobox_us_small_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC Company HQ 2015 (US)";
	class TransportMagazines {
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,30)
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,12)
	};
};

class hmg_us_box_usmc_rif_pl2015_adv : a3ru_ammobox_us_small_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC Platoon HQ 2015 (US)";
	class TransportMagazines {
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,20)
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,8)
	};
};

class hmg_us_box_usmc_rif_sq2015_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC Rifle Squad 2015 (US)";
	class TransportMagazines {
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,90)
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,33)
		X_MAG(rhsusf_20Rnd_762x51_m118_special_Mag,10)
		X_MAG(rhs_mag_M433_HEDP,12)
	};
};

class hmg_us_box_usmc_mg_sq2015_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC MG Squad 2015 (US)";
	class TransportMagazines {
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag,25)
		X_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,10)
		X_MAG(rhsusf_100Rnd_762x51_m80a1epr,16)
		X_MAG(CUP_15Rnd_9x19_M9,4)
	};
};
class hmg_us_box_usmc_ass_sq2015_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC Assault Squad 2015 (US)";
	class TransportMagazines {
		X_MAG(Trixie_SMAW_HEAA,1)
		X_MAG(DemoCharge_remote_mag,10)
		X_MAG(Trixie_SMAW_HEDP,1)
	};
	class TransportItems {
		X_ITEM(ACE_M26_Clacker,1)
	};
};

//--------------------------------------------------------------------КМП 2005
class hmg_us_box_usmc_comp_hq2005 : a3ru_ammobox_us_small_base {
	X_SCOPE(2)
	displayName = "Ящик имущество USMC Company HQ 2005 (US)";
	class TransportWeapons {
		X_WEAP(rhs_weap_M590_5RD,2)
	};
	class TransportMagazines {
		X_MAG(rhsusf_5Rnd_00Buck,14)
	};
};

class hmg_us_box_usmc_comp_hq2005_adv : a3ru_ammobox_us_small_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC Company HQ 2005 (US)";
	class TransportMagazines {
		X_MAG(30Rnd_556x45_Stanag,5)
		X_MAG(30Rnd_556x45_Stanag_Tracer_Red,2)
		X_MAG(CUP_15Rnd_9x19_M9,8)
	};
};

class hmg_us_box_usmc_rif_pl2005_adv : a3ru_ammobox_us_small_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC Platoon HQ 2005 (US)";
	class TransportMagazines {
		X_MAG(30Rnd_556x45_Stanag,20)
		X_MAG(30Rnd_556x45_Stanag_Tracer_Red,8)
	};
};

class hmg_us_box_usmc_rif_sq2005_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC Rifle Squad 2005 (US)";
	class TransportMagazines {
		X_MAG(30Rnd_556x45_Stanag,50)
		X_MAG(30Rnd_556x45_Stanag_Tracer_Red,30)
		X_MAG(Trixie_20x762_Mag,10)
		X_MAG(rhs_mag_M433_HEDP,12)
		X_MAG(rhs_200rnd_556x45_M_SAW,18)
	};
};

class hmg_us_box_usmc_mg_sq2005_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC MG Squad 2005 (US)";
	class TransportMagazines {
		X_MAG(30Rnd_556x45_Stanag,25)
		X_MAG(30Rnd_556x45_Stanag_Tracer_Red,10)
		X_MAG(rhsusf_100Rnd_762x51,16)
		X_MAG(CUP_15Rnd_9x19_M9,4)
	};
};

class hmg_us_box_usmc_ass_sq2005_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC Assault Squad 2005 (US)";
	class TransportMagazines {
		X_MAG(Trixie_SMAW_HEAA,1)
		X_MAG(ClaymoreDirectionalMine_remote_mag,5)
		X_MAG(DemoCharge_remote_mag,10)
		X_MAG(Trixie_SMAW_HEDP,1)
		X_MAG(CUP_15Rnd_9x19_M9,4)
	};
	class TransportItems {
		X_ITEM(ACE_M26_Clacker,3)
	};
};

//--------------------------------------------------------------------КМП 1995
class hmg_us_box_usmc_comp_hq1995 : a3ru_ammobox_us_small_base {
	X_SCOPE(2)
	displayName = "Ящик имущество USMC Company HQ 1995 (US)";
	class TransportWeapons {
		X_WEAP(rhs_weap_M590_5RD,2)
	};
	class TransportMagazines {
		X_MAG(rhsusf_5Rnd_00Buck,14)
	};
};

class hmg_us_box_usmc_comp_hq1995_adv : a3ru_ammobox_us_small_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC Company HQ 1995 (US)";
	class TransportMagazines {
		X_MAG(30Rnd_556x45_Stanag,5)
		X_MAG(30Rnd_556x45_Stanag_Tracer_Red,2)
		X_MAG(CUP_15Rnd_9x19_M9,8)
	};
};

class hmg_us_box_usmc_rif_pl1995_adv : a3ru_ammobox_us_small_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC Platoon HQ 1995 (US)";
	class TransportMagazines {
		X_MAG(30Rnd_556x45_Stanag,20)
		X_MAG(30Rnd_556x45_Stanag_Tracer_Red,8)
	};
};

class hmg_us_box_usmc_rif_sq1995_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC Rifle Squad 1995 (US)";
	class TransportMagazines {
		X_MAG(30Rnd_556x45_Stanag,55)
		X_MAG(30Rnd_556x45_Stanag_Tracer_Red,22)
		X_MAG(rhs_mag_M441_HE,12)
		X_MAG(rhs_200rnd_556x45_M_SAW,36)
	};
};

class hmg_us_box_usmc_mg_sq1995_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC MG Squad 1995 (US)";
	class TransportMagazines {
		X_MAG(30Rnd_556x45_Stanag,25)
		X_MAG(30Rnd_556x45_Stanag_Tracer_Red,10)
		X_MAG(CUP_15Rnd_9x19_M9,4)
	};
};
class hmg_us_box_usmc_ass_sq1995_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC Assault Squad 1995 (US)";
	class TransportMagazines {
		X_MAG(Trixie_SMAW_HEAA,1)
		X_MAG(ClaymoreDirectionalMine_remote_mag,5)
		X_MAG(DemoCharge_remote_mag,10)
		X_MAG(Trixie_SMAW_HEDP,1)
		X_MAG(CUP_15Rnd_9x19_M9,4)
	};
	class TransportItems {
		X_ITEM(ACE_M26_Clacker,3)
	};

};
//--------------------------------------------------------------------КМП 1985
class hmg_us_box_usmc_comp_hq1985 : a3ru_ammobox_us_small_base {
	X_SCOPE(2)
	class TransportWeapons {
		X_WEAP(rhs_weap_M590_5RD,2)
	};
	class TransportMagazines {
		X_MAG(rhsusf_5Rnd_00Buck,14)
	};
};

class hmg_us_box_usmc_comp_hq1985_adv : a3ru_ammobox_us_small_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC Company HQ 1985 (US)";
	class TransportMagazines {
		X_MAG(30Rnd_556x45_Stanag,5)
		X_MAG(30Rnd_556x45_Stanag_Tracer_Red,2)
		X_MAG(rhsusf_mag_7x45acp_MHP,12)
	};
};

class hmg_us_box_usmc_rif_pl1985_adv : a3ru_ammobox_us_small_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC Platoon HQ 1985 (US)";
	class TransportMagazines {
		X_MAG(30Rnd_556x45_Stanag,20)
		X_MAG(30Rnd_556x45_Stanag_Tracer_Red,8)
	};
};

class hmg_us_box_usmc_rif_sq1985_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC Rifle Squad 1985 (US)";
	class TransportMagazines {
		X_MAG(30Rnd_556x45_Stanag,55)
		X_MAG(30Rnd_556x45_Stanag_Tracer_Red,22)
		X_MAG(rhs_mag_M441_HE,12)
		X_MAG(rhs_200rnd_556x45_M_SAW,18)
	};
};

class hmg_us_box_usmc_mg_sq1985_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC MG Squad 1985 (US)";
	class TransportMagazines {
		X_MAG(30Rnd_556x45_Stanag,25)
		X_MAG(30Rnd_556x45_Stanag_Tracer_Red,10)
		X_MAG(rhsusf_mag_7x45acp_MHP,8)
		X_MAG(rhsusf_100Rnd_762x51,16)
	};
};

class hmg_us_box_usmc_ass_sq1985_adv : a3ru_ammobox_us_big_base {
	X_SCOPE(2)
	displayName = "Ящик доп. БК USMC Assault Squad 1985 (US)";
	class TransportMagazines {
		X_MAG(Trixie_SMAW_HEAA,1)
		X_MAG(ClaymoreDirectionalMine_remote_mag,5)
		X_MAG(DemoCharge_remote_mag,10)
		X_MAG(Trixie_SMAW_HEDP,1)
		X_MAG(rhsusf_mag_7x45acp_MHP,8)
	};
	class TransportItems {
		X_ITEM(ACE_M26_Clacker,3)
	};
};
