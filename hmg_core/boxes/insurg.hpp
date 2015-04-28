/*
	class EAST_Box_Base;	// большой зеленый ящик РФ
	class Box_NATO_Ammo_F;	// стандартный ящик с БК НАТО
	class GunrackTK_EP1; // стойка с оружием
	class HLC_AK_ammobox; //патроны АК
	class rhs_weapons_crate_ak_ammo_545x39_standard; // патроны АК
	class rhsusf_ammo_crate; //патроны US
	class Box_NATO_Grenades_F; // гранаты US
	class Box_IND_Grenades_F; //гранаты РФ
	class Box_FIA_Support_F // ящик бомжей
*/
			class hmg_box_ins_base : Box_FIA_Support_F {
			        SLX_XEH_DISABLED = 0;
				vehicleClass =	"hmg_ins_b";
				displayName = "Ящик независимых (пусто)";
				scope = 2;
				type = 0;
				transportMaxWeapons = 20;
				transportMaxMagazines = 200;
				
				class TransportWeapons {};
				
				class TransportMagazines {};
				
				class TransportItems {};
			};
			class hmg_box_ins_weap_base : EAST_Box_Base {
		        SLX_XEH_DISABLED = 0;
				vehicleClass =	"hmg_ins_b";
				displayName = "Оружие независимых (пусто)";
				model = "rhsafrf\addons\rhs_weapons\crates\rhs_7ya37_1";
				icon = "iconCrateLarge";
				scope = 2;
				type = 0;
				transportMaxWeapons = 30;
				transportMaxMagazines = 200;
				
				class TransportWeapons {};
				
				class TransportMagazines {};
				
				class TransportItems {};
			}; 
			class hmg_box_ins_rifles : hmg_box_ins_weap_base {
				displayName = "Независимые: винтовки (рандом)";
			};
			class hmg_box_ins_lmg : hmg_box_ins_weap_base {
				displayName = "Независимые: LMG (рандом)";
			};
			class hmg_box_ins_hmg : hmg_box_ins_weap_base {
				displayName = "Независимые: HMG (рандом)";
			};
			class hmg_box_ins_radio : hmg_box_ins_base {
				displayName = "Независимые: радиосвязь (рандом)";
			};
			class hmg_box_ins_stuff : hmg_box_ins_base {
				displayName = "Независимые: навигация (рандом)";
			};
			class hmg_box_ins_maps : hmg_box_ins_base {
				displayName = "Независимые: карты и бинокли (рандом)";
			};
			class hmg_box_ins_snip : hmg_box_ins_weap_base {
				displayName = "Независимые: снайперские винтовки (рандом)";
			};
			class hmg_box_ins_metis : hmg_box_ins_base {
				displayName = "Независимые: Метис 1 шт. + 2 ТПК";
				class TransportBackpacks {
					class _xx_hmg_metis_ruck2 {
						backpack = "hmg_metis_ruck2";
						count = 1;
					};
				};
				class TransportWeapons {
					class _xx_CUP_launch_Metis {
						weapon = "CUP_launch_Metis";
						count = 1;
					};

				};
			};

			class hmg_box_ins_metism1 : hmg_box_ins_metis {
				displayName = "Независимые: Метис-М1 1 шт. + 2 ТПК";
				class TransportWeapons {
					class _xx_MetisM1 {
						weapon = "MetisM1";
						count = 1;
					};

				};
			};
			
			class hmg_box_ins_rifles_g3 : hmg_box_ins_weap_base {
				displayName = "Независимые: винтовки G3 9 шт.";
				class TransportWeapons {
					class _xx_hlc_rifle_g3a3 {
						weapon = "hlc_rifle_g3a3";
						count = 2;
					};
					class _xx_hlc_rifle_psg1 {
						weapon = "hlc_rifle_psg1";
						count = 2;
					};
					class _xx_hlc_rifle_hk51 {
						weapon = "hlc_rifle_hk51";
						count = 3;
					};
					class _xx_hlc_rifle_hk53 {
						weapon = "hlc_rifle_hk53";
						count = 2;
					};
				};
				class transportMagazines {
					class _xx_hlc_20Rnd_762x51_B_G3 {
						magazine = "hlc_20Rnd_762x51_B_G3";
						count = 60;
					};
					class _xx_hlc_20rnd_762x51_T_G3 {
						magazine = "hlc_20rnd_762x51_T_G3";
						count = 20;
					};
					class _xx_hlc_50rnd_762x51_M_G3 {
						magazine = "hlc_50rnd_762x51_M_G3";
						count = 10;
					};
				};
				class transportItems {
					class _xx_hlc_optic_suit		{
						name = "HLC_Optic_ZFSG1";
						count = 3;
					};
				};
			};
			class hmg_box_ins_rifles_fn : hmg_box_ins_weap_base {
				displayName = "Независимые: винтовки FN 8 шт";
				class TransportWeapons {
					class _xx_hlc_rifle_l1a1slr {
						weapon = "hlc_rifle_l1a1slr";
						count = 2;
					};
					class _xx_hlc_rifle_FAL5061 {
						weapon = "hlc_rifle_FAL5061";
						count = 2;
					};
					class _xx_hlc_rifle_osw_GL {
						weapon = "hlc_rifle_osw_GL";
						count = 2;
					};
					class _xx_hlc_rifle_falosw {
						weapon = "hlc_rifle_falosw";
						count = 2;
					};
				};
				class transportMagazines {
					class _xx_hlc_20Rnd_762x51_B_fal	 {
						magazine ="hlc_20Rnd_762x51_B_G3";
						count = 60;
					};
					class _xx_hlc_20Rnd_762x51_t_fal	 {
						magazine ="hlc_20rnd_762x51_T_G3";
						count = 20;
					};
					class _xx_hlc_50rnd_762x51_M_FAL	 {
						magazine = "hlc_50rnd_762x51_M_G3";
						count = 10;
					};
				};
				class transportItems {
					class _xx_hlc_optic_suit		{
						name = "hlc_optic_suit";
						count = 2;
					};
					class _xx_hlc_optic_PVS4FAL		{
						name = "hlc_optic_PVS4FAL";
						count = 2;
					};
				};
			};
			class hmg_box_ins_rifles_ak : hmg_box_ins_weap_base {
				displayName = "Независимые: патроны, ГП и аксессуары к АК";
				class transportMagazines {
					class _xx_rhs_30Rnd_762x39mm	 {
						magazine ="rhs_30Rnd_762x39mm";
						count = 20;
					};
					class _xx_rhs_30Rnd_545x39_AK	 {
						magazine ="rhs_30Rnd_545x39_AK";
						count = 20;
					};
					class _xx_rhs_30Rnd_545x39_AK_green	 {
						magazine = "rhs_30Rnd_545x39_AK_green";
						count = 10;
					};
					class _xx_rhs_30Rnd_762x39mm_tracer	 {
						magazine ="rhs_30Rnd_762x39mm_tracer";
						count = 10;
					};
					class _xx_rhs_VOG25	 {
						magazine ="rhs_VOG25";
						count = 40;
					};
					class _xx_rhs_GRD40_White	 {
						magazine = "rhs_GRD40_White";
						count = 20;
					};
				};
				class transportItems {
					class _xx_rhs_acc_ekp1		{
						name = "rhs_acc_ekp1";
						count = 4;
					};
					class _xx_rhs_acc_pso1m2		{
						name = "rhs_acc_pso1m2";
						count = 4;
					};
				};
			};

			class hmg_box_ins_rifles_snip : hmg_box_ins_weap_base {
				displayName = "Независимые: снайперки - 6 шт.";
				class TransportWeapons {
					class _xx_hlc_rifle_psg1 {
						weapon = "hlc_rifle_psg1";
						count = 2;
					};
					class _xx_hlc_rifle_M14DMR {
						weapon = "hlc_rifle_M14DMR";
						count = 2;
					};
					class _xx_hlc_rifle_c1A1 {
						weapon = "hlc_rifle_c1A1";
						count = 2;
					};
				};
				class transportMagazines {
					class _xx_hlc_20Rnd_762x51_B_G3	 {
						magazine ="hlc_20Rnd_762x51_B_G3";
						count = 30;
					};
					class _xx_hlc_20Rnd_762x51_B_M14	 {
						magazine ="hlc_20Rnd_762x51_B_M14";
						count = 30;
					};
					class _xx_hlc_20Rnd_762x51_B_fal	 {
						magazine = "hlc_20Rnd_762x51_B_fal";
						count = 30;
					};
				};
				class transportItems {
					class _xx_HLC_Optic_ZFSG1		{
						name = "HLC_Optic_ZFSG1";
						count = 2;
					};
					class _xx_hlc_optic_suit		{
						name = "hlc_optic_suit";
						count = 2;
					};	
					class _xx_hlc_optic_LRT_m14		{
						name = "hlc_optic_LRT_m14";
						count = 2;
					};
				};
			};			
			class hmg_box_ins_rifles_lmg : hmg_box_ins_weap_base {
				displayName = "Независимые: LMG - 3 шт.";
				class TransportWeapons {
					class _xx_hlc_rifle_rpk {
						weapon = "hlc_rifle_rpk";
						count = 1;
					};
					class _xx_rhs_weap_m249_pip {
						weapon = "rhs_weap_m249_pip";
						count = 1;
					};
					class _xx_hlc_rifle_aughbar_t {
						weapon = "hlc_rifle_aughbar_t";
						count = 1;
					};
				};
				class transportMagazines {
					class _xx_rhs_30Rnd_762x39mm	 {
						magazine ="rhs_30Rnd_762x39mm";
						count = 10;
					};
					class _xx_rhsusf_100Rnd_556x45_soft_pouch	 {
						magazine ="rhsusf_100Rnd_556x45_soft_pouch";
						count = 8;
					};
					class _xx_hlc_40Rnd_556x45_B_AUG	 {
						magazine = "hlc_40Rnd_556x45_B_AUG";
						count = 16;
					};
				};
			};				
			class hmg_box_ins_rifles_hmg : hmg_box_ins_weap_base {
				displayName = "Независимые: HMG - 3 шт.";
				class TransportWeapons {
					class _xx_hlc_lmg_m60 {
						weapon = "hlc_lmg_m60";
						count = 1;
					};
					class _xx_rhs_weap_pkm {
						weapon = "rhs_weap_pkm";
						count = 1;
					};
					class _xx_rhs_weap_m240B {
						weapon = "rhs_weap_m240B";
						count = 1;
					};
				};
				class transportMagazines {
					class _xx_hlc_100Rnd_762x51_B_M60E4	 {
						magazine ="hlc_100Rnd_762x51_B_M60E4";
						count = 8;
					};
					class _xx_rhs_100Rnd_762x54mmR	 {
						magazine ="rhs_100Rnd_762x54mmR";
						count = 4;
					};
					class _xx_rhs_100Rnd_762x54mmR_green	 {
						magazine ="rhs_100Rnd_762x54mmR_green";
						count = 4;
					};
					class _xx_rhsusf_100Rnd_762x51	 {
						magazine = "rhsusf_100Rnd_762x51";
						count = 8;
					};
				};
				class transportItems {
					class _xx_AGM_earbuds		{
						name = "AGM_earbuds";
						count = 3;
					};
				};				
			};
			class hmg_box_ins_radio_st : hmg_box_ins_radio {
				displayName = "Независимые: радиосвязь";
				class transportItems {
					class _xx_tf_ex8550		{
						name = "tf_ex8550";
						count = 20;
					};
				};
				class transportBackpacks {
					class _xx_tf_anprc155_coyote {
						backpack = "tf_anprc155_coyote";
						count = 3;
					};
				};
			};
			class hmg_box_ins_stuff_St : hmg_box_ins_stuff {
				displayName = "Независимые: навигация";
				class transportItems {
					class _xx_ItemMap		{
						name = "ItemMap";
						count = 5;
					};
					class _xx_ItemSMGR		{
						name = "ItemSMGR";
						count = 10;
					};
					class _xx_ItemGPS		{
						name = "ItemGPS";
						count = 2;
					};
					class _xx_AGM_Vector		{
						name = "AGM_Vector";
						count = 2;
					};
					class _xx_AGM_earbuds		{
						name = "AGM_earbuds";
						count = 30;
					};
				};
				class transportWeapons {
					class _xx_Binocular {
						weapon = "Binocular";
						count = 4;
					};
				};
			};
			class hmg_box_ins_rifles_h_snip : hmg_box_ins_weap_base {
				displayName = "Независимые: ящик с М107";
				class TransportWeapons {
					class _xx_Trixie_M107_Green {
						weapon = "Trixie_M107_Green";
						count = 1;
					};
				};
				class transportMagazines {
					class _xx_Trixie_10x127_Mag	 {
						magazine ="Trixie_10x127_Mag";
						count = 5;
					};
					class _xx_Trixie_10x127_HE_Mag	 {
						magazine ="Trixie_10x127_HE_Mag";
						count = 2;
					};
					class _xx_Trixie_10x127_HEIAP_Mag	 {
						magazine = "Trixie_10x127_HEIAP_Mag";
						count = 2;
					};
					class _xx_Trixie_10x127_Amax_Mag	 {
						magazine = "Trixie_10x127_Amax_Mag";
						count = 2;
					};					
				};
				class transportItems {
					class _xx_AGM_earbuds		{
						name = "AGM_earbuds";
						count = 3;
					};
					class _xx_Trixie_LSMARK4_Delta_Camo		{
						name = "Trixie_LSMARK4_Delta_Camo";
						count = 1;
					};	
					class _xx_AGM_Vector		{
						name = "AGM_Vector";
						count = 1;
					};
				};
			};