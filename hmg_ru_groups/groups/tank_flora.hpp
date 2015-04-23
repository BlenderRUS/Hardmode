class group_ru_tank_tank_company_f
			{
				name = "Танковая рота ТБ";
				aliveCategory="Танковая рота (ВСР-98)";
				class group_ru_tank_tank_omsb_f_HQ
				{
					name = "Управление танковой роты";
					faction = "hmg_faction_tank";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_compkommander";
						rank = "CAPTAIN";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_st_tech";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_driver";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
				};
			class group_ru_tank_tank_omsb_f_pl_HQ
				{
					name = "Упревление танкового взвода";
					faction = "hmg_faction_tank";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_pltkommander";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_gunner";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_driver";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
				class group_ru_tank_tank_omsb_sq1
				{
					name = "Экипаж танка";
					faction = "hmg_faction_tank";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_kommander";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_gunner";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_driver";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
			};
class group_ru_tank_bmp_attach
			{
				name = "Управление и иные взвода МСБ на БМП";
				aliveCategory="Управление и аттачи (ВСР-98)";
				class group_ru_tank_omsb_f_med
				{
					name = "Медицинский пункт батальона (ВСР-98)";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_med_leader";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_medic_st";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_san_instruktor";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_tank_medic";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_tank_voditel_sanitar";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_tank_medic";
						rank = "CORPORAL";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_tank_voditel_sanitar";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "hmg_tank_medic";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "hmg_tank_voditel_sanitar";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class group_ru_tank_omsb_gun_sq_hq_bmp
				{
					name = "Управление гранатометного взвода (ВСР-98)";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_ko_gv";
						rank = "LIEUTENANT";
						position[] = {0,3,0};
					};
				};
				class group_ru_tank_omsb_gun_sq_bmp
				{
					name = "Гранатометное отделение (ВСР-98)";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_sergeant_go";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_gunner_zkmb";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_driver_msr";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_tank_ags_s";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_tank_ags_n";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_tank_ags_s";
						rank = "CORPORAL";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_tank_ags_n";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
			};			
class group_ru_tank_bmp
			{
				name = "Мотострелковая рота МСБ на БМП";
				aliveCategory="Пехота ОМСБ (ВСР-98)";
				class group_ru_tank_omsb_f_bmp_HQ
				{
					name = "Управление МС роты на БМП (ВСР-98)";
					faction = "hmg_faction_tank";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_officer";
						rank = "CAPTAIN";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_politruk";
						rank = "LIEUTENANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_strsh";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_tank_st_tech_msr";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_tank_sergeant_kmb";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_tank_driver_st";
						rank = "SERGEANT";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_tank_driver_msr";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "hmg_tank_gunner_zkmb";
						rank = "CORPORAL";
						position[] = {8,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "hmg_tank_gunner_zkmb";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "hmg_tank_rifleman_radist";
						rank = "CORPORAL";
						position[] = {10,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "hmg_tank_rifleman_sbr";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit11
					{
						side = 0;
						vehicle = "hmg_tank_medic";
						rank = "CORPORAL";
						position[] = {12,0,0};
					};
				};
			class group_ru_tank_omsb_f_bmp_pl_HQ
				{
					name = "Управление МС взвода на БМП (ВСР-98)";
					faction = "hmg_faction_tank";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_ko_r";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_marksman";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_tank_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_tank_medic";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
				class group_ru_tank_omsb_bmp_sq1
				{
					name = "Первое мострелковое отделение на БМП (ВСР-98)";
					faction = "hmg_faction_tank";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_sergeant_zkv";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_efreitor";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_gunner_zkmb";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_tank_ar";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_tank_at";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_tank_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_tank_gp";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "hmg_tank_driver_msr";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
				};
				class group_ru_tank_omsb_bmp_sq
				{
					name = "Мострелковое отделение на БМП (ВСР-98)";
					faction = "hmg_faction_tank";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_sergeant_kmb";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_efreitor";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_gunner_zkmb";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_tank_ar";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_tank_at";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_tank_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_tank_gp";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "hmg_tank_driver_msr";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
				};
			};
class group_ru_tank_minbatr_flora
			{
				name = "Минометная батарея МСБ на БМП";
				aliveCategory="Минометчики";
				class group_ru_tank_minbatr_msb_HQ
				{
					name = "Управление минометной батареи";
					faction = "hmg_faction_tank_flora";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_komandir_minbatr";
						rank = "CAPTAIN";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_politruk";
						rank = "LIEUTENANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_strsh_minbatr";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_tank_medic";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
				};
				class group_ru_tank_minbatr_msb_HQ_platton
				{
					name = "Управление взвода управления";
					faction = "hmg_faction_tank_flora";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_komvzvoda_upravlenia";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_starshii_vi4islitel";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_komot_podvoza";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
				};
				class group_ru_tank_minbatr_msb_art_recon
				{
					name = "Отделение артиллерийской разведки";
					faction = "hmg_faction_tank_flora";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_komot_art_recon_squad";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_razved4ik";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_dalnomershik";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_tank_voditel";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
				};
				class group_ru_tank_minbatr_msb_ratelo_squad
				{
					name = "Отделение связи";
					faction = "hmg_faction_tank_flora";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_sergeant";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_st_radist";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_radist";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_tank_radist";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_tank_radist";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_tank_voditel_rpg";
						rank = "PRIVATE";
						position[] = {6,0,0};
					};
				};
				class group_ru_tank_minbatr_msb_fire_platoon
				{
					name = "Минометный взвод";
					faction = "hmg_faction_tank_flora";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_komvzvoda_ognevogo";
						rank = "LIEUTENANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_zkv_komandir_minometa";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_starshii_navod4ik";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_tank_master_nomer_rascheta";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_tank_nomer_rascheta";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_tank_voditel_rpg";
						rank = "PRIVATE";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_tank_zkv_komandir_minometa";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "hmg_tank_starshii_navod4ik";
						rank = "CORPORAL";
						position[] = {8,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "hmg_tank_nomer_rascheta";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "hmg_tank_nomer_rascheta";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "hmg_tank_voditel";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit11
					{
						side = 0;
						vehicle = "hmg_tank_zkv_komandir_minometa";
						rank = "SERGEANT";
						position[] = {12,0,0};
					};
					class Unit12
					{
						side = 0;
						vehicle = "hmg_tank_starshii_navod4ik";
						rank = "CORPORAL";
						position[] = {13,0,0};
					};
					class Unit13
					{
						side = 0;
						vehicle = "hmg_tank_nomer_rascheta";
						rank = "PRIVATE";
						position[] = {14,0,0};
					};
					class Unit14
					{
						side = 0;
						vehicle = "hmg_tank_nomer_rascheta";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit15
					{
						side = 0;
						vehicle = "hmg_tank_voditel";
						rank = "PRIVATE";
						position[] = {16,0,0};
					};
				};
			};			