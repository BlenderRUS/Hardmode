//
	class HMG_Module_CanShoot : Module_F {
		author = "pride";
		category = AGM;
		displayName = "Can shoot";
		function = "HMG_Core_fnc_HMG_CanShoot";
		scope = 2;
		isGlobal = 1;
		//isTriggerActivated = 0;
		class Arguments : ArgumentsBaseUnits {
			class canLockBox {
				displayName = "Огонь на фризе";
				description = "Может стрелять на фризе";
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
