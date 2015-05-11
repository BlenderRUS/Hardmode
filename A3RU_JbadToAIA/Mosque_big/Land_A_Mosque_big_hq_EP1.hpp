class Land_A_Mosque_big_hq_EP1: House_F
{
	scope = 1;
	scopeCurator = 1;
	displayName = "Mosque2";
	author = "Milkman & Smokedog";
	model = "\Jbad_Structures\mosque_big\jbad_mosque_big_hq.p3d";
	ladders[] = {{ "start1","end1" },{ "start2","end2" }};
	armor = 300;
	mapbuilder_filter = "Jbad Structures";
	vehicleClass = "jbad_mosques";
	mapSize = 16.5;
	cost = 40000;
	armorLights = 0.01;
	class DestructionEffects: DestructionEffects
	{
		class Ruin1
		{
			simulation = "ruin";
			type = "\Jbad_Structures\mosque_big\jbad_mosque_big_hq_ruins.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	aggregateReflectors[] = {{ "Light_1","Light_5" },{ "Light_2","Light_8" },{ "Light_3","Light_6" },{ "Light_4","Light_7" }};
	class Reflectors
	{
		class Light_1
		{
			color[] = {1900,1800,1700};
			ambient[] = {5,5,5};
			intensity = 1;
			size = 1;
			innerAngle = 100;
			outerAngle = 179;
			coneFadeCoef = 10;
			position = "Light_1_pos";
			direction = "Light_1_dir";
			hitpoint = "Glass_23";
			selection = "";
			useFlare = 1;
			flareSize = 1.0;
			flareMaxDistance = 500;
			blinking = 0;
			dayLight = 0;
			class Attenuation
			{
				start = 0;
				constant = 0;
				linear = 0;
				quadratic = 0.3;
				hardLimitStart = 60;
				hardLimitEnd = 100;
			};
		};
		class Light_2: Light_1
		{
			position = "Light_2_pos";
			direction = "Light_2_dir";
			hitpoint = "Glass_24";
			selection = "";
		};
		class Light_3: Light_1
		{
			position = "Light_3_pos";
			direction = "Light_3_dir";
			hitpoint = "Glass_25";
			selection = "";
		};
		class Light_4: Light_1
		{
			position = "Light_4_pos";
			direction = "Light_4_dir";
			hitpoint = "Glass_26";
			selection = "";
		};
		class Light_5: Light_1
		{
			position = "Light_5_pos";
			direction = "Light_5_dir";
			hitpoint = "Glass_30";
			selection = "";
		};
		class Light_6: Light_1
		{
			position = "Light_6_pos";
			direction = "Light_6_dir";
			hitpoint = "Glass_32";
			selection = "";
		};
		class Light_7: Light_1
		{
			position = "Light_7_pos";
			direction = "Light_7_dir";
			hitpoint = "Glass_33";
			selection = "";
		};
		class Light_8: Light_1
		{
			position = "Light_8_pos";
			direction = "Light_8_dir";
			hitpoint = "Glass_31";
			selection = "";
		};
		class Light_9: Light_1
		{
			innerAngle = 60;
			outerAngle = 120;
			position = "Light_9_pos";
			direction = "Light_9_dir";
			hitpoint = "Light_9";
			selection = "";
		};
	};
	class HitPoints
	{
		class Glass_1_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_1";
			visual = "Glass_1_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_1_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_1_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_2_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_2";
			visual = "Glass_2_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_2_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_2_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_3_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_3";
			visual = "Glass_3_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_3_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_3_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_4_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_4";
			visual = "Glass_4_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_4_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_4_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_5_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_5";
			visual = "Glass_5_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_5_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_5_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_6_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_6";
			visual = "Glass_6_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_6_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_6_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_7_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_7";
			visual = "Glass_7_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_7_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_7_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_8_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_8";
			visual = "Glass_8_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_8_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_8_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_9_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_9";
			visual = "Glass_9_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_9_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_9_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_10_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_10";
			visual = "Glass_10_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_10_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_10_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_11_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_11";
			visual = "Glass_11_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_11_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_11_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_12_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_12";
			visual = "Glass_12_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_12_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_12_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_13_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_13";
			visual = "Glass_13_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_13_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_13_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_14_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_14";
			visual = "Glass_14_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_14_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_14_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_15_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_15";
			visual = "Glass_15_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_15_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_15_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_16_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_16";
			visual = "Glass_16_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_16_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_16_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_17_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_17";
			visual = "Glass_17_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_17_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_17_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_18_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_18";
			visual = "Glass_18_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_18_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_18_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_19_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_19";
			visual = "Glass_19_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_19_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_19_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_20_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_20";
			visual = "Glass_20_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_20_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_20_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_21_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_21";
			visual = "Glass_21_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_21_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_21_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_22_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_22";
			visual = "Glass_22_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_22_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_22_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_23_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_23";
			visual = "Glass_23_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_23_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_23_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_24_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_24";
			visual = "Glass_24_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_24_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_24_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_25_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_25";
			visual = "Glass_25_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_25_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_25_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_26_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_26";
			visual = "Glass_26_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_26_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_26_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_27_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_27";
			visual = "Glass_27_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_27_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_27_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_28_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_28";
			visual = "Glass_28_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_28_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_28_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_29_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_29";
			visual = "Glass_29_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_29_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_29_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_30_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_30";
			visual = "Glass_30_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_30_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_30_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_31_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_31";
			visual = "Glass_31_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_31_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_31_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_32_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_32";
			visual = "Glass_32_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_32_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_32_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
		class Glass_33_hitpoint
		{
			armor = 0.01;
			material = -1;
			name = "Glass_33";
			visual = "Glass_33_hide";
			passThrough = 0;
			radius = 0.175;
			convexComponent = "Glass_33_hide";
			class DestructionEffects
			{
				class BrokenGlass1
				{
					simulation = "particles";
					type = "BrokenGlass1ND";
					position = "Glass_33_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2ND";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3ND";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4ND";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5ND";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6ND";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7ND";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SD";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SD";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SD";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SD";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SD";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SD";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SD";
				};
			};
		};
	};
	class AnimationSources
	{
		class Door_1
		{
			source = "user";
			initPhase = 0;
			animPeriod = 1;
		};
		class Door_2: Door_1{};
		class Door_3: Door_1{};
		class Door_4: Door_1{};
		class Door_5: Door_1{};
		class Door_6: Door_1{};
		class Door_7: Door_1{};
		class Door_8: Door_1{};
		class Door_9: Door_1{};
		class Door_10: Door_1{};
		class Door_11: Door_1{};
		class Door_12: Door_1{};
		class Door_13: Door_1{};
		class Door_14: Door_1{};
		class Glass_1_source
		{
			source = "Hit";
			hitpoint = "Glass_1_hitpoint";
			raw = 1;
		};
		class Glass_2_source: Glass_1_source
		{
			hitpoint = "Glass_2_hitpoint";
		};
		class Glass_3_source: Glass_1_source
		{
			hitpoint = "Glass_3_hitpoint";
		};
		class Glass_4_source: Glass_1_source
		{
			hitpoint = "Glass_4_hitpoint";
		};
		class Glass_5_source: Glass_1_source
		{
			hitpoint = "Glass_5_hitpoint";
		};
		class Glass_6_source: Glass_1_source
		{
			hitpoint = "Glass_6_hitpoint";
		};
		class Glass_7_source: Glass_1_source
		{
			hitpoint = "Glass_7_hitpoint";
		};
		class Glass_8_source: Glass_1_source
		{
			hitpoint = "Glass_8_hitpoint";
		};
		class Glass_9_source: Glass_1_source
		{
			hitpoint = "Glass_9_hitpoint";
		};
		class Glass_10_source: Glass_1_source
		{
			hitpoint = "Glass_10_hitpoint";
		};
		class Glass_11_source: Glass_1_source
		{
			hitpoint = "Glass_11_hitpoint";
		};
		class Glass_12_source: Glass_1_source
		{
			hitpoint = "Glass_12_hitpoint";
		};
		class Glass_13_source: Glass_1_source
		{
			hitpoint = "Glass_13_hitpoint";
		};
		class Glass_14_source: Glass_1_source
		{
			hitpoint = "Glass_14_hitpoint";
		};
		class Glass_15_source: Glass_1_source
		{
			hitpoint = "Glass_15_hitpoint";
		};
		class Glass_16_source: Glass_1_source
		{
			hitpoint = "Glass_16_hitpoint";
		};
		class Glass_17_source: Glass_1_source
		{
			hitpoint = "Glass_17_hitpoint";
		};
		class Glass_18_source: Glass_1_source
		{
			hitpoint = "Glass_18_hitpoint";
		};
		class Glass_19_source: Glass_1_source
		{
			hitpoint = "Glass_19_hitpoint";
		};
		class Glass_20_source: Glass_1_source
		{
			hitpoint = "Glass_20_hitpoint";
		};
		class Glass_21_source: Glass_1_source
		{
			hitpoint = "Glass_21_hitpoint";
		};
		class Glass_22_source: Glass_1_source
		{
			hitpoint = "Glass_22_hitpoint";
		};
		class Glass_23_source: Glass_1_source
		{
			hitpoint = "Glass_23_hitpoint";
		};
		class Glass_24_source: Glass_1_source
		{
			hitpoint = "Glass_24_hitpoint";
		};
		class Glass_25_source: Glass_1_source
		{
			hitpoint = "Glass_25_hitpoint";
		};
		class Glass_26_source: Glass_1_source
		{
			hitpoint = "Glass_26_hitpoint";
		};
		class Glass_27_source: Glass_1_source
		{
			hitpoint = "Glass_27_hitpoint";
		};
		class Glass_28_source: Glass_1_source
		{
			hitpoint = "Glass_28_hitpoint";
		};
		class Glass_29_source: Glass_1_source
		{
			hitpoint = "Glass_29_hitpoint";
		};
		class Glass_30_source: Glass_1_source
		{
			hitpoint = "Glass_30_hitpoint";
		};
		class Glass_31_source: Glass_1_source
		{
			hitpoint = "Glass_31_hitpoint";
		};
		class Glass_32_source: Glass_1_source
		{
			hitpoint = "Glass_32_hitpoint";
		};
		class Glass_33_source: Glass_1_source
		{
			hitpoint = "Glass_33_hitpoint";
		};
	};
	class UserActions
	{
		class OpenDoor_1
		{
			displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName = "Open Door";
			position = "Door_1";
			priority = 0.4;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "((this animationPhase 'Door_1') < 0.5)";
			statement = "([this, 'Door_1','Door_1_Handle','Door_1_Handle_2','Door_2','Door_2_Handle','Door_2_Handle_2'] execVM ""\Jbad_Structures\scripts\Doors_open.sqf"")";
		};
		class CloseDoor_1: OpenDoor_1
		{
			displayName = "Close Door";
			priority = 0.2;
			condition = "((this animationPhase 'Door_1') >= 0.5)";
			statement = "([this, 'Door_1','Door_1_Handle','Door_1_Handle_2','Door_2','Door_2_Handle','Door_2_Handle_2'] execVM ""\jbad_structures\scripts\Doors_close.sqf"")";
		};
		class OpenDoor_2: OpenDoor_1
		{
			position = "Door_6";
			condition = "((this animationPhase 'Door_6') < 0.5)";
			statement = "([this, 'Door_6','Door_6_Handle','Door_6_Handle_2'] execVM ""\Jbad_Structures\scripts\Door_open.sqf"")";
		};
		class CloseDoor_2: CloseDoor_1
		{
			condition = "((this animationPhase 'Door_6') >= 0.5)";
			statement = "([this, 'Door_6','Door_6_Handle','Door_6_Handle_2'] execVM ""\jbad_structures\scripts\Door_close.sqf"")";
		};
		class OpenDoor_3: OpenDoor_1
		{
			position = "Door_5";
			condition = "((this animationPhase 'Door_5') < 0.5)";
			statement = "([this, 'Door_5','Door_5_Handle','Door_5_Handle_2'] execVM ""\Jbad_Structures\scripts\Door_open.sqf"")";
		};
		class CloseDoor_3: CloseDoor_1
		{
			condition = "((this animationPhase 'Door_5') >= 0.5)";
			statement = "([this, 'Door_5','Door_5_Handle','Door_5_Handle_2'] execVM ""\jbad_structures\scripts\Door_close.sqf"")";
		};
		class OpenDoor_4: OpenDoor_1
		{
			position = "Door_10";
			condition = "((this animationPhase 'Door_10') < 0.5)";
			statement = "([this, 'Door_10','Door_10_Handle','Door_10_Handle_2'] execVM ""\Jbad_Structures\scripts\Door_open.sqf"")";
		};
		class CloseDoor_4: CloseDoor_1
		{
			condition = "((this animationPhase 'Door_10') >= 0.5)";
			statement = "([this, 'Door_10','Door_10_Handle','Door_10_Handle_2'] execVM ""\jbad_structures\scripts\Door_close.sqf"")";
		};
		class OpenDoor_5: OpenDoor_1
		{
			position = "Door_7";
			condition = "((this animationPhase 'Door_7') < 0.5)";
			statement = "([this, 'Door_7','Door_7_Handle','Door_7_Handle_2'] execVM ""\Jbad_Structures\scripts\Door_open.sqf"")";
		};
		class CloseDoor_5: CloseDoor_1
		{
			condition = "((this animationPhase 'Door_7') >= 0.5)";
			statement = "([this, 'Door_7','Door_7_Handle','Door_7_Handle_2'] execVM ""\jbad_structures\scripts\Door_close.sqf"")";
		};
		class OpenDoor_6: OpenDoor_1
		{
			position = "Door_3";
			condition = "((this animationPhase 'Door_3') < 0.5)";
			statement = "([this, 'Door_3','Door_3_Handle','Door_3_Handle_2','Door_4','Door_4_Handle','Door_4_Handle_2'] execVM ""\Jbad_Structures\scripts\Doors_open.sqf"")";
		};
		class CloseDoor_6: CloseDoor_1
		{
			condition = "((this animationPhase 'Door_3') >= 0.5)";
			statement = "([this, 'Door_3','Door_3_Handle','Door_3_Handle_2','Door_4','Door_4_Handle','Door_4_Handle_2'] execVM ""\jbad_structures\scripts\Doors_close.sqf"")";
		};
		class OpenDoor_7: OpenDoor_1
		{
			position = "Door_9";
			condition = "((this animationPhase 'Door_9') < 0.5)";
			statement = "([this, 'Door_9','Door_9_Handle','Door_9_Handle_2'] execVM ""\Jbad_Structures\scripts\Door_open.sqf"")";
		};
		class CloseDoor_7: CloseDoor_1
		{
			condition = "((this animationPhase 'Door_9') >= 0.5)";
			statement = "([this, 'Door_9','Door_9_Handle','Door_9_Handle_2'] execVM ""\jbad_structures\scripts\Door_close.sqf"")";
		};
		class OpenDoor_8: OpenDoor_1
		{
			position = "Door_8";
			condition = "((this animationPhase 'Door_8') < 0.5)";
			statement = "([this, 'Door_8','Door_8_Handle','Door_8_Handle_2'] execVM ""\Jbad_Structures\scripts\Door_open.sqf"")";
		};
		class CloseDoor_8: CloseDoor_1
		{
			condition = "((this animationPhase 'Door_8') >= 0.5)";
			statement = "([this, 'Door_8','Door_8_Handle','Door_8_Handle_2'] execVM ""\jbad_structures\scripts\Door_close.sqf"")";
		};
		class OpenDoor_9: OpenDoor_1
		{
			position = "Door_11";
			condition = "((this animationPhase 'Door_11') < 0.5)";
			statement = "([this, 'Door_11','Door_11_Handle','Door_11_Handle_2'] execVM ""\Jbad_Structures\scripts\Door_open.sqf"")";
		};
		class CloseDoor_9: CloseDoor_1
		{
			condition = "((this animationPhase 'Door_11') >= 0.5)";
			statement = "([this, 'Door_11','Door_11_Handle','Door_11_Handle_2'] execVM ""\jbad_structures\scripts\Door_close.sqf"")";
		};
		class OpenDoor_10: OpenDoor_1
		{
			position = "Door_12";
			condition = "((this animationPhase 'Door_12') < 0.5)";
			statement = "([this, 'Door_12','Door_12_Handle','Door_12_Handle_2'] execVM ""\Jbad_Structures\scripts\Door_open.sqf"")";
		};
		class CloseDoor_10: CloseDoor_1
		{
			condition = "((this animationPhase 'Door_12') >= 0.5)";
			statement = "([this, 'Door_12','Door_12_Handle','Door_12_Handle_2'] execVM ""\jbad_structures\scripts\Door_close.sqf"")";
		};
		class OpenDoor_11: OpenDoor_1
		{
			position = "Door_13";
			condition = "((this animationPhase 'Door_13') < 0.5)";
			statement = "([this, 'Door_13','Door_13_Handle','Door_13_Handle_2'] execVM ""\Jbad_Structures\scripts\Door_open.sqf"")";
		};
		class CloseDoor_11: CloseDoor_1
		{
			condition = "((this animationPhase 'Door_13') >= 0.5)";
			statement = "([this, 'Door_13','Door_13_Handle','Door_13_Handle_2'] execVM ""\jbad_structures\scripts\Door_close.sqf"")";
		};
		class OpenDoor_12: OpenDoor_1
		{
			position = "Door_14";
			condition = "((this animationPhase 'Door_14') < 0.5)";
			statement = "([this, 'Door_14','Door_14_Handle','Door_14_Handle_2'] execVM ""\Jbad_Structures\scripts\Door_open.sqf"")";
		};
		class CloseDoor_12: CloseDoor_1
		{
			condition = "((this animationPhase 'Door_14') >= 0.5)";
			statement = "([this, 'Door_14','Door_14_Handle','Door_14_Handle_2'] execVM ""\jbad_structures\scripts\Door_close.sqf"")";
		};
	};
	actionBegin1 = "OpenDoor_1";
	actionEnd1 = "CloseDoor_1";
	actionBegin2 = "OpenDoor_2";
	actionEnd2 = "CloseDoor_2";
	actionBegin3 = "OpenDoor_3";
	actionEnd3 = "CloseDoor_3";
	actionBegin4 = "OpenDoor_4";
	actionEnd4 = "CloseDoor_4";
	actionBegin5 = "OpenDoor_5";
	actionEnd5 = "CloseDoor_5";
	actionBegin6 = "OpenDoor_6";
	actionEnd6 = "CloseDoor_6";
	actionBegin7 = "OpenDoor_7";
	actionEnd7 = "CloseDoor_7";
	actionBegin8 = "OpenDoor_8";
	actionEnd8 = "CloseDoor_8";
	actionBegin9 = "OpenDoor_9";
	actionEnd9 = "CloseDoor_9";
	actionBegin10 = "OpenDoor_10";
	actionEnd10 = "CloseDoor_10";
	actionBegin11 = "OpenDoor_11";
	actionEnd11 = "CloseDoor_11";
	actionBegin12 = "OpenDoor_12";
	actionEnd12 = "CloseDoor_12";
	numberOfDoors = 12;
};