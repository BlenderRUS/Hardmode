class Man;
class CAManBase : Man {
	class AGM_Actions {
			class AGM_WakeUp {
				displayName = "Дать по щщам";
				condition = "_target getVariable ['AGM_isUnconscious', False]";
				icon = "\hmg_core\pic\agm_slap.paa";
				statement = "[_player, _target] call HMG_Core_fnc_Schi;";
				showDisabled = 1;
				enableInside = 1;
				priority = 1;
				};
	};

	class AGM_SelfActions {
			class AGM_Equipment {
				class AGM_Para {
					displayName = "Подготовить парашют";
					condition = "(_player getVariable ['HMG_Para_is_on',HMG_Para_is_on]) == 1 and (backpack _player) isKindOf 'B_Parachute'";
					statement = "[] call compile preprocessFileLineNumbers 'hmg_core\para\para.sqf';";
					icon = "\hmg_core\pic\agm_para_m.paa";
					showDisabled = 0;
					enableInside = 1;
					priority = 1;
					};
			};
			class AGM_Veh_Paradrop {
				displayName = "Вызвать сброс техники";
				condition = "(_player getVariable 'HMG_Paradrop') == 1";
				statement = "[_player] call HMG_Core_fnc_HMGVehDrop;";
				icon = "\hmg_core\pic\agm_para_v.paa";
				showDisabled = 0;
				enableInside = 1;
				priority = 1;
			};
	};
};
class ThingX;
class reammobox_F : ThingX {
	class AGM_Actions {
			class AGM_LockBoxes {
				displayName = "Запереть ящик";
				condition = "player getVariable ['HMG_can_lock_box', false]";
				statement = "_target setVariable ['AGM_LockedInventory', true, true]";
				showDisabled = 0;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
			class AGM_UnlockBoxes {
				displayName = "Отпереть ящик";
				condition = "player getVariable ['HMG_can_lock_box', false]";
				statement = "_target setVariable ['AGM_LockedInventory', false, true]";
				showDisabled = 0;
				priority = 2.5;
				icon = "";  // @todo
				enableInside = 1;
				};
		};
};

	