//
	class HMG_Module_LBox : Module_F {
		author = "pride";
		category = AGM;
		displayName = "Box close";
		function = "HMG_Core_fnc_HMG_LBoxes";
		scope = 2;
		isGlobal = 1;
//		icon = "";
		class Arguments : ArgumentsBaseUnits{
			class canLockBox {
				displayName = "Ключи от ящиков";
				description = "Может запирать ящики";
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
		};
	};
