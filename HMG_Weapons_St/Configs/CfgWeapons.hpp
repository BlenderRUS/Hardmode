class CfgWeapons {
	class missiles_titan;
	class Rhs_weap_TOW_Launcher;
	class RocketPods;
	class RHS_MK19;
	class RHS_MK19_HMG: RHS_MK19  {
		magazineReloadTime = 0;
	};
	class RHS_M2;
	class RHS_M2_HMG: RHS_M2  {
		magazineReloadTime = 0;
	};
	class rhs_weap_nsvt;
	class rhs_weap_nsvt_HMG : rhs_weap_nsvt  {
		magazineReloadTime = 0;
	}; 
	class RDS_SPG9: RocketPods
	{
		magazineReloadTime = 0;	
		scope = 2;
		displayName=$STR_DN_SPG9;
		type = WeaponHardMounted;
		reloadTime = 3;
		modelOptics = "";
		magazines[]={RDS_PG9_AT,RDS_OG9_HE};
		sounds[] = {StandardSound};
 		class StandardSound
 		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] ={"\RDS_StaticW\SPG9\data\RocketLauncher_Shot04_A",db20,1,1100};
			soundBegin[] = {"begin1",1};
		};
		drySound[]={"\RDS_StaticW\SPG9\data\Javelin_dry_v1",db-80,1,10};
		reloadMagazineSound[]={"\RDS_StaticW\SPG9\data\flare_reload",db-70,1,20};
		soundfly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 1, 1.9, 700};
		recoil=launcherBase;
		aiRateOfFire = 10.000000;
		aiRateOfFireDistance = 450;
		minRange = 50;
		midRange = 450;
		maxRange = 800;
		//cursorAim = \ca\Weapons\Data\clear_empty;
		cursor = Rocket; //\ca\UI\Data\cursor_w_rocket_gs;
		cursorSize = 1;

	};
	class Rhs_weap_TOW_Launcher_static : Rhs_weap_TOW_Launcher
	{
		magazineReloadTime = 0;	
		holdsterAnimValue = 1;
		autoReload = 1;
		scope=1;
		displayName="BGM-71 TOW2A Static";
		magazines[]=
		{
			"rhs_mag_1Rnd_TOW"
		};
	};
	class RDS_AT13LauncherSingle: missiles_titan
	{
		displayName = $STR_DN_AT13LAUNCHERSINGLE;
		magazineReloadTime = 0;	
		minRange=10;minRangeProbab=0.6;
		midRange=1000;midRangeProbab=0.7;
		maxRange=2000;maxRangeProbab=0.001;
		reloadTime = 2;
		magazines[]={metis_9m131};
		lockedtargetsound[] = {"\RDS_StaticW\data\alarm_loop1", 0.000316228, 6};
		lockingtargetsound[] = {"\RDS_StaticW\data\alarm_loop1", 0.000316228, 2};
	};
};