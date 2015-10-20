class RHS_flashbang_10
{
	class Smoke1
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "RHS_flashbang_10";
		intensity = 0.5;
		interval = 1;
		lifeTime = 1;
	};
	class Smoke2: Smoke1
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "25mm_Smoke_01";
		intensity = 0.5;
		interval = 1;
		lifeTime = 1;
	};
	class Light
	{
		position[] = {0,0,0};
		simulation = "light";
		type = "RHS_flashbang_light";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class RHS_Thermobaric_Explosion
{
	class Cloud
	{
		intensity = 8;
		interval = 0.4;
		lifetime = 0.4;
		position[] = {0,0,0};
		simulation = "particles";
		type = "CloudMedLight";
	};
	class Explosion
	{
		intensity = 12;
		interval = 0.4;
		lifetime = 0.4;
		position[] = {0,0,0};
		simulation = "particles";
		type = "ExplosionParticles";
	};
	class Explosion2: Explosion{};
	class Smoke
	{
		intensity = 14;
		interval = 0.96;
		lifetime = 0.96;
		position[] = {0,0,0};
		simulation = "particles";
		type = "SmallSmokeSlow1";
	};
	class Light
	{
		intensity = 0.001;
		interval = 1;
		lifetime = 0.2;
		position[] = {0,0,0};
		simulation = "light";
		type = "ExploLight";
	};
};