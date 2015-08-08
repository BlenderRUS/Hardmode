class CfgWeapons {
	class ItemCore;	// External class reference
	class a3ru_rangetable_base: ItemCore {
		scope = 0;
		displayName = "Range Tables";
		picture = "\x\a3ru\addons\a3ru_main\rangetables\Data\notepad_ca.paa";
		descriptionShort = "Range Tables";
		model = "\A3\structures_f\Items\Documents\Map_F.p3d";
		class ItemInfo {
			mass = 3;
			type = 201;
		};
	};

	// PODNOS
	class a3ru_rangetable_2b14: a3ru_rangetable_base {
		scope = 2;
		displayName = "Podnos 2b14 tables";
	};
	class cw_item_table82mm: a3ru_rangetable_2b14 {
		scope = 1;
		displayName = "Podnos 2b14 tables (DEPRECATED)";
	};
	// M252
	class a3ru_rangetable_m252: a3ru_rangetable_base {
		scope = 2;
		displayName = "M252 tables";
	};
	class cw_item_table82mm_252: a3ru_rangetable_m252 {
		scope = 1;
		displayName = "M252 tables (DEPRECATED)";
	};
	// AGS
	class a3ru_rangetable_ags: a3ru_rangetable_base {
		scope = 2;
		displayName = "AGS tables";
	};
	class cw_item_tableags: a3ru_rangetable_ags {
		scope = 1;
		displayName = "AGS tables (DEPRECATED)";
	};
	// D-30
	class a3ru_rangetable_d30he: a3ru_rangetable_base {
		scope = 2;
		displayName = "D-30 HE Table";
	};
	// M119
	class a3ru_rangetable_m119: a3ru_rangetable_base {
		scope = 2;
		displayName = "M119 Table";
	};
};