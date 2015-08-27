class rhs_btr_base: Wheeled_APC_F
{
	AGM_Armour_AmmoLocation = "NoAmmo";
	class HitPoints: HitPoints
	{
		class HitLBWheel: HitLBWheel
		{
			armor = 0.5;
			explosionShielding = 0.6;
		};
		class HitLMWheel: HitLMWheel
		{
			armor = 0.5;
			explosionShielding = 0.6;
		};
		class HitLF2Wheel: HitLF2Wheel
		{
			armor = 0.5;
			explosionShielding = 0.6;
		};
		class HitLFWheel: HitLFWheel
		{
			armor = 0.5;
			explosionShielding = 0.6;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.5;
			explosionShielding = 0.6;
		};
		class HitRMWheel: HitRMWheel
		{
			armor = 0.5;
			explosionShielding = 0.6;
		};
		class HitRF2Wheel: HitRF2Wheel
		{
			armor = 0.5;
			explosionShielding = 0.6;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.5;
			explosionShielding = 0.6;
		};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class HitPoints: HitPoints
			{
				class HitTurret
				{
					armor = 0.8;
					material = -1;
					name = "vez";
					visual = "vez";
					passThrough = 1;
					minimalHit = 0.2;
					explosionShielding = 0.8;
				};
				class HitGun
				{
					armor = 0.6;
					material = -1;
					name = "zbran";
					visual = "zbran";
					passThrough = 0;
					minimalHit = 0.1;
					explosionShielding = 1;
				};
			};
		};
	};
};