switch (true) do {
	case (_this isKindOf "rhsusf_fmtv_base"): { 2 };
	case (_this isKindOf "RHS_M2A2_Base" || _this isKindOf "DAR_MaxxPro_Base"): { 1.6 };
	default {
		if (((boundingCenter _this) select 2) == 0) then {
			0
		} else {
			((boundingBoxReal _this) select 1) select 2
		}
	};
}