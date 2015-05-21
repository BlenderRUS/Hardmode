class group_ru_msv_1995_bmp
			{
				name = "Мотострелковая рота ОМСП на БМП";
				aliveCategory="Пехота ОМСБ (ВСР-93)";
				class group_ru_msv_1995_omsb_f_bmp_HQ
				{
					name = "Управление МС роты на БМП (ВСР-93)";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_1995_officer";
						rank = "CAPTAIN";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_1995_politruk";
						rank = "LIEUTENANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_msv_1995_strsh";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_msv_1995_st_tech";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_msv_1995_sergeant_kmb";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_msv_1995_driver_st";
						rank = "SERGEANT";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_msv_1995_driver";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "hmg_msv_1995_gunner_zkmb";
						rank = "CORPORAL";
						position[] = {8,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "hmg_msv_1995_gunner_zkmb";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "hmg_msv_1995_rifleman_radist";
						rank = "CORPORAL";
						position[] = {10,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "hmg_msv_1995_rifleman_sbr";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit11
					{
						side = 0;
						vehicle = "hmg_msv_1995_medic";
						rank = "CORPORAL";
						position[] = {12,0,0};
					};
				};
			class group_ru_msv_1995_omsb_f_bmp_pl_HQ
				{
					name = "Управление МС взвода на БМП (ВСР-93)";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_1995_ko_r";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_1995_marksman";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_msv_1995_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_msv_1995_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_msv_1995_marksman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_msv_1995_rifleman_radist";
						rank = "PRIVATE";
						position[] = {6,0,0};
					};
				};
				class group_ru_msv_1995_omsb_bmp_sq
				{
					name = "Мострелковое отделение на БМП (ВСР-93)";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_1995_sergeant_kmb";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_1995_efreitor";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_msv_1995_gunner_zkmb";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_msv_1995_ar";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_msv_1995_at";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_msv_1995_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_msv_1995_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "hmg_msv_1995_driver";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
				};
			};
class group_ru_msv_1995_bmp_attach
			{
				name = "Управление и иные взвода МСБ на БМП";
				aliveCategory="Управление и аттачи (ВСР-93)";
				class group_ru_msv_1995_omsb_f_med
				{
					name = "Медицинский пункт батальона";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_1995_med_leader";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_1995_medic_st";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_msv_1995_san_instruktor";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_msv_1995_medic";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_msv_1995_voditel_sanitar";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_msv_1995_medic";
						rank = "CORPORAL";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_msv_1995_voditel_sanitar";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "hmg_msv_1995_medic";
						rank = "PRIVATE";
						position[] = {8,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "hmg_msv_1995_voditel_sanitar";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class group_ru_msv_1995_omsb_gun_sq_hq_bmp
				{
					name = "Управление гранатометного взвода (ВСР-93)";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_1995_ko_gv";
						rank = "LIEUTENANT";
						position[] = {0,1,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_1995_rifleman_radist";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
				};
				class group_ru_msv_1995_omsb_gun_sq_bmp
				{
					name = "Гранатометное отделение (ВСР-93)";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_1995_sergeant_go";
						rank = "SERGEANT";
						position[] = {0,1,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_1995_gunner_zkmb";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_msv_1995_driver";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_msv_1995_ags_s";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_msv_1995_ags_n";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_msv_1995_ags_s";
						rank = "CORPORAL";
						position[] = {6,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "hmg_msv_1995_ags_n";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class group_ru_msv_1995_omsb_scout_sq_hq_bmp
				{
					name = "Управление разведовательного взвода (ВСР-93)";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_1995_razved4ik_officer";
						rank = "LIEUTENANT";
						position[] = {0,3,0};
					};
				};
				class group_ru_msv_1995_omsb_1scout_sq_bmp
				{
					name = "1ое Равзедовательное отделение (ВСР-93)";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_1995_razved4ik_zkvko";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_1995_razved4ik_stoperator_rls";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_msv_1995_razved4ik_sbr";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_msv_1995_razved4ik_radist";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_msv_1995_gunner_zkmb";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_msv_1995_driver_st";
						rank = "SERGEANT";
						position[] = {6,0,0};
					};
				};
				class group_ru_msv_1995_omsb_2scout_sq_bmp
				{
					name = "2ое Равзедовательное отделение (ВСР-93)";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_1995_razved4ik_ko";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_1995_razved4ik_efreitor";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_msv_1995_razved4ik_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_msv_1995_razved4ik_strelok";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_msv_1995_gunner_zkmb";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_msv_1995_driver";
						rank = "PRIVATE";
						position[] = {6,0,0};
					};
				};
				class group_ru_msv_1995_omsb_3scout_sq_bmp
				{
					name = "3е Равзедовательное отделение (ВСР-93)";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_1995_razved4ik_ko";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_1995_razved4ik_efreitor";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_msv_1995_razved4ik_at";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "hmg_msv_1995_razved4ik_strelok";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "hmg_msv_1995_gunner_zkmb";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "hmg_msv_1995_driver";
						rank = "PRIVATE";
						position[] = {6,0,0};
					};
				};
			};
				