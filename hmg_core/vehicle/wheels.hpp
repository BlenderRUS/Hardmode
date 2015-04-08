	class Car_F : Car {
		class NewTurret;	// External class reference
		class Sounds;	// External class reference
		
		class HitPoints {
			class HitBody;	// External class reference
			class HitEngine;	// External class reference
			class HitFuel;	// External class reference
			class HitLFWheel;	// External class reference
			class HitLBWheel;	// External class reference
			class HitLMWheel;	// External class reference
			class HitLF2Wheel;	// External class reference
			class HitRFWheel;	// External class reference
			class HitRBWheel;	// External class reference
			class HitRMWheel;	// External class reference
			class HitRF2Wheel;	// External class reference
			class HitGlass1;	// External class reference
			class HitGlass2;	// External class reference
			class HitGlass3;	// External class reference
			class HitGlass4;	// External class reference
			class HitGlass5;	// External class reference
			class HitGlass6;	// External class reference
		};
	};
	
	class Wheeled_APC_F : Car_F {
		class ViewOptics;	// External class reference
		class ViewCargo;	// External class reference
		
		class Sounds : Sounds {
			class Engine;	// External class reference
			class Movement;	// External class reference
		};
		class NewTurret;	// External class reference
		
		class Turrets {
			class MainTurret : NewTurret {
				class ViewOptics;	// External class reference
			};
		};
		class AnimationSources;	// External class reference
		class EventHandlers;	// External class reference
		class CommanderOptics;	// External class reference
	};
	
class rhs_btr_base : Wheeled_APC_F {
		radartype = 8;
		gunnerCanSee = 1+16;
		driverCanSee = 1+16;
//		commanderCanSee = 1+16+8+31;
		commanderCanSee = 1+16;
		class Turrets : Turrets {
			class MainTurret : MainTurret {
			radartype = 8;
			};
			class CommanderOptics : CommanderOptics {
			radartype = 8;
			};
		};
		class HitPoints : HitPoints {
			class HitEngine {
				armor = 2;
				material = -1;
				name = "engine";
				visual = "motor";
				passThrough = 0.2;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				passThrough = 0;
			};
			
			class HitBody {
				armor = 0.8;
				material = -1;
				name = "telo";
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.44;
				explosionShielding = 1;
				radius = 0.25;
			};
			
			class HitLBWheel : HitLBWheel {
				armor = 0.35;
				name = "wheel_1_4_steering";
				passThrough = 0.1;
				explosionShielding = 1;
			};
			
			class HitLMWheel : HitLMWheel {
				armor = 0.35;
				name = "wheel_1_3_steering";
				passThrough = 0.1;
				explosionShielding = 1;
			};
			
			class HitLF2Wheel : HitLF2Wheel {
				armor = 0.35;
				name = "wheel_1_2_steering";
				passThrough = 0.1;
				explosionShielding = 1;
			};
			
			class HitLFWheel : HitLFWheel {
				armor = 0.35;
				name = "wheel_1_1_steering";
				passThrough = 0.1;
				explosionShielding = 1;
			};

			
			class HitRBWheel : HitRBWheel {
				armor = 0.35;
				name = "wheel_2_4_steering";
				passThrough = 0.1;
				explosionShielding = 1;
			};
			
			class HitRMWheel : HitRMWheel {
				armor = 0.35;
				name = "wheel_2_3_steering";
				passThrough = 0.1;
				explosionShielding = 1;
			};
			
			class HitRF2Wheel : HitRF2Wheel {
				name = "wheel_2_2_steering";
				armor = 0.35;
				passThrough = 0.1;
				explosionShielding = 1;
			};
			
			class HitRFWheel : HitRFWheel {
				armor = 0.35;
				name = "wheel_2_1_steering";
				passThrough = 0.1;
				explosionShielding = 1;
			};
			
			class HitGlass1 {
				armor = 0.5;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 0.5;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
		};
	};

class Cha_LAV25_Base : Wheeled_APC_F {
		class HitPoints : HitPoints {
			class HitBody {
				armor = 1;
				material = -1;
				name = "zbytek";
				visual = "zbytek";
				minimalHit = 0.4;
				passThrough = 1;
			};
			
			class HitEngine {
				armor = 2;
				material = -1;
				name = "motor";
				visual = "zbytek";
				passThrough = 0.5;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "zbytek";
				passThrough = 0;
			};
			
			class HitLFWheel : HitLFWheel {
				armor = 0.35;
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 1;
			};
			
			class HitLBWheel : HitLBWheel {
				armor = 0.35;
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 1;
			};
			
			class HitLMWheel : HitLMWheel {
				armor = 0.35;
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 1;
			};
			
			class HitLF2Wheel : HitLF2Wheel {
				armor = 0.35;
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 1;
			};
			
			class HitRFWheel : HitRFWheel {
				armor = 0.35;
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 1;
			};
			
			class HitRBWheel : HitRBWheel {
				armor = 0.35;
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 1;
			};
			
			class HitRMWheel : HitRMWheel {
				armor = 0.35;
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 1;
			};
			
			class HitRF2Wheel : HitRF2Wheel {
				armor = 0.35;
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 1;
			};
		};
};