class B_mas_UH60_Base: Helicopter_Base_H { X_SCOPE(0) };
class B_mas_UH60M_base: B_mas_UH60_Base {
	X_SCOPE(0)
	picture = "";
	icon = "";
};
class B_mas_UH60M_US_base: B_mas_UH60M_base {};
class B_mas_UH60M: B_mas_UH60M_US_base { X_SCOPE(0) };
class B_mas_UH60M_SF: B_mas_UH60M { X_SCOPE(0) };
class B_mas_UH60M_MEV: B_mas_UH60M_US_base { X_SCOPE(0) };
class B_mas_UH60M_Wreck: HelicopterWreck { X_SCOPE(0) };