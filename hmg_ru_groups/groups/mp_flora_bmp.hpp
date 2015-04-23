class group_ru_mp_bmp
			{
				name = "Рота морской пехоты";
				aliveCategory="Морская пехота (ВСР-98)";
				class group_ru_mp_omsb_f_bmp_HQ
				{
					name = "Управление роты морской пехоты (ВСР-98)";
					faction = "hmg_faction_mp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_mp_officer";
						rank = "CAPTAIN";
						position[] = {0,1,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_mp_politruk";
						rank = "LIEUTENANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_mp_strsh";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_mp_st_tech";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_mp_sergeant_kmb";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_mp_driver_st";
						rank = "SERGEANT";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_mp_gunner_zkmb";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "hmg_mp_rifleman_radist";
						rank = "CORPORAL";
						position[] = {8,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "hmg_mp_medic";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
			class group_ru_mp_omsb_f_bmp_pl_HQ
				{
					name = "Управление взвода морской пехоты (ВСР-98)";
					faction = "hmg_faction_mp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_mp_ko_r";
						rank = "LIEUTENANT";
						position[] = {0,1,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_mp_machinegunner";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_mp_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
				class group_ru_mp_omsb_bmp_sq1
				{
					name = "Первое отделение морской пехоты (ВСР-98)";
					faction = "hmg_faction_mp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_mp_sergeant_zkv";
						rank = "SERGEANT";
						position[] = {0,1,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_mp_efreitor";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_mp_gunner_zkmb";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_mp_ar";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_mp_at";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_mp_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_mp_gp";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "hmg_mp_driver";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "hmg_mp_marksman";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class group_ru_mp_omsb_bmp_sq
				{
					name = "Отделение морской пехоты (ВСР-98)";
					faction = "hmg_faction_mp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_mp_sergeant_kmb";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_mp_efreitor";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_mp_gunner_zkmb";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_mp_ar";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_mp_at";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_mp_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_mp_gp";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "hmg_mp_driver";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "hmg_mp_marksman";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
			};
class group_ru_mp_bmp_attach
			{
				name = "Управление и иные взвода батальона МП";
				aliveCategory="Управление и аттачи (ВСР-98)";
				class group_ru_mp_omsb_f_med
				{
					name = "Медицинский пункт батальона";
					faction = "hmg_faction_mp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_mp_med_leader";
						rank = "LIEUTENANT";
						position[] = {0,1,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_mp_medic_st";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_mp_san_instruktor";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_mp_medic";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_mp_voditel_sanitar";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_mp_medic";
						rank = "CORPORAL";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_mp_voditel_sanitar";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "hmg_mp_medic";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "hmg_mp_voditel_sanitar";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class group_ru_mp_omsb_gun_sq_hq_bmp
				{
					name = "Управление гранатометного взвода (ВСР-98)";
					faction = "hmg_faction_mp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_mp_ko_gv";
						rank = "LIEUTENANT";
						position[] = {0,1,0};
					};
				};
				class group_ru_mp_omsb_gun_sq_bmp
				{
					name = "Гранатометное отделение (ВСР-98)";
					faction = "hmg_faction_mp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_mp_sergeant_go";
						rank = "SERGEANT";
						position[] = {0,1,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_mp_gunner_zkmb";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_mp_driver";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_mp_ags_s";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_mp_ags_n";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_mp_ags_s";
						rank = "CORPORAL";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_mp_ags_n";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
			class group_ru_mp_omsb_pto_sq_hq_bmp
				{
					name = "Управление противотанкового взвода (ВСР-98)";
					faction = "hmg_faction_mp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_mp_ko_ptv";
						rank = "LIEUTENANT";
						position[] = {0,1,0};
					};
				};
			class group_ru_mp_omsb_f_pto
				{
					name = "Противотанковое отделение";
					faction = "hmg_faction_mp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_mp_sergeant_pto";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_mp_spg9_com";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_mp_spg9_nav";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_mp_spg9_zar";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_mp_spg9_pod";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_mp_spg9_com";
						rank = "CORPORAL";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_mp_spg9_nav";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "hmg_mp_spg9_zar";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "hmg_mp_spg9_pod";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "hmg_mp_gunner";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "hmg_mp_driver";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
			};
class group_ru_mp_minbatr_flora
			{
				name = "Минометная батарея батальона МП";
				aliveCategory="Минометчики";
				class group_ru_mp_minbatr_msb_HQ
				{
					name = "Управление минометной батареи";
					faction = "hmg_faction_mp_flora";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_mp_komandir_minbatr";
						rank = "CAPTAIN";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_mp_politruk";
						rank = "LIEUTENANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_mp_strsh";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_mp_medic";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
				};
				class group_ru_mp_minbatr_msb_HQ_platton
				{
					name = "Управление взвода управления";
					faction = "hmg_faction_mp_flora";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_mp_komvzvoda_upravlenia";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_mp_starshii_vi4islitel";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
				};
				class group_ru_mp_minbatr_msb_art_recon
				{
					name = "Отделение артиллерийской разведки";
					faction = "hmg_faction_mp_flora";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_mp_komot_art_recon_squad";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_mp_razved4ik";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_mp_dalnomershik";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_mp_voditel";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
				};
				class group_ru_mp_minbatr_msb_ratelo_squad
				{
					name = "Отделение связи";
					faction = "hmg_faction_mp_flora";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_mp_sergeant";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_mp_st_radist";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_mp_radist";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_mp_radist";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_mp_radist";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};
				class group_ru_mp_minbatr_msb_fire_platoon
				{
					name = "Минометный взвод";
					faction = "hmg_faction_mp_flora";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_mp_komvzvoda_ognevogo";
						rank = "LIEUTENANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_mp_zkv_komandir_minometa";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_mp_starshii_navod4ik";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_mp_master_nomer_rascheta";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_mp_nomer_rascheta";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_mp_komandir_minometa";
						rank = "SERGEANT";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_mp_starshii_navod4ik";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "hmg_mp_nomer_rascheta";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "hmg_mp_nomer_rascheta";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "hmg_mp_komandir_minometa";
						rank = "SERGEANT";
						position[] = {11,0,0};
					};
					class Unit11
					{
						side = 0;
						vehicle = "hmg_mp_starshii_navod4ik";
						rank = "CORPORAL";
						position[] = {12,0,0};
					};
					class Unit12
					{
						side = 0;
						vehicle = "hmg_mp_nomer_rascheta";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit13
					{
						side = 0;
						vehicle = "hmg_mp_nomer_rascheta";
						rank = "PRIVATE";
						position[] = {14,0,0};
					};
				};
			};				
class group_ru_mp_tank_company_bmp
			{
				name = "Танковая рота ТБ";
				aliveCategory="Танковая рота (ВСР-98)";
				class group_ru_mp_tank_omsb_f_HQ
				{
					name = "Управление танковой роты";
					faction = "hmg_faction_mp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_mp_tank_compkommander";
						rank = "CAPTAIN";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_mp_tank_st_tech";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_mp_tank_driver";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
				};
			class group_ru_mp_tank_omsb_f_pl_HQ
				{
					name = "Упревление танкового взвода";
					faction = "hmg_faction_mp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_mp_tank_pltkommander";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_mp_tank_gunner";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_mp_tank_driver";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
				class group_ru_mp_tank_omsb_sq1
				{
					name = "Экипаж танка";
					faction = "hmg_faction_mp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_mp_tank_kommander";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_mp_tank_gunner";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_mp_tank_driver";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
			};		