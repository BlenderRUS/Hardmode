class CfgAmmo {
	// AGM
	class Sh_82mm_AMOS;
	class AGM_81mmShell_AMMO_HE: Sh_82mm_AMOS {
		indirectHitRange = 20;  //default 18
		whistledist = 30;
		airfriction = -0.000159;
	};
	class AGM_81mmShell_252_AMMO_HE: Sh_82mm_AMOS {
		indirectHitRange = 20;  //default 18
		whistledist = 30;
		airfriction = -0.000159;
	};
	class G_40mm_HE;
	class RDS_G_30mm_HE: G_40mm_HE
	{
		timeToLive = 45;
		hit = 100;
		indirecthit = 10;
		indirecthitrange = 5.5;
		whistledist = 5.5;
		typicalSpeed = 130;
		airfriction = -0.000445;
		caliber = 1.1811;
		AB_caliber = 1.1811; //- bullet caliber in inches
		AB_bulletLength = 1.4173; //- bullet length in inches
		AB_bulletMass = 4321; //- bullet mass in grains
		AB_ammoTempMuzzleVelocityData[] = {-2.5, -2, -1.5, -1, -0.5, 0.1, 0,5, 1, 1.5, 2, 2.5}; //- array of muzzle velocity shifts in m/s with 11 data points from -15 °C to 35 °C example:
		AB_ballisticCoefficients[] = {0,00042}; //- array of ballistic coefficients 
		AB_standardAtmosphere = "ASM";
		AB_dragModel = 7; // - Number that specifies the drag model 
		AB_muzzleVelocities = 185; //- array of muzzle velocities
		AB_barrelLengths  = 11.4173; //- array of barrel lengths 
	};
	class Sh_155mm_AMOS;
	class RDS_Sh_122_HE: Sh_155mm_AMOS
	{
		typicalspeed = 690;
	};
};