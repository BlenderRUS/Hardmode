#define ADDONPATH \x\a3ru\addons\a3ru_main\Mas_Patch
#define X_ICO(CWEAPON,CFILE) icon = ADDONPATH\Models\CWEAPON\Data\CFILE.paa
#define X_PIC(CWEAPON,CFILE) picture = ADDONPATH\Models\CWEAPON\Data\CFILE.paa
#define X_MODEL(CWEAPON) model = ADDONPATH\Models\CWEAPON\mag_##CWEAPON
#define X_NAME(CNAME,CNAMESHORT) 	displayName = CNAME; \
	displayNameShort = CNAMESHORT
#define X_CONCAT(X_V1,X_V2) X_V1####X_V2
#define X_IPM(CWEAPON,CMAGAZINE) 	X_ICO(CWEAPON,X_CONCAT(mag_,CMAGAZINE)); \
	X_PIC(CWEAPON,X_CONCAT(mag_,CMAGAZINE)); \
	X_MODEL(CWEAPON)
#define X_MC(VAR1,VAR2) mass = VAR1 * 9; \
	count = VAR2
#define X_MASS(VAR1) mass = VAR1 * 9
#define X_QUOTE(VAR1) #VAR1