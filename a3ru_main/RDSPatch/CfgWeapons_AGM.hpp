class mortar_82mm;
class mortar_82mm_base : mortar_82mm {
	class Single1;
};
class AGM_Artillery_81mm: mortar_82mm_base {
	displayname = "Mortar Podnos 2b14";

	magazineReloadTime = 0; //default: 5
	reloadTime = 2; //default: 1.8

	magazines[] = {		
				"AGM_8Rnd_81mmShell_HE",
				"8Rnd_82mm_Mo_Flare_white",
				"8Rnd_82mm_Mo_Smoke_white"
				
	};
	modes[] = {"Charge1","Charge2","Charge3","Charge4","Charge5"};
	class Charge1: Single1 {
		artilleryDispersion = 1.9;
		artilleryCharge = 0.28;
		displayName = "Charge 0";  //I think these are just used in the default BIS comp, so no need to translate
	};
	class Charge2: Charge1 {
		artilleryCharge = 0.45;
		displayName = "Charge 1";
	};
	class Charge3: Charge1 {
		artilleryCharge = 0.58;
		displayName = "Charge 2";
	};
	class Charge4: Charge1 {
		artilleryCharge = 0.665;
		displayName = "Charge 3";
	};
	class Charge5: Charge1 {
		artilleryCharge = 0.76;
		displayName = "Charge 4";
	};

};
class AGM_Artillery_81mm_252: mortar_82mm_base {
	displayname = "Mortar M252";

	magazineReloadTime =0; //default: 5
	reloadTime = 0; //default: 1.8

	magazines[] = {		
				"AGM_8Rnd_81mmShell_252_HE",
				"8Rnd_82mm_Mo_Flare_white",
				"8Rnd_82mm_Mo_Smoke_white"
	};
	modes[] = {"Charge1","Charge2","Charge3","Charge4","Charge5"};
	class Charge1: Single1 {
		artilleryDispersion = 1.9;
		artilleryCharge = 0.215;
		displayName = "Charge 0";  //I think these are just used in the default BIS comp, so no need to translate
	};
	class Charge2: Charge1 {
		artilleryCharge = 0.455;
		displayName = "Charge 1";
	};
	class Charge3: Charge1 {
		artilleryCharge = 0.599;
		displayName = "Charge 2";
	};
	class Charge4: Charge1 {
		artilleryCharge = 0.706;
		displayName = "Charge 3";
	};
	class Charge5: Charge1 {
		artilleryCharge = 0.79;
		displayName = "Charge 4";
	};
};