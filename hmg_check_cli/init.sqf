//// CLIENT
waitUntil { sleep 3.826; !isNil "srv_var_addons" };
_checkFailed = [];
{
        _srv_cfg = _x select 0;
        _srv_ver = _x select 1;
        _cli_ver = getArray (configFile >> "CfgPatches" >> _srv_cfg >> "versionAr");
 
        if !(_srv_ver isEqualTo _cli_ver) then {
                _checkFailed pushBack [_srv_cfg, _srv_ver, _cli_ver]
//	hint format ["%1 ---- %2 ---- %3",_srv_cfg, _srv_ver,_cli_ver]; sleep 2;

        };
} forEach srv_var_addons;
 
if (count _checkFailed > 0) then {
        _addonsList = [];
        {
                _addonsList pushBack format["- %1 SRV: %2 \ CLI: %3", _x select 0, _x select 1, _x select 2];
        } forEach _checkFailed;
        "Addons check failed!" hintC _addonsList; sleep 10; failMission "loser";
};