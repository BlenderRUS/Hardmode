//Uniforms 
_CombatUniform = ["U_PMC_CombatUniformRS_BSGPBB","U_PMC_CombatUniformRS_BSGPSB","U_PMC_CombatUniformRS_BSSPBB","U_PMC_CombatUniformRS_BSSPSB","U_PMC_CombatUniformRS_GSBPBB","U_PMC_CombatUniformRS_GSSPBB","U_PMC_CombatUniformRS_IndPBSBB","U_PMC_CombatUniformRS_SSBPBB","U_PMC_CombatUniformRS_SSGPBB","U_PMC_CombatUniformRS_SSGPSB","U_PMC_CombatUniformRS_ChckDBS_GPSB","U_PMC_CombatUniformRS_ChckLB_GPBB","U_PMC_CombatUniformRS_ChckLR_SPBB","U_PMC_CombatUniformRS_ChckP_BPBB","U_PMC_CombatUniformLS_BSGPBB","U_PMC_CombatUniformLS_BSGPSB","U_PMC_CombatUniformLS_BSSPBB","U_PMC_CombatUniformLS_BSSPSB","U_PMC_CombatUniformLS_GSBPBB","U_PMC_CombatUniformLS_GSSPBB","U_PMC_CombatUniformLS_IndPBSBB","U_PMC_CombatUniformLS_SSBPBB","U_PMC_CombatUniformLS_SSGPBB","U_PMC_CombatUniformLS_SSGPSB","U_PMC_CombatUniformLS_ChckDBS_GPSB","U_PMC_CombatUniformLS_ChckLB_GPBB","U_PMC_CombatUniformLS_ChckLR_SPBB","U_PMC_CombatUniformLS_ChckP_BPBB","U_PMC_IndUniformLS_BSBPBB","U_PMC_IndUniformLS_BSGPBB","U_PMC_IndUniformLS_BSTPTB","U_PMC_IndUniformLS_GSGPBB","U_PMC_IndUniformLS_GSBPBB","U_PMC_IndUniformLS_GSTPTB","U_PMC_IndUniformLS_TSTPTB","U_PMC_IndUniformLS_TSBPBB","U_PMC_IndUniformLS_TSGPBB","U_PMC_IndUniformRS_BSBPBB","U_PMC_IndUniformRS_BSGPBB","U_PMC_IndUniformRS_BSTPTB","U_PMC_IndUniformRS_GSGPBB","U_PMC_IndUniformRS_GSBPBB","U_PMC_IndUniformRS_GSTPTB","U_PMC_IndUniformRS_TSTPTB","U_PMC_IndUniformRS_TSBPBB","U_PMC_IndUniformRS_TSGPBB"]; 
_PoloCargoPants = ["U_PMC_BluPolo_BgPants","U_PMC_BgPolo_GrnPants","U_PMC_BlckPolo_BgPants","U_PMC_BlckPolo_BluPants","U_PMC_BluPolo_GrnPants", "U_PMC_BrnPolo_BgPants","U_PMC_BrnPolo_BluPants","U_PMC_BrnPolo_BluPants","U_PMC_GrnPolo_BgPants","U_PMC_WhtPolo_BgPants","U_PMC_WhtPolo_BluPants","U_PMC_WhtPolo_GrnPants"]; 
_Shirt_Cords = ["U_PMC_BluePlaidShirt_BeigeCords","U_PMC_RedPlaidShirt_DenimCords","U_PMC_BlackPoloShirt_BeigeCords"]; 
_TshirtJeans = ["U_PMC_GTShirt_DJeans","U_PMC_GTShirt_SJeans","U_PMC_BlkTShirt_DJeans","U_PMC_BlkTShirt_SJeans","U_PMC_WTShirt_DJeans","U_PMC_BluTShirt_SJeans"]; 

//Vests 
_Vest = ["V_PlateCarrier1_PMC_rgr","V_PlateCarrier1_PMC_blk","V_PlateCarrier1_PMC_marpat","V_PlateCarrier1_PMC_khki","V_PlateCarrierInd_PMC_blk","V_PlateCarrierInd_PMC_grn","V_PlateCarrier1_PMC_coyote"]; 

//Headgear 
_poloheadgear = ["H_Cap_pmc","H_Cap_tan_pmc","H_HelmetB_plain_blk",""]; 
_combatheadgear = ["H_Cap_pmc","H_Cap_tan_pmc","H_HelmetB_plain_blk",""]; 
_medicheadgear = ["H_Cap_pmc","H_Cap_tan_pmc","H_HelmetB_plain_blk"]; 
_sniperheadgear = ["H_Booniehat_rgr","H_Booniehat_GCAMO","H_Booniehat_DMARPAT","H_Capbw_pmc","H_Capbw_tan_pmc"]; 

// lets strip him down to the basic 
_magazines = magazines _unit; 
_items = items _unit; // Medkits, ToolKits etc. 
_assitems = assignedItems _unit; // NVG's, GPS etc. 

//Keep everything consistent between loadouts as some get random vests, others don't 
removeUniform _unit; 
{_unit removemagazine _x} foreach _magazines; 
removeAllItems _unit;     

// use the type of the unit to figure out what gear they use 

switch (_typeofUnit) do 
{ 
    case "polo": 
    { 
        if(!isnil "_PoloCargoPants" && {count _PoloCargoPants > 0}) then 
        { 
        _unit adduniform (_PoloCargoPants call BIS_fnc_selectRandom); 
        }; 
        // if there is hat etc. 
        if(!isnil "_poloheadgear" && {count _poloheadgear > 0}) then 
        { 
        removeheadgear _unit; _unit addheadgear (_poloheadgear call BIS_fnc_selectRandom); 
        }; 
        if(!isnil "_Vest" && {count _Vest > 0}) then 
        { 
        removevest _unit; _unit addvest (_Vest call BIS_fnc_selectRandom); 
        }; 
    }; 
    case "cords": 
    { 

        if(!isnil "_Shirt_Cords" && {count _Shirt_Cords > 0}) then 
        { 
        _unit adduniform (_Shirt_Cords call BIS_fnc_selectRandom); 
        }; 

    }; 
    case "combat": 
    { 
        if(!isnil "_CombatUniform" && {count _CombatUniform > 0}) then 
        { 
        _unit adduniform (_CombatUniform call BIS_fnc_selectRandom); 
        }; 
        // if there is hat etc. 
        if(!isnil "_combatheadgear" && {count _combatheadgear > 0}) then 
        { 
        removeheadgear _unit; _unit addheadgear (_combatheadgear call BIS_fnc_selectRandom); 
        }; 
        if(!isnil "_Vest" && {count _Vest > 0}) then 
        { 
        removevest _unit; _unit addvest (_Vest call BIS_fnc_selectRandom); 
        }; 
    }; 

    case "jeans": 
    { 
        if(!isnil "_TshirtJeans" && {count _TshirtJeans > 0}) then 
        { 
        _unit adduniform (_TshirtJeans call BIS_fnc_selectRandom); 
        }; 
        if(!isnil "_Vest" && {count _Vest > 0}) then 
        { 
        removevest _unit; _unit addvest (_Vest call BIS_fnc_selectRandom); 
        }; 
    }; 
     
    default 
    { 
        if(!isnil "_CombatUniform" && {count _CombatUniform > 0}) then 
        { 
        _unit adduniform (_CombatUniform call BIS_fnc_selectRandom); 
        }; 
        // if there is hat etc. 
        if(!isnil "_combatheadgear" && {count _combatheadgear > 0}) then 
        { 
        removeheadgear _unit; _unit addheadgear (_combatheadgear call BIS_fnc_selectRandom); 
        }; 
        if(!isnil "_Vest" && {count _Vest > 0}) then 
        { 
        removevest _unit; _unit addvest (_Vest call BIS_fnc_selectRandom); 
        }; 
    }; 


    case "sniper": 
    { 
        if(!isnil "_CombatUniform" && {count _CombatUniform > 0}) then 
        { 
        _unit adduniform (_CombatUniform call BIS_fnc_selectRandom); 
        }; 
        // if there is hat etc. 
        if(!isnil "_sniperheadgear" && {count _sniperheadgear > 0}) then 
        { 
        removeheadgear _unit; _unit addheadgear (_sniperheadgear call BIS_fnc_selectRandom); 
        }; 

    }; 

    case "medic": 
    { 
        if(!isnil "_CombatUniform" && {count _CombatUniform > 0}) then 
        { 
        _unit adduniform (_CombatUniform call BIS_fnc_selectRandom); 
        }; 
        // if there is hat etc. 
        if(!isnil "_medicheadgear" && {count _medicheadgear > 0}) then 
        { 
        removeheadgear _unit; _unit addheadgear (_medicheadgear call BIS_fnc_selectRandom); 
        }; 
        if(!isnil "_Vest" && {count _Vest > 0}) then 
        { 
        removevest _unit; _unit addvest (_Vest call BIS_fnc_selectRandom); 
        }; 
    }; 

}; 

{_unit addMagazine _x} forEach _magazines; 
{_unit additem _x} forEach _items; 
{_unit assignitem _x} forEach _assitems; 
_unit setvariable ["bg_pompmcset", true,true]  