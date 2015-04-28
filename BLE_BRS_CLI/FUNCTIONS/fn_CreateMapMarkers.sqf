private "_marker";
{
	Replay_var_mapMarkers = Replay_var_mapMarkers + 1;
	_marker = format["mark_map_%1", Replay_var_mapMarkers];
	createMarker[_marker, _x select 0];
	_marker setMarkerDir (_x select 1);
	_marker setMarkerShape (_x select 2);
	_marker setMarkerType (_x select 3);
	_marker setMarkerBrush (_x select 4);
	_marker setMarkerColor (_x select 5);
	_marker setMarkerSize (_x select 6);
	_marker setMarkerAlpha (_x select 7);
	_marker setMarkerText (_x select 8);
} forEach _this;