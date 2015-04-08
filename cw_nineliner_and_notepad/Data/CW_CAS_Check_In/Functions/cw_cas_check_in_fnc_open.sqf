cw_cas_check_in_fnc_open =
{
	If !("cw_item_cas_check_in_breef" in items player)exitWith{};
	closeDialog 0;
	createDialog "CW_CAS_CHECK_IN";
	_lastpage = call cw_cas_check_in_fnc_GetLastPage;
	_pagetext = [_lastpage] call cw_cas_check_in_fnc_GetPageText;
	cw_cas_check_in_currentPage = _lastpage;
	[_pagetext] call cw_cas_check_in_fnc_fill;
	profileNamespace setVariable ["cw_cas_check_in_lastPage", cw_cas_check_in_currentPage];
	hint format ["PAGE %1/20", cw_cas_check_in_currentPage];
};