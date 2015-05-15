scope = 1;
scopeCurator = 1;
displayName = "Hanger";
model = "\Jbad_Structures\mil\hanger\jbad_hanger_withdoor.p3d";
armor = 1000;
vehicleClass = "jbad_mil";
mapSize = 16.5;
cost = 40000;
armorLights = 0.01;
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
		hitpoint = "Light_1_hitpoint";
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
			hardLimitStart = 40;
			hardLimitEnd = 60;
		};
	};
	class Reflector_2: Reflector_1
	{
		position = "Light_2_pos";
		direction = "Light_2_dir";
		hitpoint = "Light_2_Hitpoint";
		selection = "";
	};
	class Reflector_3: Reflector_1
	{
		position = "Light_3_pos";
		direction = "Light_3_dir";
		hitpoint = "Light_3_Hitpoint";
		selection = "";
	};
	class Reflector_4: Reflector_1
	{
		position = "Light_4_pos";
		direction = "Light_4_dir";
		hitpoint = "Light_4_Hitpoint";
		selection = "";
	};
	class Reflector_5: Reflector_1
	{
		position = "Light_6_pos";
		direction = "Light_6_dir";
		hitpoint = "Light_6_Hitpoint";
		selection = "";
	};
	class Reflector_6: Reflector_1
	{
		position = "Light_7_pos";
		direction = "Light_7_dir";
		hitpoint = "Light_7_Hitpoint";
		selection = "";
	};
	class Reflector_7: Reflector_1
	{
		position = "Light_9_pos";
		direction = "Light_9_dir";
		hitpoint = "Light_9_Hitpoint";
		selection = "";
	};
	class Reflector_8: Reflector_1
	{
		position = "Light_10_pos";
		direction = "Light_10_dir";
		hitpoint = "Light_10_Hitpoint";
		selection = "";
	};
	class Reflector_9: Reflector_1
	{
		position = "Light_11_pos";
		direction = "Light_11_dir";
		hitpoint = "Light_11_Hitpoint";
		selection = "";
	};
	class Reflector_10: Reflector_1
	{
		position = "Light_15_pos";
		direction = "Light_15_dir";
		hitpoint = "Light_15_Hitpoint";
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
};
class AnimationSources
{
	class Door_1
	{
		source = "user";
		initPhase = 0;
		animPeriod = 14;
	};
	class Door_2: Door_1
	{
		animPeriod = 11;
	};
	class Door_3: Door_1
	{
		animPeriod = 10;
	};
	class Door_4: Door_1
	{
		animPeriod = 9;
	};
	class Door_5: Door_1
	{
		animPeriod = 7.5;
	};
	class Door_6: Door_1
	{
		animPeriod = 6;
	};
	class Door_7: Door_1
	{
		animPeriod = 0.5;
	};
	class Door_8: Door_1
	{
		animPeriod = 1.5;
	};
	class Door_9: Door_1
	{
		animPeriod = 1.5;
	};
	class Door_10: Door_1
	{
		animPeriod = 1.5;
	};
	class Door_11: Door_1
	{
		animPeriod = 1.5;
	};
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
};
class UserActions
{
	class OpenDoor_1
	{
		displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
		displayName = "Open Door";
		position = "Door_8";
		priority = 0.4;
		radius = 1.5;
		onlyForPlayer = 0;
		condition = "((this animationPhase 'Door_8') < 0.5)";
		statement = "([this, 'Door_8','Door_8_Handle','Door_8_Handle_2','Door_9','Door_9_Handle','Door_9_Handle_2'] execVM ""\Jbad_Structures\scripts\Doors_open.sqf"")";
	};
	class CloseDoor_1: OpenDoor_1
	{
		displayName = "Close Door";
		priority = 0.2;
		condition = "((this animationPhase 'Door_8') >= 0.5)";
		statement = "([this, 'Door_8','Door_8_Handle','Door_8_Handle_2','Door_9','Door_9_Handle','Door_9_Handle_2'] execVM ""\jbad_structures\scripts\Doors_close.sqf"")";
	};
	class OpenDoor_2: OpenDoor_1
	{
		position = "Door_10";
		condition = "((this animationPhase 'Door_10') < 0.5)";
		statement = "([this, 'Door_10','Door_10_Handle','Door_10_Handle_2','Door_11','Door_11_Handle','Door_11_Handle_2'] execVM ""\Jbad_Structures\scripts\Doors_open.sqf"")";
	};
	class CloseDoor_2: CloseDoor_1
	{
		condition = "((this animationPhase 'Door_10') >= 0.5)";
		statement = "([this, 'Door_10','Door_10_Handle','Door_10_Handle_2','Door_11','Door_11_Handle','Door_11_Handle_2'] execVM ""\jbad_structures\scripts\Doors_close.sqf"")";
	};
	class OpenDoor_3
	{
		displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
		displayName = "Open Hanger Door";
		position = "Door_7";
		priority = 0.4;
		radius = 1.5;
		onlyForPlayer = 0;
		condition = "((this animationPhase 'Door_6') > 0.01)";
		statement = "([this,'jbad_hanger_door_open','Door_7','Door_6','Door_5','Door_4','Door_3','Door_2','Door_1'] execVM ""\Jbad_Structures\scripts\Hanger_Door_open.sqf"")";
	};
	class CloseDoor_3: OpenDoor_3
	{
		displayName = "Close Hanger Door";
		priority = 0.2;
		condition = "((this animationPhase 'Door_6') <= 0.01)";
		statement = "([this,'jbad_hanger_door_close','Door_7','Door_1','Door_2','Door_3','Door_4','Door_5','Door_6'] execVM ""\Jbad_Structures\scripts\Hanger_Door_close.sqf"")";
	};
};
actionBegin1 = "OpenDoor_1";
actionEnd1 = "CloseDoor_1";
actionBegin2 = "OpenDoor_2";
actionEnd2 = "CloseDoor_2";
numberOfDoors = 2;