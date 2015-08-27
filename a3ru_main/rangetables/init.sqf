["HMG Controls", "a3ru_rangetables_open", localize "STR_A3RU_RANGETABLES_OPEN", {[] call a3ru_rangetables_fnc_keyDown}, {}, [45, [true, true, false]]] call CBA_fnc_addKeybind;

a3ru_rangetables_fnc_keyDown = {
	_itemFound = false;
	_itemPic = "";
	_items = items ACE_Player;
	if (("a3ru_rangetable_2b14" in _items) || ("cw_item_table82mm" in _items)) then {
		_itemFound = true;
		_itemPic = "\x\a3ru\addons\a3ru_main\rangetables\Data\table_2b14.paa";
	};
	if (("a3ru_rangetable_m252" in _items) || ("cw_item_table82mm_252" in _items)) then {
		_itemFound = true;
		_itemPic = "\x\a3ru\addons\a3ru_main\rangetables\Data\table_m252.paa";
	};
	if (("a3ru_rangetable_ags" in _items) || ("cw_item_tableags" in _items)) then {
		_itemFound = true;
		_itemPic = "\x\a3ru\addons\a3ru_main\rangetables\Data\table_ags.paa";
	};
	if ("a3ru_rangetable_d30he" in _items) then {
		_itemFound = true;
		_itemPic = "\x\a3ru\addons\a3ru_main\rangetables\Data\table_d30he.paa";
	};
	if ("a3ru_rangetable_m119" in _items) then {
		_itemFound = true;
		_itemPic = "\x\a3ru\addons\a3ru_main\rangetables\Data\table_m119.paa";
	};
	if (_itemFound) then {
		createDialog "a3ru_rangetables";
		_display = uiNameSpace getVariable ["a3ru_rangetable", displayNull];
		if (!isNull _display) then {
			(_display displayCtrl 1200) ctrlSetText _itemPic;
		};
	};
};