#define X_SCOPE(XSCOPE) scope = XSCOPE; \
scopeCurator = XSCOPE;
#define X_WEAP(XWEAP,XCOUNT) class _xx_##XWEAP { \
	weapon = #XWEAP; \
	count = XCOUNT; \
};
#define X_BACK(XBACK,XCOUNT) class _xx_##XBACK { \
	backpack = #XBACK; \
	count = XCOUNT; \
};
#define X_MAG(XMAG,XCOUNT) class _xx_##XMAG { \
	magazine = #XMAG; \
	count = XCOUNT; \
};
#define X_ITEM(XITEM,XCOUNT) class _xx_##XITEM { \
	name = #XITEM; \
	count = XCOUNT; \
};