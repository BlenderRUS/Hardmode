class a3ru_ammobox_ru_static_base : Box_IND_AmmoOrd_F {
	vehicleClass =	"a3ru_box_static";
	displayName = "Ящик для стационаров (пустой)";
	X_SCOPE(1)
	type = 0;
	transportMaxWeapons = 0;
	transportMaxMagazines = 20;
	transportMaxBackpacks = 2;
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
};

class hmg_ru_ags : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Кассеты для АГС-30";
	class TransportMagazines {
		X_MAG(mas_29Rnd_30mm_AGS30_out,3)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_k12 : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Коробки 50 х 12.7 ";		
	class TransportMagazines {
		X_MAG(mas_KORD_out,3)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_podnos : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "ОФ мины для 2б14";		
	class TransportMagazines {	
		X_MAG(HMG_Mine_82_out,4)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_m252 : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "HE rounds for M252";		
	class TransportMagazines {
		X_MAG(HMG_Mine_81_out,3)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};
class hmg_ru_m2 : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Box 100 x 12.7";		
	class TransportMagazines {
		X_MAG(M2_cass_out,3)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};
class hmg_ru_mk19 : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Cassetes for Mk19";		
	class TransportMagazines {
		X_MAG(Mk19_cass_out,3)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};
class hmg_ru_tow : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Missiles for TOW";		
	class TransportMagazines {		
		X_MAG(TOW_out,4)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};
class hmg_ru_spghe : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Мины для ПГ-9";		
	class TransportMagazines {
		X_MAG(PG9_out,3)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};
class hmg_ru_spgog : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Мины для ОГ-9";		
	class TransportMagazines {
		X_MAG(OG9_out,3)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_m119_he : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "ОФ снаряды для М119";		
	class TransportMagazines {
		X_MAG(M119_at_out,4)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};
class hmg_ru_m119_wp : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "WP снаряды для М119";		
	class TransportMagazines {
		X_MAG(M119_wp_out,4)
	};
	 class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_m119_laser : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Управляемые снаряды для М119";		
	class TransportMagazines {
		X_MAG(M119_laser_out,4)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};
class hmg_ru_m119_illum : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Осветительные снаряды для М119";		
	class TransportMagazines {
		X_MAG(M119_illum_out,4)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_m119_smoke : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Дымовые снаряды для М119";		
	class TransportMagazines {
		X_MAG(M119_smoke_out,4)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_igla_aa : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Игла для ОПУ Джигит";		
	class TransportMagazines {
		X_MAG(Igla_out,6)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_us_d30_he : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "ОФ снаряды для Д-30";		
	class TransportMagazines {
		X_MAG(D30_he_out,4)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};
class hmg_us_d30_at : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Кумулятивные снаряды для Д-30";		
	class TransportMagazines {
		X_MAG(D30_at_out,4)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};
