	class Default;
	class BulletCore;
	class ShellCore;
	class MissileCore;
	class ShellBase: ShellCore
	{};
	class MissileBase: MissileCore
	{};
	class GrenadeCore;
	class BombCore;
	class PipeBombBase;
	class LaserBombCore;
	class RocketCore;
	class RocketBase: RocketCore
	{
	};
	class GrenadeBase: GrenadeCore
	{
	};
	class BulletBase: BulletCore
	{
		class HitEffects
		{
			hitMetal="ImpactMetal";
			hitMetalPlate="ImpactMetal";
			hitBuilding="BCImpactConcrete";
			hitConcrete="BCImpactConcrete";
			hitGroundSoft="BCImpactEffectsSmall";
			hitGroundHard="BCImpactEffectsHardGround";
			default_mat="BCImpactEffectsSmall";
			hitFoliage = "ImpactLeaves";
			hitWood = "ImpactWood";
			hitMan = "BlastcoreImpactEffectsBlood";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
		};
	};
	class B_127x33_Ball: BulletBase
	{
		class HitEffects
		{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal="ImpactMetal";
			hitMetalPlate="ImpactMetal";
			hitBuilding="BCImpactConcrete_50cal";
			hitConcrete="BCImpactConcrete_50cal";
			hitGroundSoft="BCImpactDirt_50cal";
			hitGroundHard="BCImpactDirt_50cal";
			default_mat="BCImpactDirt_50cal";
			Hit_Foliage_green = "BCImpactDirt_50cal";
			Hit_Foliage_Dead = "BCImpactDirt_50cal";
			Hit_Foliage_Green_big = "BCImpactDirt_50cal";
			Hit_Foliage_Palm = "BCImpactDirt_50cal";
			Hit_Foliage_Pine = "BCImpactDirt_50cal";
		};
	};
	class B_127x99_Ball: BulletBase
	{
		class HitEffects
		{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_50cal";
			hitConcrete="BCImpactConcrete_50cal";
			hitGroundSoft="BCImpactDirt_50cal";
			hitGroundHard="BCImpactDirt_50cal";
			default_mat="BCImpactDirt_50cal";
			Hit_Foliage_green = "BCImpactDirt_50cal";
			Hit_Foliage_Dead = "BCImpactDirt_50cal";
			Hit_Foliage_Green_big = "BCImpactDirt_50cal";
			Hit_Foliage_Palm = "BCImpactDirt_50cal";
			Hit_Foliage_Pine = "BCImpactDirt_50cal";
		};
	};
	class B_127x108_Ball: BulletBase
	{
		class HitEffects
		{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_50cal";
			hitConcrete="BCImpactConcrete_50cal";
			hitGroundSoft="BCImpactDirt_50cal";
			hitGroundHard="BCImpactDirt_50cal";
			default_mat="BCImpactDirt_50cal";
			Hit_Foliage_green = "BCImpactDirt_50cal";
			Hit_Foliage_Dead = "BCImpactDirt_50cal";
			Hit_Foliage_Green_big = "BCImpactDirt_50cal";
			Hit_Foliage_Palm = "BCImpactDirt_50cal";
			Hit_Foliage_Pine = "BCImpactDirt_50cal";
		};
	};
	class B_127x108_APDS: B_127x108_Ball
	{
		class HitEffects
		{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_50cal";
			hitConcrete="BCImpactConcrete_50cal";
			hitGroundSoft="BCImpactDirt_50cal";
			hitGroundHard="BCImpactDirt_50cal";
			default_mat="BCImpactDirt_50cal";
			Hit_Foliage_green = "BCImpactDirt_50cal";
			Hit_Foliage_Dead = "BCImpactDirt_50cal";
			Hit_Foliage_Green_big = "BCImpactDirt_50cal";
			Hit_Foliage_Palm = "BCImpactDirt_50cal";
			Hit_Foliage_Pine = "BCImpactDirt_50cal";
		};
	};
	class B_20mm: BulletBase
	{
		explosive=0;
		class HitEffects
		{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_20mm";
			hitConcrete="BCImpactConcrete_20mm";
			hitGroundSoft="BCImpactDirt_20mm";
			hitGroundHard="BCImpactDirt_20mm";
			default_mat="BCImpactDirt_20mm";
			Hit_Foliage_green = "BCImpactDirt_20mm";
			Hit_Foliage_Dead = "BCImpactDirt_20mm";
			Hit_Foliage_Green_big = "BCImpactDirt_20mm";
			Hit_Foliage_Palm = "BCImpactDirt_20mm";
			Hit_Foliage_Pine = "BCImpactDirt_20mm";
		};
	};
	class B_30mm_AP: BulletBase
	{
		explosive=0;
		class HitEffects
		{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_30mm";
			hitGroundHard="BCImpactDirt_30mm";
			default_mat="BCImpactDirt_30mm";			
			Hit_Foliage_green = "BCImpactDirt_30mm";
			Hit_Foliage_Dead = "BCImpactDirt_30mm";
			Hit_Foliage_Green_big = "BCImpactDirt_30mm";
			Hit_Foliage_Palm = "BCImpactDirt_30mm";
			Hit_Foliage_Pine = "BCImpactDirt_30mm";
		};
	};
	class B_30mm_APFSDS: B_30mm_AP
	{
		explosive=0;
		class HitEffects
		{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_30mm";
			hitGroundHard="BCImpactDirt_30mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green = "BCImpactDirt_30mm";
			Hit_Foliage_Dead = "BCImpactDirt_30mm";
			Hit_Foliage_Green_big = "BCImpactDirt_30mm";
			Hit_Foliage_Palm = "BCImpactDirt_30mm";
			Hit_Foliage_Pine = "BCImpactDirt_30mm";
		};
	};
	
	class Sh_120mm_APFSDS: ShellBase
	{
		explosive=0;
		class HitEffects
		{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="BCImpactConcrete_120mm";
			hitConcrete="BCImpactConcrete_120mm";
			hitGroundSoft="BCImpactDirt_120mm";
			hitGroundHard="BCImpactDirt_120mm";
			default_mat="BCImpactDirt_120mm";
			Hit_Foliage_green = "BCImpactDirt_120mm";
			Hit_Foliage_Dead = "BCImpactDirt_120mm";
			Hit_Foliage_Green_big = "BCImpactDirt_120mm";
			Hit_Foliage_Palm = "BCImpactDirt_120mm";
			Hit_Foliage_Pine = "BCImpactDirt_120mm";
		};
	};
	class FlareCore;
	class FlareBase: FlareCore
	{
		intensity=500000;
	};
	class SubmunitionCore;
	class SubmunitionBase: SubmunitionCore
	{};
	class CMflareAmmo: BulletBase
	{};
	class CMflare_Chaff_Ammo: CMflareAmmo
	{
	};
	class SmokeLauncherAmmo: BulletBase
	{
		initTime = 0;
		timeToLive = 0.001;
		hit = 0.01;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 1;
		muzzleEffect = "";
		explosionEffects="SmokeCS";
		simulation="shotRocket";
	};
	class F_40mm_White: FlareBase
	{
		useFlare=1;
		flareSize=30;
		brightness=4000000;
		intensity=3000000;
	};
	class FuelExplosion: Default
	{
		explosionEffects="VehicleExplosionEffects";
	};
	class FuelExplosionBig: FuelExplosion
	{
		explosionEffects="VehicleExplosionEffectsBig";
	};
	class HelicopterExploSmall: ShellBase
	{
		explosionEffects="HelicopterExplosionEffects";
	};
	class HelicopterExploBig: HelicopterExploSmall
	{
		explosionEffects="HelicopterExplosionEffects2";
	};
	class B_19mm_HE: BulletBase
	{
		explosive=0.1;
		CraterEffects="30mmSmoke";
		explosionEffects="30mmExplode";
		class
		{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_30mmHE";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
		};
	};
	class B_30mm_HE: B_19mm_HE
	{
		explosive=0.1;
		CraterEffects="30mmSmoke";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_30mmHE";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green = "BCImpactDirt_30mmHE";
			Hit_Foliage_Dead = "BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big = "BCImpactDirt_30mmHE";
			Hit_Foliage_Palm = "BCImpactDirt_30mmHE";
			Hit_Foliage_Pine = "BCImpactDirt_30mmHE";
		};
	};
	
	class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase
	{	
		explosive=0.4;	
		CraterEffects="30mmSmoke";
		explosionEffects="30mmExplode";
	    class HitEffects
		{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_30mmHE";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green = "BCImpactDirt_30mmHE";
			Hit_Foliage_Dead = "BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big = "BCImpactDirt_30mmHE";
			Hit_Foliage_Palm = "BCImpactDirt_30mmHE";
			Hit_Foliage_Pine = "BCImpactDirt_30mmHE";
		};
	};
	
	class B_25mm: BulletBase
	{
		explosive=0.1;
		CraterEffects="30mmSmoke";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_30mmHE";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green = "BCImpactDirt_30mmHE";
			Hit_Foliage_Dead = "BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big = "BCImpactDirt_30mmHE";
			Hit_Foliage_Palm = "BCImpactDirt_30mmHE";
			Hit_Foliage_Pine = "BCImpactDirt_30mmHE";
		};
	};
	class B_35mm_AA: BulletBase
	{
		explosive=0.4;
		CraterEffects="30mmSmoke";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_30mmHE";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green = "BCImpactDirt_30mmHE";
			Hit_Foliage_Dead = "BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big = "BCImpactDirt_30mmHE";
			Hit_Foliage_Palm = "BCImpactDirt_30mmHE";
			Hit_Foliage_Pine = "BCImpactDirt_30mmHE";
		};
	};
	class Sh_120mm_HE: ShellBase
	{
		explosive=0.1;
		CraterEffects="120mm_HE";
		explosionEffects="120mm_HE";
		tmr_blastfrag_isFrag = 1;
		tmr_blastfrag_fragVelocity = 2000;
		tmr_blastfrag_fragCount = 10;
		tmr_blastfrag_casualtyRadius = 10;
		tmr_blastfrag_fragMaxSize = "med";		
		class HitEffects
		{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="BCImpactConcrete_120mmHE";
			hitConcrete="BCImpactConcrete_120mmHE";
			hitGroundSoft="BCImpactDirt_120mmHE";
			hitGroundHard="BCImpactDirt_120mmHE";
			default_mat="BCImpactDirt_120mmHE";
			Hit_Foliage_green = "BCImpactDirt_120mmHE";
			Hit_Foliage_Dead = "BCImpactDirt_120mmHE";
			Hit_Foliage_Green_big = "BCImpactDirt_120mmHE";
			Hit_Foliage_Palm = "BCImpactDirt_120mmHE";
			Hit_Foliage_Pine = "BCImpactDirt_120mmHE";
		};
	};
	class Sh_155mm_AMOS: ShellBase
	{
		CraterEffects="155mm_Smoke";
		explosionEffects="155mm_Explode";
		tmr_blastfrag_isFrag = 1;
		tmr_blastfrag_fragVelocity = 2160;
		tmr_blastfrag_fragCount = 60;
		tmr_blastfrag_casualtyRadius = 60;
		tmr_blastfrag_fragMaxSize = "med";		
	};
	class Sh_82mm_AMOS: Sh_155mm_AMOS
	{
		CraterEffects="80mm_Smoke";
		explosionEffects="80mm_Explode";
		tmr_blastfrag_isFrag = 1;
		tmr_blastfrag_fragVelocity = 2138;
		tmr_blastfrag_fragCount = 40;
		tmr_blastfrag_casualtyRadius = 30;
		tmr_blastfrag_fragMaxSize = "med";		
	};
	class M_PG_AT: MissileBase
	{
		CraterEffects="80mm_Smoke";
		explosionEffects="80mm_Explode";
	};
	class M_AT: M_PG_AT
	{
		CraterEffects="80mm_Smoke";
		explosionEffects="80mm_Explode";
	};	
    class Rocket_04_HE_F: MissileBase
	{
		CraterEffects="80mm_Smoke";
		explosionEffects="80mm_Explode";
	};
    class Rocket_04_AP_F: Rocket_04_HE_F
	{
	    CraterEffects="80mm_Smoke";
	    explosionEffects="80mm_Explode";
	};
	class Rocket_03_AP_F: Rocket_04_AP_F
	{
	    CraterEffects="80mm_Smoke";
		explosionEffects="80mm_Explode";
	};
	class Rocket_03_HE_F: Rocket_04_HE_F
	{
		CraterEffects="80mm_Smoke";
		explosionEffects="80mm_Explode";
	};
	class R_80mm_HE: RocketBase
	{
		CraterEffects="80mm_Smoke";
		explosionEffects="80mm_Explode";
	};
	class M_RPG32_F: MissileBase
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class M_RPG32_AA_F: M_RPG32_F
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class R_PG32V_F: RocketBase
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class M_NLAW_AT_F: MissileBase
	{
		CraterEffects="M136_Smoke";
		explosionEffects="M136_Explode";
	};
	class M_Scalpel_AT: MissileBase
	{
		CraterEffects="Hellfire_Smoke";
		explosionEffects="Hellfire_Explode";
	};
	class Missile_AGM_02_F: MissileBase
	{
		CraterEffects="Hellfire_Smoke";
		explosionEffects="Hellfire_Explode";
	};
	class M_Titan_AA: MissileBase
	{
		CraterEffects="AA_Smoke";
		explosionEffects="AA_Explode";
	};
	class M_Air_AA: MissileBase
	{
		CraterEffects="AA_Smoke";
		explosionEffects="AA_Explode";
	};
	class Missile_AGM_01_F: Missile_AGM_02_F
	{
		CraterEffects="Hellfire_Smoke";
		explosionEffects="Hellfire_Explode";
	};
    class Missile_AA_04_F: MissileBase
	{
		CraterEffects="AA_Smoke";
		explosionEffects="AA_Explode";
	};
	class Missile_AA_03_F: Missile_AA_04_F
	{
		CraterEffects="AA_Smoke";
		explosionEffects="AA_Explode";
	};
	class M_Titan_AT: MissileBase
	{
		CraterEffects="Hellfire_Smoke";
		explosionEffects="Hellfire_Explode";
	};
	class M_Titan_AP: M_Titan_AT
	{
		CraterEffects="Hellfire_Smoke";
		explosionEffects="Hellfire_Explode";
	};
	class Bo_GBU12_LGB: LaserBombCore
	{
		CraterEffects="MK82_Smoke";
		explosionEffects="MK82_Explode";
	};
	class Bomb_04_F: LaserBombCore
	{
		CraterEffects="MK82_Smoke";
		explosionEffects="MK82_Explode";
	};
	class Bomb_03_F: Bomb_04_F
	{
		CraterEffects="MK82_Smoke";
		explosionEffects="MK82_Explode";
	};
	class Bo_Mk82: BombCore
	{
		tmr_blastfrag_isFrag = 1;
		tmr_blastfrag_fragVelocity = 2468;
		tmr_blastfrag_fragCount = 80;
		tmr_blastfrag_casualtyRadius = 170;
		tmr_blastfrag_fragMaxSize = "big";
		CraterEffects="MK82_Smoke";
		explosionEffects="MK82_Explode";
	};
	class R_230mm_HE: SubmunitionBase
	{
		CraterEffects="MK82_Smoke";
		explosionEffects="MK82_Explode";
	};
	class R_230mm_fly: ShellBase
	{
		CraterEffects="MK82_Smoke";
		explosionEffects="MK82_Explode";
	};
	class Mo_cluster_AP: ShellBase
	{
		CraterEffects="BCImpactDirt_30mmHE";
		explosionEffects="BCImpactConcrete_30mmHE";
    };
	class SatchelCharge_Remote_Ammo: PipeBombBase
	{
		CraterEffects="Hellfire_Smoke";
		explosionEffects="Hellfire_Explode";
	};
	class DemoCharge_Remote_Ammo: PipeBombBase
	{
		CraterEffects="Demo_Charge_Smoke";
		explosionEffects="Demo_Charge_Explode";
	};
	class rhs_ammo_of_base;
	class rhs_ammo_3of_base : rhs_ammo_of_base
	{	
	hit = 200;
	indirectHit = 100;
	indirectHitRange = 15;
	typicalSpeed = 850;
	caliber = 5;
	whistleDist = 60;
	cost = 1000;
		explosive=0.1;
		CraterEffects="120mm_HE";
		explosionEffects="120mm_HE";
		class HitEffects
		{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="BCImpactConcrete_120mmHE";
			hitConcrete="BCImpactConcrete_120mmHE";
			hitGroundSoft="BCImpactDirt_120mmHE";
			hitGroundHard="BCImpactDirt_120mmHE";
			default_mat="BCImpactDirt_120mmHE";
			Hit_Foliage_green = "BCImpactDirt_120mmHE";
			Hit_Foliage_Dead = "BCImpactDirt_120mmHE";
			Hit_Foliage_Green_big = "BCImpactDirt_120mmHE";
			Hit_Foliage_Palm = "BCImpactDirt_120mmHE";
			Hit_Foliage_Pine = "BCImpactDirt_120mmHE";
		};
	};
	class rhs_ammo_M1069: Sh_120mm_HE
	{
		hit = 350;
		indirectHit = 45;
		indirectHitRange = 7;
		typicalSpeed = 1000;
		explosive = 0.8;
		cost = 300;
		airFriction = -0.00045;
		caliber = 12;
		timeToLive = 15;
		whistleDist = 14;
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		class HitEffects
		{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="BCImpactConcrete_120mm";
			hitConcrete="BCImpactConcrete_120mm";
			hitGroundSoft="BCImpactDirt_120mm";
			hitGroundHard="BCImpactDirt_120mm";
			default_mat="BCImpactDirt_120mm";
			Hit_Foliage_green = "BCImpactDirt_120mm";
			Hit_Foliage_Dead = "BCImpactDirt_120mm";
			Hit_Foliage_Green_big = "BCImpactDirt_120mm";
			Hit_Foliage_Palm = "BCImpactDirt_120mm";
			Hit_Foliage_Pine = "BCImpactDirt_120mm";
		};

	};

