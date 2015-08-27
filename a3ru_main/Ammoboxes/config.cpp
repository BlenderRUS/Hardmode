#include "macros.h"

class CfgPatches
{
	class A3RU_AMMOBOXES
	{
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3RU_BACKPACKS"
		};
		author[] = {"Blender"};
		authorUrl = "http://www.arma3.ru";
		version = "0.1";
		versionAr[] = {0, 1};
		versionStr = "0.1";
	};
};

#include "CfgVehicleClasses.hpp"
#include "XEH_InitPost.hpp"

class CfgVehicles {
	class ACE_medicalSupplyCrate;
	#include "medical.hpp"

	class Box_FIA_Support_F;
	class EAST_Box_Base;
	#include "insurgents.hpp"
	#include "insurgents_random.hpp"
	
	class Box_IND_AmmoOrd_F;
	class Box_NATO_AmmoOrd_F;
	#include "mines.hpp"
	
	class rhs_weapons_crate_ak_ammo_545x39_standard;
	//class EAST_Box_Base
	class Box_IND_Grenades_F;
	class Box_IND_WpsLaunch_F;
	#include "russian.hpp"
	
	//class Box_IND_AmmoOrd_F;
	#include "static.hpp"
	
	class Box_NATO_Ammo_F;
	class Box_NATO_Grenades_F;
	#include "us.hpp"
	
	// DEPRECATED BUT STILL USED
	#include "deprecated.hpp"
};