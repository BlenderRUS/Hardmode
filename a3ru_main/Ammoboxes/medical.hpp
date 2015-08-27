class A3RU_Ammobox_med_small: ACE_medicalSupplyCrate {
	displayName = "Малый ящик с медициной";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {
		class _xx_ACE_Bandage {
			name = "ACE_fieldDressing";
			count = 30;
		};
		class _xx_ACE_Morphine {
			name = "ACE_Morphine";
			count = 5;
		};
	};
};

class HMG_Med_small: A3RU_Ammobox_med_small {
	scope = 1;
};