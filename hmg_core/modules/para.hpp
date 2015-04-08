//
	class HMG_Module_Para : Module_F {
		author = "pride";
		category = AGM;
		displayName = "Parachute system";
		function = "HMG_Core_fnc_HMGPara";
		scope = 2;
		isGlobal = 1;
		icon = "\hmg_core\pic\para_m.paa";
		
		class Arguments {
			class IsParaActive {
				displayName = "Использование парашютов";
				description = "Разрешить использовать парашюты в игре";
				typeName = BOOL;
				class values { 
					class Yes {
						name = "Да";
						value = 1;
					};
					
					class No {
						default = 1;
						name = "Нет";
						value = 0;
					};
				};
			};
		/* class IsParaSteer {
			displayName = "Управляемый парашют";
			description = "Управляемый (да) или неуправляемый (нет)";
			typeName = BOOL;
			
			class values {
				class Yes {
					name = "Да";
					value = 1;
				};
				
				class No {
					default = 1;
					name = "Нет";
					value = 0;
				};
			};
			};*/

		};
	};
