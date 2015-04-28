// MAP DRAW EVENT HANDLER
#include "macros.h"

private ["_display", "_linesArray", "_increm", "_marker"];

disableSerialization;
_display = uiNameSpace getVariable ["Replay_Dialog", displayNull];
if (!isNull _display) then {
	Replay_var_drawEH = (_display displayCtrl IDC_REPLAY_MAP) ctrlAddEventHandler ["Draw", {
		{
			private ["_pos_1", "_pos_2", "_color", "_increm", "_pos"];
			_pos_1 = _x select 2;
			_pos_2 = _x select 1;
			_color = _x select 3;
			_increm = _x select 4;
			_pos = [(_pos_1 select 0) + (((_pos_2 select 0) - (_pos_1 select 0)) * _increm), (_pos_1 select 1) + (((_pos_2 select 1) - (_pos_1 select 1)) * _increm)];
			(_this select 0) drawLine [_pos_1, _pos, _color];
		} forEach Replay_var_Lines;
	}];
};

// DRAW KILL LINE LOGIC / MARKER CREATE
while { Replay_var_doWork } do {
	// REMOVE MAP KILL LINES
	_linesArray = Replay_var_Lines;
	{
		if (Replay_var_currentTime > (_x select 0)) then {
			_linesArray SET [_forEachIndex, -1]
		} else {
			_increm = _x select 4;
			if (_increm < 1) then {
				_x SET [4, _increm + 0.1];
				_linesArray SET [_forEachIndex, _x];
			} else {
				if (_increm != 64) then {
					_increm = 64;
					// CREATE HIT MARKER
					_marker = format["mark_player_hit_%1", _x select 5];
					createMarker[_marker, _x select 1];
					_marker setMarkerShape "ICON";
					_marker setMarkerType "Replay_Hit";
					_marker setMarkerColor "ColorRed";
					Replay_var_removeMarkers pushBack [Replay_var_currentTime + Replay_var_HitRemovalTime, _marker];
				};
			};
		};
	} forEach _linesArray;
	Replay_var_Lines = _linesArray - [-1];
	
	// REMOVE MARKERS
	_linesArray = Replay_var_removeMarkers - [-1];
	{
		if (Replay_var_currentTime > (_x select 0)) then {
			_linesArray SET [_forEachIndex, -1];
			deleteMarker (_x select 1);
		};
	} forEach _linesArray;
	Replay_var_removeMarkers = _linesArray - [-1];
	sleep 0.1;
};