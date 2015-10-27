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


class hmg_us_stinger : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Stinger rockets";
	class TransportMagazines {
		X_MAG(Rhs_mag_1Rnd_stinger,6)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_ags : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Кассеты для АГС-30";
	class TransportMagazines {
		X_MAG(mas_29Rnd_30mm_AGS30,3)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_k12 : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Коробки 50 х 12.7 ";		
	class TransportMagazines {
		X_MAG(rhs_mag_127x108mm_50,3)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_metis : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "9М131 Метис";		
	class TransportMagazines {
		X_MAG(metis_9m131,4)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_k12_150 : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Коробки 150 х 12.7 ";		
	class TransportMagazines {
		X_MAG(rhs_mag_127x108mm_150,3)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_podnos : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "ОФ мины для 2б14";		
	class TransportMagazines {	
		X_MAG(AGM_1Rnd_81mmShell_HE,16)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_zu23 : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "БК для ЗУ-23";		
	class TransportMagazines {	
		X_MAG(RHS_mag_AZP23_250,2)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_m252 : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "HE rounds for M252";		
	class TransportMagazines {
		X_MAG(AGM_1Rnd_81mmShell_252_HE,12)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_230mm_mlrs : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "230mm MLRS Rockets";		
	class TransportMagazines {
		X_MAG(A3RU_mag_1Rnd_230mm_Rocket,12)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_us_m240 : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "M240 762x51 boxes";		
	class TransportMagazines {
		X_MAG(rhs_mag_762x51_M240,5)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_m2 : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Box 100 x 12.7";		
	class TransportMagazines {
		X_MAG(rhs_mag_100rnd_127x99_mag,3)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};
class hmg_ru_mk19 : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Cassetes for Mk19";		
	class TransportMagazines {
		X_MAG(RHS_48Rnd_40mm_MK19,3)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};
class hmg_ru_tow : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Missiles for TOW";		
	class TransportMagazines {		
		X_MAG(rhs_mag_1Rnd_TOW,4)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};
class hmg_ru_spghe : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Мины для ПГ-9";		
	class TransportMagazines {
		X_MAG(mas_PG9_AT,3)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};
class hmg_ru_spgog : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Мины для ОГ-9";		
	class TransportMagazines {
		X_MAG(mas_OG9_HE,3)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_m119_he : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "ОФ снаряды для М119";		
	class TransportMagazines {
		X_MAG(mas_1Rnd_105mmHE_M119,4)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};
class hmg_ru_m119_wp : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "WP снаряды для М119";		
	class TransportMagazines {
		X_MAG(mas_1Rnd_105mmWP_M119,4)
	};
	 class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_m119_laser : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Управляемые снаряды для М119";		
	class TransportMagazines {
		X_MAG(mas_1Rnd_105mmLASER_M119,4)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};
class hmg_ru_m119_illum : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Осветительные снаряды для М119";		
	class TransportMagazines {
		X_MAG(mas_1Rnd_105mmILLUM_M119,4)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_m119_smoke : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Дымовые снаряды для М119";		
	class TransportMagazines {
		X_MAG(mas_1Rnd_105mmSMOKE_M119,4)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_ru_igla_aa : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Игла для ОПУ Джигит";		
	class TransportMagazines {
		X_MAG(rhs_mag_9k38_rocket,6)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};

class hmg_us_d30_he : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "ОФ снаряды для Д-30";		
	class TransportMagazines {
		X_MAG(mas_1Rnd_122mmHE_D30,4)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};
class hmg_us_d30_at : a3ru_ammobox_ru_static_base {
	X_SCOPE(2)
	displayName = "Кумулятивные снаряды для Д-30";		
	class TransportMagazines {
		X_MAG(mas_1Rnd_122mmAT_D30,4)
	};
	class TransportBackpacks {
		X_BACK(a3ru_backpack_verybig,1)
	};
};
