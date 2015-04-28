#include "macros.h"

private "_display";
disableSerialization;
_display = uiNameSpace getVariable ["Replay_Dialog", displayNull];
if (!isNull _display) then {
	(_display displayCtrl IDC_REPLAY_TEXT_POSITION) ctrlSetText (Replay_var_currentTime call Replay_fnc_ConvertTime);
};