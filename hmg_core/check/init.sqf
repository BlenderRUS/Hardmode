//// SERVER
srv_var_addons = [];
_configs = "isArray (_x >> 'versionAr')" configClasses (configFile >> "CfgPatches");
{
        srv_var_addons pushBack [configName _x, getArray (_x >> "versionAr")];
} forEach _configs;
 
//// FOR TESTS
///srv_var_addons pushBack ["TEST_ADDON", [1,1,1]];
//// FOR TEST
 
publicVariable "srv_var_addons";

