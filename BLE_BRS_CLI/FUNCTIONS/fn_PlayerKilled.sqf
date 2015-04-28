private ["_victimID", "_victimName", "_killerName", "_victimPos", "_killerPos", "_weapClass"];
_victimID = _this select 2;
_victimName = _this select 3;
_killerName = _this select 4;
_victimPos = _this select 5;
_killerPos = _this select 6;
_weapClass = _this select 7;

_currentTime = Replay_var_currentTime call Replay_fnc_ConvertTime; // Get time in hh:mm:ss format
if ((_victimName isEqualTo _killerName) || (_killerName isEqualTo "Error: No unit") || (_killerName isEqualTo "Error: No vehicle")) then {
	[format["[%1] %2 died!", _currentTime, _victimName], format["mark_player_%1", _victimID]] call Replay_fnc_ShowMessage;
} else {
	_weaponName = getText (configFile >> "CfgWeapons" >> _weapClass >> "DisplayName");
	[format["[%1] %2 -> %3 (%4)", _currentTime, _killerName, _victimName, _weaponName], format["mark_player_%1", _victimID]] call Replay_fnc_ShowMessage;
	Replay_var_Lines pushBack [Replay_var_currentTime + Replay_var_LineRemovalTime, _victimPos, _killerPos, [1,0,0,1], 0, _victimID];
};