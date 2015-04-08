class CW_NOTEBLOCK 
{
	idd = -1;
	movingenable = true;
	onUnload = "hint """"";
	
	class Controls
	{
		class cw_noteblock_background: cw_noteblock_picture
		{
			idc = 1200;
			text = "\cw_nineliner_and_notepad\Data\CW_Noteblock\Images\noteblock.paa";
			x = -0.0557292 * safezoneW + safezoneX;
			y = 0.26909 * safezoneH + safezoneY;
			w = 0.48125 * safezoneW;
			h = 0.747708 * safezoneH;
			moving = 1;
		};
		class cw_noteblock_edit: cw_noteblock_edit
		{
			idc = 1400;
			x = 0.0416667 * safezoneW + safezoneX;
			y = 0.307 * safezoneH + safezoneY;
			w = 0.303646 * safezoneW;
			h = 0.637751 * safezoneH;
			moving = 1;
		};
		class cw_noteblock_bttn_nextPage: cw_noteblock_button
		{
			idc = 1600;
			x = 0.310937 * safezoneW + safezoneX;
			y = 0.291081 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "call cw_noteblock_fnc_nextPage;";
		};
		class cw_noteblock_bttn_previousPage: cw_noteblock_button
		{
			idc = 1601;
			x = 0.0416667 * safezoneW + safezoneX;
			y = 0.291081 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "call cw_noteblock_fnc_previousPage;";
		};
		class cw_noteblock_bttn_save: cw_noteblock_button
		{
			idc = 1602;
			x = 0.3479 * safezoneW + safezoneX;
			y = 0.373 * safezoneH + safezoneY;
			w = 0.019 * safezoneW;
			h = 0.047 * safezoneH;
			action = "call cw_noteblock_fnc_savePage;";
		};
		class cw_noteblock_bttn_clearpage: cw_noteblock_button
		{
			idc = 1603;
			x = 0.3479 * safezoneW + safezoneX;
			y = 0.65 * safezoneH + safezoneY;
			w = 0.0155 * safezoneW;
			h = 0.054 * safezoneH;
			action = "call cw_noteblock_fnc_clearPage;";
		};
		class cw_noteblock_bttn_clearall: cw_noteblock_button
		{
			idc = 1604;
			x = 0.3479 * safezoneW + safezoneX;
			y = 0.788 * safezoneH + safezoneY;
			w = 0.015 * safezoneW;
			h = 0.043 * safezoneH;
			action = "call cw_noteblock_fnc_clearBlock;";
		};
		class cw_noteblock_bttn_close: cw_noteblock_button
		{
			idc = 1605;
			x = 0.3479 * safezoneW + safezoneX;
			y = 0.931 * safezoneH + safezoneY;
			w = 0.016 * safezoneW;
			h = 0.045 * safezoneH;
			action = "closeDialog 0;";
		};
	};
};
