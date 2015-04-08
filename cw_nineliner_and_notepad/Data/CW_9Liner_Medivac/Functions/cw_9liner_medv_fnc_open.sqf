cw_9liner_medv_fnc_open =
{
	If !("cw_item_9liner_medivac" in items player)exitWith {};
	closeDialog 0;
	createDialog "CW_9LINER_MEDEVAC";
	_lastpage = call cw_9liner_medv_fnc_GetLastPage;
	_pagetext = [_lastpage] call cw_9liner_medv_fnc_GetPageText;
	cw_9liner_medv_currentPage = _lastpage;
	[_pagetext] call cw_9liner_medv_fnc_fill;
	profileNamespace setVariable ["cw_9liner_medv_lastPage", cw_9liner_medv_currentPage];
	hint format ["PAGE %1/20", cw_9liner_medv_currentPage];
};