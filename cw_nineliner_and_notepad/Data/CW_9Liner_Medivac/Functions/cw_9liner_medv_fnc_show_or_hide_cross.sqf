cw_9liner_medv_fnc_show_or_hide_cross =
{
_idc = _this select 0;
If (ctrlVisible _idc) then {ctrlShow [_idc, false];}else{ctrlShow [_idc, true];};


};