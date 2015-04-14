//
private ["_logic", "_units", "_activated"];
_logic = _this select 0;
//_units = _this select 1;
//hint "Ololo";
//HMG_Para_is_on = _logic getVariable "IsParaActive";
//HMG_Para_type = _logic getVariable "IsParaSteer";
[_logic, "HMG_Para_is_on", "IsParaActive" ] call AGM_Core_fnc_readBooleanParameterFromModule;
[_logic, "HMG_Para_type", "IsParaSteer" ] call AGM_Core_fnc_readBooleanParameterFromModule;

