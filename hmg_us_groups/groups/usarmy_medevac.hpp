			class group_nato_usarmy_w_infantry_MEDEVAC
			{
				name = "US ARMY MEDEVAC";
				aliveCategory="Infantry Medevac";
				class group_nato_usarmy_medevac_w
				{
					name = "US ARMY MEDEVAC (woodland)";
					faction = "rhs_faction_usarmy_w_hmg";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "us_army_wood_ocp_sqld";
						rank = "SERGEANT";
						position[] = {0,1,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "us_army_wood_ocp_tld2";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "us_army_wood_ocp_ar";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "us_army_wood_ocp_gp";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
				};
				
				class group_nato_usarmy_medevac_d
				{
					name = "US ARMY MEDEVAC (desert)";
					faction = "rhs_faction_usarmy_d_hmg";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "us_army_des_ucp_sqld";
						rank = "SERGEANT";
						position[] = {0,1,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "us_army_des_ucp_tld2";
						rank = "CORPORAL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "us_army_des_ucp_ar";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "us_army_des_ucp_gp";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
				};
				
			};
			
			class group_nato_usarmy_w_infantry_AMB
			{
				name = "US ARMY AMBULANCE";
				aliveCategory="Infantry Ambulance";
				class group_nato_usarmy_amb_w
				{
					name = "US ARMY AMBULANCE SQUAD (woodland)";
					faction = "rhs_faction_usarmy_d_hmg";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "us_army_wood_ocp_sqld";
						rank = "SERGEANT";
						position[] = {0,1,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "us_army_wood_ocp_amb_aide";
						rank = "PRIVATE";
						position[] = {2,0,0 };
					};
					class Unit2
					{
						side = 1;
						vehicle = "us_army_wood_ocp_amb_aide";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "us_army_wood_ocp_amb_aide";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
				};
				class group_nato_usarmy_amb_d
				{
					name = "US ARMY AMBULANCE SQUAD (desert)";
					faction = "rhs_faction_usarmy_w_hmg";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "us_army_des_ucp_sqld";
						rank = "SERGEANT";
						position[] = {0,1,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "us_army_des_ucp_amb_aide";
						rank = "PRIVATE";
						position[] = {2,0,0 };
					};
					class Unit2
					{
						side = 1;
						vehicle = "us_army_des_ucp_amb_aide";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "us_army_des_ucp_amb_aide";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
				};				
				
			};