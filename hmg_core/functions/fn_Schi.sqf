/*
 * Author: Pride
 *
 * Wake up unit by tapping him to face :D
 *
 * Argument:
 * 0: Yourselft
 * 1: Target
 * Return value:
 * none
 */
_this spawn {
  _unit = _this select 0;
  _target = _this select 1;
//  hint format ["%1 --- %",_target, _target getVariable 'AGM_Unconscious'];
  if (player distance _target > 4 or vehicle player != player or damage player >= 1 or (player getVariable "AGM_Unconscious")) exitWith {};
  if (floor(random 20) == 3) then  {
  [_target] call AGM_Medical_fnc_wakeUp;
  addCamShake [4, 0.5, 5];
    if (profileNamespace getVariable ["AGM_keepMedicalMenuOpen", false]) then {
      [0, cursorTarget, "AGM_Medical"] call AGM_Interaction_fnc_showMenu;
    };
  };
};
