/* #Denizi
$[
	1.063,
	["RangeTable",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[1200,"picture",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.15 * safezoneW + safezoneX","0.149971 * safezoneH + safezoneY","0.7 * safezoneW","0.700059 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/
class RscPicture;

class a3ru_rangetables {
	idd = -1;
	onLoad = "uiNameSpace setVariable ['a3ru_rangetable', _this select 0];";
	onUnLoad = "uiNameSpace setVariable ['a3ru_rangetable', nil];";
	movingEnable = 1;
	duration = 1e+011;
	controlsBackground[] = { };
	objects[] = { };
	controls[]=
	{
		picture
	};
	class picture: RscPicture
	{
		moving = 1;
		style = "0x800 + 0x30";
		idc = 1200;
		text = "#(argb,8,8,3)color(1,1,1,1)";
		x = 0;
		y = 0;
		w = safezoneW;
		h = safezoneH;
	};
};