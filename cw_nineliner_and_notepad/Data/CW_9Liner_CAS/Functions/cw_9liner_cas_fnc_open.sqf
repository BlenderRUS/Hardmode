cw_9liner_cas_fnc_open =
{
	If !("cw_item_9liner_cas" in items player)exitWith {};
	closeDialog 0;
	createDialog "CW_9LINER_CAS";
	_lastpage = call cw_9liner_cas_fnc_GetLastPage;
	hint format ["%1", _lastpage];
	_pagetext = [_lastpage] call cw_9liner_cas_fnc_GetPageText;
	cw_9liner_cas_currentPage = _lastpage;
	[_pagetext] call cw_9liner_cas_fnc_fill;
	profileNamespace setVariable ["cw_9liner_cas_lastPage", cw_9liner_cas_currentPage];
	hint format ["PAGE %1/20", cw_9liner_cas_currentPage];
};