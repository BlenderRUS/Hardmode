class IsolaDiCapraia: CAWorld
{
	latitude = 43;
	longitude = 10;
	class Grid: Grid
	{
		offsetY = 10400;
		class Zoom1
		{
			zoomMax = 0.15;
			format = "XY";
			formatX = "000";
			formatY = "000";
			stepX = 100;
			stepY = -100;
		};
		class Zoom2
		{
			zoomMax = 0.85;
			format = "XY";
			formatX = "00";
			formatY = "00";
			stepX = 1000;
			stepY = -1000;
		};
		class Zoom3
		{
			zoomMax = 1e+030;
			format = "XY";
			formatX = "0";
			formatY = "0";
			stepX = 10000;
			stepY = 10000;
		};
	};
};