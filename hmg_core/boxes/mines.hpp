
		class hmg_ru_mine : Box_IND_AmmoOrd_F {
				vehicleClass =	"hmg_mine_b";
				displayName = "Ящик для мин РФ (пустой)";
				scope = 2;
				type = 0;
				transportMaxWeapons = 0;
				transportMaxMagazines = 50;
				
				class TransportWeapons {};
				
				class TransportMagazines {};
				
				class TransportItems {};
			};
		class hmg_us_mine : Box_NATO_AmmoOrd_F {
				vehicleClass =	"hmg_mine_b";
				displayName = "Ящик для мин US (пустой)";
				scope = 2;
				type = 0;
				transportMaxWeapons = 0;
				transportMaxMagazines = 50;
				
				class TransportWeapons {};
				
				class TransportMagazines {};
				
				class TransportItems {};
			};
		class hmg_box_c4 : hmg_us_mine {
				displayName = "Ящик c M112 (C4) 10 шт.";
				class TransportMagazines {
						class _xx_DemoCharge_Remote_Mag {
							magazine = "DemoCharge_Remote_Mag";
							count = 10;
						};
				};
				class TransportItems {
						class _xx_AGM_M26_Clacker {
							name = "AGM_M26_Clacker";
							count = 2;
						};
						class _xx_AGM_DefusalKit {
							name = "AGM_DefusalKit";
							count = 2;
						};
				};
			
			};
		class hmg_box_m15 : hmg_us_mine {
				displayName = "Ящик c M15 AT 10 шт.";
				class TransportMagazines {
						class _xx_ATMine_Range_Mag {
							magazine = "ATMine_Range_Mag";
							count = 6;
						};
				};
				class TransportItems {
						class _xx_AGM_M26_Clacker {
							name = "AGM_M26_Clacker";
							count = 2;
						};
						class _xx_AGM_DefusalKit {
							name = "AGM_DefusalKit";
							count = 2;
						};
				};
			
			};
		class hmg_box_m19 : hmg_us_mine {
				displayName = "Ящик c M19 2 шт.";
				class TransportMagazines {
						class _xx_rhs_mine_M19_mag {
							magazine = "rhs_mine_M19_mag";
							count = 2;
						};
				};
				class TransportItems {
						class _xx_AGM_M26_Clacker {
							name = "AGM_M26_Clacker";
							count = 2;
						};
						class _xx_AGM_DefusalKit {
							name = "AGM_DefusalKit";
							count = 2;
						};
				};
			
			};
		class hmg_box_tm62m : hmg_ru_mine {
				displayName = "Ящик c ТМ62М 2 шт.";
				class TransportMagazines {
						class _xx_rhs_mine_tm62m_mag {
							magazine = "rhs_mine_tm62m_mag";
							count = 2;
						};
				};
				class TransportItems {
						class _xx_AGM_M26_Clacker {
							name = "AGM_M26_Clacker";
							count = 2;
						};
						class _xx_AGM_DefusalKit {
							name = "AGM_DefusalKit";
							count = 2;
						};
				};
			
			};
		class hmg_box_pmn2 : hmg_ru_mine {
				displayName = "Ящик c ПМН2 24 шт.";
				class TransportMagazines {
						class _xx_rhs_mine_pmn2_mag {
							magazine = "rhs_mine_pmn2_mag";
							count = 24;
						};
				};
				class TransportItems {
						class _xx_AGM_M26_Clacker {
							name = "AGM_M26_Clacker";
							count = 6;
						};
						class _xx_AGM_DefusalKit {
							name = "AGM_DefusalKit";
							count = 6;
						};
				};
			
			};
		class hmg_box_apers : hmg_ru_mine {
				displayName = "Ящик c ВС50, М26, ПМР-3 по 12 шт.";
				class TransportMagazines {
						class _xx_APERSMine_Range_Mag {
							magazine = "APERSMine_Range_Mag";
							count = 12;
						};
						class _xx_APERSTripMine_Wire_Mag {
							magazine = "APERSTripMine_Wire_Mag";
							count = 12;
						};
						class _xx_APERSBoundingMine_Range_Mag {
							magazine = "APERSBoundingMine_Range_Mag";
							count = 12;
						};

				};
				class TransportItems {
						class _xx_AGM_M26_Clacker {
							name = "AGM_M26_Clacker";
							count = 6;
						};
						class _xx_AGM_DefusalKit {
							name = "AGM_DefusalKit";
							count = 6;
						};
				};
			
			};
		class hmg_box_slam : hmg_us_mine {
				displayName = "Ящик c М4А1 SLAM 12 шт.";
				class TransportMagazines {
						class _xx_SLAMDirectionalMine_Wire_Mag {
							magazine = "SLAMDirectionalMine_Wire_Mag";
							count = 12;
						};
				};
				class TransportItems {
						class _xx_AGM_M26_Clacker {
							name = "AGM_M26_Clacker";
							count = 2;
						};
						class _xx_AGM_DefusalKit {
							name = "AGM_DefusalKit";
							count = 2;
						};
				};
			
			};
		class hmg_box_claymore : hmg_us_mine {
				displayName = "Ящик c M18A1 Claymore 6 шт.";
				class TransportMagazines {
						class _xx_ClaymoreDirectionalMine_Remote_Mag {
							magazine = "ClaymoreDirectionalMine_Remote_Mag";
							count = 6;
						};
				};
				class TransportItems {
						class _xx_AGM_M26_Clacker {
							name = "AGM_M26_Clacker";
							count = 2;
						};
						class _xx_AGM_DefusalKit {
							name = "AGM_DefusalKit";
							count = 2;
						};
				};
			
			};
		class hmg_box_IEDs_Land : hmg_ru_mine {
				displayName = "Ящик c маскируемыми ПП (10) и ПТ (4) минами (пересеченка)";
				class TransportMagazines {
						class _xx_IEDLandBig_Remote_Mag {
							magazine = "IEDLandBig_Remote_Mag";
							count = 4;
						};
						class _xx_IEDLandSmall_Remote_Mag {
							magazine = "IEDLandSmall_Remote_Mag";
							count = 10;
						};

				};
				class TransportItems {
						class _xx_AGM_M26_Clacker {
							name = "AGM_M26_Clacker";
							count = 2;
						};
						class _xx_AGM_DefusalKit {
							name = "AGM_DefusalKit";
							count = 2;
						};
						class _xx_AGM_DeadManSwitch {
							name = "AGM_DeadManSwitch";
							count = 1;
						};

				};
			
			};
		class hmg_box_IEDs_Urban : hmg_ru_mine {
				displayName = "Ящик c маскируемыми ПП (10) и ПТ (4) минами (город)";
				class TransportMagazines {
						class _xx_IEDUrbanBig_Remote_Mag {
							magazine = "IEDUrbanBig_Remote_Mag";
							count = 4;
						};
						class _xx_IEDUrbanSmall_Remote_Mag {
							magazine = "IEDUrbanSmall_Remote_Mag";
							count = 10;
						};

				};
				class TransportItems {
						class _xx_AGM_M26_Clacker {
							name = "AGM_M26_Clacker";
							count = 2;
						};
						class _xx_AGM_DefusalKit {
							name = "AGM_DefusalKit";
							count = 2;
						};
						class _xx_AGM_DeadManSwitch {
							name = "AGM_DeadManSwitch";
							count = 1;
						};

				};
			
			};
		class hmg_box_m183 : hmg_us_mine {
				displayName = "Ящик c M183 (подрывной заряд) 4 шт.";
				class TransportMagazines {
						class _xx_SatchelCharge_Remote_Mag {
							magazine = "SatchelCharge_Remote_Mag";
							count = 4;
						};
				};
				class TransportItems {
						class _xx_AGM_M26_Clacker {
							name = "AGM_M26_Clacker";
							count = 4;
						};
						class _xx_AGM_DefusalKit {
							name = "AGM_DefusalKit";
							count = 4;
						};
				};
			
			};
