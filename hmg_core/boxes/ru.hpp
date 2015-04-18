
			class hmg_ru_box_small_base : rhs_weapons_crate_ak_ammo_545x39_standard {
				vehicleClass =	"hmg_ru_b";
				displayName = "Ящик для БК РФ  мал.(пустой)";
				scope = 2;
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
				vehicleClass =	"hmg_ru_b";
				model = "rhsafrf\addons\rhs_weapons\crates\rhs_7ya37_1";
				icon = "iconCrateLarge";
				displayName = "Ящик для БК РФ больш. (пустой)";
				scope = 2;
				type = 0;
		
				class TransportWeapons {};
				
				class TransportMagazines {};
				
				class TransportItems {};
			};

			class hmg_ru_box_gren_base : Box_IND_Grenades_F {
				vehicleClass =	"hmg_ru_b";
				displayName = "Ящик для гранат РФ (пустой)";
				scope = 2;
				type = 0;
				transportMaxWeapons = 10;
				transportMaxMagazines = 200;
				
				class TransportWeapons {};
				
				class TransportMagazines {};
				
				class TransportItems {};
			};
			class hmg_ru_box_lau_base : Box_IND_WpsLaunch_F {
				vehicleClass =	"hmg_ru_b";
				displayName = "Ящик с гранатометами РФ (пустой)";
				scope = 2;
				type = 0;
				transportMaxWeapons = 10;
				transportMaxMagazines = 200;
				
				class TransportWeapons {};
				
				class TransportMagazines {};
				
				class TransportItems {};
			};
			
			class hmg_ru_box_gren :hmg_ru_box_gren_base {
				displayName = "Ящик c гранатами 50 шт. (РФ)";
				class TransportMagazines {
						class _xx_rhs_mag_rgd5 {
							magazine = "rhs_mag_rgd5";
							count = 30;
						};
						class _xx_rhs_mag_rdg2_white {
							magazine = "rhs_mag_rdg2_white";
							count = 10;
						};
						class _xx_rhs_mag_rdg2_black {
							magazine = "rhs_mag_rdg2_black";
							count = 10;
						};

				};
			};  
			class hmg_ru_box_rpg : hmg_ru_box_lau_base {
				displayName = "Ящик выстрелами РПГ-7 6 шт. (РФ)";
				class TransportMagazines {
						class _xx_rhs_rpg7_PG7VR_mag {
							magazine = "rhs_rpg7_PG7VR_mag";
							count = 1;
						};
						class _xx_rhs_rpg7_OG7V_mag {
							magazine = "rhs_rpg7_OG7V_mag";
							count = 2;
						};
						class _xx_rhs_rpg7_PG7VL_mag {
							magazine = "rhs_rpg7_PG7VL_mag";
							count = 3;
						};

				};
			};  
			
			class hmg_ru_box_rpg_vr : hmg_ru_box_lau_base {
				displayName = "ПГ-7ВР Резюме 6 шт.  (РФ)";
				class TransportMagazines {
						class _xx_rhs_rpg7_PG7VR_mag {
							magazine = "rhs_rpg7_PG7VR_mag";
							count =6;
						};
				};
			};  
			
			class hmg_ru_box_rpg_og : hmg_ru_box_lau_base {
				displayName = "ОГ-7В Осколок 6 шт. (РФ)";
				class TransportMagazines {
						class _xx_rhs_rpg7_OG7V_mag {
							magazine = "rhs_rpg7_OG7V_mag";
							count = 6;
						};
				};
			};  
			
			class hmg_ru_box_rpg_vl : hmg_ru_box_lau_base {
				displayName = "ПГ-7ВЛ Луч 6 шт. (РФ)";
				class TransportMagazines {
						class _xx_rhs_rpg7_PG7VL_mag {
							magazine = "rhs_rpg7_PG7VL_mag";
							count = 6;
						};
				};
			};  
			
			class hmg_ru_box_rpg26 : hmg_ru_box_lau_base {
				displayName = "Ящик РПГ/РШГ 6 шт. (РФ)";
				class TransportWeapons {
					class _xx_rhs_weap_rpg26 {
						weapon = "rhs_weap_rpg26";
						count = 3;
					};
					class _xx_rhs_weap_rshg2 {
						weapon = "rhs_weap_rshg2";
						count = 3;
					};
	
				};
				class TransportMagazines {
						class _xx_rhs_rpg26_mag {
							magazine = "rhs_rpg26_mag";
							count = 3;
						};
						class _xx_rhs_rshg2_mag {
							magazine = "rhs_rshg2_mag";
							count = 3;
						};

				};
			};  

			class hmg_ru_box_gp : hmg_ru_box_small_base {
				displayName = "Ящик c выстрелами ГП 84 шт. (РФ)";
				class TransportMagazines {
						class _xx_rhs_VOG25 {
							magazine = "rhs_VOG25";
							count = 40;
						};
						class _xx_rhs_VOG25P {
							magazine = "rhs_VOG25P";
							count = 10;
						};
						class _xx_rhs_VG40OP_white {
							magazine = "rhs_VG40OP_white";
							count = 3;
						};
						class _xx_rhs_GRD40_White {
							magazine = "rhs_GRD40_White";
							count = 6;
						};
						class _xx_rhs_VG40OP_green {
							magazine = "rhs_VG40OP_green";
							count = 3;
						};
						class _xx_rhs_VG40OP_red {
							magazine = "rhs_VG40OP_red";
							count = 3;
						};
						class _xx_rhs_GRD40_Green {
							magazine = "rhs_GRD40_Green";
							count = 3;
						};
						class _xx_rhs_GRD40_Red {
							magazine = "rhs_GRD40_Red";
							count = 3;
						};

				};
			};  
			class hmg_ru_box_metis : hmg_ru_box_small_base {
				displayName = "Ящик c ТПК Метис 2 шт. (РФ)";
				class TransportBackpacks {
						class _xx_hmg_metis_ruck2 {
							backpack = "hmg_metis_ruck2";
							count = 1;
						};
				};
			};

			class hmg_ru_box_mso_squad: hmg_ru_box_small_base {
				displayName = "Доп. БК МСО (РФ)";
				class TransportMagazines {
						class _xx_rhs_30Rnd_545x39_7N10_AK {
							magazine = "rhs_30Rnd_545x39_7N10_AK";
							count = 80;
						};
						class _xx_rhs_30Rnd_545x39_7N22_AK {
							magazine = "rhs_30Rnd_545x39_7N22_AK";
							count = 20;
						};
						class _xx_rhs_30Rnd_545x39_AK_green {
							magazine = "rhs_30Rnd_545x39_AK_green";
							count = 20;
						};
						class _xx_rhs_100Rnd_762x54mmR {
							magazine = "rhs_100Rnd_762x54mmR";
							count = 10;
						};
						class _xx_rhs_10Rnd_762x54mmR_7N1 {
							magazine = "rhs_10Rnd_762x54mmR_7N1";
							count = 6;
						};
						class _xx_rhs_VOG25 {
							magazine = "rhs_VOG25";
							count = 20;
						};
						class _xx_rhs_rpg7_PG7VR_mag {
							magazine = "rhs_rpg7_PG7VR_mag";
							count = 1;
						};
						class _xx_rhs_rpg7_OG7V_mag {
							magazine = "rhs_rpg7_OG7V_mag";
							count = 2;
						};
						class _xx_rhs_rpg7_PG7VL_mag {
							magazine = "rhs_rpg7_PG7VL_mag";
							count = 3;
						};


				};
			};  
			class hmg_ru_box_pdr_vzv: hmg_ru_box_big_base {
				displayName = "Доп. БК ПДР взвода ВДВ (РФ)";
				class TransportMagazines {
						class _xx_rhs_30Rnd_545x39_7N10_AK {
							magazine = "rhs_30Rnd_545x39_7N10_AK";
							count = 200;
						};
						class _xx_rhs_30Rnd_545x39_7N22_AK {
							magazine = "rhs_30Rnd_545x39_7N22_AK";
							count = 50;
						};
						class _xx_rhs_30Rnd_545x39_AK_green {
							magazine = "rhs_30Rnd_545x39_AK_green";
							count = 50;
						};
						class _xx_rhs_100Rnd_762x54mmR {
							magazine = "rhs_100Rnd_762x54mmR";
							count = 10;
						};
						class _xx_rhs_VOG25 {
							magazine = "rhs_VOG25";
							count = 60;
						};
						class _xx_rhs_rpg7_PG7VR_mag {
							magazine = "rhs_rpg7_PG7VR_mag";
							count = 1;
						};
						class _xx_rhs_rpg7_OG7V_mag {
							magazine = "rhs_rpg7_OG7V_mag";
							count = 2;
						};
						class _xx_rhs_rpg7_PG7VL_mag {
							magazine = "rhs_rpg7_PG7VL_mag";
							count = 3;
						};


				};
			};  

			class hmg_ru_box_dsh_rota: hmg_ru_box_big_base {
				displayName = "Доп. БК ДШ роты ВДВ (РФ)";
				class TransportMagazines {
						class _xx_rhs_30Rnd_545x39_7N10_AK {
							magazine = "rhs_30Rnd_545x39_7N10_AK";
							count = 300;
						};
						class _xx_rhs_30Rnd_545x39_7N22_AK {
							magazine = "rhs_30Rnd_545x39_7N22_AK";
							count = 75;
						};
						class _xx_rhs_30Rnd_545x39_AK_green {
							magazine = "rhs_30Rnd_545x39_AK_green";
							count = 75;
						};
						class _xx_rhs_100Rnd_762x54mmR {
							magazine = "rhs_100Rnd_762x54mmR";
							count = 10;
						};
						class _xx_rhs_10Rnd_762x54mmR_7N1 {
							magazine = "rhs_10Rnd_762x54mmR_7N1";
							count = 12;
						};

				};
			};  
			class hmg_ru_box_dsh_otd: hmg_ru_box_small_base {
				displayName = "Доп. БК ДШ отделения ВДВ (РФ)";
				class TransportMagazines {
						class _xx_rhs_30Rnd_545x39_7N10_AK {
							magazine = "rhs_30Rnd_545x39_7N10_AK";
							count = 60;
						};
						class _xx_rhs_30Rnd_545x39_7N22_AK {
							magazine = "rhs_30Rnd_545x39_7N22_AK";
							count = 15;
						};
						class _xx_rhs_30Rnd_545x39_AK_green {
							magazine = "rhs_30Rnd_545x39_AK_green";
							count = 15;
						};
						class _xx_rhs_100Rnd_762x54mmR {
							magazine = "rhs_100Rnd_762x54mmR";
							count = 10;
						};
						class _xx_rhs_VOG25 {
							magazine = "rhs_VOG25";
							count = 60;
						};

				};
			};  
			class hmg_ru_box_bmp2: hmg_ru_box_small_base {
				displayName = "Ящик для БМП-2 (РФ)";
				class TransportMagazines {
						class _xx_rhs_30Rnd_545x39_7N10_AK {
							magazine = "rhs_30Rnd_545x39_7N10_AK";
							count = 140;
						};
						class _xx_rhs_30Rnd_545x39_7N22_AK {
							magazine = "rhs_30Rnd_545x39_7N22_AK";
							count = 15;
						};
						class _xx_rhs_30Rnd_545x39_AK_green {
							magazine = "rhs_30Rnd_545x39_AK_green";
							count = 10;
						};
						class _xx_rhs_100Rnd_762x54mmR {
							magazine = "rhs_100Rnd_762x54mmR";
							count = 20;
						};
						class _xx_rhs_mag_rgd5 {
							magazine = "rhs_mag_rgd5";
							count = 12;
						};
						class _xx_rhs_rpg7_PG7VR_mag {
							magazine = "rhs_rpg7_PG7VR_mag";
							count = 1;
						};
						class _xx_rhs_rpg7_OG7V_mag {
							magazine = "rhs_rpg7_OG7V_mag";
							count = 1;
						};
						class _xx_rhs_rpg7_PG7VL_mag {
							magazine = "rhs_rpg7_PG7VL_mag";
							count = 3;
						};


				};
			};  

