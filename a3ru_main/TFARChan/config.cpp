class CfgPatches
{
	class A3RU_TFARChan
	{
		units[] = {};
		requiredAddons[] = { "cba_xeh" };
		requiredVersion = 1.38;
		version = "1.0";
		author[] = { "Blender" };
	};
};

class Extended_PostInit_EventHandlers
{
	class A3RU_TFARChan
	{
		serverInit = "tf_radio_channel_name = 'HMG_Radio'; tf_radio_channel_password = '2100'; publicVariable 'tf_radio_channel_name'; publicVariable 'tf_radio_channel_password';";
	};
};