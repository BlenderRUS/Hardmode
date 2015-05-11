class CfgPatches
{
	class A3RU_JbadToAIA_bridges
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"AiA_Roads_Config", "bridges"};
	};
};
/*
	Land_Kamenny_most30 - Land_Jbad_Kamenny_most30
	Land_Kamenny_most30v2 - Land_Jbad_Kamenny_most30v2
	Land_most_bez_lamp - Land_Jbad_most_bez_lamp
	Land_most_stred30 - Land_Jbad_most_stred30
*/
class CfgNonAIVehicles
{
	class Land_most_stred30
	{
		model = "\Jbad_Structures\bridges\Jbad_most_stred30.p3d";
		simulation = "road";
		armor = 50;
		scope = 1;
		featureSize = 40;
		destrType = "destructBuilding";
		class Destruction
		{
			animations[] = {{ "Jbad_Structures\bridges\Rtm\most_pad_01.rtm",0.5,3 }};
		};
	};
	class Land_most_bez_lamp: Land_most_stred30
	{
		model = "\Jbad_Structures\bridges\Jbad_most_bez_lamp.p3d";
		class Destruction
		{
			animations[] = {{ "Jbad_Structures\bridges\Rtm\most_pad_01.rtm",0.5,3 }};
		};
	};
	class Land_Kamenny_most30: Land_most_stred30
	{
		model = "\Jbad_Structures\bridges\Jbad_Kamenny_most30.p3d";
		class Destruction
		{
			animations[] = {{ "Jbad_Structures\bridges\Rtm\Kamenny_most_01.rtm",0.5,3 }};
		};
	};
	class Land_Kamenny_most30v2: Land_Kamenny_most30
	{
		model = "\Jbad_Structures\bridges\Jbad_Kamenny_most30v2.p3d";
		class Destruction
		{
			animations[] = {{ "Jbad_Structures\bridges\Rtm\Kamenny_most_01.rtm",0.5,3 }};
		};
	};
};