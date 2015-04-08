	class EAST_Box_Base;	// большой зеленый ящик РФ
	class Box_NATO_Ammo_F;	// стандартный ящик с БК НАТО
	class GunrackTK_EP1; // стойка с оружием
	class HLC_AK_ammobox; //патроны АК
	class rhs_weapons_crate_ak_ammo_545x39_standard; // патроны АК
	class rhsusf_ammo_crate; //патроны US
	class Box_NATO_Grenades_F; // гранаты US
	class Box_IND_Grenades_F; //гранаты РФ
	class Box_FIA_Support_F; // ящик бомжей
	class Box_NATO_AmmoOrd_F; // взрывчатка US
	class Box_IND_AmmoOrd_F; // взрывчатка РФ
	class Box_IND_WpsLaunch_F; // гранатометы РФ
	class Box_NATO_WpsLaunch_F; //гранатометы US
	class AGM_Box_Medical;

	class HMG_Med_base : AGM_Box_Medical {

				class TransportWeapons {};
				
				class TransportMagazines {};
				
				class TransportItems {};
	};

	class HMG_Med_small : HMG_Med_base {
				displayName = "Малый ящик с медициной";
				class TransportItems {
						class _xx_AGM_Bandage {
							name = "AGM_Bandage";
							count = 30;
						};

						class _xx_AGM_Morphine {
							name = "AGM_Morphine";
							count = 5;
						};

				};
	};