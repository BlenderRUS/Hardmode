/* #Vydoni
$[
	1.063,
	["Replay",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,1,0],
	[1200,"dashboard",[1,"RESOURCES\dashboard_background.paa",["0 * safezoneW + safezoneX","0.89 * safezoneH + safezoneY","1 * safezoneW","0.109964 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1500,"lb_messagebox",[1,"",["0.596245 * safezoneW + safezoneX","0.89587 * safezoneH + safezoneY","0.398729 * safezoneW","0.0989674 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1000,"text_position",[1,"00:00:00",["0.348758 * safezoneW + safezoneX","0.906866 * safezoneH + safezoneY","0.096245 * safezoneW","0.0329891 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],["SizeEx = |(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) ~ 2)|;"]],
	[1001,"text_totalTime",[1,"00:00:00",["0.348758 * safezoneW + safezoneX","0.950852 * safezoneH + safezoneY","0.096245 * safezoneW","0.0329891 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],["SizeEx = |(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) ~ 2)|;"]],
	[2900,"map",[1,"",["0 * safezoneW + safezoneX","0 * safezoneH + safezoneY","1 * safezoneW","0.89 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],["maxSatelliteAlpha = 0;"]],
	[3000,"btn_stop",[1,"RESOURCES\stop_button.paa",["0.0119002 * safezoneW + safezoneX","0.906866 * safezoneH + safezoneY","0.0343732 * safezoneW","0.0439855 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],["action = |Replay_var_currentState = 0;|;"]],
	[3001,"btn_play_very_slow",[1,"RESOURCES\play_very_slow.paa",["0.0600227 * safezoneW + safezoneX","0.906866 * safezoneH + safezoneY","0.0343732 * safezoneW","0.0439855 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],["action = |Replay_var_currentState = 1;|;"]],
	[3002,"btn_play_slow",[1,"RESOURCES\play_slow.paa",["0.101271 * safezoneW + safezoneX","0.906866 * safezoneH + safezoneY","0.0343732 * safezoneW","0.0439855 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],["action = |Replay_var_currentState = 2;|;"]],
	[3003,"btn_pause",[1,"RESOURCES\pause_button.paa",["0.149393 * safezoneW + safezoneX","0.906866 * safezoneH + safezoneY","0.0343732 * safezoneW","0.0439855 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],["action = |Replay_var_currentState = 4;|;"]],
	[3004,"btn_play",[1,"RESOURCES\play.paa",["0.190641 * safezoneW + safezoneX","0.906866 * safezoneH + safezoneY","0.0343732 * safezoneW","0.0439855 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],["action = |Replay_var_currentState = 3;|;"]],
	[3005,"play_fast",[1,"RESOURCES\play_fast.paa",["0.238764 * safezoneW + safezoneX","0.906866 * safezoneH + safezoneY","0.0343732 * safezoneW","0.0439855 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],["action = |Replay_var_currentState = 5;|;"]],
	[3006,"play_very_fast",[1,"RESOURCES\play_very_fast.paa",["0.280011 * safezoneW + safezoneX","0.906866 * safezoneH + safezoneY","0.0343732 * safezoneW","0.0439855 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],["action = |Replay_var_currentState = 6;|;"]],
	[3100,"progress",[1,"",["0.0110991 * safezoneW + safezoneX","0.968989 * safezoneH + safezoneY","0.301291 * safezoneW","0.0184676 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1002,"header",[2,"Battlefield Replay confirmation",["12 * GUI_GRID_W + GUI_GRID_X","6 * GUI_GRID_H + GUI_GRID_Y","16 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[0.8039,0.4784,0,1],[-1,-1,-1,-1],"","-1"],[]],
	[2200,"",[2,"",["12 * GUI_GRID_W + GUI_GRID_X","7 * GUI_GRID_H + GUI_GRID_Y","16 * GUI_GRID_W","3 * GUI_GRID_H"],[-1,-1,-1,-1],[0,0,0,1],[-1,-1,-1,-1],"","-1"],[]],
	[1003,"t_exit",[2,"Do you really want to exit?",["12.5 * GUI_GRID_W + GUI_GRID_X","8 * GUI_GRID_H + GUI_GRID_Y","13.5 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1600,"btn_ok",[2,"OK",["12 * GUI_GRID_W + GUI_GRID_X","10 * GUI_GRID_H + GUI_GRID_Y","4.5 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],["action = ^endMission |loser|^;"]],
	[1601,"btn_cancel",[2,"Cancel",["23.5 * GUI_GRID_W + GUI_GRID_X","10 * GUI_GRID_H + GUI_GRID_Y","4.5 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],["action = ^closeDialog 0^;"]]
]
*/
/* #Tydehy
$[
	1.063,
	["quit",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,1,0],
	[2201,"back",[1,"",["0 * safezoneW + safezoneX","0 * safezoneH + safezoneY","1 * safezoneW","1 * safezoneH"],[-1,-1,-1,-1],[0.0863,0.0863,0.0863,1],[-1,-1,-1,-1],"","-1"],[]],
	[2200,"",[2,"",["12 * GUI_GRID_W + GUI_GRID_X","7 * GUI_GRID_H + GUI_GRID_Y","16 * GUI_GRID_W","3 * GUI_GRID_H"],[-1,-1,-1,-1],[0,0,0,1],[-1,-1,-1,-1],"","-1"],[]],
	[1000,"header",[2,"Battlefield Replay confirmation",["12 * GUI_GRID_W + GUI_GRID_X","6 * GUI_GRID_H + GUI_GRID_Y","16 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[0.8039,0.4784,0,1],[-1,-1,-1,-1],"","-1"],[]],
	[1001,"t_exit",[2,"Do you really want to exit?",["12.5 * GUI_GRID_W + GUI_GRID_X","8 * GUI_GRID_H + GUI_GRID_Y","13.5 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1600,"btn_ok",[2,"OK",["12 * GUI_GRID_W + GUI_GRID_X","10 * GUI_GRID_H + GUI_GRID_Y","4.5 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[0.8039,0.4784,0,1],[-1,-1,-1,-1],"","-1"],["action = |closeDialog 0; endMission ^loser^|;"]],
	[1601,"btn_cancel",[2,"Cancel",["23.5 * GUI_GRID_W + GUI_GRID_X","10 * GUI_GRID_H + GUI_GRID_Y","4.5 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[0.8039,0.4784,0,1],[-1,-1,-1,-1],"","-1"],["action = |closeDialog 0; Replay_var_NoDiaCheck = false|;"]]
]
*/
class IGUIBack;
class RscText;
class RscButton;
class RscPicture;
class RscListbox;
class RscMapControl;
class RscXSliderH;

/*
class RscXSliderH
{
	deletable = 0;
	fade = 0;
	type = 43;
	color[] = {1.0000,0.6196,0.2431,1.0000};
	colorActive[] = 
	{
		1,
		1,
		1,
		1
	};
	colorDisable[] = 
	{
		1,
		1,
		1,
		0.4
	};
	style = "0x400+ 0x10";
	shadow = 0;
	x = 0;
	y = 0;
	h = 0.029412;
	w = 0.4;
	colorDisabled[] = 
	{
		1,
		1,
		1,
		0.2
	};
	arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
	thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
	tooltipColorText[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] = 
	{
		0,
		0,
		0,
		0.65
	};
};
*/

#include "macros.h"

class Replay_Exit_Dialog
{
	idd = -1;
	duration = 1e+011;
	name = "Replay_Exit_Dialog";
	onLoad = "uiNamespace setVariable ['Replay_Exit_Dialog', _this select 0];";
	onUnLoad = "uiNamespace setVariable ['Replay_Exit_Dialog', nil];";
	movingEnable = false;
	controls[]=
	{
		back,
		IGUIBack_2200,
		header,
		t_exit,
		btn_ok,
		btn_cancel
	};
	class back: IGUIBack
	{
		idc = IDC_QUIT_BACK;
		x = 0 * safezoneW + safezoneX;
		y = 0 * safezoneH + safezoneY;
		w = 1 * safezoneW;
		h = 1 * safezoneH;
		colorBackground[] = {0.0863,0.0863,0.0863,1};
	};
	class IGUIBack_2200: IGUIBack
	{
		idc = IDC_QUIT_IGUIBACK_2200;
		x = 12 * GUI_GRID_W + GUI_GRID_X;
		y = 7 * GUI_GRID_H + GUI_GRID_Y;
		w = 16 * GUI_GRID_W;
		h = 3 * GUI_GRID_H;
		colorBackground[] = {0,0,0,1};
	};
	class header: RscText
	{
		idc = IDC_QUIT_HEADER;
		text = "Battlefield Replay confirmation"; //--- ToDo: Localize;
		x = 12 * GUI_GRID_W + GUI_GRID_X;
		y = 6 * GUI_GRID_H + GUI_GRID_Y;
		w = 16 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		colorBackground[] = {0.8039,0.4784,0,1};
	};
	class t_exit: RscText
	{
		idc = IDC_QUIT_T_EXIT;
		text = "Do you really want to exit?"; //--- ToDo: Localize;
		x = 12.5 * GUI_GRID_W + GUI_GRID_X;
		y = 8 * GUI_GRID_H + GUI_GRID_Y;
		w = 13.5 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
	};
	class btn_ok: RscButton
	{
		action = "closeDialog 0; endMission 'loser'";

		idc = IDC_QUIT_BTN_OK;
		text = "OK"; //--- ToDo: Localize;
		x = 12 * GUI_GRID_W + GUI_GRID_X;
		y = 10 * GUI_GRID_H + GUI_GRID_Y;
		w = 4.5 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		colorBackground[] = {0.8039,0.4784,0,1};
	};
	class btn_cancel: RscButton
	{
		action = "closeDialog 0; Replay_var_NoDiaCheck = false";

		idc = IDC_QUIT_BTN_CANCEL;
		text = "Cancel"; //--- ToDo: Localize;
		x = 23.5 * GUI_GRID_W + GUI_GRID_X;
		y = 10 * GUI_GRID_H + GUI_GRID_Y;
		w = 4.5 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		colorBackground[] = {0.8039,0.4784,0,1};
	};
};

class Replay_Dialog
{
	idd = -1;
	duration = 1e+011;
	name = "Replay_Dialog";
	onLoad = "uiNamespace setVariable ['Replay_Dialog', _this select 0];";
	onUnLoad = "uiNamespace setVariable ['Replay_Dialog', nil];";
	movingEnable = false;
	controls[]=
	{
		dashboard,
		lb_messagebox,
		text_position,
		text_totalTime,
		map,
		btn_stop,
		btn_play_very_slow,
		btn_play_slow,
		btn_pause,
		btn_play,
		play_fast,
		play_very_fast,
		progress
	};
	class RscBLEPictureButton {
		type = 11;
		style = 48;
		shadow = 0;
		font = "PuristaMedium";
		SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		colorText[] = {1,1,1,1};
		x = 0;
		y = 0;
		w = 0.2;
		h = 0.15;
		tooltipColorText[] = {1,1,1,1};
		tooltipColorBox[] = {1,1,1,1};
		tooltipColorShade[] = {0,0,0,0.65};
		color[] = {1, 1, 1, 1};
		colorActive[] = {1, 1, 1, 1};
		soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
		soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
		soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
		soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	};
	class dashboard: RscPicture
	{
		idc = IDC_REPLAY_DASHBOARD;
		text = "\BLE_BRS_CLI\RESOURCES\dashboard_background.paa";
		x = 0 * safezoneW + safezoneX;
		y = 0.89 * safezoneH + safezoneY;
		w = 1 * safezoneW;
		h = 0.109964 * safezoneH;
	};
	class lb_messagebox: RscListbox
	{
		idc = IDC_REPLAY_LB_MESSAGEBOX;
		x = 0.596245 * safezoneW + safezoneX;
		y = 0.89587 * safezoneH + safezoneY;
		w = 0.398729 * safezoneW;
		h = 0.0989674 * safezoneH;
	};
	class text_position: RscText
	{
		SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2)";

		idc = IDC_REPLAY_TEXT_POSITION;
		text = "00:00:00"; //--- ToDo: Localize;
		x = 0.348758 * safezoneW + safezoneX;
		y = 0.906866 * safezoneH + safezoneY;
		w = 0.096245 * safezoneW;
		h = 0.0329891 * safezoneH;
	};
	class text_totalTime: RscText
	{
		SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2)";

		idc = IDC_REPLAY_TEXT_TOTALTIME;
		text = "00:00:00"; //--- ToDo: Localize;
		x = 0.348758 * safezoneW + safezoneX;
		y = 0.950852 * safezoneH + safezoneY;
		w = 0.096245 * safezoneW;
		h = 0.0329891 * safezoneH;
	};
	class map: RscMapControl
	{
		maxSatelliteAlpha = 0;

		idc = IDC_REPLAY_MAP;
		x = 0 * safezoneW + safezoneX;
		y = 0 * safezoneH + safezoneY;
		w = 1 * safezoneW;
		h = 0.89 * safezoneH;
	};
	class btn_stop: RscBLEPictureButton
	{
		action = "Replay_var_currentState = 0;";

		idc = IDC_REPLAY_BTN_STOP;
		text = "\BLE_BRS_CLI\RESOURCES\stop_button.paa"; //--- ToDo: Localize;
		x = 0.0119002 * safezoneW + safezoneX;
		y = 0.906866 * safezoneH + safezoneY;
		w = 0.0343732 * safezoneW;
		h = 0.0439855 * safezoneH;
	};
	class btn_play_very_slow: RscBLEPictureButton
	{
		action = "Replay_var_currentState = 1;";

		idc = IDC_REPLAY_BTN_PLAY_VERY_SLOW;
		text = "\BLE_BRS_CLI\RESOURCES\play_very_slow.paa"; //--- ToDo: Localize;
		x = 0.0600227 * safezoneW + safezoneX;
		y = 0.906866 * safezoneH + safezoneY;
		w = 0.0343732 * safezoneW;
		h = 0.0439855 * safezoneH;
	};
	class btn_play_slow: RscBLEPictureButton
	{
		action = "Replay_var_currentState = 2;";

		idc = IDC_REPLAY_BTN_PLAY_SLOW;
		text = "\BLE_BRS_CLI\RESOURCES\play_slow.paa"; //--- ToDo: Localize;
		x = 0.101271 * safezoneW + safezoneX;
		y = 0.906866 * safezoneH + safezoneY;
		w = 0.0343732 * safezoneW;
		h = 0.0439855 * safezoneH;
	};
	class btn_pause: RscBLEPictureButton
	{
		action = "Replay_var_currentState = 4;";

		idc = IDC_REPLAY_BTN_PAUSE;
		text = "\BLE_BRS_CLI\RESOURCES\pause_button.paa"; //--- ToDo: Localize;
		x = 0.149393 * safezoneW + safezoneX;
		y = 0.906866 * safezoneH + safezoneY;
		w = 0.0343732 * safezoneW;
		h = 0.0439855 * safezoneH;
	};
	class btn_play: RscBLEPictureButton
	{
		action = "Replay_var_currentState = 3;";

		idc = IDC_REPLAY_BTN_PLAY;
		text = "\BLE_BRS_CLI\RESOURCES\play.paa"; //--- ToDo: Localize;
		x = 0.190641 * safezoneW + safezoneX;
		y = 0.906866 * safezoneH + safezoneY;
		w = 0.0343732 * safezoneW;
		h = 0.0439855 * safezoneH;
	};
	class play_fast: RscBLEPictureButton
	{
		action = "Replay_var_currentState = 5;";

		idc = IDC_REPLAY_PLAY_FAST;
		text = "\BLE_BRS_CLI\RESOURCES\play_fast.paa"; //--- ToDo: Localize;
		x = 0.238764 * safezoneW + safezoneX;
		y = 0.906866 * safezoneH + safezoneY;
		w = 0.0343732 * safezoneW;
		h = 0.0439855 * safezoneH;
	};
	class play_very_fast: RscBLEPictureButton
	{
		action = "Replay_var_currentState = 6;";

		idc = IDC_REPLAY_PLAY_VERY_FAST;
		text = "\BLE_BRS_CLI\RESOURCES\play_very_fast.paa"; //--- ToDo: Localize;
		x = 0.280011 * safezoneW + safezoneX;
		y = 0.906866 * safezoneH + safezoneY;
		w = 0.0343732 * safezoneW;
		h = 0.0439855 * safezoneH;
	};
	class progress: RscXSliderH
	{
		idc = IDC_REPLAY_PROGRESS;
		x = 0.0110991 * safezoneW + safezoneX;
		y = 0.968989 * safezoneH + safezoneY;
		w = 0.301291 * safezoneW;
		h = 0.0184676 * safezoneH;
	};
};