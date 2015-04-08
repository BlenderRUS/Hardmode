cw_9liner_medv_fnc_clearPage = 
{
_emptySheet = ["","","",false,false,false,false,false,"",false,false,false,false,"",false,false,"",false,false,false,false,"",false,false,false,false,false,"",false,false,false,false,false,"",false,false,false];
[_emptySheet] call cw_9liner_medv_fnc_fill;

_varname = "cw_9liner_medv_pageText_" + (str cw_9liner_medv_currentPage);
_pagetext = profileNamespace setVariable [_varname,["","","",false,false,false,false,false,"",false,false,false,false,"",false,false,"",false,false,false,false,"",false,false,false,false,false,"",false,false,false,false,false,"",false,false,false]];

hint format ["PAGE %1 CLEARED\nNote: The page was cleared, but not saved!", cw_9liner_medv_currentPage];
};