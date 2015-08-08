#define X_MASS(V_MASS) mass = V_MASS
//// FOR DEBUG PURPOSES
//#define X_MASS(V_MASS) mass = 1
#define X_ICON(XICON) icon = \x\a3ru\addons\a3ru_main\staticLoad\Data\##XICON
#define X_PICTURE(XPICTURE) picture = \x\a3ru\addons\a3ru_main\staticLoad\Data\##XPICTURE
#define X_MODEL(XMODEL) model = \x\a3ru\addons\a3ru_main\staticLoad\##XMODEL
#define X_IPM(XICON,XPICTURE,XMODEL) X_ICON(XICON); \
	X_PICTURE(XPICTURE); \
	X_MODEL(XMODEL)