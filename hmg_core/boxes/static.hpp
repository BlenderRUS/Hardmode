		class CUP_B_USPack_Coyote;
		class HMG_VeryBigBP : CUP_B_USPack_Coyote {
			scope = 2;
			displayName = "Very Big Backpack";
			descriptionShort = "Very Big Backpack";
			maximumLoad = 1120;
			picture = "\CUP\Weapons\CUP_Weapons_Backpacks\data\ui\icon_b_c_uspack_cbr_ca.paa";
			hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Backpacks\data\backpack_us_co.paa"};
		};

		class hmg_ru_static : Box_IND_AmmoOrd_F {
				vehicleClass =	"hmg_static_box";
				displayName = "Ящик для стационаров (пустой)";
				scope = 2;
				type = 0;
				transportMaxWeapons = 0;
				transportMaxMagazines = 20;
				transportMaxBackpacks = 2;
				
				class TransportWeapons {};
				
				class TransportMagazines {};
				
				class TransportItems {};
				class TransportBackpackss {};
			};
		class hmg_ru_ags : hmg_ru_static {
			displayName = "Кассеты для АГС-30";
			class TransportMagazines {
				class _xx_RDS_29Rnd_30mm_AGS30_out {
					magazine = "RDS_29Rnd_30mm_AGS30_out";
					count = 3;
				};
			};
			 class TransportBackpacks {  
			        class _xx_HMG_VeryBigBP {  
                			backpack = "HMG_VeryBigBP";  
                			count = 1;  
	               		};  
        		}; 
		};
		class hmg_ru_k12 : hmg_ru_static {
			displayName = "Коробки 50 х 12.7 ";		
			class TransportMagazines {
				class _xx_RDS_KORD_out {
					magazine = "RDS_KORD_out";
					count = 3;
				};
			};
			 class TransportBackpacks {  
			        class _xx_HMG_VeryBigBP {  
                			backpack = "HMG_VeryBigBP";  
                			count = 1;  
	               		};  
        		}; 

		};
		class hmg_ru_podnos : hmg_ru_static {
			displayName = "ОФ мины для 2б14";		
			class TransportMagazines {		
				class _xx_HMG_Mine_82_out {
					magazine = "HMG_Mine_82_out";
					count = 4;
				};
			};
			 class TransportBackpacks {  
			        class _xx_HMG_VeryBigBP {  
                			backpack = "HMG_VeryBigBP";  
                			count = 1;  
	               		};  
        		}; 

		};
		class hmg_ru_m252 : hmg_ru_static {
			displayName = "HE rounds for M252";		
			class TransportMagazines {		
				class _xx_HMG_Mine_81_out {
					magazine = "HMG_Mine_81_out";
					count = 3;
				};
			};
			 class TransportBackpacks {  
			        class _xx_HMG_VeryBigBP {  
                			backpack = "HMG_VeryBigBP";  
                			count = 1;  
	               		};  
        		}; 

		};
		class hmg_ru_m2 : hmg_ru_static {
			displayName = "Box 100 x 12.7";		
			class TransportMagazines {		
				class _xx_M2_cass_out {
					magazine = "M2_cass_out";
					count = 3;
				};
			};
			 class TransportBackpacks {  
			        class _xx_HMG_VeryBigBP {  
                			backpack = "HMG_VeryBigBP";  
                			count = 1;  
	               		};  
        		}; 

		};
		class hmg_ru_mk19 : hmg_ru_static {
			displayName = "Cassetes for Mk19";		
			class TransportMagazines {		
				class _xx_Mk19_cass_out {
					magazine = "Mk19_cass_out";
					count = 3;
				};
			};
			 class TransportBackpacks {  
			        class _xx_HMG_VeryBigBP {  
                			backpack = "HMG_VeryBigBP";  
                			count = 1;  
	               		};  
        		}; 

		};
		class hmg_ru_tow : hmg_ru_static {
			displayName = "Missiles for TOW";		
			class TransportMagazines {		
				class _xx_TOW_out {
					magazine = "TOW_out";
					count = 4;
				};
			};
			 class TransportBackpacks {  
			        class _xx_HMG_VeryBigBP {  
                			backpack = "HMG_VeryBigBP";  
                			count = 1;  
	               		};  
        		}; 

		};
		class hmg_ru_spghe : hmg_ru_static {
			displayName = "Мины для ПГ-9";		
			class TransportMagazines {			
				class _xx_pg9_out {
					magazine = "PG9_out";
					count = 3;
				};
			};
			 class TransportBackpacks {  
			        class _xx_HMG_VeryBigBP {  
                			backpack = "HMG_VeryBigBP";  
                			count = 1;  
	               		};  
        		}; 

		};
		class hmg_ru_spgog : hmg_ru_static {
			displayName = "Мины для ОГ-9";		
			class TransportMagazines {			
				class _xx_og9_out {
					magazine = "OG9_out";
					count = 3;
				};
			};
			 class TransportBackpacks {  
			        class _xx_HMG_VeryBigBP {  
                			backpack = "HMG_VeryBigBP";  
                			count = 1;  
	               		};  
        		}; 

		};
