class a3ru_ammobox_ru_mine_base: Box_IND_AmmoOrd_F {
	vehicleClass =	"a3ru_box_mines";
	displayName = "Ящик для мин РФ (пустой)";
	X_SCOPE(1)
	type = 0;
	transportMaxWeapons = 0;
	transportMaxMagazines = 50;
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};

class a3ru_ammobox_us_mine_base: Box_NATO_AmmoOrd_F {
	vehicleClass =	"a3ru_box_mines";
	displayName = "Ящик для мин US (пустой)";
	X_SCOPE(1)
	type = 0;
	transportMaxWeapons = 0;
	transportMaxMagazines = 50;
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class hmg_box_c4: a3ru_ammobox_us_mine_base {
	X_SCOPE(2)
	displayName = "Ящик c M112 (C4) 10 шт.";
	class TransportMagazines {
		X_MAG(DemoCharge_Remote_Mag,10)
	};
	class TransportItems {
		X_ITEM(ACE_M26_Clacker,2)
		X_ITEM(ACE_DefusalKit,2)
	};
};

class hmg_box_m15 : a3ru_ammobox_us_mine_base {
	X_SCOPE(2)
	displayName = "Ящик c M15 AT 10 шт.";
	class TransportMagazines {
		X_MAG(ATMine_Range_Mag,6)
	};
	class TransportItems {
		X_ITEM(ACE_M26_Clacker,2)
		X_ITEM(ACE_DefusalKit,2)
	};
};

class hmg_box_m19 : a3ru_ammobox_us_mine_base {
	X_SCOPE(2)
	displayName = "Ящик c M19 2 шт.";
	class TransportMagazines {
		X_MAG(rhs_mine_M19_mag,2)
	};
	class TransportItems {
		X_ITEM(ACE_M26_Clacker,2)
		X_ITEM(ACE_DefusalKit,2)
	};
};

class hmg_box_tm62m : a3ru_ammobox_ru_mine_base {
	X_SCOPE(2)
	displayName = "Ящик c ТМ62М 2 шт.";
	class TransportMagazines {
		X_MAG(rhs_mine_tm62m_mag,2)
	};
	class TransportItems {
		X_ITEM(ACE_M26_Clacker,2)
		X_ITEM(ACE_DefusalKit,2)
	};
};

class hmg_box_pmn2 : a3ru_ammobox_ru_mine_base {
	X_SCOPE(2)
	displayName = "Ящик c ПМН2 24 шт.";
	class TransportMagazines {
		X_MAG(rhs_mine_pmn2_mag,24)
	};
	class TransportItems {
		X_ITEM(ACE_M26_Clacker,2)
		X_ITEM(ACE_DefusalKit,2)
	};
};

class hmg_box_apers : a3ru_ammobox_ru_mine_base {
	X_SCOPE(2)
	displayName = "Ящик c ВС50, М26, ПМР-3 по 12 шт.";
	class TransportMagazines {
		X_MAG(APERSMine_Range_Mag,12)
		X_MAG(APERSTripMine_Wire_Mag,12)
		X_MAG(APERSBoundingMine_Range_Mag,12)
	};
	class TransportItems {
		X_ITEM(ACE_M26_Clacker,2)
		X_ITEM(ACE_DefusalKit,2)
	};
};

class hmg_box_slam : a3ru_ammobox_us_mine_base {
	X_SCOPE(2)
	displayName = "Ящик c М4А1 SLAM 12 шт.";
	class TransportMagazines {
		X_MAG(SLAMDirectionalMine_Wire_Mag,12)
	};
	class TransportItems {
		X_ITEM(ACE_M26_Clacker,2)
		X_ITEM(ACE_DefusalKit,2)
	};
};

class hmg_box_claymore : a3ru_ammobox_us_mine_base {
	X_SCOPE(2)
	displayName = "Ящик c M18A1 Claymore 6 шт.";
	class TransportMagazines {
		X_MAG(ClaymoreDirectionalMine_Remote_Mag,6)
	};
	class TransportItems {
		X_ITEM(ACE_M26_Clacker,2)
		X_ITEM(ACE_DefusalKit,2)
	};
};

class hmg_box_IEDs_Land : a3ru_ammobox_ru_mine_base {
	X_SCOPE(2)
	displayName = "Ящик c маскируемыми ПП (10) и ПТ (4) минами (пересеченка)";
	class TransportMagazines {
		X_MAG(IEDLandBig_Remote_Mag,4)
		X_MAG(IEDLandSmall_Remote_Mag,10)
	};
	class TransportItems {
		X_ITEM(ACE_M26_Clacker,2)
		X_ITEM(ACE_DefusalKit,2)
		X_ITEM(ACE_DeadManSwitch,1)
	};
};

class hmg_box_IEDs_Urban : a3ru_ammobox_ru_mine_base {
	X_SCOPE(2)
	displayName = "Ящик c маскируемыми ПП (10) и ПТ (4) минами (город)";
	class TransportMagazines {
		X_MAG(IEDUrbanBig_Remote_Mag,4)
		X_MAG(IEDUrbanSmall_Remote_Mag,10)
	};
	class TransportItems {
		X_ITEM(ACE_M26_Clacker,2)
		X_ITEM(ACE_DefusalKit,2)
		X_ITEM(ACE_DeadManSwitch,1)

	};
};

class hmg_box_m183 : a3ru_ammobox_us_mine_base {
	X_SCOPE(2)
	displayName = "Ящик c M183 (подрывной заряд) 4 шт.";
	class TransportMagazines {
		X_MAG(SatchelCharge_Remote_Mag,4)
	};
	class TransportItems {
		X_ITEM(ACE_M26_Clacker,2)
		X_ITEM(ACE_DefusalKit,2)
	};
};
