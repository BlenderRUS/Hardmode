#include <macros.h>
#include <defines.h>

private "_cfgEntry";
_cfgEntry = getText (configFile >> "CfgMagazines" >> _this >> "displayName");
if (_cfgEntry == "") then {
	_this
} else {
	_cfgEntry
}