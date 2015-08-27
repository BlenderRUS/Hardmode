class hmg_box_ins_base : Box_FIA_Support_F {
	vehicleClass =	"a3ru_box_ind";
	displayName = "Ящик независимых (пусто)";
	scope = 1;
	type = 0;
	transportMaxWeapons = 20;
	transportMaxMagazines = 200;
	
	class TransportWeapons {};
	
	class TransportMagazines {};
	
	class TransportItems {};
};
class hmg_box_ins_weap_base : EAST_Box_Base {
	SLX_XEH_DISABLED = 0;
	vehicleClass =	"a3ru_box_ind";
	displayName = "Оружие независимых (пусто)";
	model = "rhsafrf\addons\rhs_weapons\crates\rhs_7ya37_1";
	icon = "iconCrateLarge";
	scope = 1;
	type = 0;
	transportMaxWeapons = 30;
	transportMaxMagazines = 200;
	
	class TransportWeapons {};
	
	class TransportMagazines {};
	
	class TransportItems {};
}; 
class hmg_ru_mine : Box_IND_AmmoOrd_F {
	vehicleClass =	"a3ru_box_mines";
	displayName = "Ящик для мин РФ (пустой)";
	scope = 1;
	type = 0;
	transportMaxWeapons = 0;
	transportMaxMagazines = 50;
	
	class TransportWeapons {};
	
	class TransportMagazines {};
	
	class TransportItems {};
};
class hmg_us_mine : Box_NATO_AmmoOrd_F {
	vehicleClass =	"a3ru_box_mines";
	displayName = "Ящик для мин US (пустой)";
	scope = 1;
	type = 0;
	transportMaxWeapons = 0;
	transportMaxMagazines = 50;
	
	class TransportWeapons {};
	
	class TransportMagazines {};
	
	class TransportItems {};
};

class hmg_ru_box_small_base : rhs_weapons_crate_ak_ammo_545x39_standard {
	vehicleClass =	"a3ru_box_ru";
	displayName = "Ящик для БК РФ  мал.(пустой)";
	scope = 1;
	type = 0;
	transportMaxWeapons = 5;
	transportMaxMagazines = 200;
	
	class TransportWeapons {};
	
	class TransportMagazines {};
	
	class TransportItems {};
};
class hmg_ru_box_big_base : EAST_Box_Base {
	transportMaxWeapons = 20;
	transportMaxMagazines = 600;
	vehicleClass =	"a3ru_box_ru";
	model = "rhsafrf\addons\rhs_weapons\crates\rhs_7ya37_1";
	icon = "iconCrateLarge";
	displayName = "Ящик для БК РФ больш. (пустой)";
	scope = 1;
	type = 0;

	class TransportWeapons {};
	
	class TransportMagazines {};
	
	class TransportItems {};
};

class hmg_ru_box_gren_base : Box_IND_Grenades_F {
	vehicleClass =	"a3ru_box_ru";
	displayName = "Ящик для гранат РФ (пустой)";
	scope = 1;
	type = 0;
	transportMaxWeapons = 10;
	transportMaxMagazines = 200;
	
	class TransportWeapons {};
	
	class TransportMagazines {};
	
	class TransportItems {};
};
class hmg_ru_box_lau_base : Box_IND_WpsLaunch_F {
	vehicleClass =	"a3ru_box_ru";
	displayName = "Ящик с гранатометами РФ (пустой)";
	scope = 1;
	type = 0;
	transportMaxWeapons = 10;
	transportMaxMagazines = 200;
	
	class TransportWeapons {};
	
	class TransportMagazines {};
	
	class TransportItems {};
};
class hmg_ru_static : Box_IND_AmmoOrd_F {
	vehicleClass =	"a3ru_box_static";
	displayName = "Ящик для стационаров (пустой)";
	scope = 1;
	type = 0;
	transportMaxWeapons = 0;
	transportMaxMagazines = 20;
	transportMaxBackpacks = 2;
	
	class TransportWeapons {};
	
	class TransportMagazines {};
	
	class TransportItems {};
	class TransportBackpackss {};
};
class hmg_us_box_small_base : Box_NATO_Ammo_F {
	vehicleClass =	"a3ru_box_us";
	displayName = "Ящик US мал. (пуст)";
	scope = 1;
	icon = "iconCrateLarge";
	transportMaxWeapons = 5;
	transportMaxMagazines = 200;
	
	class TransportWeapons {};
	
	class TransportMagazines {};
	
	class TransportItems {};
};
//--------------------------------------------------------------------Типовые ящики
class hmg_us_box_big_base : Box_NATO_Ammo_F {
	scope = 1;
	displayName = "Ящик US больш. (пуст)";
	vehicleClass =	"a3ru_box_us";
	transportMaxWeapons = 10;
	transportMaxMagazines = 600;
	
	class TransportWeapons {};
	
	class TransportMagazines {};
	
	class TransportItems {};

};
class hmg_us_box_gren_base : Box_NATO_Grenades_F {
	scope = 1;
	displayName = "Ящик US гранаты (пуст)";
	vehicleClass =	"a3ru_box_us";
	transportMaxWeapons = 10;
	transportMaxMagazines = 100;
	
	class TransportWeapons {};
	
	class TransportMagazines {};
	
	class TransportItems {};

};
class hmg_us_box_lau_base : Box_NATO_Grenades_F {
	scope = 1;
	displayName = "Ящик US гранатометы (пуст)";
	vehicleClass =	"a3ru_box_us";
	transportMaxWeapons = 10;
	transportMaxMagazines = 100;
	
	class TransportWeapons {};
	
	class TransportMagazines {};
	
	class TransportItems {};

};