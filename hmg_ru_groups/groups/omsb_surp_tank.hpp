class group_ru_msv_tank_company_surp
			{
				name = "Танковая рота ТБ";
				aliveCategory="Танковая рота ";
				class group_ru_msv_tank_surp_omsb_s_HQ
				{
					name = "Управление танковой роты";
					faction = "hmg_faction_msv_surpat";
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
				class group_ru_msv_tank_surp_omsb_s_pl_HQ
				{
					name = "Упревление танкового взвода";
					faction = "hmg_faction_msv_surpat";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_tank_s_pltkommander";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
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
				class group_ru_msv_tank_surp_omsb_s_sq1
				{
					name = "Экипаж танка";
					faction = "hmg_faction_msv_surpat";
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