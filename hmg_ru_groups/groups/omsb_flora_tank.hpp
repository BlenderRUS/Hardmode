class group_ru_msv_tank_company_bmp
			{
				name = "Танковая рота ТБ";
				aliveCategory="Танковая рота (ВСР-98)";
				class group_ru_msv_tank_omsb_f_HQ
				{
					name = "Управление танковой роты";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_tank_compkommander";
						rank = "CAPTAIN";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_tank_st_tech";
						rank = "SERGEANT";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_msv_tank_driver";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
				};
			class group_ru_msv_tank_omsb_f_pl_HQ
				{
					name = "Упревление танкового взвода";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_tank_pltkommander";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_tank_gunner";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_msv_tank_driver";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
				class group_ru_msv_tank_omsb_sq1
				{
					name = "Экипаж танка";
					faction = "hmg_faction_msv";
					side = 0;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 0;
						vehicle = "hmg_msv_tank_kommander";
						rank = "SERGEANT";
						position[] = {0,3,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "hmg_msv_tank_gunner";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "hmg_msv_tank_driver";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
			};