class CfgPatches
{
	class A3RU_Islands_Fix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Map_Panthera3", "AiA_Worlds_Grid", "Bootcamp_ACR", "Caribou", "Chernarus", "Desert", "Emita", "FDF_Isle1_a", "Gorgona", "hellskitchen", "hellskitchens", "mbg_celle2", "ProvingGrounds_PMC", "Sara", "SaraLite", "Sara_dbe1", "Shapur_BAF", "Takistan", "Thirsk", "ThirskW", "torabora", "Utes", "zargabad", "IsolaDiCapraia"};
		version = "1.1";
		versionStr = "1.1";
		versionAr[] = { 1, 1 };
		author[] = { "Blender" };
	};
};

class CfgWorlds
{
	class DefaultWorld;
	class CAWorld: DefaultWorld
	{
		class Grid{};
	};
	#include "Bootcamp_ACR.hpp"
	#include "Chernarus.hpp"
	#include "Caribou.hpp"
	#include "Desert_E.hpp"
	#include "Emita.hpp"
	#include "FDF_Isle1_a.hpp"
	#include "Gorgona.hpp"
	#include "Intro.hpp"
	#include "IsolaDiCapraia.hpp"
	#include "mbg_celle2.hpp"
	#include "panthera3.hpp"
	#include "Porto.hpp"
	#include "ProvingGrounds_PMC.hpp"
	#include "Sara.hpp"
	#include "SaraLite.hpp"
	#include "Sara_dbe1.hpp"
	#include "Shapur_BAF.hpp"
	#include "Takistan.hpp"
	#include "hellskitchen.hpp"
	#include "hellskitchens.hpp"
	#include "Thirsk.hpp"
	#include "ThirskW.hpp"
	#include "torabora.hpp"
	#include "Utes.hpp"
	#include "Woodland_ACR.hpp"
	#include "Zargabad.hpp"
};