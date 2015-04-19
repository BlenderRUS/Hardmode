//
private ["_boxvar1","_hmgbox","_hmgtypeofbox"];
if (isServer) then {
_boxvar1 = _this select 0;
_hmgbox = _boxvar1 select 0;
_hmgtypeofbox = _this select 1;
// rifles
switch (_hmgtypeofbox) do {
	case "rifles": {
		_hmgcount = (floor (random 4));
		_hmgbox addweaponcargoglobal ["hlc_rifle_g3a3",_hmgcount];
		_hmgbox addmagazinecargoglobal ["hlc_20Rnd_762x51_B_G3", _hmgcount*6];
		_hmgbox addmagazinecargoglobal ["hlc_20rnd_762x51_T_G3", _hmgcount*6];
		_hmgcount = (floor (random 4));		
		_hmgbox addweaponcargoglobal ["hlc_rifle_g3ka4", _hmgcount];	
		_hmgbox addmagazinecargoglobal ["hlc_20Rnd_762x51_B_G3", _hmgcount*6];
		_hmgbox addmagazinecargoglobal ["hlc_20rnd_762x51_T_G3", _hmgcount*6];
		_hmgcount = (floor (random 4));		
		_hmgbox addweaponcargoglobal ["HLC_Rifle_g3ka4_GL", _hmgcount];	
		_hmgbox addmagazinecargoglobal ["hlc_20Rnd_762x51_B_G3", _hmgcount*6];
		_hmgbox addmagazinecargoglobal ["1Rnd_HE_Grenade_shell", _hmgcount*12];		
		_hmgcount = (floor (random 4)); 
		_hmgbox addweaponcargoglobal ["hlc_rifle_l1a1slr", _hmgcount]; 
		_hmgbox addmagazinecargoglobal ["hlc_20Rnd_762x51_B_fal", _hmgcount*6];		
		_hmgbox addmagazinecargoglobal ["hlc_20Rnd_762x51_t_fal", _hmgcount*6];		
		_hmgcount = (floor (random 4));		
		_hmgbox addweaponcargoglobal ["hlc_rifle_LAR", _hmgcount]; 
		_hmgbox addmagazinecargoglobal ["hlc_20Rnd_762x51_B_fal", _hmgcount*6];		
		_hmgbox addmagazinecargoglobal ["hlc_20Rnd_762x51_t_fal", _hmgcount*6];		
		_hmgcount = (floor (random 4));
		_hmgbox addweaponcargoglobal ["hlc_rifle_M14",_hmgcount];
		_hmgbox addmagazinecargoglobal ["hlc_20Rnd_762x51_B_M14", _hmgcount*6];
		_hmgbox addmagazinecargoglobal ["hlc_20rnd_762x51_T_M14", _hmgcount*6];
		_hmgcount = (floor (random 5));				
		_hmgbox additemcargoglobal ["hlc_optic_accupoint_g3", _hmgcount];
		};
	case "lmg": {
		_hmgcount = (floor (random 3));		
		_hmgbox addweaponcargoglobal ["hlc_rifle_FAL5061", _hmgcount];
		_hmgbox addmagazinecargoglobal ["hlc_50rnd_762x51_M_FAL", _hmgcount*12];	
		_hmgcount = (floor (random 3));
		_hmgbox addweaponcargoglobal ["rhs_weap_m249_pip",_hmgcount];	
		_hmgbox addmagazinecargoglobal ["rhsusf_100Rnd_556x45_soft_pouch", _hmgcount*12];
		_hmgcount = (floor (random 3));		
		_hmgbox addweaponcargoglobal ["hlc_rifle_rpk", _hmgcount];
		_hmgbox addmagazinecargoglobal ["hlc_75rnd_762x39_m_rpk", _hmgcount*12];		
		};
	case "hmg": {
		_hmgcount = 0;
		_hmgcount = (floor (random 2));
		_hmgbox addweaponcargoglobal ["hlc_lmg_m60", _hmgcount];
		_hmgbox addmagazinecargoglobal ["hlc_100Rnd_762x51_B_M60E4", _hmgcount*8];
		_hmgcount = (floor (random 2));		
		_hmgbox addweaponcargoglobal ["rhs_weap_pkm", _hmgcount]; 
		_hmgbox addmagazinecargoglobal ["rhs_100Rnd_762x54mmR", _hmgcount*4];
		_hmgbox addmagazinecargoglobal ["rhs_100Rnd_762x54mmR_green", _hmgcount*4];
		_hmgcount = (floor (random 2));
		_hmgbox addweaponcargoglobal ["rhs_weap_m240B",_hmgcount];	
		_hmgbox addmagazinecargoglobal ["rhsusf_100Rnd_762x51", _hmgcount*8];		
		};
	case "stuff": {
		_hmgcount = (floor (random 10));
		_hmgbox additemcargoglobal ["ItemMap", _hmgcount]; 
		_hmgcount = (floor (random 5));
		_hmgbox additemcargoglobal ["ItemSMGR", _hmgcount];	
		_hmgcount = (floor (random 5));
		_hmgbox additemcargoglobal ["ItemGPS", _hmgcount];	
		_hmgcount = (floor (random 2));
		_hmgbox additemcargoglobal ["AGM_Vector", _hmgcount]; 
		_hmgcount = (floor (random 5));
		_hmgbox addweaponcargoglobal ["Binocular", _hmgcount]; 
		};
	case "maps": {
		_hmgcount = (floor (random 10));
		_hmgbox additemcargoglobal ["ItemMap", _hmgcount]; 
		_hmgcount = (floor (random 10));
		_hmgbox addweaponcargoglobal ["Binocular", _hmgcount]; 
		};
	case "radio": {
		_hmgbox additemcargoglobal ["tf_ex8550", 20];
		_hmgcount = (floor (random 5));
		_hmgbox additemcargoglobal ["tf_fadak", _hmgcount]; 
		_hmgcount = (floor (random 2));
		_hmgbox addbackpackcargoglobal ["tf_rt1523g", _hmgcount]; 
		_hmgcount = (floor (random 2));
		_hmgbox addbackpackcargoglobal ["tf_anprc155_coyote", _hmgcount]; 
		_hmgcount = (floor (random 2));
		_hmgbox addbackpackcargoglobal ["tf_mr3000_rhs", _hmgcount];
		};
	case "snip": {
		_hmgcount = (floor (random 2));
		_hmgbox addweaponcargoglobal ["hlc_rifle_psg1", _hmgcount];
		_hmgbox addmagazinecargoglobal ["hlc_20Rnd_762x51_B_G3", _hmgcount*8];
		_hmgbox additemcargoglobal ["HLC_Optic_ZFSG1", _hmgcount]; 
		_hmgcount = (floor (random 2));
		_hmgbox addweaponcargoglobal ["hlc_rifle_M14DMR", _hmgcount];
		_hmgbox addmagazinecargoglobal ["hlc_20Rnd_762x51_B_M14", _hmgcount*8];
		_hmgbox additemcargoglobal ["hlc_optic_LRT_m14", _hmgcount]; 	
		_hmgcount = (floor (random 2));
		_hmgbox addweaponcargoglobal ["hlc_rifle_c1A1", _hmgcount];
		_hmgbox addmagazinecargoglobal ["hlc_20Rnd_762x51_B_fal", _hmgcount*8];
		_hmgbox additemcargoglobal ["hlc_optic_suit", _hmgcount]; 	
		};
};
};
