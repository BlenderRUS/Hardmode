#define X_RANDSCRIPT(XNAME) A3RU_ammobox_random_##XNAME = [_this,#XNAME##] call compile preprocessFileLineNumbers '\x\a3ru\addons\a3ru_main\Ammoboxes\scripts\randomize.sqf';
class Extended_InitPost_EventHandlers
{
	class hmg_box_ins_rifles {
		X_RANDSCRIPT(rifles)
		//HMG_box_init_ins_rifles = [_this,'rifles'] call compile preprocessFileLineNumbers '\x\a3ru\addons\a3ru_main\Ammoboxes\scripts\randomize.sqf';
	};
	class hmg_box_ins_lmg
	{
		X_RANDSCRIPT(lmg)
		//HMG_box_init_ins_lmg = "[_this,'lmg'] call compile preprocessFileLineNumbers 'hmg_core\boxes\random.sqf'";
	};
	class hmg_box_ins_hmg
	{
		X_RANDSCRIPT(hmg)
		//HMG_box_init_ins_hmg = "[_this,'hmg'] call compile preprocessFileLineNumbers 'hmg_core\boxes\random.sqf'";
	};
	class hmg_box_ins_radio
	{
		X_RANDSCRIPT(radio)
		//HMG_box_init_ins_radio = "[_this,'radio'] call compile preprocessFileLineNumbers 'hmg_core\boxes\random.sqf'";
	};
	class hmg_box_ins_stuff
	{
		X_RANDSCRIPT(stuff)
		//HMG_box_init_ins_stuff = "[_this,'stuff'] call compile preprocessFileLineNumbers 'hmg_core\boxes\random.sqf'";
	};
	class hmg_box_ins_snip
	{
		X_RANDSCRIPT(snip)
		//HMG_box_init_ins_snip = "[_this,'snip'] call compile preprocessFileLineNumbers 'hmg_core\boxes\random.sqf'";
	};
	class hmg_box_ins_maps
	{
		X_RANDSCRIPT(maps)
		//HMG_box_init_ins_maps = "[_this,'maps'] call compile preprocessFileLineNumbers 'hmg_core\boxes\random.sqf'";
	};
};