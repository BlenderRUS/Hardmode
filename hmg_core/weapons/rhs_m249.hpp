	class LMG_Mk200_F;
	class rhs_M249_base : LMG_Mk200_F {
			modes[]=
			{
				"Burst",
				"FullAuto",
				"close",
				"short",
				"medium",
				"far_optic1",
				"far_optic2"
			};
			class FullAuto: Mode_FullAuto {
				displayname = "1000rpm";
				reloadTime = 0.06;
				textureType = "fullAuto";
			};
			class Burst: FullAuto	{			
				displayname = "800rpm";
				reloadTime = 0.075;
				aiRateOfFire=2;
				aiRateOfFireDistance=50;
				minRange=0;
				minRangeProbab=0.05;
				midRange=30;
				midRangeProbab=0.69;
				maxRange=50;
				maxRangeProbab=0.039;
				showToPlayer=1;
				textureType = "burst";
			};
	};

	class weap_m240_base : rhs_M249_base {
		modes[] = {"rpm800", "manual", "rpm600", "close", "short", "medium", "far"};
		class manual : Mode_FullAuto {
			displayName = "1000rpm";
			reloadTime = 0.06;
			showToPlayer=1;
			textureType = "fullAuto";			
		};
		class rpm800 : manual {
			displayName ="800rpm";
			reloadTime = 0.075;
			showToPlayer=1;
			textureType = "burst";
		};
		class rpm600 : manual {
			displayName ="600rpm";
			reloadTime = 0.1;
			showToPlayer=1;
			textureType = "semi";
		};
	};
	class StaticAAWeapon;
	class RDS_Igla_AA_pod_Base : StaticAAWeapon {
		scope = 0;
	};