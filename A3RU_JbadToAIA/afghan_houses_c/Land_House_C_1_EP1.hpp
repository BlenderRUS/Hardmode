class Land_House_C_1_EP1: Jbad_House_c
{
	scope = 2;
	scopeCurator = 2;
	author = "Milkman & Smokedog";
	displayName = "Afghan House C 1";
	model = "\Jbad_Structures\afghan_houses_c\jbad_house_c_1.p3d";
	armorLights = 0.01;
	selectionDamage = "DamT_1";
	replaceDamagedHitpoints[] = {"HitZone_1_Hitpoint","HitZone_2_Hitpoint","HitZone_3_Hitpoint"};
	replaceDamaged = "Land_jbad_house_c_1_dam";
	class DestructionEffects: DestructionEffects
	{
		class Ruin1
		{
			simulation = "ruin";
			type = "\Jbad_Structures\afghan_houses_c\jbad_house_c_1_ruins.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class Reflectors
	{
		class Reflector_1
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
			hitpoint = "Glass_20";
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
				hardLimitStart = 100;
				hardLimitEnd = 150;
			};
		};
		class Reflector_2: Reflector_1
		{
			position = "Light_2_pos";
			direction = "Light_2_dir";
			hitpoint = "Glass_8";
			selection = "";
		};
		class Reflector_3: Reflector_1
		{
			position = "Light_3_pos";
			direction = "Light_3_dir";
			hitpoint = "Glass_21";
			selection = "";
		};
		class Reflector_4: Reflector_1
		{
			position = "Light_4_pos";
			direction = "Light_4_dir";
			hitpoint = "Glass_23";
			selection = "";
		};
		class Reflector_5: Reflector_1
		{
			position = "Light_5_pos";
			direction = "Light_5_dir";
			hitpoint = "Glass_22";
			selection = "";
		};
	};
	class HitPoints
	{
		class HitZone_1_hitpoint
		{
			armor = 0.25;
			material = -1;
			name = "dam1";
			visual = "dam1";
			passThrough = 0.0;
			convexComponent = "dam1";
			radius = 0.055;
			explosionShielding = 30;
			minimalHit = 0.25;
			class DestructionEffects
			{
				class Dust
				{
					simulation = "particles";
					type = "HousePartDust";
					position = "Dam_1_effects";
					intensity = 1;
					interval = 1;
					lifeTime = 0.01;
				};
				class Dust2: Dust
				{
					type = "HousePartDustLong";
				};
				class Walls: Dust
				{
					type = "HousePartWall";
				};
				class DamageAround
				{
					simulation = "damageAround";
					type = "DamageAroundHousePart";
					position = "Dam_1_effects";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
		};
		class HitZone_2_hitpoint
		{
			armor = 0.25;
			material = -1;
			name = "dam2";
			visual = "dam2";
			passThrough = 0.0;
			convexComponent = "dam2";
			radius = 0.055;
			explosionShielding = 30;
			minimalHit = 0.25;
			class DestructionEffects
			{
				class Dust
				{
					simulation = "particles";
					type = "HousePartDust";
					position = "Dam_2_effects";
					intensity = 1;
					interval = 1;
					lifeTime = 0.01;
				};
				class Dust2: Dust
				{
					type = "HousePartDustLong";
				};
				class Walls: Dust
				{
					type = "HousePartWall";
				};
				class DamageAround
				{
					simulation = "damageAround";
					type = "DamageAroundHousePart";
					position = "Dam_2_effects";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
		};
		class HitZone_3_hitpoint
		{
			armor = 0.25;
			material = -1;
			name = "dam3";
			visual = "dam3";
			passThrough = 0.0;
			convexComponent = "dam3";
			radius = 0.055;
			explosionShielding = 30;
			minimalHit = 0.25;
			class DestructionEffects
			{
				class Dust
				{
					simulation = "particles";
					type = "HousePartDust";
					position = "Dam_3_effects";
					intensity = 1;
					interval = 1;
					lifeTime = 0.01;
				};
				class Dust2: Dust
				{
					type = "HousePartDustLong";
				};
				class Walls: Dust
				{
					type = "HousePartWall";
				};
				class DamageAround
				{
					simulation = "damageAround";
					type = "DamageAroundHousePart";
					position = "Dam_3_effects";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
		};
		class Glass_1_hitpoint
		{
			armor = 0.001;
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
					type = "BrokenGlass1NB";
					position = "Glass_1_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
				};
			};
		};
		class Glass_2_hitpoint
		{
			armor = 0.001;
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
					type = "BrokenGlass1NB";
					position = "Glass_2_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
				};
			};
		};
		class Glass_3_hitpoint
		{
			armor = 0.001;
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
					type = "BrokenGlass1NB";
					position = "Glass_3_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
				};
			};
		};
		class Glass_4_hitpoint
		{
			armor = 0.001;
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
					type = "BrokenGlass1NB";
					position = "Glass_4_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
				};
			};
		};
		class Glass_5_hitpoint
		{
			armor = 0.001;
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
					type = "BrokenGlass1NB";
					position = "Glass_5_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
				};
			};
		};
		class Glass_6_hitpoint
		{
			armor = 0.001;
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
			armor = 0.001;
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
					type = "BrokenGlass1NB";
					position = "Glass_7_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
				};
			};
		};
		class Glass_8_hitpoint
		{
			armor = 0.001;
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
			armor = 0.001;
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
					type = "BrokenGlass1NB";
					position = "Glass_9_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
				};
			};
		};
		class Glass_10_hitpoint
		{
			armor = 0.001;
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
					type = "BrokenGlass1NB";
					position = "Glass_10_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
				};
			};
		};
		class Glass_11_hitpoint
		{
			armor = 0.001;
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
					type = "BrokenGlass1NB";
					position = "Glass_11_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
				};
			};
		};
		class Glass_12_hitpoint
		{
			armor = 0.001;
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
					type = "BrokenGlass1NB";
					position = "Glass_12_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
				};
			};
		};
		class Glass_13_hitpoint
		{
			armor = 0.001;
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
					type = "BrokenGlass1NB";
					position = "Glass_13_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
				};
			};
		};
		class Glass_14_hitpoint
		{
			armor = 0.0001;
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
					type = "BrokenGlass1NB";
					position = "Glass_14_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
				};
			};
		};
		class Glass_15_hitpoint
		{
			armor = 0.001;
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
					type = "BrokenGlass1NB";
					position = "Glass_15_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
				};
			};
		};
		class Glass_16_hitpoint
		{
			armor = 0.001;
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
					type = "BrokenGlass1NB";
					position = "Glass_16_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
				};
			};
		};
		class Glass_17_hitpoint
		{
			armor = 0.001;
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
					type = "BrokenGlass1NB";
					position = "Glass_17_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
				};
			};
		};
		class Glass_18_hitpoint
		{
			armor = 0.001;
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
					type = "BrokenGlass1NB";
					position = "Glass_18_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
				};
			};
		};
		class Glass_19_hitpoint
		{
			armor = 0.001;
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
					type = "BrokenGlass1NB";
					position = "Glass_19_effects";
					intensity = 0.15;
					interval = 1;
					lifeTime = 0.05;
				};
				class BrokenGlass2: BrokenGlass1
				{
					type = "BrokenGlass2NB";
				};
				class BrokenGlass3: BrokenGlass1
				{
					type = "BrokenGlass3NB";
				};
				class BrokenGlass4: BrokenGlass1
				{
					type = "BrokenGlass4NB";
				};
				class BrokenGlass5: BrokenGlass1
				{
					type = "BrokenGlass5NB";
				};
				class BrokenGlass6: BrokenGlass1
				{
					type = "BrokenGlass6NB";
				};
				class BrokenGlass7: BrokenGlass1
				{
					type = "BrokenGlass7NB";
				};
				class BrokenGlass1S: BrokenGlass1
				{
					type = "BrokenGlass1SB";
				};
				class BrokenGlass2S: BrokenGlass1
				{
					type = "BrokenGlass2SB";
				};
				class BrokenGlass3S: BrokenGlass1
				{
					type = "BrokenGlass3SB";
				};
				class BrokenGlass4S: BrokenGlass1
				{
					type = "BrokenGlass4SB";
				};
				class BrokenGlass5S: BrokenGlass1
				{
					type = "BrokenGlass5SB";
				};
				class BrokenGlass6S: BrokenGlass1
				{
					type = "BrokenGlass6SB";
				};
				class BrokenGlass7S: BrokenGlass1
				{
					type = "BrokenGlass7SB";
				};
			};
		};
		class Glass_20_hitpoint
		{
			armor = 0.001;
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
			armor = 0.001;
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
			armor = 0.001;
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
			armor = 0.001;
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
	};
	class Damage
	{
		tex[] = {};
		mat[] = {};
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
			statement = "([this, 'Door_1','Door_1_Handle','Door_1_Handle_2'] execVM ""\Jbad_Structures\scripts\Door_open.sqf"")";
		};
		class CloseDoor_1: OpenDoor_1
		{
			displayName = "Close Door";
			priority = 0.2;
			condition = "((this animationPhase 'Door_1') >= 0.5)";
			statement = "([this, 'Door_1','Door_1_Handle','Door_1_Handle_2'] execVM ""\jbad_structures\scripts\Door_close.sqf"")";
		};
		class OpenDoor_2
		{
			displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName = "Open Door";
			position = "Door_2";
			priority = 0.4;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "((this animationPhase 'Door_2') < 0.5)";
			statement = "([this, 'Door_2','Door_2_Handle','Door_2_Handle_2'] execVM ""\jbad_structures\scripts\Door_open.sqf"")";
		};
		class CloseDoor_2: OpenDoor_2
		{
			displayName = "Close Door";
			priority = 0.2;
			condition = "((this animationPhase 'Door_2') >= 0.5)";
			statement = "([this, 'Door_2','Door_2_Handle','Door_2_Handle_2'] execVM ""\jbad_structures\scripts\Door_close.sqf"")";
		};
		class OpenDoor_3
		{
			displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName = "Open Door";
			position = "Door_3";
			priority = 0.4;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "((this animationPhase 'Door_3') < 0.5)";
			statement = "([this, 'Door_3','Door_3_Handle','Door_3_Handle_2'] execVM ""\jbad_structures\scripts\Door_open.sqf"")";
		};
		class CloseDoor_3: OpenDoor_3
		{
			displayName = "Close Door";
			priority = 0.2;
			condition = "((this animationPhase 'Door_3') >= 0.5)";
			statement = "([this, 'Door_3','Door_3_Handle','Door_3_Handle_2'] execVM ""\jbad_structures\scripts\Door_close.sqf"")";
		};
	};
	actionBegin1 = "OpenDoor_1";
	actionEnd1 = "CloseDoor_1";
	actionBegin2 = "OpenDoor_2";
	actionEnd2 = "CloseDoor_2";
	actionBegin3 = "OpenDoor_3";
	actionEnd3 = "CloseDoor_3";
	numberOfDoors = 3;
};