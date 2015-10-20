// AGM
class Sh_82mm_AMOS;
class AGM_81mmShell_AMMO_HE: Sh_82mm_AMOS {
	indirectHitRange = 20;  //default 18
	whistledist = 30;
	airfriction = -0.000159;
};
class AGM_81mmShell_252_AMMO_HE: Sh_82mm_AMOS {
	indirectHitRange = 20;  //default 18
	whistledist = 30;
	airfriction = -0.000159;
};
class G_40mm_HE;
class mas_G_30mm_HE: G_40mm_HE
{
	timeToLive = 45;
	hit = 100;
	indirecthit = 10;
	indirecthitrange = 5.5;
	whistledist = 5.5;
	typicalSpeed = 130;
	airfriction = -0.000445;
	caliber = 1.1811;
};
class Sh_155mm_AMOS;
class mas_Sh_122_HE: Sh_155mm_AMOS
{
	typicalspeed = 690;
};