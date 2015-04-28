#include "macros.h"

private ["_display", "_index", "_control"];
disableSerialization;
_display = uiNameSpace getVariable ["Replay_Dialog", displayNull];
if (!isNull _display) then {
	_control = (_display displayCtrl IDC_REPLAY_LB_MESSAGEBOX);
	if (typeName _this isEqualTo "ARRAY") then {
		_index = _control lbAdd (_this select 0);
		_control lbSetData [_index, _this select 1];
	} else {
		_index = _control lbAdd _this;
	};
	_control lbSetCurSel _index;	
};