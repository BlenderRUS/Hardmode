_id = _this select 0;
_marker = format["mark_vehicle_%1", _id];
_vehName = "";

// CHECK MARKER EXISTANCE
if !(_marker in allMapMarkers) then {
	createMarker[_marker, [0,0,0]];
	_marker setMarkerShape "ICON";
	_marker setMarkerType "mil_dot";
	_marker setMarkerColor "ColorOrange";

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
			_vehName = (getText (configFile >> "CfgVehicles" >> _eventParam >> "DisplayName"));
			_marker setMarkerText _vehName;
			switch (_eventParam) do {
				case "parachuteBase": {_marker setMarkerType "Replay_Parachute"};
				case "Helicopter": {_marker setMarkerType "Replay_Helicopter"};
				case "Plane": {_marker setMarkerType "Replay_Plane"};
				case "Ship_F": {_marker setMarkerType "Replay_Ship"};
				case "Tank_F": {_marker setMarkerType "Replay_Tank"};
				case "Wheeled_APC_F": {_marker setMarkerType "Replay_APC"};
				case "Truck_F": {_marker setMarkerType "Replay_Truck"};
				case "Car_F": {_marker setMarkerType "Replay_Car"};
			};
		};
		case 1: { // POSITION
			_marker setMarkerPos _eventParam;
		};
		case 2: { // DIRECTION
			_marker setMarkerDir _eventParam;
		};
		case 3: { // CREW COUNT
			_crewCount = count _eventParam;
			if (_crewCount > 0) then {
				//if (_vehName isEqualTo "") then { _vehName = markerText _marker };
				//_marker setMarkerText format["%1 [%2]", _vehName, _crewCount];
			};
			["SET", _marker, _eventParam] call Replay_fnc_VehicleCrew;
		};
		case 4: { // IS ALIVE
			if (!_eventParam) then {
				_marker setMarkerColor "ColorBlack";
				["REMOVE", _marker, _eventParam] call Replay_fnc_VehicleCrew;
			};
		};
		case 5: { // VEHICLE SIDE
			if !((markerColor _marker) isEqualTo "ColorBlack") then {
				switch (_eventParam) do {
					case "WEST": { _marker setMarkerColor "ColorWEST" };
					case "EAST": { _marker setMarkerColor "ColorEAST" };
					case "GUER": { _marker setMarkerColor "ColorGUER" };
					default { _marker setMarkerColor "ColorOrange" };
				};
			};
		};
	};
};
_marker