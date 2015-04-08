	class launch_O_Titan_F;
	class rhs_weap_fgm148: launch_O_Titan_F
	{
		minRange = 65;
		minRangeProbab = 0.66;
		midRange = 1500;
		midRangeProbab = 0.5;
		maxRange = 2500;
		maxRangeProbab = 0.1;
		aiRateOfFire = 10;
		aiRateOfFireDistance = 2500;
		weaponLockDelay = 10;
		//weaponLockSystem = 1;
		cmImmunity = 0.9;

		lockAcquire = 0;
		autoAimEnabled = 0;
		canLock = 2;
		// AGM TopDown Attack Module Parameters BELOW *Blender*
		AGM_enableTopDownAttack = 1;
		AGM_lockTargetMode = 1;
	};
