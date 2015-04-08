class InventoryOpticsItem_Base_F;
class rhs_acc_sniper_base;
class rhs_acc_1p29 : rhs_acc_sniper_base {
	class ItemInfo: InventoryOpticsItem_Base_F {
		class OpticsModes {
			class rhs_1p29_scope {
				discreteDistance[] = {400, 500, 600, 700, 800, 900, 1000};
				distanceZoomMin = 400;
				};
		};
	};
};

class rhs_acc_1pn93_base : rhs_acc_sniper_base {

	class ItemInfo: InventoryOpticsItem_Base_F {
		class OpticsModes {
			class 1pn93_scope {
				discreteDistance[] = {400, 500, 600, 700, 800, 900, 1000};
				visionMode[] = {"Normal", NVG};
			};
		};
	};
};