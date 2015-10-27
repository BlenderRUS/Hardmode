class CfgPatches {
    class A3RU_StartupLogo {
        units[]={};
        weapons[]={};
        requiredAddons[]={ "A3_UI_F" };
        requiredVersion = 1.38;
    };
};

class RscStandardDisplay;
class RscControlsGroup;
class RscPictureKeepAspect;

class RscDisplayStart: RscStandardDisplay
{
	class controls
	{
		class LoadingStart: RscControlsGroup
		{
			class controls
			{
				class Logo: RscPictureKeepAspect
				{
					text = "\x\a3ru\addons\a3ru_main\StartupLogo\HMG_Logo.paa";
				};
			};
		};
	};
};