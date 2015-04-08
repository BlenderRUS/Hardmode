/*
	Name: MapRuler_fnc_handler

	Author(s):
		Ezhuk
*/
#include "defines.sqf"

private ["_event", "_arg", "_handler"];

_event = _this select 0;
_arg = _this select 1;

_handler = false;

switch (_event) do {
	case 'init' : {
		MapRuler_key = false;
		MapRuler_pos = [];
		MapRuler_markers = [];

		[] spawn {
			sleep 1;
			MapRuler_handler_mouseButtonClick = ((findDisplay 12) displayCtrl 51) ctrlAddEventHandler ["mouseButtonClick", "['mouseClick', _this] call MapRuler_fnc_handler"];
			MapRuler_handler_keyDown          = ((findDisplay 12) displayCtrl 51) ctrlAddEventHandler ["keyDown",          "['keyDown',    _this] call MapRuler_fnc_handler"];
			MapRuler_handler_keyUp            = ((findDisplay 12) displayCtrl 51) ctrlAddEventHandler ["keyUp",            "['keyUp',      _this] call MapRuler_fnc_handler"];
		};
	};
	case 'keyUp' : {
		private ["_key", "_shift", "_ctrl", "_alt"];

		_key   = _arg select 1;
		_shift = _arg select 2;
		_ctrl  = _arg select 3;
		_alt   = _arg select 4;


		switch (_key) do {
			case KEY_R : {
				MapRuler_key = false;
			};
			case KEY_ENTER : {
				MapRuler_pos = [];
				['clean'] call MapRuler_fnc_handler;
			};
		};
	};
	case 'keyDown' : {
		private ["_key", "_shift", "_ctrl", "_alt"];

		_key   = _arg select 1;
		_shift = _arg select 2;
		_ctrl  = _arg select 3;
		_alt   = _arg select 4;

		switch (_key) do {
			case KEY_R : {
				MapRuler_key = true;
			};
		};
	};
	case 'mouseClick' :
	{
		//[Control #51,0,0.348214,0.677249,false,false,false]
		private ["_key", "_pos"];
		_key   = _arg select 1;
		_pos   = ((findDisplay 12) displayCtrl 51) ctrlMapScreenToWorld [_arg select 2, _arg select 3];
		_shift = _arg select 4;
		_ctrl  = _arg select 5;
		_alt   = _arg select 6;

		if (MapRuler_key) then {
			switch (count MapRuler_pos) do {
				case 0 : {
					MapRuler_pos = [_pos];

					["MapRuler_BaseLine", _pos, "", "ColorRed", "hd_dot_noShadow", [1,1]] call WMT_fnc_CreateLocalMarker;
					MapRuler_markers pushBack "MapRuler_Info";
				};	
				case 1 : {
					MapRuler_pos = MapRuler_pos + [_pos];
					if (_ctrl) then {
						['draw', [20000, 25]] call MapRuler_fnc_handler;
					} else {
						['draw', [10000, 25]] call MapRuler_fnc_handler;
					};
				};
				default {
					MapRuler_pos = [];
					['clean'] call MapRuler_fnc_handler;
				};
			};
		};
	};
	case 'draw' : {
		private ["_length", "_divisor", "_slices", "_degToMil", "_degToMilSoviet", "_x1", "_y1", "_x2", "_y2", "_angl", "_dist", "_pX", "_pY", "_w", "_h", "_baseline", "_text", "_color", "_mpX", "_mpY", "_marker","_markerText"];

		_length  = (_arg select 0)/2;
		_divisor = _arg select 1;
		_slices  = floor ((_length*2)/_divisor);

		_degToMil 		= 17.777777777778;
		_degToMilSoviet = 16.6666667;

		_x1 = (MapRuler_pos select 0) select 0;
		_y1 = (MapRuler_pos select 0) select 1;
		_x2 = (MapRuler_pos select 1) select 0;
		_y2 = (MapRuler_pos select 1) select 1;
		
		_angl = (180 + (((_x1 - _x2) atan2 (_y1 - _y2))) mod 360); 

		_baseline = [_x1 + sin(_angl)*(_length), _y1 + cos(_angl)*(_length)];

		["MapRuler_BaseLine", _baseline, "", "ColorBlack", "mil_dot", [1.5, _length], "RECTANGLE", _angl, "SolidFull"] call WMT_fnc_CreateLocalMarker;
		"MapRuler_BaseLine" setMarkerAlphaLocal 0.7;
		MapRuler_markers pushBack "MapRuler_BaseLine";

		_dist = 0;
		_mAngl = (_angl + 90) mod 180;

		for "_i" from 0 to _slices do {
			_pX = _x1 + sin(_angl)*_dist;
			_pY = _y1 + cos(_angl)*_dist;
			_w = 1;
			_h = 25;
			_text = "";
			_color = "ColorBlack";

			_mpX = (_pX) + sin(_mAngl)*30;
			_mpY = (_pY) + cos(_mAngl)*30;

			switch (true) do {
				case (_dist == 0) : {
					_w = 1.5;
					_h = 40;
					_mpX = (_pX) + sin(_mAngl)*55;
					_mpY = (_pY) + cos(_mAngl)*55;
					_text = format["Deg: %2 | Mil64: %3 | Mil60: %4", _dist, (round _angl), ((round ((_angl*_degToMil)/10))*10), ((round ((_angl*_degToMilSoviet)/10))*10)];
				};
				case (_dist%200 == 0) : {
					_w = 1.5;
					_h = 20;
					_text = format ["%1", _dist];
				};
				case (_dist%100 == 0) : {
					_w = 1.5;
					_h = 20;
				};
				case (_dist%50 == 0) : {
					_w = 1;
					_h = 10;
				};
				case (_dist%25 == 0) : {
					_w = 0.75;
					_h = 5;
				};
			};

			_marker = format ["MapRuler_%1", _dist];
			_markerText = format ["MapRuler_%1_text", _dist];

			[_marker, [_pX, _pY], "", "ColorBlack", "mil_dot", [_w, _h], "RECTANGLE", _mAngl, "SolidFull"] call WMT_fnc_CreateLocalMarker;
			_marker setMarkerAlphaLocal 0.7;
			MapRuler_markers pushBack _marker;

			if (_text != "") then {
				[_markerText, [_mpX, _mpY], _text, "ColorBlack", "hd_dot_noShadow", [0, 0], "ICON"] call WMT_fnc_CreateLocalMarker;
				_markerText setMarkerAlphaLocal 0.7;
				MapRuler_markers pushBack _markerText;
			};

			_dist = _dist + _divisor;
		};

	};
	case 'clean' : {
		for "_i" from 0 to ((count MapRuler_markers)-1) do {
			deleteMarkerLocal (MapRuler_markers select _i);
		};
		MapRuler_markers = [];
	};
};

_handler