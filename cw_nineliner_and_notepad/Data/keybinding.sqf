#include "\a3\editor_f\Data\Scripts\dikCodes.h"

["Notepad & 9-Liner", "OPEN NOTEPAD",	{call cw_noteblock_fnc_open;}, [DIK_N, [true, true, false]]] call CBA_fnc_registerKeybind;
["Notepad & 9-Liner", "OPEN 9-Liner CAS",	{call cw_9liner_cas_fnc_open;}, [DIK_C, [true, true, false]]] call CBA_fnc_registerKeybind;
["Notepad & 9-Liner", "OPEN 9-Liner MEDIVAC",	{call cw_9liner_medv_fnc_open;}, [DIK_M, [true, true, false]]] call CBA_fnc_registerKeybind;
["Notepad & 9-Liner", "OPEN 5-Liner GUNSHIP CALL FOR FIRE",	{call cw_5liner_gcff_fnc_open;}, [DIK_G, [true, true, false]]] call CBA_fnc_registerKeybind;
["Notepad & 9-Liner", "OPEN CAS CHECK-IN BREEFING",	{call cw_cas_check_in_fnc_open;}, [DIK_B, [true, true, false]]] call CBA_fnc_registerKeybind;
["Notepad & 9-Liner", "OPEN 82MM 2b14 Range Tables",	{call cw_82mm_fnc_open;}, [DIK_X, [true, true, false]]] call CBA_fnc_registerKeybind;
["Notepad & 9-Liner", "OPEN 82MM M252 Range Tables",	{call cw_82mm_252_fnc_open;}, [DIK_X, [true, true, false]]] call CBA_fnc_registerKeybind;
["Notepad & 9-Liner", "OPEN AGS Range Tables",	{call cw_ags_fnc_open;}, [DIK_Z, [true, true, false]]] call CBA_fnc_registerKeybind;