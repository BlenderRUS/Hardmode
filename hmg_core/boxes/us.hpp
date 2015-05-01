
		class hmg_us_box_small_base : Box_NATO_Ammo_F {
				vehicleClass =	"hmg_us_b";
				displayName = "Ящик US мал. (пуст)";
				scope = 2;
				icon = "iconCrateLarge";
				transportMaxWeapons = 5;
				transportMaxMagazines = 200;
				
				class TransportWeapons {};
				
				class TransportMagazines {};
				
				class TransportItems {};
			};
//--------------------------------------------------------------------Типовые ящики
		class hmg_us_box_big_base : Box_NATO_Ammo_F {
				displayName = "Ящик US больш. (пуст)";
				vehicleClass =	"hmg_us_b";
				transportMaxWeapons = 10;
				transportMaxMagazines = 600;
				
				class TransportWeapons {};
				
				class TransportMagazines {};
				
				class TransportItems {};

			};
		class hmg_us_box_gren_base : Box_NATO_Grenades_F {
				displayName = "Ящик US гранаты (пуст)";
				vehicleClass =	"hmg_us_b";
				transportMaxWeapons = 10;
				transportMaxMagazines = 100;
				
				class TransportWeapons {};
				
				class TransportMagazines {};
				
				class TransportItems {};

			};
		class hmg_us_box_lau_base : Box_NATO_Grenades_F {
				displayName = "Ящик US гранатометы (пуст)";
				vehicleClass =	"hmg_us_b";
				transportMaxWeapons = 10;
				transportMaxMagazines = 100;
				
				class TransportWeapons {};
				
				class TransportMagazines {};
				
				class TransportItems {};

			};


		class hmg_us_box_gren50: hmg_us_box_gren_base {
				displayName = "Ящик с гранатами 50 шт. (US)";
				class TransportMagazines {
						class _xx_rhs_mag_m67 {
							magazine = "rhs_mag_m67";
							count = 30;
						};
						class _xx_rhs_mag_mk84 {
							magazine = "rhs_mag_mk84";
							count = 10;
						};
						class _xx_SmokeShell {
							magazine = "SmokeShell";
							count = 10;
						};
			
				};
			};
		class hmg_us_box_gren20: hmg_us_box_gren_base {
				displayName = "Ящик с гранатами 20 шт. (US)";
				class TransportMagazines {
						class _xx_rhs_mag_m67 {
							magazine = "rhs_mag_m67";
							count = 10;
						};
						class _xx_rhs_mag_mk84 {
							magazine = "rhs_mag_mk84";
							count = 5;
						};
						class _xx_SmokeShell {
							magazine = "SmokeShell";
							count = 5;
						};
			
				};
			};
		class hmg_us_box_gren10: hmg_us_box_gren_base {
				displayName = "Ящик с гранатами 10 шт. (US)";
				class TransportMagazines {
						class _xx_rhs_mag_m67 {
							magazine = "rhs_mag_m67";
							count = 10;
						};
			
				};
			};
		class hmg_us_box_at4heat: hmg_us_box_lau_base {
				displayName = "Ящик АТ4 (HEAT) 4 шт. (US)";
				class TransportWeapons {
					class _xx_rhs_weap_M136 {
						weapon = "rhs_weap_M136";
						count = 4;
					};

				};
				class TransportMagazines {
						class _xx_rhs_m136_mag {
							magazine = "rhs_m136_mag";
							count = 4;
						};
			
				};
			};
		class hmg_us_box_at4hedp: hmg_us_box_lau_base {
				displayName = "Ящик АТ4 (HEDP) 4 шт. (US)";
				class TransportWeapons {
					class _xx_rhs_weap_M136_hedp {
						weapon = "rhs_weap_M136_hedp";
						count = 4;
					};

				};
				class TransportMagazines {
						class _xx_rhs_m136_hedp_mag {
							magazine = "rhs_m136_hedp_mag";
							count = 4;
						};
			
				};
			};
		class hmg_us_box_at4hp: hmg_us_box_lau_base {
				displayName = "Ящик АТ4 (HP) 4 шт. (US)";
				class TransportWeapons {
						class _xx_rhs_weap_M136_hp {
							weapon = "rhs_weap_M136_hp";
							count = 4;
						};

				};
				class TransportMagazines {
						class _xx_rhs_m136_hp_mag {
							magazine = "rhs_m136_hp_mag";
							count = 4;
						};
			
				};
			};
		class hmg_us_box_smaaw : hmg_us_box_lau_base {
				displayName = "Ящик SMAAW + 4 выстрела. (US)";
				class TransportWeapons {
						class _xx_Trixie_SMAW {
							weapon = "Trixie_SMAW";
							count = 1;
						};

				};
				class TransportMagazines {
						class _xx_Trixie_SMAW_HEDP {
							magazine = "Trixie_SMAW_HEDP";
							count = 2;
						};
						class _xx_Trixie_SMAW_HEAA {
							magazine = "Trixie_SMAW_HEAA";
							count = 2;
						};
			
				};
			};
		class hmg_us_box_javelin : hmg_us_box_lau_base {
				displayName = "Ящик Javelin 1 ТПК + 1 КЛУ. (US)";
				class TransportWeapons {
						class _xx_rhs_weap_fgm148 {
							weapon = "rhs_weap_fgm148";
							count = 1;
						};

				};
				class TransportMagazines {
						class _xx_rhs_fgm148_magazine_AT {
							magazine = "rhs_fgm148_magazine_AT";
							count = 1;
						};
			
				};
			};

//--------------------------------------------------------------------АРМИЯ США
		class hmg_us_box_ibct_comp_hq : hmg_us_box_small_base {
				displayName = "Ящик имущество IBCT Rifle Company HQ 2005 (US)";
				class TransportWeapons {
						class _xx_rhs_weap_m240b_elcan {
							weapon = "rhs_weap_m240b_elcan";
							count = 2;
						};

				};
				class TransportMagazines {
						class _xx_rhsusf_100Rnd_762x51 {
							magazine = "rhsusf_100Rnd_762x51";
							count = 16;
						};
			
				};
				class TransportItems {
						class _xx_AGM_CableTie {
							name = "AGM_CableTie";
							count = 20;
						};
						class _xx_Trixie_ANPASM {
							name = "Trixie_ANPASM";
							count = 2;
						};


				};
				class TransportBackpacks {
						class _xx_RHS_M2_Gun_Bag {
							backpack = "RHS_M2_Gun_Bag";
							count = 1;
						};
						class _xx_RHS_M2_Tripod_Bag {
							backpack = "RHS_M2_Tripod_Bag";
							count = 1;
						};
						class _xx_tf_rt1523g_rhs {
							backpack = "tf_rt1523g_rhs";
							count = 6;
						};

				};

			};
		class hmg_us_box_ibct_comp_hq_adv : hmg_us_box_big_base {
				displayName = "Ящик доп. БК IBCT Rifle Company HQ (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 35;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 15;
						};
						class _xx_CUP_15Rnd_9x19_M9 {
							magazine = "CUP_15Rnd_9x19_M9";
							count = 2;
						};
						class _xx_rhs_mag_M441_HE {
							magazine = "rhs_mag_M441_HE";
							count = 42;
						};
			
				};

			};
		class hmg_us_box_ibct_rif_plat_hq_adv : hmg_us_box_small_base {
				displayName = "Ящик доп. БК IBCT Rifle platoon HQ (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 15;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 6;
						};
			
				};

			};
		class hmg_us_box_ibct_rif_squad_adv : hmg_us_box_big_base {
				displayName = "Ящик доп. БК IBCT Rifle Squad (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 35;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 10;
						};
						class _xx_rhsusf_100Rnd_556x45_soft_pouch {
							magazine = "rhsusf_100Rnd_556x45_soft_pouch";
							count = 16;
						};
						class _xx_rhs_mag_M441_HE {
							magazine = "rhs_mag_M441_HE";
							count = 42;
						};
			
				};

			};
		class hmg_us_box_ibct_weap_squad_adv : hmg_us_box_big_base {
				displayName = "Ящик доп. БК IBCT Weapon Squad (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 25;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 10;
						};
						class _xx_rhsusf_100Rnd_762x51 {
							magazine = "rhsusf_100Rnd_762x51";
							count = 16;
						};
						class _xx_CUP_15Rnd_9x19_M9 {
							magazine = "CUP_15Rnd_9x19_M9";
							count = 4;
						};

						class _xx_rhs_fgm148_magazine_AT {
							magazine = "rhs_fgm148_magazine_AT";
							count = 6;
						};
			
				};

			};
		class hmg_us_box_ibct_comp_hq2015 : hmg_us_box_big_base {
				displayName = "Ящик имущество IBCT Rifle Company HQ 2015 (US)";
				class TransportWeapons {
						class _xx_rhs_weap_m240b_elcan {
							weapon = "rhs_weap_m240b_elcan";
							count = 2;
						};

				};
				class TransportMagazines {
						class _xx_rhsusf_100Rnd_762x51 {
							magazine = "rhsusf_100Rnd_762x51";
							count = 16;
						};
			
				};
				class TransportItems {
						class _xx_AGM_CableTie {
							name = "AGM_CableTie";
							count = 20;
						};
						class _xx_B_UavTerminal {
							name = "B_UavTerminal";
							count = 2;
						};
						class _xx_Trixie_ANPASM {
							name = "Trixie_ANPASM";
							count = 2;
						};
                                                                 
				};
				class TransportBackpacks {
						class _xx_tf_rt1523g_rhs {
							backpack = "tf_rt1523g_rhs";
							count = 6;
						};
						class _xx_B_UAV_01_backpack_F {
							backpack = "B_UAV_01_backpack_F";
							count = 2;
						};

						
				};

			};
		class hmg_us_box_sbct_comp_hq : hmg_us_box_small_base {
				displayName = "Ящик имущество SBCT Rifle Company HQ (US)";
				class TransportItems {
						class _xx_AGM_CableTie {
							name = "AGM_CableTie";
							count = 20;
						};

				};
				class TransportBackpacks {
						class _xx_RHS_M2_Gun_Bag {
							backpack = "RHS_M2_Gun_Bag";
							count = 1;
						};
						class _xx_RHS_M2_Tripod_Bag {
							backpack = "RHS_M2_Tripod_Bag";
							count = 1;
						};

				};

			};

		class hmg_us_box_sbct_snip : hmg_us_box_small_base {
				displayName = "Ящик доп. БК SBCT Sniper Team (US)";
				class TransportMagazines {
						class _xx_Trixie_10x127_Mag {
							magazine = "Trixie_10x127_Mag";
							count = 2;
						};
						class _xx_Trixie_10x127_HE_Mag {
							magazine = "Trixie_10x127_HE_Mag";
							count = 2;
						};
						class _xx_Trixie_10x127_HEIAP_Mag {
							magazine = "Trixie_10x127_HEIAP_Mag";
							count = 2;
						};
			
				};
			};
		class hmg_us_box_sbct_rif_squad_adv: hmg_us_box_big_base {
				displayName = "Ящик имущество и доп. БК SBCT Rifle squad (US)";
				class TransportItems {
						class _xx_Trixie_LSMARK4_Delta {
							name = "Trixie_LSMARK4_Delta";
							count = 1;
						};

				};

				class TransportWeapons {
						class _xx_Trixie_M24_Black {
							weapon = "Trixie_M24_Black";
							count = 1;
						};

				};
				class TransportMagazines {
						class _xx_Trixie_5x762_Mag {
							magazine = "Trixie_5x762_Mag";
							count = 10;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 35;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 15;
						};
						class _xx_rhsusf_100Rnd_556x45_soft_pouch {
							magazine = "rhsusf_100Rnd_556x45_soft_pouch";
							count = 12;
						};
						class _xx_rhs_mag_M441_HE {
							magazine = "rhs_mag_M441_HE";
							count = 42;
						};
						class _xx_rhs_fgm148_magazine_AT {
							magazine = "rhs_fgm148_magazine_AT";
							count = 3;
						};
			
				};
			};
		class hmg_us_box_sbct_weap_squad_adv : hmg_us_box_big_base {
				displayName = "Ящик доп. БК SBCT Weapon Squad (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 25;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 10;
						};
						class _xx_rhsusf_100Rnd_762x51 {
							magazine = "rhsusf_100Rnd_762x51";
							count = 16;
						};
						class _xx_CUP_15Rnd_9x19_M9 {
							magazine = "CUP_15Rnd_9x19_M9";
							count = 4;
						};

			
				};

			};
		class hmg_us_box_sbct_mgs : hmg_us_box_small_base {
				displayName = "Ящик SBCT MSG Stryker (US)";
				class TransportWeapons {
						class _xx_rhs_weap_m240b_elcan {
							weapon = "rhs_weap_m240b_elcan";
							count = 1;
						};

				};
				class TransportMagazines {
						class _xx_rhsusf_100Rnd_762x51 {
							magazine = "rhsusf_100Rnd_762x51";
							count = 8;
						};
			
				};
				class TransportItems {
						class _xx_Trixie_ANPASM {
							name = "Trixie_ANPASM";
							count = 1;
						};
				};
		};
		class hmg_us_box_hbct_rif_comp_hq_adv : hmg_us_box_big_base {
				displayName = "Ящик имущество HBCT Rifle Company 2005 (US)";
				class TransportWeapons {
						class _xx_rhs_weap_m240b_elcan {
							weapon = "rhs_weap_m240b_elcan";
							count = 2;
						};

				};
				class TransportMagazines {
						class _xx_rhsusf_100Rnd_762x51 {
							magazine = "rhsusf_100Rnd_762x51";
							count = 16;
						};
			
				};
				class TransportItems {
						class _xx_AGM_CableTie {
							name = "AGM_CableTie";
							count = 20;
						};
						class _xx_Trixie_ANPASM {
							name = "Trixie_ANPASM";
							count = 2;
						};
				};
				class TransportBackpacks {
						class _xx_RHS_Mk19_Gun_Bag {
							backpack = "RHS_Mk19_Gun_Bag";
							count = 1;
						};
						class _xx_RHS_Mk19_Tripod_Bag {
							backpack = "RHS_Mk19_Tripod_Bag";
							count = 1;
						};


				};
		};
		class hmg_us_box_hbct_rif_squad_adv : hmg_us_box_big_base {
				displayName = "Ящик имущество и доп. БК HBCT Rifle Squad (US)";
				class TransportWeapons {
						class _xx_rhs_weap_m240b_elcan {
							weapon = "rhs_weap_m240b_elcan";
							count = 1;
						};

				};
				class TransportMagazines {
						class _xx_rhsusf_100Rnd_762x51 {
							magazine = "rhsusf_100Rnd_762x51";
							count = 8;
						};
			
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 35;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 15;
						};
						class _xx_rhsusf_100Rnd_556x45_soft_pouch {
							magazine = "rhsusf_100Rnd_556x45_soft_pouch";
							count = 12;
						};
						class _xx_rhs_mag_M441_HE {
							magazine = "rhs_mag_M441_HE";
							count = 42;
						};
						class _xx_rhs_fgm148_magazine_AT {
							magazine = "rhs_fgm148_magazine_AT";
							count = 3;
						};

				};
				class TransportItems {
						class _xx_Trixie_ANPASM {
							name = "Trixie_ANPASM";
							count = 1;
						};
				};
		};
		
		class hmg_us_box_Abct_rif_squad : hmg_us_box_big_base {
				displayName = "Ящик  доп. БК ABCT Rifle Squad (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 35;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 15;
						};
						class _xx_rhsusf_100Rnd_556x45_soft_pouch {
							magazine = "rhsusf_100Rnd_556x45_soft_pouch";
							count = 12;
						};
						class _xx_rhs_mag_M441_HE {
							magazine = "rhs_mag_M441_HE";
							count = 42;
						};
						class _xx_rhs_fgm148_magazine_AT {
							magazine = "rhs_fgm148_magazine_AT";
							count = 1;
						};

				};
		};
		
		class hmg_us_box_Abct_rif_squad_adv : hmg_us_box_big_base {
				displayName = "Ящик имущество ABCT Rifle Squad 2015 (US)";
				class TransportWeapons {
						class _xx_rhs_weap_m240b_elcan {
							weapon = "rhs_weap_m240b_elcan";
							count = 1;
						};
						class _xx_rhs_weap_M590_5RD {
							weapon = "rhs_weap_M590_5RD";
							count = 2;
						};
				};
				class TransportMagazines {
						class _xx_rhsusf_100Rnd_762x51 {
							magazine = "rhsusf_100Rnd_762x51";
							count = 8;
						};
			
						class _xx_rhsusf_5Rnd_00Buck {
							magazine = "rhsusf_5Rnd_00Buck";
							count = 14;
						};
				};
				class TransportItems {
						class _xx_RH_pas13cmg {
							name = "RH_pas13cmg";
							count = 1;
						};
				};
		};
		
		class hmg_us_box_Abct_rif_comp_hq_adv : hmg_us_box_big_base {
				displayName = "Ящик имущество ABCT Rifle Company 2015 (US)";
				class TransportItems {
						class _xx_RH_pas13ch {
							name = "RH_pas13ch";
							count = 1;
						};
				};
				class TransportBackpacks {
						class _xx_RHS_Mk19_Gun_Bag {
							backpack = "RHS_Mk19_Gun_Bag";
							count = 1;
						};
						class _xx_RHS_Mk19_Tripod_Bag {
							backpack = "RHS_Mk19_Tripod_Bag";
							count = 1;
						};
						class _xx_tf_rt1523g_black {
							backpack = "tf_rt1523g_black";
							count = 6;
						};
						class _xx_B_rhsusf_B_BACKPACK {
							backpack = "B_rhsusf_B_BACKPACK";
							count = 2;
						};
				};
		};
		class hmg_us_box_Abct_tank_comp_hq : hmg_us_box_big_base {
				displayName = "Ящик доп.бк ABCT tank Company 2015 (US)";
				class TransportMagazines {
						class _xx_CUP_15Rnd_9x19_M9 {
							magazine = "CUP_15Rnd_9x19_M9";
							count = 18;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 40;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 16;
						};
						class _xx_rhs_mag_M441_HE {
							magazine = "rhs_mag_M441_HE";
							count = 16;
						};
						class _xx_rhs_mag_M433_HEDP {
							magazine = "rhs_mag_M433_HEDP";
							count = 24;
						};
						class _xx_rhs_mag_m714_White {
							magazine = "rhs_mag_m714_White";
							count = 24;
						};
						class _xx_DemoCharge_Remote_Mag {
							magazine = "DemoCharge_Remote_Mag";
							count = 3;
						};
				};
		};
		class hmg_us_box_hbct_tank_platoon : hmg_us_box_big_base {
				displayName = "Ящик  доп. БК ABCT Tank platoon (US)";
				
				class TransportMagazines {
						class _xx_CUP_15Rnd_9x19_M9 {
							magazine = "CUP_15Rnd_9x19_M9";
							count = 24;
						};
			
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 30;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 16;
						};
				};
		};
//--------------------------------------------------------------------КМП 2015
		class hmg_us_box_usmc_comp_hq2015 : hmg_us_box_big_base {
				displayName = "Ящик имущество USMC Company HQ 2015 (US)";
				class TransportWeapons {
						class _xx_rhs_weap_m249_pip {
							weapon = "rhs_weap_m249_pip";
							count = 9;
						};

				};
				class TransportMagazines {
						class _xx_rhsusf_100Rnd_556x45_soft_pouch {
							magazine = "rhsusf_100Rnd_556x45_soft_pouch";
							count = 108;
						};
			

				};
				class TransportItems {
						class _xx_AGM_CableTie {
							name = "AGM_CableTie";
							count = 20;
						};

						class _xx_Trixie_ANPASM {
							name = "Trixie_ANPASM";
							count = 9;
						};
				};
		};
		class hmg_us_box_usmc_comp_hq2015_adv : hmg_us_box_small_base {
				displayName = "Ящик доп. БК USMC Company HQ 2015 (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 30;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 12;
						};

				};
		};
		class hmg_us_box_usmc_rif_pl2015_adv : hmg_us_box_small_base {
				displayName = "Ящик доп. БК USMC Platoon HQ 2015 (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 20;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 8;
						};

				};
		};
		class hmg_us_box_usmc_rif_sq2015_adv : hmg_us_box_big_base {
				displayName = "Ящик доп. БК USMC Rifle Squad 2015 (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 90;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 33;
						};
						class _xx_Trixie_20x762_Mag {
							magazine = "Trixie_20x762_Mag";
							count = 10;
						};
						class _xx_rhs_mag_M441_HE {
							magazine = "rhs_mag_M441_HE";
							count = 12;
						};

				};
		};
		class hmg_us_box_usmc_mg_sq2015_adv : hmg_us_box_big_base {
				displayName = "Ящик доп. БК USMC MG Squad 2015 (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 25;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 10;
						};
						class _xx_rhsusf_100Rnd_762x51 {
							magazine = "rhsusf_100Rnd_762x51";
							count = 16;
						};
						class _xx_CUP_15Rnd_9x19_M9 {
							magazine = "CUP_15Rnd_9x19_M9";
							count = 4;
						};

				};
		};
		class hmg_us_box_usmc_ass_sq2015_adv : hmg_us_box_big_base {
				displayName = "Ящик доп. БК USMC Assault Squad 2015 (US)";
				class TransportMagazines {
						class _xx_Trixie_SMAW_HEAA {
							magazine = "Trixie_SMAW_HEAA";
							count = 1;
						};
						class _xx_ClaymoreDirectionalMine_remote_mag {
							magazine = "ClaymoreDirectionalMine_remote_mag";
							count = 5;
						};
						class _xx_DemoCharge_remote_mag {
							magazine = "DemoCharge_remote_mag";
							count = 10;
						};
						class _xx_Trixie_SMAW_HEDP {
							magazine = "Trixie_SMAW_HEDP";
							count = 1;
						};

				};
				class TransportItems {
						class _xx_AGM_M26_Clacker {
							name = "AGM_M26_Clacker";
							count = 3;
						};
				};

		};
//--------------------------------------------------------------------КМП 2005
		class hmg_us_box_usmc_comp_hq2005 : hmg_us_box_small_base {
				displayName = "Ящик имущество USMC Company HQ 2005 (US)";
				class TransportItems {
						class _xx_AGM_CableTie {
							name = "AGM_CableTie";
							count = 20;
						};

				};
		};
		class hmg_us_box_usmc_comp_hq2005_adv : hmg_us_box_small_base {
				displayName = "Ящик доп. БК USMC Company HQ 2005 (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 5;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 2;
						};

						class _xx_CUP_15Rnd_9x19_M9 {
							magazine = "CUP_15Rnd_9x19_M9";
							count = 8;
						};

				};
		};
		class hmg_us_box_usmc_rif_pl2005_adv : hmg_us_box_small_base {
				displayName = "Ящик доп. БК USMC Platoon HQ 2005 (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 20;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 8;
						};

				};
		};
		class hmg_us_box_usmc_rif_sq2005_adv : hmg_us_box_big_base {
				displayName = "Ящик доп. БК USMC Rifle Squad 2005 (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 50;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 30;
						};
						class _xx_Trixie_20x762_Mag {
							magazine = "Trixie_20x762_Mag";
							count = 10;
						};
						class _xx_rhs_mag_M441_HE {
							magazine = "rhs_mag_M441_HE";
							count = 12;
						};
						class _xx_rhsusf_100Rnd_556x45_soft_pouch {
							magazine = "rhsusf_100Rnd_556x45_soft_pouch";
							count = 36;
						};


				};
		};
		class hmg_us_box_usmc_mg_sq2005_adv : hmg_us_box_big_base {
				displayName = "Ящик доп. БК USMC MG Squad 2005 (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 25;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 10;
						};
						class _xx_rhsusf_100Rnd_762x51 {
							magazine = "rhsusf_100Rnd_762x51";
							count = 16;
						};
						class _xx_CUP_15Rnd_9x19_M9 {
							magazine = "CUP_15Rnd_9x19_M9";
							count = 4;
						};

				};
		};
		class hmg_us_box_usmc_ass_sq2005_adv : hmg_us_box_big_base {
				displayName = "Ящик доп. БК USMC Assault Squad 2005 (US)";
				class TransportMagazines {
						class _xx_Trixie_SMAW_HEAA {
							magazine = "Trixie_SMAW_HEAA";
							count = 1;
						};
						class _xx_ClaymoreDirectionalMine_remote_mag {
							magazine = "ClaymoreDirectionalMine_remote_mag";
							count = 5;
						};
						class _xx_DemoCharge_remote_mag {
							magazine = "DemoCharge_remote_mag";
							count = 10;
						};
						class _xx_Trixie_SMAW_HEDP {
							magazine = "Trixie_SMAW_HEDP";
							count = 1;
						};

						class _xx_CUP_15Rnd_9x19_M9 {
							magazine = "CUP_15Rnd_9x19_M9";
							count = 4;
						};

				};
				class TransportItems {
						class _xx_AGM_M26_Clacker {
							name = "AGM_M26_Clacker";
							count = 3;
						};
				};

		};
//--------------------------------------------------------------------КМП 1995
		class hmg_us_box_usmc_comp_hq1995 : hmg_us_box_small_base {
				displayName = "Ящик имущество USMC Company HQ 1995 (US)";
				class TransportItems {
						class _xx_AGM_CableTie {
							name = "AGM_CableTie";
							count = 20;
						};

				};
		};
		class hmg_us_box_usmc_comp_hq1995_adv : hmg_us_box_small_base {
				displayName = "Ящик доп. БК USMC Company HQ 1995 (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 5;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 2;
						};

						class _xx_CUP_15Rnd_9x19_M9 {
							magazine = "CUP_15Rnd_9x19_M9";
							count = 8;
						};

				};
		};
		class hmg_us_box_usmc_rif_pl1995_adv : hmg_us_box_small_base {
				displayName = "Ящик доп. БК USMC Platoon HQ 1995 (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 20;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 8;
						};

				};
		};
		class hmg_us_box_usmc_rif_sq1995_adv : hmg_us_box_big_base {
				displayName = "Ящик доп. БК USMC Rifle Squad 1995 (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 55;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 22;
						};
						class _xx_rhs_mag_M441_HE {
							magazine = "rhs_mag_M441_HE";
							count = 12;
						};
						class _xx_rhsusf_100Rnd_556x45_soft_pouch {
							magazine = "rhsusf_100Rnd_556x45_soft_pouch";
							count = 36;
						};


				};
		};
		class hmg_us_box_usmc_mg_sq1995_adv : hmg_us_box_big_base {
				displayName = "Ящик доп. БК USMC MG Squad 1995 (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 25;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 10;
						};
						class _xx_rhsusf_100Rnd_762x51 {
							magazine = "rhsusf_100Rnd_762x51";
							count = 16;
						};
						class _xx_CUP_15Rnd_9x19_M9 {
							magazine = "CUP_15Rnd_9x19_M9";
							count = 4;
						};

				};
		};
		class hmg_us_box_usmc_ass_sq1995_adv : hmg_us_box_big_base {
				displayName = "Ящик доп. БК USMC Assault Squad 1995 (US)";
				class TransportMagazines {
						class _xx_Trixie_SMAW_HEAA {
							magazine = "Trixie_SMAW_HEAA";
							count = 1;
						};
						class _xx_ClaymoreDirectionalMine_remote_mag {
							magazine = "ClaymoreDirectionalMine_remote_mag";
							count = 5;
						};
						class _xx_DemoCharge_remote_mag {
							magazine = "DemoCharge_remote_mag";
							count = 10;
						};
						class _xx_Trixie_SMAW_HEDP {
							magazine = "Trixie_SMAW_HEDP";
							count = 1;
						};

						class _xx_CUP_15Rnd_9x19_M9 {
							magazine = "CUP_15Rnd_9x19_M9";
							count = 4;
						};

				};
				class TransportItems {
						class _xx_AGM_M26_Clacker {
							name = "AGM_M26_Clacker";
							count = 3;
						};
				};

		};
//--------------------------------------------------------------------КМП 1985
		class hmg_us_box_usmc_comp_hq1985 : hmg_us_box_small_base {
				displayName = "Ящик имущество USMC Company HQ 1985 (US)";
				class TransportItems {
						class _xx_AGM_CableTie {
							name = "AGM_CableTie";
							count = 20;
						};

				};
		};
		class hmg_us_box_usmc_comp_hq1985_adv : hmg_us_box_small_base {
				displayName = "Ящик доп. БК USMC Company HQ 1985 (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 5;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 2;
						};

/*						class _xx_CUP_15Rnd_9x19_M9 {
							magazine = "CUP_15Rnd_9x19_M9";
							count = 8;
						};
*/

				};
		};
		class hmg_us_box_usmc_rif_pl1985_adv : hmg_us_box_small_base {
				displayName = "Ящик доп. БК USMC Platoon HQ 1985 (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 20;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 8;
						};

				};
		};
		class hmg_us_box_usmc_rif_sq1985_adv : hmg_us_box_big_base {
				displayName = "Ящик доп. БК USMC Rifle Squad 1985 (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 55;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 22;
						};
						class _xx_rhs_mag_M441_HE {
							magazine = "rhs_mag_M441_HE";
							count = 12;
						};
						class _xx_rhsusf_100Rnd_556x45_soft_pouch {
							magazine = "rhsusf_100Rnd_556x45_soft_pouch";
							count = 36;
						};


				};
		};
		class hmg_us_box_usmc_mg_sq1985_adv : hmg_us_box_big_base {
				displayName = "Ящик доп. БК USMC MG Squad 1985 (US)";
				class TransportMagazines {
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
							count = 25;
						};
						class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
							magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
							count = 10;
						};
						class _xx_rhsusf_100Rnd_762x51 {
							magazine = "rhsusf_100Rnd_762x51";
							count = 16;
						};
/*						class _xx_CUP_15Rnd_9x19_M9 {
							magazine = "CUP_15Rnd_9x19_M9";
							count = 4;
						};
*/
				};
		};
		class hmg_us_box_usmc_ass_sq1985_adv : hmg_us_box_big_base {
				displayName = "Ящик доп. БК USMC Assault Squad 1985 (US)";
				class TransportMagazines {
						class _xx_Trixie_SMAW_HEAA {
							magazine = "Trixie_SMAW_HEAA";
							count = 1;
						};
						class _xx_ClaymoreDirectionalMine_remote_mag {
							magazine = "ClaymoreDirectionalMine_remote_mag";
							count = 5;
						};
						class _xx_DemoCharge_remote_mag {
							magazine = "DemoCharge_remote_mag";
							count = 10;
						};
						class _xx_Trixie_SMAW_HEDP {
							magazine = "Trixie_SMAW_HEDP";
							count = 1;
						};
/*
						class _xx_CUP_15Rnd_9x19_M9 {
							magazine = "CUP_15Rnd_9x19_M9";
							count = 4;
						};
*/
				};
				class TransportItems {
						class _xx_AGM_M26_Clacker {
							name = "AGM_M26_Clacker";
							count = 3;
						};
				};

		};
