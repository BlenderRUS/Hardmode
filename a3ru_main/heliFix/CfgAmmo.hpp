class CfgAmmo {
	class Default;	// External class reference
	class missilebase;	// External class reference
	class B_20mm;	// External class reference
	class Missile_AGM_02_F;	// External class reference
	class Missile_AGM_01_F;	// External class reference
	class M_Air_AA_MI02;

	class IGLA_9I39: M_Air_AA_MI02 {
		maxSpeed = 600;
	};
	class H_Missile_AGM_01_F : Missile_AGM_01_F {
		laserLock = 1;
	};
	
	class Laserbeam : Default {
		maxspeed = 2000;	// max speed on level road, km/h
		timetolive = 40;
	};
	
	class Missile_AGM65L2 : Missile_AGM_02_F {
		laserLock = true;
		irLock = false;
	};
	
	class Missile_AGM65D2 : Missile_AGM_02_F {
		laserLock = true;
	};
	
	class Missile_AGM65H2 : Missile_AGM_02_F {
		laserLock = false;
	};
	
	class Missile_AGM65E2 : Missile_AGM_02_F {
		laserLock = true;
		irLock = false;
		hit = 100;
		indirecthit = 100;
		indirecthitrange = 10;
	};
	
	class M_Scalpel_AT : missilebase {
		manualcontrol = true;
		trackOversteer = 2;
		trackLead = 0.7;
		maneuvrability = 6;
		sideAirFriction = 0.2;
		weaponLockSystem = 0;
	};

	class B_20mm_Tracer_Red : B_20mm {
		laserlock = true;
	};
	
	class M_Brimstone_AT : M_Scalpel_AT {
		hit = 1400;
		indirectHit = 20;
		indirectHitRange = 10;
		cost = 10000;
		maxSpeed = 425;	// max speed on level road, km/h
		irLock = true;
		laserLock = true;
		airLock = false;
		maxControlRange = 8000;	// max range for manual control, 0 = no control (passive weapon)
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 9;
		timeToLive = 40;
		simulationStep = 0.01;
		sideAirFriction = 0.2;
		initTime = 0.0;
		thrustTime = 3.25;
		thrust = 130;
		fuseDistance = 5;
		manualcontrol = false;
		effectsMissileInit = "MissileDAR1";
		effectsMissile = "missile2";
		weaponLockSystem = 2 + 16;
		whistleDist = 4;
	};
	class Scalpel_L : M_Brimstone_AT {
		irLock = 0;
		laserLock = 1;
		manualcontrol = 1;
		maxSpeed = 550;
		hit = 1400;
		};
	class Scalpel_D : Scalpel_L {
		irLock = 1;
		laserLock = 0;
		manualcontrol = 1;
	};
	class Scalpel_m : Scalpel_L {
		irLock = 1;
		laserLock = 1;
		manualcontrol = 1;
	};
};
