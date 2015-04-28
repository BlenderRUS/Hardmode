private ["_crew", "_marker", "_found"];
switch (_this select 0) do {
	case "GET": {
		_crew = [];
		_marker = _this select 1;
		{
			if (_marker isEqualTo (_x select 0)) exitWith {
				_crew = _x select 1;
			};
		} forEach Replay_var_crewList;
		_crew
	};
	case "SET": {
		_found = false;
		_marker = _this select 1;
		{
			if (_marker isEqualTo (_x select 0)) exitWith {
				_found = true;
				Replay_var_crewList SET [_forEachIndex, [_marker, _this select 2]];
			};
		} forEach Replay_var_crewList;
		if (!_found) then { Replay_var_crewList pushBack [_marker, _this select 2] };
	};
	case "REMOVE": {
		_marker = _this select 1;
		{
			if (_marker isEqualTo (_x select 0)) exitWith {
				Replay_var_crewList deleteAt _forEachIndex;
			};
		} forEach Replay_var_crewList;
	};
};