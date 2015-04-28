/*
	* TIMELINE DESCRIPTION
	Array arguments: [TIME, EVENT ID, ARGUMENTS]
*/

//{ _x enableSimulation false } forEach (allUnits + vehicles);
{ deleteMarker _x } forEach allMapMarkers;

#include "macros.h"

//// Variables
Replay_var_timeLine = call compile preprocessFileLineNumbers _this;

Replay_var_LineRemovalTime = 15;
Replay_var_HitRemovalTime = 15;
Replay_var_DeadRemovalTime = 120;

//// Functions
Replay_fnc_SetPlayerMarker = compile preprocessFileLineNumbers "\BLE_BRS_CLI\FUNCTIONS\fn_SetPlayerMarker.sqf";
Replay_fnc_SetVehicleMarker = compile preprocessFileLineNumbers "\BLE_BRS_CLI\FUNCTIONS\fn_SetVehicleMarker.sqf";
Replay_fnc_DrawKillLine = compile preprocessFileLineNumbers "\BLE_BRS_CLI\FUNCTIONS\fn_DrawKillLine.sqf";
Replay_fnc_ShowMessage = compile preprocessFileLineNumbers "\BLE_BRS_CLI\FUNCTIONS\fn_ShowMessage.sqf";
Replay_fnc_ConvertTime = compile preprocessFileLineNumbers "\BLE_BRS_CLI\FUNCTIONS\fn_ConvertTime.sqf";
Replay_fnc_KeyDown = compile preprocessFileLineNumbers "\BLE_BRS_CLI\FUNCTIONS\fn_KeyDown.sqf";
Replay_fnc_CreateMapMarkers = compile preprocessFileLineNumbers "\BLE_BRS_CLI\FUNCTIONS\fn_CreateMapMarkers.sqf";
Replay_fnc_PlayerKilled = compile preprocessFileLineNumbers "\BLE_BRS_CLI\FUNCTIONS\fn_PlayerKilled.sqf";
Replay_fnc_ShowCurrentTime = compile preprocessFileLineNumbers "\BLE_BRS_CLI\FUNCTIONS\fn_ShowCurrentTime.sqf";
Replay_fnc_VehicleCrew = compile preprocessFileLineNumbers "\BLE_BRS_CLI\FUNCTIONS\fn_VehicleCrew.sqf";
Replay_fnc_SetProgress = compile preprocessFileLineNumbers "\BLE_BRS_CLI\FUNCTIONS\fn_SetProgress.sqf";
Replay_fnc_ExitDialog = compile preprocessFileLineNumbers "\BLE_BRS_CLI\FUNCTIONS\fn_ExitDialog.sqf";

while {true} do {

	// *** DO NOT MODIFY VARIABLES BELOW ***
	Replay_var_totalTime = (Replay_var_timeLine select ((count Replay_var_timeLine) - 1)) select 0;
	Replay_var_Lines = []; // DRAW LINES [[TIME, POS1, POS2, COLOR, DRAW DISTANCE COEFF], ...]
	Replay_var_doWork = true;
	Replay_var_removeMarkers = []; // REMOVE MARKERS [[TIME, MARKER], ...]
	Replay_var_currentTime = 0; // CURRENT TIME
	Replay_var_currentIndex = 0; // CURRENT TIMELINE INDEX
	Replay_var_lastState = 4;
	Replay_var_lastUpdateTime = 0;
	Replay_var_mapMarkers = 0; // INCREMENTAL NUMBER FOR MAP MARKERS CREATE
	Replay_var_currentState = 0; // 0 - Stopped, 1 - Slowest, 2 - Slow, 3 - Playing, 4 - Pause, 5 - Fast Play, 6 - Fastest Play
	Replay_var_unitsList = []; // CREATED UNITS LIST TO COMPARE WITH ACTUAL FOR REMOVING NON EXISTENT OBJECTS MARKERS
	Replay_var_crewList = [];
	Replay_var_NoDiaCheck = false;
	
	createDialog "Replay_Dialog";
	sleep 0.1;

	[] call Replay_fnc_KeyDown;
	[] spawn Replay_fnc_DrawKillLine;

	while { dialog || Replay_var_NoDiaCheck } do {
		switch (Replay_var_currentState) do {
			case 0: {
				if !(Replay_var_lastState isEqualTo 0) then {
					Replay_var_currentTime = 0;
					Replay_var_currentIndex = 0;
					Replay_var_lastUpdateTime = 0;
					{ deleteMarker _x } forEach allMapMarkers;
					Replay_var_Lines = [];
					Replay_var_removeMarkers = [];
					Replay_var_lastState = Replay_var_currentState;
					Replay_var_unitsList = [];
					Replay_var_crewList = [];

					//** Clear ListBox
					disableSerialization;
					_display = uiNameSpace getVariable ["Replay_Dialog", displayNull];
					if (!isNull _display) then {
						lbClear (_display displayCtrl IDC_REPLAY_LB_MESSAGEBOX);
					};
					// Clear ListBox
				};
			};
			case 1: {
				if (Replay_var_lastState isEqualTo 4 || Replay_var_lastState isEqualTo 0) then {
					Replay_var_lastUpdateTime = diag_tickTime;
				};
				Replay_var_currentTime = Replay_var_currentTime + ((diag_tickTime - Replay_var_lastUpdateTime) * 0.5);
				Replay_var_lastUpdateTime = diag_tickTime;
				Replay_var_lastState = Replay_var_currentState;
			};
			case 2: {
				if (Replay_var_lastState isEqualTo 4 || Replay_var_lastState isEqualTo 0) then {
					Replay_var_lastUpdateTime = diag_tickTime;
				};
				Replay_var_currentTime = Replay_var_currentTime + ((diag_tickTime - Replay_var_lastUpdateTime) * 0.75);
				Replay_var_lastUpdateTime = diag_tickTime;
				Replay_var_lastState = Replay_var_currentState;
			};
			case 3: {
				if (Replay_var_lastState isEqualTo 4 || Replay_var_lastState isEqualTo 0) then {
					Replay_var_lastUpdateTime = diag_tickTime;
				};
				Replay_var_currentTime = Replay_var_currentTime + (diag_tickTime - Replay_var_lastUpdateTime);
				Replay_var_lastUpdateTime = diag_tickTime;
				Replay_var_lastState = Replay_var_currentState;
			};
			case 4: {
				if !(Replay_var_lastState isEqualTo Replay_var_currentState) then {
					Replay_var_lastState = Replay_var_currentState;
				};
			};
			case 5: {
				if (Replay_var_lastState isEqualTo 4 || Replay_var_lastState isEqualTo 0) then {
					Replay_var_lastUpdateTime = diag_tickTime;
				};
				Replay_var_currentTime =  Replay_var_currentTime + ((diag_tickTime - Replay_var_lastUpdateTime) * 10);
				Replay_var_lastUpdateTime = diag_tickTime;
				Replay_var_lastState = Replay_var_currentState;
			};
			case 6: {
				if (Replay_var_lastState isEqualTo 4 || Replay_var_lastState isEqualTo 0) then {
					Replay_var_lastUpdateTime = diag_tickTime;
				};
				Replay_var_currentTime =  Replay_var_currentTime + ((diag_tickTime - Replay_var_lastUpdateTime) * 60);
				Replay_var_lastUpdateTime = diag_tickTime;
				Replay_var_lastState = Replay_var_currentState;
			};
		};
		[] call Replay_fnc_ShowCurrentTime;
		if (Replay_var_currentIndex >= (count Replay_var_timeLine)) then {
			if (Replay_var_lastState != 4) then {
				Replay_var_currentState = 4
			};
		} else {
			_timeLine = Replay_var_timeLine select Replay_var_currentIndex;
			_time = _timeLine select 0;
			_eventID = _timeLine select 1;
			if (_time <= Replay_var_currentTime) then {
				Replay_var_currentTime = _time;
				Replay_var_currentIndex = Replay_var_currentIndex + 1;
				switch (_eventID) do { // EVENT
					case 0: { // UNITS and VEHICLES
						_allUnitsAndVehicles = [];
						_units = _timeLine select 2;
						{
							_allUnitsAndVehicles pushBack (_x call Replay_fnc_SetPlayerMarker);
						} forEach _units;

						_vehicles = _timeLine select 3;
						{
							_allUnitsAndVehicles pushBack (_x call Replay_fnc_SetVehicleMarker);
						} forEach _vehicles;
						
						{
							if !(_x in _allUnitsAndVehicles) then {
								if (markerColor _x != "ColorBlack") then {
									deleteMarker _x;
									Replay_var_unitsList deleteAt _forEachIndex;
								};
							};
						} forEach Replay_var_unitsList;
					};
					case 1: { // MAP MARKERS
						(_timeLine select 2) call Replay_fnc_CreateMapMarkers;
					};
					case 2: { // KILLED
						_timeLine call Replay_fnc_PlayerKilled;
					};
				};
			};
		};
		Replay_var_currentTime call Replay_fnc_SetProgress;
	};
	sleep 1;
};