class a3ru_ammobox_ru_small_base: rhs_weapons_crate_ak_ammo_545x39_standard {
	vehicleClass =	"a3ru_box_ru";
	displayName = "Ящик для БК РФ  мал.(пустой)";
	X_SCOPE(1)
	type = 0;
	transportMaxWeapons = 5;
	transportMaxMagazines = 200;
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};

class a3ru_ammobox_ru_big_base : EAST_Box_Base {
	vehicleClass =	"a3ru_box_ru";
	model = "rhsafrf\addons\rhs_weapons\crates\rhs_7ya37_1";
	icon = "iconCrateLarge";
	displayName = "Ящик для БК РФ больш. (пустой)";
	X_SCOPE(1)
	type = 0;
	transportMaxWeapons = 20;
	transportMaxMagazines = 600;
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};

class a3ru_ammobox_ru_gren_base : Box_IND_Grenades_F {
	vehicleClass =	"a3ru_box_ru";
	displayName = "Ящик для гранат РФ (пустой)";
	X_SCOPE(1)
	type = 0;
	transportMaxWeapons = 10;
	transportMaxMagazines = 200;
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};

class a3ru_ammobox_ru_launch_base : Box_IND_WpsLaunch_F {
	vehicleClass =	"a3ru_box_ru";
	displayName = "Ящик с гранатометами РФ (пустой)";
	X_SCOPE(1)
	type = 0;
	transportMaxWeapons = 10;
	transportMaxMagazines = 200;
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};

class hmg_ru_box_gren :a3ru_ammobox_ru_gren_base {
	X_SCOPE(2)
	displayName = "Ящик c гранатами 50 шт. (РФ)";
	class TransportMagazines {
		X_MAG(rhs_mag_rgd5,30)
		X_MAG(rhs_mag_rdg2_white,10)
		X_MAG(rhs_mag_rdg2_black,10)
	};
};  

class hmg_ru_box_rpg : a3ru_ammobox_ru_launch_base {
	X_SCOPE(2)
	displayName = "Ящик выстрелами РПГ-7 6 шт. (РФ)";
	class TransportMagazines {
		X_MAG(rhs_rpg7_PG7VR_mag,1)
		X_MAG(rhs_rpg7_OG7V_mag,2)
		X_MAG(rhs_rpg7_PG7VL_mag,3)
	};
};  

class hmg_ru_box_rpg_vr : a3ru_ammobox_ru_launch_base {
	X_SCOPE(2)
	displayName = "ПГ-7ВР Резюме 6 шт.  (РФ)";
	class TransportMagazines {
		X_MAG(rhs_rpg7_PG7VR_mag,6)
	};
};  

class hmg_ru_box_rpg_og : a3ru_ammobox_ru_launch_base {
	X_SCOPE(2)
	displayName = "ОГ-7В Осколок 6 шт. (РФ)";
	class TransportMagazines {
		X_MAG(rhs_rpg7_OG7V_mag,6)
	};
};  

class hmg_ru_box_rpg_vl : a3ru_ammobox_ru_launch_base {
	X_SCOPE(2)
	displayName = "ПГ-7ВЛ Луч 6 шт. (РФ)";
	class TransportMagazines {
		X_MAG(rhs_rpg7_PG7VL_mag,6)
	};
};  

class hmg_ru_box_rpg26 : a3ru_ammobox_ru_launch_base {
	X_SCOPE(2)
	displayName = "Ящик РПГ/РШГ 6 шт. (РФ)";
	class TransportWeapons {
		X_WEAP(rhs_weap_rpg26,3)
		X_WEAP(rhs_weap_rshg2,3)
	};
	class TransportMagazines {
		X_MAG(rhs_rpg26_mag,3)
		X_MAG(rhs_rshg2_mag,3)
	};
};  

class hmg_ru_box_gp : a3ru_ammobox_ru_small_base {
	X_SCOPE(2)
	displayName = "Ящик c выстрелами ГП 84 шт. (РФ)";
	class TransportMagazines {
		X_MAG(rhs_VOG25,40)
		X_MAG(rhs_VOG25P,10)
		X_MAG(rhs_VG40OP_white,3)
		X_MAG(rhs_GRD40_White,6)
		X_MAG(rhs_VG40OP_green,3)
		X_MAG(rhs_VG40OP_red,3)
		X_MAG(rhs_GRD40_Green,3)
		X_MAG(rhs_GRD40_Red,3)
	};
};

class hmg_ru_box_metis : a3ru_ammobox_ru_small_base {
	X_SCOPE(2)
	displayName = "Ящик c ТПК Метис 2 шт. (РФ)";
	class TransportBackpacks {
		X_BACK(hmg_metis_ruck,1)
	};
};

class hmg_ru_box_mso_squad: a3ru_ammobox_ru_small_base {
	X_SCOPE(2)
	displayName = "Доп. БК МСО (РФ)";
	class TransportMagazines {
		X_MAG(rhs_30Rnd_545x39_7N10_AK,80)
		X_MAG(rhs_30Rnd_545x39_7N22_AK,20)
		X_MAG(rhs_30Rnd_545x39_AK_green,20)
		X_MAG(rhs_100Rnd_762x54mmR,10)
		X_MAG(rhs_10Rnd_762x54mmR_7N1,6)
		X_MAG(rhs_VOG25,20)
		X_MAG(rhs_rpg7_PG7VR_mag,1)
		X_MAG(rhs_rpg7_OG7V_mag,2)
		X_MAG(rhs_rpg7_PG7VL_mag,3)
	};
};  

class hmg_ru_box_mso_squad_ussr: a3ru_ammobox_ru_small_base {
	X_SCOPE(2)
	displayName = "Доп. БК МСО (СССР)";
	class TransportMagazines {
		X_MAG(rhs_30Rnd_545x39_7N10_AK,80)
		X_MAG(rhs_30Rnd_545x39_AK_green,20)
		X_MAG(rhs_100Rnd_762x54mmR,10)
		X_MAG(rhs_10Rnd_762x54mmR_7N1,6)
		X_MAG(rhs_VOG25,20)
		X_MAG(rhs_rpg7_PG7VL_mag,6)
	};
};

class hmg_ru_box_pdr_vzv: a3ru_ammobox_ru_big_base {
	X_SCOPE(2)
	displayName = "Доп. БК ПДР взвода ВДВ (РФ)";
	class TransportMagazines {
		X_MAG(rhs_30Rnd_545x39_7N10_AK,200)
		X_MAG(rhs_30Rnd_545x39_7N22_AK,50)
		X_MAG(rhs_30Rnd_545x39_AK_green,50)
		X_MAG(rhs_100Rnd_762x54mmR,10)
		X_MAG(rhs_VOG25,60)
		X_MAG(rhs_rpg7_PG7VR_mag,1)
		X_MAG(rhs_rpg7_OG7V_mag,2)
		X_MAG(rhs_rpg7_PG7VL_mag,3)
	};
};  

class hmg_ru_box_dsh_rota: a3ru_ammobox_ru_big_base {
	X_SCOPE(2)
	displayName = "Доп. БК ДШ роты ВДВ (РФ)";
	class TransportMagazines {
		X_MAG(rhs_30Rnd_545x39_7N10_AK,300)
		X_MAG(rhs_30Rnd_545x39_7N22_AK,75)
		X_MAG(rhs_30Rnd_545x39_AK_green,75)
		X_MAG(rhs_100Rnd_762x54mmR,10)
		X_MAG(rhs_10Rnd_762x54mmR_7N1,10)
	};
};

class hmg_ru_box_dsh_otd: a3ru_ammobox_ru_small_base {
	X_SCOPE(2)
	displayName = "Доп. БК ДШ отделения ВДВ (РФ)";
	class TransportMagazines {
		X_MAG(rhs_30Rnd_545x39_7N10_AK,60)
		X_MAG(rhs_30Rnd_545x39_7N22_AK,15)
		X_MAG(rhs_30Rnd_545x39_AK_green,150)
		X_MAG(rhs_100Rnd_762x54mmR,10)
		X_MAG(rhs_VOG25,60)
	};
};

class hmg_ru_box_bmp2: a3ru_ammobox_ru_small_base {
	X_SCOPE(2)
	displayName = "Ящик для БМП-2 (РФ)";
	class TransportMagazines {
		X_MAG(rhs_30Rnd_545x39_7N10_AK,140)
		X_MAG(rhs_30Rnd_545x39_7N22_AK,15)
		X_MAG(rhs_30Rnd_545x39_AK_green,10)
		X_MAG(rhs_100Rnd_762x54mmR,20)
		X_MAG(rhs_mag_rgd5,12)
		X_MAG(rhs_rpg7_PG7VR_mag,1)
		X_MAG(rhs_rpg7_OG7V_mag,1)
		X_MAG(rhs_rpg7_PG7VL_mag,3)
	};
};  

