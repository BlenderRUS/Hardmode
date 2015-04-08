cw_82mm_fnc_open = 
{
	If !("cw_item_table82mm" in items player)exitWith {};
	closeDialog 0;
	createDialog "CW_TABLE82";
	_lastpage = call cw_noteblock_fnc_GetLastPage;
	_pagetext = [_lastpage] call cw_noteblock_fnc_GetPageText;
	cw_noteblock_currentPage = _lastpage;
	ctrlSetText [1400, _pagetext];
	ctrlSetText [1000, cw_noteblock_currentPage];
	profileNamespace setVariable ["cw_noteblock_lastPage", cw_noteblock_currentPage];
	hint format ["PAGE %1/50", cw_noteblock_currentPage];
};