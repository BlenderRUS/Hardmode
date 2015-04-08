	class LMG_Mk200_F;
	class rhs_M249_base : LMG_Mk200_F {
			magazines[] = {"rhsusf_100Rnd_556x45_soft_pouch","rhsusf_200Rnd_556x45_soft_pouch","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"};
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
	class rhs_weap_m249_pip: rhs_M249_base
	{
		scope = 2;
		displayName = "M249 PIP";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\w_m249.paa";
		model = "\rhsusf\addons\rhsusf_weapons\M249\m249_pip.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_mk12.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 155;
		};
	};

	class rhs_weap_m249_pip_elcan : rhs_weap_m249_pip
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_ELCAN";
			};
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