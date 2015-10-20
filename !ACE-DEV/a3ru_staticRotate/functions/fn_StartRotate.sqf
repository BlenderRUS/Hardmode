#include "..\macros.h"

private ["_target", "_player"];
_target = _this select 0;
_player = _this select 1;

if ([_target, _player] call FNC(CanRotate)) then {
	private ["_posY", "_release"];
	
	SVAR(RotateObject,_target);
	OSVAR(_target,RotateOwner,_player,true);
	SVAR(DoRelease,false);

	_posY = ((boundingBoxReal _target) select 1) select 2;
	
	hint parseText localize "STR_A3RU_StaticRotate_Help";

	// Helper
	VAR(Helper) = "Sign_Arrow_Direction_Green_F" createVehicleLocal (position _target);
	VAR(Helper) attachTo [_target, [0,0,0 - (_posY / 2)]];

	VAR(ZChangeEH) = (findDisplay 46) displayAddEventHandler ["MouseZChanged", { (_this select 1) spawn FNC(Rotate) }];
	VAR(KeyDownEH) = (findDisplay 46) displayAddEventHandler ["KeyDown", {
		if ((_this select 1) == 0x1D) then { SVAR(CTRLPressed,true); true } else { false }
	}];
	VAR(KeyUpEH) = (findDisplay 46) displayAddEventHandler ["KeyUp", {
		if ((_this select 1) == 0x1D) then { SVAR(CTRLPressed,false); true } else { false }
	}];
	VAR(ReleaseEH) = _player addAction [
		format[('<img image="\x\a3ru\addons\a3ru_StaticRotate\data\a3ru_release_icon.paa"/> <t color="#ff0000">' + localize "STR_A3RU_StaticRotate_Release" + "</t>"),
			getText (configFile >> "CfgVehicles" >> (typeOf _target) >> "displayName")
		],
		{ SVAR(DoRelease,true) },
		"",
		0,
		false,
		true,
		"",
		QUOTE(!isNull _target && (player == vehicle player) && (alive player) && (player distance _target < 5))
	];

	while {true} do {
		if (
			isNull _target ||
			!alive _player ||
			(_player != vehicle _player) ||
			(count (crew _target) > 0) ||
			(_player distance _target) > 10
		) exitWith {
			false call FNC(Release);
		}; // FAIL
		if (GVAR(DoRelease,false)) exitWith {
			true call FNC(Release);
		};
		sleep 0.012;
	};
};