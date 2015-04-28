#include "macros.h"

disableSerialization;

_display = uiNameSpace getVariable ["Replay_Dialog", displayNull];
if (!isNull _display) then {
	_display displayAddEventHandler ["KeyDown", {
		_key = _this select 1;
		if ((_key == 18) && (_this select 2)) then { endMission 'loser' };
		if (_key isEqualTo 82) then { Replay_var_currentState = 0; true };
		if (_key isEqualTo 79) then { Replay_var_currentState = 1; true };
		if (_key isEqualTo 80) then { Replay_var_currentState = 2; true };
		if (_key isEqualTo 81) then { Replay_var_currentState = 3; true };
		if (_key isEqualTo 75) then { Replay_var_currentState = 4; true };
		if (_key isEqualTo 76) then { Replay_var_currentState = 5; true };
		if (_key isEqualTo 77) then { Replay_var_currentState = 6; true };
		if (_key in (actionKeys "IngamePause")) then { Replay_var_NoDiaCheck = true; createDialog "Replay_Exit_Dialog"; true };
	}];
	(_display displayCtrl IDC_REPLAY_TEXT_TOTALTIME) ctrlSetText (Replay_var_totalTime call Replay_fnc_ConvertTime);
	_idc_progress = _display displayCtrl IDC_REPLAY_PROGRESS;
	_idc_progress sliderSetRange [0, Replay_var_totalTime];
	_idc_progress ctrlAddEventHandler ["MouseButtonUp", {
		if !(isNil "Replay_SliderNewPos") then {
			Replay_var_currentTime = Replay_SliderNewPos;
		};
	}];
	_idc_progress ctrlAddEventHandler ["SliderPosChanged", {
		Replay_SliderNewPos = _this select 1;
	}];
	_idc_progress ctrlSetTooltip "CURRENTLY UNAVAILABLE!";
	(_display displayCtrl IDC_REPLAY_LB_MESSAGEBOX) ctrlAddEventHandler ["LBDblClick", {
		_ctrl = _this select 0;
		_index = _this select 1;
		_marker = _ctrl lbData _index;
		if (_marker != "") then {
			_markerPos = markerPos _marker;
			if !(_markerPos isEqualTo [0,0,0]) then {
				_ctrl = _display displayCtrl IDC_REPLAY_MAP;
				_ctrl ctrlMapAnimAdd [0.25, 0.04, _markerPos];
				ctrlMapAnimCommit _ctrl;
			};
		};
	}];
	(_display displayCtrl IDC_REPLAY_MAP) ctrlAddEventHandler ["MouseButtonClick",
	{
		private ["_over", "_marker", "_crew", "_crewNum"];
		_over = ctrlMapMouseOver (_this select 0);
		if (count _over > 0) then {
			if (_over select 0 isEqualTo "marker") then {
				_marker = _over select 1;
				_crew = [];
				_crewNum = ["GET", _marker] call Replay_fnc_VehicleCrew;
				{
					_marker = format["mark_player_%1", _x];
					_name = markerText _marker;
					if !(_name isEqualTo "") then { _crew pushBack _name };
				} forEach _crewNum;
				if (count _crew > 0) then {
					hint str _crew;
				};
			};
		};
	}];
};