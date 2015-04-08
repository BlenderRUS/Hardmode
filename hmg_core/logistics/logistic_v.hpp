                                                           
class RHS_Ural_Fuel_MSV_01 :  RHS_Ural_Support_MSV_Base_01 
{                                                           
    AGM_fuelCapacityCargo = 10000;                              
    transportFuel = 0;                                           
};                                                                
class RHS_Ural_Fuel_VDV_01 :  RHS_Ural_Support_MSV_Base_01        
{                                                                  
    AGM_fuelCapacityCargo = 10000;                                     
    transportFuel = 0;                                                  
};                                                                       
class RHS_Ural_Fuel_VMF_01 :  RHS_Ural_Support_MSV_Base_01                
{                                                                          
    AGM_fuelCapacityCargo = 10000;                                             
    transportFuel = 0;                                                          
};                                                                               
class RHS_Ural_Fuel_VV_01 :  RHS_Ural_Support_MSV_Base_01                         
{                                                                                  
    AGM_fuelCapacityCargo = 10000;                                                     
    transportFuel = 0;                                                                  
};                                                                                       
class rhs_truck : Car_F                                                                   
{                                                                                          
    AGM_fuelCapacity = 210;                                                                 
};                                                                                           
class rhs_gaz66_vmf : rhs_truck                                                               
{                                                                                              
    AGM_canRepair = 1;                                                                          
    transportRepair = 0;                                                                         
};