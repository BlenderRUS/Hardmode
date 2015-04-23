class group_ru_tank_tank_company_surp
			{
				name = "Танковая рота ТБ";
				aliveCategory="Танковая рота (цифра)";
				class group_ru_tank_tank_surp_omsb_s_HQ
				{
					name = "Управление танковой роты";
					faction = "group_ru_tank_surp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_s_compkommander";
						rank = "CAPTAIN";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_s_st_tech";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_s_driver";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
				};
			class group_ru_tank_tank_surp_omsb_s_pl_HQ
				{
					name = "Управление танкового взвода";
					faction = "group_ru_tank_surp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_s_pltkommander";
						rank = "LIEUTENANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_s_gunner";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_s_driver";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
				class group_ru_tank_tank_surp_omsb_s_sq1
				{
					name = "Экипаж танка";
					faction = "group_ru_tank_surp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_s_kommander";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_s_gunner";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_s_driver";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
			};
class group_ru_tank_s_bmp_attach
			{
				name = "Управление и иные взвода МСБ на БМП";
				aliveCategory="Управление и аттачи (ЕМР)";
				class group_ru_tank_s_omsb_s_med_hq
				{
					name = "Управление медицинского взвод (ЕМР)";
					faction = "hmg_faction_tank_surp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_s_med_leader";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_s_felsher";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
				};
				class group_ru_tank_s_omsb_s_med_squad
				{
					name = "Медицинское отделение (ЕМР)";
					faction = "hmg_faction_tank_surp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_s_zkv_san_instruktor";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_s_san_instruktor";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_s_voditel_sanitar";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
				class group_ru_tank_s_omsb_s_med_soe
				{
					name = "Отделение сбора и эвакуации раненных (ЕМР)";
					faction = "hmg_faction_tank_surp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_s_medic_st";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_s_san_instruktor";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_s_medic_dr";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
				
				class group_ru_tank_omsb_gun_sq_hq
				{
					name = "Управление гранатометного взвода (ЕМР)";
					faction = "group_ru_tank_surp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_s_ko_r";
						rank = "LIEUTENANT";
						position[] = {0,3,0};
					};
				};
				class group_ru_tank_omsb_gun_sq_s
				{
					name = "Гранатометное отделение (ЕМР)";
					faction = "group_ru_tank_surp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_s_sergeant_kmb";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_s_gunner_zkmb";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_s_driver_msr";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_tank_s_ags_s";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_tank_s_ags_n";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_tank_s_ags_s";
						rank = "CORPORAL";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_tank_s_ags_s";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
			};
class group_ru_tank_bmp_surp
			{
				name = "Мотострелковая рота МСБ на БМП";
				aliveCategory="Пехота ОМСБ (ЕМР)";
				class group_ru_tank_omsb_s_bmp_HQ
				{
					name = "Управление МС роты на БМП (ЕМР)";
					faction = "group_ru_tank_surp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_s_officer";
						rank = "CAPTAIN";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_s_st_tech_msr";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_s_strsh";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_tank_s_medic";
						rank = "SERGEANT";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_tank_s_sergeant_kmb";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_tank_s_driver_st";
						rank = "SERGEANT";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_tank_s_driver_msr";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "hmg_tank_s_gunner_zkmb";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "hmg_tank_s_gunner_zkmb";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "hmg_tank_s_rifleman_radist";
						rank = "CORPORAL";
						position[] = {10,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "hmg_tank_s_rifleman_sbr";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
				};
			class group_ru_tank_omsb_s_bmp_pl_HQ
				{
					name = "Управление МС взвода на БМП (ЕМР)";
					faction = "group_ru_tank_surp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_s_ko_r";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_s_radist";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
				};
				class group_ru_tank_omsb_bmp_sq_s
				{
					name = "Мострелковое отделение на БМП (ЕМР)";
					faction = "group_ru_tank_surp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_s_sergeant_kmb";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_s_efreitor";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_s_gunner_zkmb";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_tank_s_driver_msr";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_tank_s_at";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_tank_s_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_tank_s_machinegunner";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "hmg_tank_s_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
				};
			};
class group_ru_tank_gsabatr_surp
			{
				name = "Гаубичная СА батарея МСБ на БМП";
				aliveCategory="Артиллеристы";
				class group_ru_tank_gsabatr_msb_s_HQ
				{
					name = "Управление ГСАБатар";
					faction = "hmg_faction_tank_surpat";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_s_komandir_minbatr";
						rank = "CAPTAIN";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_s_strsh_gau";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_s_st_tech_msr";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_tank_s_medic";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
				};
				class group_ru_tank_gsabatr_msb_s_HQ_squad
				{
					name = "Отделение управления ГСАБатар";
					faction = "hmg_faction_tank_surpat";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_s_sergeant";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_s_komot_art_recon_squad";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_s_radist";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_tank_s_dalnomershik";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_tank_s_driver";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class group_ru_tank_gsabatr_msb_s_1st_GSAPlatton_HQ
				{
					name = "Управление 1ого ГСА взвода";
					faction = "hmg_faction_tank_surpat";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_s_komvzvoda_sob";
						rank = "LIEUTENANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_s_voditel_radist";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
				};
				class group_ru_tank_gsabatr_msb_s_1st_GSAPlatton_HQ_squad
				{
					name = "Отделение управления";
					faction = "hmg_faction_tank_surpat";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_s_komot_podvoza";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_s_st_radist";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_s_komot_art_recon_squad";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_tank_s_driver";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
				};
				class group_ru_tank_gsabatr_msb_s_fire_squad
				{
					name = "Расчет орудия";
					faction = "hmg_faction_tank_surpat";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_s_sau_kommander";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_s_gunner";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_tank_s_driver";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
					class group_ru_tank_gsabatr_msb_s_2st_GSAPlatton_HQ
				{
					name = "Управление 2ого ГСА взвода";
					faction = "hmg_faction_tank_surpat";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_s_ko_r";
						rank = "LIEUTENANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_tank_s_voditel_radist";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
				};
			};