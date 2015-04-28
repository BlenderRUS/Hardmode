_id = _this select 0;
_marker = format["mark_player_%1", _id];

// CHECK MARKER EXISTANCE
if !(_marker in allMapMarkers) then {
	createMarker[_marker, [0,0,0]];
	_marker setMarkerShape "ICON";
	_marker setMarkerType "Replay_Infantry";

	// ADD UNITS TO LIST FOR FURTHER EXISTANCE CHECK
	if !(_marker in Replay_var_unitsList) then {
		Replay_var_unitsList pushBack _marker;
	};
};

for "_i" from 1 to ((count _this) - 1) do {
	_event = _this select _i;
	_eventID = _event select 0;
	_eventParam = _event select 1;
	switch (_eventID) do { // SWITCH UNIT PARAMETER
		case 0: { // NAME
			_marker setMarkerText _eventParam;
		};
		case 1: { // SIDE
			switch (_eventParam) do {
				case "WEST": { _marker setMarkerColor "ColorWEST" };
				case "EAST": { _marker setMarkerColor "ColorEAST" };
				case "GUER": { _marker setMarkerColor "ColorGUER" };
				default { _marker setMarkerColor "ColorCIV" };
			};
		};
		case 2: { // POSITION
			_marker setMarkerPos _eventParam;
		};
		case 3: { // DIRECTION
			_marker setMarkerDir _eventParam;
		};
		case 5: { // STATE
			switch _eventParam do {
				case "HEALTHY": { _marker setMarkerType "Replay_Infantry" };
				case "INJURED": { _marker setMarkerType "Replay_Wounded" };
				case "DEAD": {
					_marker setMarkerAlpha 1;
					_marker setMarkerColor "ColorBlack";
					Replay_var_removeMarkers pushBack [Replay_var_currentTime + Replay_var_DeadRemovalTime, _marker];
				};
			};
		};
		case 6: { // IN VEHICLE
			if (_eventParam) then {
				_marker setMarkerAlpha 0;
			} else {
				_marker setMarkerAlpha 1;
			};
		};
	};
};
_marker