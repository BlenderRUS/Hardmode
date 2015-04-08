class LandVehicle;
class Tank : LandVehicle {
		class TransportMagazines {};
		class TransportItems {};
		class TransportWeapons {};
		radarType = 8;
};
class Car : LandVehicle {
		class TransportMagazines {};
		class TransportItems {};
		class TransportWeapons {};
		radarType = 8;
};
class RHS_Ural_BaseTurret; 
class RHS_Ural_Base;        
class RHS_Ural_MSV_Base;     
class RHS_Ural_Support_MSV_Base_01;
class CDF_A3_BRDM2_Base;
class CDF_A3_BRDM2: CDF_A3_BRDM2_Base
{
    author = "CDF_A3";
    scope=2;
    scopeCurator=2;
    side = 1;
    faction = "CDF_A3";
    crew = "B_CDF_A3_Soldier_Crew";
    typicalCargo[] = {"B_CDF_A3_Soldier_Crew"};
    hiddenselectionstextures[] = {"cdf_a3\cdf_a3_main\data\brdm2_01_camo_co.paa"};
};
class CDF_A3_BRDM2_ATGM_Base;
class CDF_A3_BRDM2_ATGM: CDF_A3_BRDM2_ATGM_Base
{
    author = "CDF_A3";
    scope=2;
    scopeCurator=2;
    side = 1;
    faction = "CDF_A3";
    crew = "B_CDF_A3_Soldier_Crew";
    typicalCargo[] = {"B_CDF_A3_Soldier_Crew"};
    hiddenselectionstextures[] = {"cdf_a3\cdf_a3_main\data\brdm2_atgm_01_camo_co.paa"};
};
class CDF_A3_BRDM2_HQ_Base;
class CDF_A3_BRDM2_HQ: CDF_A3_BRDM2_HQ_Base
{
    author = "CDF_A3";
    scope=2;
    scopeCurator=2;
    side = 1;
    faction = "CDF_A3";
    crew = "B_CDF_A3_Soldier_Crew";
    typicalCargo[] = {"B_CDF_A3_Soldier_Crew"};
    hiddenselectionstextures[] = {"cdf_a3\cdf_a3_main\data\brdm2_01_camo_co.paa"};
};
class CDF_A3_Ural_ZU23_Base: RHS_Ural_BaseTurret {};
class CDF_A3_Ural_ZU23: CDF_A3_Ural_ZU23_Base
{
    author = "CDF_A3";
    scope=2;
    scopeCurator=2;
    faction="CDF_A3";
    side = 1;
    crew = "B_CDF_A3_Soldier_Militia";
    typicalCargo[] = {"B_CDF_A3_Soldier_Militia"};
    hiddenSelections[]=
    {
        "camo1",
        "camo2"
    };

    hiddenSelectionsTextures[] =
    {
        "cdf_a3\cdf_a3_main\data\ural_kabina_camo_co.paa",
        "cdf_a3\cdf_a3_main\data\ural_open_cdf_co.paa"
    };
/*    class EventHandlers: EventHandlers
    {
        init = "";
    };*/
};
