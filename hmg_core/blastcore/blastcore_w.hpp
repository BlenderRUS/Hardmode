	class CannonCore;
	class gatling_20mm: CannonCore
	{
	};
	class gatling_30mm: CannonCore
	{
	};
	class LauncherCore;
	class RocketPods: LauncherCore
	{
	};
	class MissileLauncher;
	class autocannon_35mm: CannonCore
	{
		fireLightDuration=0.0099999998;
		fireLightIntensity=0.2;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="35mmFlakFlash";
			};
			class SecondEffect
			{
				effectName="35mmFlakFlash";
			};
		};
	};
	class cannon_120mm: CannonCore
	{
		class GunParticles
		{
			class FirstEffect
			{
				effectName="CannonFiredBC";
			};
		};
	};
