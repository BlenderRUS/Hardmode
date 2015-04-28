#include "macros.h"
disableSerialization;

_display = _this select 0;
_action = _this select 1;

if (!isNull _display) then {
	{ (_display displayCtrl _x) ctrlShow _action } forEach [IDC_REPLAY_T_EXIT, IDC_REPLAY_HEADER, IDC_REPLAY_BTN_OK, IDC_REPLAY_BTN_CANCEL, IDC_REPLAY_IGUIBACK_2200];
};