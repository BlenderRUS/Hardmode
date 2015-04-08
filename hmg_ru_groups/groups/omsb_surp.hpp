class group_ru_msv_s_attach
			{
				name = "Управление и иные взвода МСБ на БТР";
				aliveCategory="Управление и аттачи (ЕМР)";
				class group_ru_msv_s_omsb_s_med_hq
				{
					name = "Управление медицинского взвод (ЕМР)";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_s_med_leader";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_s_felsher";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
				};
				class group_ru_msv_s_omsb_s_med_squad
				{
					name = "Медицинское отделение (ЕМР)";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_s_zkv_san_instruktor";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_s_san_instruktor";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_msv_s_voditel_sanitar";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
				class group_ru_msv_s_omsb_s_med_soe
				{
					name = "Отделение сбора и эвакуации раненных (ЕМР)";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_s_medic_st";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_s_medic";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_msv_s_medic_dr";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
				class group_ru_msv_s_omsb_s_gun_sq_hq
				{
					name = "Управление гранатометного взвода (ЕМР)";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_s_ko_r";
						rank = "LIEUTENANT";
						position[] = {0,3,0};
					};
				};
				class group_ru_msv_s_omsb_gun_sq
				{
					name = "Гранатометное отделение (ЕМР)";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_s_sergeant_go";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_s_gunner";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_msv_s_driver";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_msv_s_ags_s";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_msv_s_ags_n";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_msv_s_ags_s";
						rank = "CORPORAL";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_msv_s_ags_n";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class group_ru_msv_s_omsb_s_pto_sq_hq
				{
					name = "Управление противотанкового взвода(ЕМР)";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_s_ko_r";
						rank = "LIEUTENANT";
						position[] = {0,3,0};
					};
				};
				class group_ru_msv_omsb_s_pto
				{
					name = "Противотанковое отделение(ЕМР)";
					faction = "hmg_faction_msv_surp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_s_sergeant_pto";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_s_metis_s";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_msv_s_metis_n";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_msv_s_metis_s";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_msv_s_metis_n";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_msv_s_metis_s";
						rank = "CORPORAL";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_msv_s_metis_n";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "hmg_msv_s_gunner";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "hmg_msv_s_driver";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
			};
class group_ru_msv_surp
			{
				name = "Мотострелковая рота МСБ на БТР";
				aliveCategory="Пехота ОМСБ (ЕМР)";
				class group_ru_msv_omsb_s_HQ
				{
					name = "Управление МС роты(ЕМР)";
					faction = "hmg_faction_msv_surp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_s_officer";
						rank = "CAPTAIN";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_s_st_tech";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_msv_s_strsh";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_msv_s_medic";
						rank = "SERGEANT";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_msv_s_sergeant";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_msv_s_driver_st";
						rank = "SERGEANT";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_msv_s_gunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "hmg_msv_s_rifleman_radist";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "hmg_msv_s_rifleman_sbr";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
			class group_ru_msv_omsb_s_pl_HQ
				{
					name = "Управление МС взвода(ЕМР)";
					faction = "hmg_faction_msv_surp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_s_ko_r";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_sergeant_zkvo";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
				};
				class group_ru_msv_omsb_s_sq
				{
					name = "Мострелковое отделение(ЕМР)";
					faction = "hmg_faction_msv_surp";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_s_sergeant";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_s_efreitor";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_msv_s_gunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_msv_s_machinegunner";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_msv_s_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_msv_s_at";
						rank = "CORPORAL";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_msv_s_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "hmg_msv_s_gp";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "hmg_msv_s_driver";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
			};