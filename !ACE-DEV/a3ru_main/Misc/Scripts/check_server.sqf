//// SERVER
a3ru_var_srv_addonsList = [];
_configs = "isArray (_x >> 'versionAr')" configClasses (configFile >> "CfgPatches");
{
        a3ru_var_srv_addonsList pushBack [configName _x, getArray (_x >> "versionAr")];
} forEach _configs;
 
publicVariable "a3ru_var_srv_addonsList";