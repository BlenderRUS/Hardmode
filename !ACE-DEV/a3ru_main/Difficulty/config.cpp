#define X_EMPTY "\x\a3ru\addons\a3ru_main\Difficulty\empty.paa"

class CfgPatches
{
	class a3ru_difficulty
	{
		author = "Blender";
		url = "http://arma3.ru";
		version[] = { "1.1" };
		description = "Removed spotted units markers, radio protocol, increased difficulty settings";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "A3_UI_F", "A3_UI_F_HELI", "A3_Dubbing_Radio_F", "rhs_c_radio" };
	};
};

class RscChatListDefault;
class RscChatListMission: RscChatListDefault
{
	x = 0.000000;
	y = 7777;
	w = 1.000000;
	rows = 2;
};
class RscChatListMap: RscChatListDefault
{
	x = 0.000000;
	y = 7777;
	w = 1.000000;
	rows = 2;
};
class RscPendingInvitation {
	textureConnectionQualityPoor = X_EMPTY;
	textureConnectionQualityBad = X_EMPTY;
	textureDesyncLow = X_EMPTY;
	textureDesyncHigh = X_EMPTY;
};
class RscPendingInvitationInGame
{
	textureConnectionQualityPoor = X_EMPTY;
	textureConnectionQualityBad = X_EMPTY;
	textureDesyncLow = X_EMPTY;
	textureDesyncHigh = X_EMPTY;
};

#include "cfgGroupIcons.hpp"
#include "cfgInGameUI.hpp"
#include "cfgVoice.hpp"
#include "cfgDifficulties.hpp"