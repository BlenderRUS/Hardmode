	class rhs_ammo_M_fgm148_AT: M_Titan_AT
	{
		hit = 850;
		indirectHit = 100;
		indirectHitRange = 4;
		
		irLock = 1;
		laserLock = 1;
		nvLock = 0;
		airLock = 1;
		lockSeekRadius = 3;
		autoSeekTarget = 0;
		//lockType = [0];
		allowAgainstInfantry = 1;
		
		airFriction = 0.2;
		sideAirFriction = 0.1;
		trackOversteer = 1;
		trackLead = 1;
		maxSpeed = 860;
		manualControl = 1;
		maneuvrability = 8;
		maxControlRange = 2500;
		
		fuseDistance = 30; //Distance until armed (Not working?)
		thrust = 75;
		thrustTime = 25;
		initTime = 0.5; //Time till engine start after launch
		
		timeToLive = 15;
		whistleDist = 4;
		deflecting = 0;
		simulationStep = 0.001;
		cmImmunity = 0.9;
	};
