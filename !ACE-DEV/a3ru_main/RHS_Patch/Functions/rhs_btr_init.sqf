private ["_btr","_path","_boardNum","_class","_habartype"];
_btr = _this select 0;

/*******************************************************************************
* Special FX secton                                                            *
*******************************************************************************/
if (isNil "RHS_BTR_Effects_Init") then
{
	RHS_BTR_Effects_Init = true;
	rhs_btr70_EnableRetread=true;
	rhs_activeTirePressure=true;
	rhs_TypeTirePressure=1;

		if (isNil "rhs_armor_hint") then{
			call rhs_fnc_hintArmor;
			rhs_armor_hint=true;
		};
};

/*******************************************************************************
* Retread			                                                         *
*******************************************************************************/
//private ["_RetreadScr"];
//_RetreadScr = [_btr] execVM '\rhsafrf\addons\rhs_c_btr\scripts\bgr_btr_retread.sqf';


if(local _btr)then{

	_habartype = 2;
	if (isNil "cBTRFuncLoaded") then
	{
		cBTRFuncLoaded = true;
		cBTRAddonName  = "rhs_btr";
		cBTR3NumberPlaces = [9,10,11]; // Places for number
		cBTR2NumberPlaces = [10,11]; // Places for number
		cBTR2SideRoundelPlaces = [20]; // Places for 2 hull side roundels
		cBTRFrontPlatePlaces = [21]; // Places for front roundel
		cBTR4NumberPlaces = [12,13,14,15]; // Places for 4 number
		cBTRCDF4NumberPlaces = [16,17,18,19]; // Places for number
		cBTROMONSymbolPlaces = [2];   // Places for omon symbols
		cBTRBackArmSymPlaces = [4];     // Places for back army symbol
		cBTRFlagSymPlaces = [5];     // Places for back army symbol
		cBTRLeftGvardSymPlaces = [6];     // Places for back army symbol
		cBTRRightGvardSymPlaces = [7];     // Places for back army symbol
		cBTRPlnSymPlaces = [3,8];     // Places for platoon symbol
		cBTRVVLetterSymPlaces = [22];     // Places for platoon symbol
		//cBTRPlnRandSymPlaces = [8];     // Places for platoon symbol

		rhs_tanks=true; //for damage hint handling
	};
	/*******************************************************************************
	* Paint & Spray =)                                                             *
	*******************************************************************************/
	private ["_params","_gvard1","_gvard2","_gvard3"];
	_class = typeOf _btr;
	_gvard1 = ["Label", cBTRBackArmSymPlaces, "Army", [6,1]];
	_gvard2 = ["Label", cBTRLeftGvardSymPlaces, "Army", [6,1]];
	_gvard3 = ["Label", cBTRRightGvardSymPlaces, "Army", [6,1]];

	// RHS_Decals main script path:
	_decal = "\rhsafrf\addons\RHS_Decals\Scripts\init.sqf";

	_btr animateDoor ["driverViewHatch",1];
	_btr animateDoor ["commanderViewHatch",1];
	_btr setVariable ["hatchHandling",1];

	[_btr] spawn rhs_fnc_btr_handleHatch;

	if ( (floor(random 100)) > 50) then
	{
		_gvard1 = ["Label", cBTRBackArmSymPlaces, "Army", [6,1]];
	}else{
		_gvard1 = ["Label", cBTRBackArmSymPlaces, "Army", 0];
	};
	if ( (floor(random 100)) > 50) then
	{
		_gvard2 = ["Label", cBTRLeftGvardSymPlaces, "Army", [6,1]];
	}else{
		_gvard2 = ["Label", cBTRLeftGvardSymPlaces, "Army", 0];
	};
	if ( (floor(random 100)) > 50) then
	{
		_gvard3 = ["Label", cBTRRightGvardSymPlaces, "Army", [6,1]];
	}else{
		_gvard3 = ["Label", cBTRRightGvardSymPlaces, "Army", 0];
	};

	switch (_class) do
	{

		case "rhs_btr60_vmf":
		{
			_params = [
				_btr,
				[
					["Number", cBTR3NumberPlaces, "Default"],  // Set number (random)
					["Label", cBTRPlnSymPlaces, "Army",[3,1]]
				]
			];
			_habartype = 2;
		};

		case "rhs_btr60_vdv":
		{
			_params = [
				_btr,
				[
					["Number", cBTR3NumberPlaces, "Default"],  // Set number (random)
					["Label", cBTRBackArmSymPlaces, "Army",2],
					["Label", cBTRPlnSymPlaces, "Platoon",11]
				]
			];
			_habartype = 2;
		};

		case "rhs_btr60_vv":
		{
			_params = [
				_btr,
				[
					["Number", cBTR3NumberPlaces, "Default"],  // Set number (random)
					_gvard1,
					_gvard2,
					_gvard3,
					["Label", cBTRVVLetterSymPlaces, "Platoon",13],
				    ["Label", cBTROMONSymbolPlaces,"Army",10]
				]
			];
			_habartype = 2;
		};

		case "rhs_btr60_msv":
		{
			_params = [
				_btr,
				[
					["Number", cBTR3NumberPlaces, "DefaultRed"],  // Set number (random)
					["Label", cBTRPlnSymPlaces, "Platoon",12]
				]
			];
			_habartype = 2;
		};


		case "rhs_btr70_vmf":
		{
			_params = [
				_btr,
				[
					["Number", cBTR3NumberPlaces, "Default"],  // Set number (random)
					["Label", cBTRPlnSymPlaces, "Army",[3,1]]
				]
			];
			_habartype = 2;
		};

		case "rhs_btr70_vdv":
		{
			_params = [
				_btr,
				[
					["Number", cBTR3NumberPlaces, "Default"],  // Set number (random)
					["Label", cBTRBackArmSymPlaces, "Army",2],
					["Label", cBTRPlnSymPlaces, "Platoon",11]
				]
			];
			_habartype = 2;
		};

		case "rhs_btr70_vv":
		{
			_params = [
				_btr,
				[
					["Number", cBTR3NumberPlaces, "Default"],  // Set number (random)
					_gvard1,
					_gvard2,
					_gvard3,
					["Label", cBTRVVLetterSymPlaces, "Platoon",13],
				    ["Label", cBTROMONSymbolPlaces,"Army",10]
				]
			];
			_habartype = 2;
		};

		case "rhs_btr70_msv":
		{
			_params = [
				_btr,
				[
					["Number", cBTR3NumberPlaces, "DefaultRed"],  // Set number (random)
					["Label", cBTRPlnSymPlaces, "Platoon",12]
				]
			];
			_habartype = 2;
		};

		case "rhs_btr80_msv":
		{
			_params = [
				_btr,
				[
					["Number", cBTR3NumberPlaces, "DefaultRed"],  // Set number (random)
					["Label", cBTRPlnSymPlaces, "Platoon",12]
				]
			];
			_habartype = 2;
		};

		case "rhs_btr80_vmf":
		{
			_params = [
				_btr,
				[
					["Number", cBTR3NumberPlaces, "Default"],  // Set number (random)
					["Label", cBTRPlnSymPlaces, "Army",[3,1]]
				]
			];
			_habartype = 2;
		};

		case "rhs_btr80_vdv":
		{
			_params = [
				_btr,
				[
					["Number", cBTR3NumberPlaces, "Default"],  // Set number (random)
					["Label", cBTRBackArmSymPlaces, "Army",2],
					["Label", cBTRPlnSymPlaces, "Platoon",11]
				]
			];
			_habartype = 2;
		};

		case "rhs_btr80_vv":
		{
			_params = [
				_btr,
				[
					["Number", cBTR3NumberPlaces, "Default"],  // Set number (random)
					_gvard1,
					_gvard2,
					_gvard3,
					["Label", cBTRVVLetterSymPlaces, "Platoon",13],
				    ["Label", cBTROMONSymbolPlaces,"Army",10]
				]
			];
			_habartype = 2;
		};

		case "rhs_btr80a_msv":
		{
			_params = [
				_btr,
				[
					["Number", cBTR3NumberPlaces, "DefaultRed"],  // Set number (random)
					["Label", cBTRPlnSymPlaces, "Platoon",12]
				]
			];
			_habartype = 2;
		};

		case "rhs_btr80a_vmf":
		{
			_params = [
				_btr,
				[
					["Number", cBTR3NumberPlaces, "Default"],  // Set number (random)
					["Label", cBTRPlnSymPlaces, "Army",[3,1]]
				]
			];
			_habartype = 2;
		};

		case "rhs_btr80a_vdv":
		{
			_params = [
				_btr,
				[
					["Number", cBTR3NumberPlaces, "Default"],  // Set number (random)
					["Label", cBTRBackArmSymPlaces, "Army",2],
					["Label", cBTRPlnSymPlaces, "Platoon",11]
				]
			];
			_habartype = 2;
		};

		case "rhs_btr80a_vv":
		{
			_params = [
				_btr,
				[
					["Number", cBTR3NumberPlaces, "Default"],  // Set number (random)
					_gvard1,
					_gvard2,
					_gvard3,
					["Label", cBTRVVLetterSymPlaces, "Platoon",13],
				    ["Label", cBTROMONSymbolPlaces,"Army",10]
				]
			];
			_habartype = 2;
		};

		default
		{
			_params = [
				_btr,
				[

				]
			];
			_habartype = 2;
		};
	};

	private ["_h"];
	_h = _params spawn rhs_fnc_decalsInit; // Paint vehicle
	[_btr,_habartype] spawn rhs_fnc_btr_habar; // Habar
};