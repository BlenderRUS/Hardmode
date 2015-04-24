_typeofUnit = toLower (_this select 1); 
_unit = _this select 0; 
if (isServer && !(_unit getvariable ["bg_pompmcset", false])) then { 
    #include "randomize_pmc.sqf" 
} 
else { // Check for JIP from standard slots.  
         
            if (local _unit) then  
            { 
                If (isNil "bg_isJIP") then  
                { 
                    bg_isJIP = false; 
                    //If not JIP then skip all this. 
                    if (isNull player) then  
                    { 
                        if !(isDedicated || !isMultiplayer) then  
                        { 
                            bg_isJIP = true; 
                        }; 
                    }; 
                }; 
                If (isNil "bg_isJIP") then {diag_log format ["BG WARNING bg_isJIP = %1",bg_isJIP]}; 
                 
                //diag_log format["bg Checking JIP %1 : %2",_unit, time]; 
                 
                If (bg_isJIP || time>10) then  
                {  
                 
                    #include "randomize_pmc.sqf" 
                 
                }; 
            }; 
};