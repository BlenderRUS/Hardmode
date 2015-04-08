cw_9liner_medv_fnc_savePage =
{
_varname = "cw_9liner_medv_pageText_" + (str cw_9liner_medv_currentPage);
_pagetext = profileNamespace setVariable 
[
	_varname, 
	[
		ctrlText 1400,
		ctrlText 1401,
		ctrlText 1402,
		ctrlVisible 2800,
		ctrlVisible 2801,
		ctrlVisible 2802,
		ctrlVisible 2803,
		ctrlVisible 2804,
		ctrlText 1403,
		ctrlVisible 2805,
		ctrlVisible 2806,
		ctrlVisible 2807,
		ctrlVisible 2808,
		ctrlText 1404,
		ctrlVisible 2809,
		ctrlVisible 2810,
		ctrlText 1405,
		ctrlVisible 2811,
		ctrlVisible 2812,
		ctrlVisible 2813,
		ctrlVisible 2814,
		ctrlText 1406,
		ctrlVisible 2815,
		ctrlVisible 2816,
		ctrlVisible 2817,
		ctrlVisible 2818,
		ctrlVisible 2819,
		ctrlText 1407,
		ctrlVisible 2820,
		ctrlVisible 2821,
		ctrlVisible 2822,
		ctrlVisible 2823,
		ctrlVisible 2824,
		ctrlText 1408,
		ctrlVisible 2825,
		ctrlVisible 2826,
		ctrlVisible 2827
	]
];

hint format ["PAGE %1 SAVED", cw_9liner_medv_currentPage];
};