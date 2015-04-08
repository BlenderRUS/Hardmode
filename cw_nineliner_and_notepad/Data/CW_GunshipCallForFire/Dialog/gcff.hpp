class CW_GUNSHIP_CALL_FOR_FIRE
{
	idd = -1;
	movingenable = true;
	onUnload = "hint """"";
	
	class Controls
	{
		class cw_gcff_background: cw_5liner_gcff_picture
		{
			idc = 1200;
			text = "\cw_nineliner_and_notepad\Data\CW_GunshipCallForFire\Images\gunshipcallforfire.paa";
			x = -0.0843753 * safezoneW + safezoneX;
			y = 0.225107 * safezoneH + safezoneY;
			w = 0.492708 * safezoneW;
			h = 0.802687 * safezoneH;
			moving = 1;
		};
		class cw_gcff_line1_1: cw_5liner_gcff_edit
		{
			idc = 1400;
			x = 0.139062 * safezoneW + safezoneX;
			y = 0.384047 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_gcff_line1_2: cw_5liner_gcff_edit
		{
			idc = 1401;
			x = 0.225 * safezoneW + safezoneX;
			y = 0.384047 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_gcff_line2_1: cw_5liner_gcff_edit
		{
			idc = 1402;
			x = 0.190625 * safezoneW + safezoneX;
			y = 0.439026 * safezoneH + safezoneY;
			w = 0.0802083 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_gcff_line2_2: cw_5liner_gcff_edit
		{
			idc = 1403;
			x = 0.0703121 * safezoneW + safezoneX;
			y = 0.472013 * safezoneH + safezoneY;
			w = 0.177604 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_gcff_line3_1: cw_5liner_gcff_edit
		{
			idc = 1404;
			x = 0.104688 * safezoneW + safezoneX;
			y = 0.505 * safezoneH + safezoneY;
			w = 0.131771 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_gcff_line4_1: cw_5liner_gcff_edit
		{
			idc = 1405;
			x = 0.184896 * safezoneW + safezoneX;
			y = 0.538987 * safezoneH + safezoneY;
			w = 0.0401042 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_gcff_line5_1: cw_5liner_gcff_edit
		{
			idc = 1406;
			x = 0.0760417 * safezoneW + safezoneX;
			y = 0.570974 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_gcff_bttn_previousPage: cw_5liner_gcff_button
		{
			idc = 1600;
			x = 0.0130208 * safezoneW + safezoneX;
			y = 0.950824 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0329871 * safezoneH;
			action = "call cw_5liner_gcff_fnc_previousPage;";
		};
		class cw_gcff_bttn_nextPage: cw_5liner_gcff_button
		{
			idc = 1601;
			x = 0.276563 * safezoneW + safezoneX;
			y = 0.950824 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0329871 * safezoneH;
			action = "call cw_5liner_gcff_fnc_nextPage;";
		};
		class cw_gcff_bttn_clearPage: cw_5liner_gcff_button
		{
			idc = 1602;
			x = 0.053125 * safezoneW + safezoneX;
			y = 0.950824 * safezoneH + safezoneY;
			w = 0.0744792 * safezoneW;
			h = 0.0329871 * safezoneH;
			action = "call cw_5liner_gcff_fnc_clearPage;";
		};
		class cw_gcff_bttn_save: cw_5liner_gcff_button
		{
			idc = 1603;
			x = 0.144792 * safezoneW + safezoneX;
			y = 0.950824 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0329871 * safezoneH;
			action = "call cw_5liner_gcff_fnc_savePage;";
		};
		class cw_gcff_bttn_clearAll: cw_5liner_gcff_button
		{
			idc = 1604;
			x = 0.196354 * safezoneW + safezoneX;
			y = 0.950824 * safezoneH + safezoneY;
			w = 0.06875 * safezoneW;
			h = 0.0329871 * safezoneH;
			action = "call cw_5liner_gcff_fnc_clearall;";
		};
	};
};


