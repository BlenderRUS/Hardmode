/*
 	Name: HIA3_spectator_fnc_initNewCam
 	
 	Author(s):
		Ezhuk

 	Description:
		Set camera parameters
	
	Parameters:
		State of camera (SPECT_VIEWSTATE_INTERNAL,SPECT_VIEWSTATE_FREE)
 	
 	Returns:
		Nothing
*/
#include "defines.sqf"

PR(_newState) = _this;
PR(_lastState) = HIA3_Spectator_State;
PR(_dialog) = uiNamespace getVariable ['HIA3_DisaplaySpectator', 0];


HIA3_Spectator_State = _newState;

switch(_newState) do {
	case SPECT_VIEWSTATE_INTERNAL : 
	{
		player cameraEffect ["terminate","back"];
		if(_lastState != SPECT_VIEWSTATE_INTERNAL) then {
			camDestroy HIA3_Spectator_Camera;
			[0] call HIA3_spectator_fnc_changeTargetUnit;
		};
		HIA3_Spectator_ViewUnit switchCamera "INTERNAL";

	};
	case SPECT_VIEWSTATE_FREE : 
	{
		PR(_pos) = getPosASL HIA3_Spectator_ViewUnit;
		PR(_dir) = getDir HIA3_Spectator_ViewUnit;
		PR(_camPos) = [
			(_pos select 0) + sin(_dir+180)*7,
			(_pos select 1) + cos(_dir+180)*7,
			(_pos select 2) + 3
		];

		_camPos = ASLtoATL _camPos;

		HIA3_Spectator_Camera =  "camera" camCreate _camPos;
		HIA3_Spectator_Camera_AngV = -10;
		HIA3_Spectator_Camera setDir _dir;
		HIA3_Spectator_Camera setPos _camPos;
		HIA3_Spectator_Fov = 0.7;
		[
			HIA3_Spectator_Camera,
			HIA3_Spectator_Camera_AngV, 
			0
		] call bis_fnc_setpitchbank;

		HIA3_Spectator_Camera cameraEffect ["internal","top"];
		HIA3_Spectator_Camera camCommitPrepared 0;	

		showcinemaborder false;
		cameraEffectEnableHUD true;

		[0] call HIA3_spectator_fnc_changeTargetUnit;
	};
};
