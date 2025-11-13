#define Macro_Zephyr_AAX_TCP_UtilityCover(ArgCamo) \
	class TCP_H_UtilityCover_##ArgCamo## \
	{ \
		model = "Zephyr_AAX_TCP_UtilityCover"; \
		Camo = #ArgCamo; \
	};
// end Macro_Zephyr_AAX_TCP_UtilityCover

Macro_Zephyr_AAX_TCP_UtilityCover(Arctic)
Macro_Zephyr_AAX_TCP_UtilityCover(Arid)
Macro_Zephyr_AAX_TCP_UtilityCover(Black)
Macro_Zephyr_AAX_TCP_UtilityCover(Gray)
Macro_Zephyr_AAX_TCP_UtilityCover(Green)
Macro_Zephyr_AAX_TCP_UtilityCover(Olive)
Macro_Zephyr_AAX_TCP_UtilityCover(Tan)
Macro_Zephyr_AAX_TCP_UtilityCover(Tropic)
Macro_Zephyr_AAX_TCP_UtilityCover(Tundra)
Macro_Zephyr_AAX_TCP_UtilityCover(Urban)
Macro_Zephyr_AAX_TCP_UtilityCover(White)
Macro_Zephyr_AAX_TCP_UtilityCover(Woodland)

#define Macro_Zephyr_AAX_TCP_Beret(ArgCamo) \
	class TCP_H_Beret_##ArgCamo## \
	{ \
		model = "Zephyr_AAX_TCP_Beret"; \
		Camo = #ArgCamo; \
	};
// end Macro_Zephyr_AAX_TCP_Beret

Macro_Zephyr_AAX_TCP_Beret(Black)
Macro_Zephyr_AAX_TCP_Beret(Blue)
Macro_Zephyr_AAX_TCP_Beret(Green)
Macro_Zephyr_AAX_TCP_Beret(Red)
Macro_Zephyr_AAX_TCP_Beret(Tan)

#define Macro_Zephyr_AAX_TCP_UtilityCap(ArgCamo) \
	class TCP_H_UtilityCap_##ArgCamo## \
	{ \
		model = "Zephyr_AAX_TCP_UtilityCap"; \
		Camo = #ArgCamo; \
	};
// end Macro_Zephyr_AAX_TCP_UtilityCap

Macro_Zephyr_AAX_TCP_UtilityCap(Black)
Macro_Zephyr_AAX_TCP_UtilityCap(Gray)
Macro_Zephyr_AAX_TCP_UtilityCap(Green)
Macro_Zephyr_AAX_TCP_UtilityCap(Olive)
Macro_Zephyr_AAX_TCP_UtilityCap(Tan)
Macro_Zephyr_AAX_TCP_UtilityCap(White)

#define Macro_Zephyr_AAX_TCP_WatchCap(ArgCamo) \
	class TCP_H_WatchCap_##ArgCamo## \
	{ \
		model = "Zephyr_AAX_TCP_WatchCap"; \
		Camo = #ArgCamo; \
	};
// end Macro_Zephyr_AAX_TCP_WatchCap

Macro_Zephyr_AAX_TCP_WatchCap(Black)
Macro_Zephyr_AAX_TCP_WatchCap(Gray)
Macro_Zephyr_AAX_TCP_WatchCap(Green)
Macro_Zephyr_AAX_TCP_WatchCap(Olive)
Macro_Zephyr_AAX_TCP_WatchCap(Tan)
Macro_Zephyr_AAX_TCP_WatchCap(White)

#define Macro_Zephyr_AAX_TCP_PatrolCap(ArgCamo) \
	class TCP_H_PatrolCap_##ArgCamo## \
	{ \
		model = "Zephyr_AAX_TCP_PatrolCap"; \
		Camo = #ArgCamo; \
	};
// end Macro_Zephyr_AAX_TCP_PatrolCap

Macro_Zephyr_AAX_TCP_PatrolCap(Arctic)
Macro_Zephyr_AAX_TCP_PatrolCap(Arid)
Macro_Zephyr_AAX_TCP_PatrolCap(Black)
Macro_Zephyr_AAX_TCP_PatrolCap(Gray)
Macro_Zephyr_AAX_TCP_PatrolCap(Green)
Macro_Zephyr_AAX_TCP_PatrolCap(Olive)
Macro_Zephyr_AAX_TCP_PatrolCap(Tan)
Macro_Zephyr_AAX_TCP_PatrolCap(Tropic)
Macro_Zephyr_AAX_TCP_PatrolCap(Tundra)
Macro_Zephyr_AAX_TCP_PatrolCap(Urban)
Macro_Zephyr_AAX_TCP_PatrolCap(White)
Macro_Zephyr_AAX_TCP_PatrolCap(Woodland)

#define Macro_Zephyr_AAX_TCP_CH43A(ArgCamo) \
	class TCP_H_Helmet_CH43A_##ArgCamo## \
	{ \
		model = "Zephyr_AAX_TCP_CH43A"; \
		Camo = #ArgCamo; \
	};
// end Macro_Zephyr_AAX_TCP_CH43A

Macro_Zephyr_AAX_TCP_CH43A(Black)
Macro_Zephyr_AAX_TCP_CH43A(Brown)
Macro_Zephyr_AAX_TCP_CH43A(Green)
Macro_Zephyr_AAX_TCP_CH43A(Olive)
Macro_Zephyr_AAX_TCP_CH43A(Tan)
Macro_Zephyr_AAX_TCP_CH43A(White)

#define Macro_Zephyr_AAX_TCP_ECH55D(ArgCamo, ArgColor) \
	class TCP_H_Helmet_ECH55D_##ArgCamo##_##ArgColor## \
	{ \
		model = "Zephyr_AAX_TCP_ECH55D"; \
		Camo = #ArgCamo; \
		Color = #ArgColor; \
	};
// end Macro_Zephyr_AAX_TCP_ECH55D

#define Macro_Zephyr_AAX_TCP_ECH55D_AllForCamo(ArgCamo) \
	Macro_Zephyr_AAX_TCP_ECH55D(ArgCamo,Black) \
	Macro_Zephyr_AAX_TCP_ECH55D(ArgCamo,Blue) \
	Macro_Zephyr_AAX_TCP_ECH55D(ArgCamo,Gold) \
	Macro_Zephyr_AAX_TCP_ECH55D(ArgCamo,Red) \
	Macro_Zephyr_AAX_TCP_ECH55D(ArgCamo,Silver)
// end Macro_Zephyr_AAX_TCP_ECH55D_AllForCamo

Macro_Zephyr_AAX_TCP_ECH55D_AllForCamo(Black)

#define Macro_Zephyr_AAX_TCP_ECH35J(ArgCamo, ArgColor) \
	class TCP_H_Helmet_ECH35J_##ArgCamo##_##ArgColor## \
	{ \
		model = "Zephyr_AAX_TCP_ECH35J"; \
		Camo = #ArgCamo; \
		Color = #ArgColor; \
	};
// end Macro_Zephyr_AAX_TCP_ECH35J

#define Macro_Zephyr_AAX_TCP_ECH35J_AllForCamo(ArgCamo) \
	Macro_Zephyr_AAX_TCP_ECH35J(ArgCamo,Black) \
	Macro_Zephyr_AAX_TCP_ECH35J(ArgCamo,Blue) \
	Macro_Zephyr_AAX_TCP_ECH35J(ArgCamo,Gold) \
	Macro_Zephyr_AAX_TCP_ECH35J(ArgCamo,Red) \
	Macro_Zephyr_AAX_TCP_ECH35J(ArgCamo,Silver)
// end Macro_Zephyr_AAX_TCP_ECH35J_AllForCamo

Macro_Zephyr_AAX_TCP_ECH35J_AllForCamo(Black)
Macro_Zephyr_AAX_TCP_ECH35J_AllForCamo(Brown)
Macro_Zephyr_AAX_TCP_ECH35J_AllForCamo(Green)
Macro_Zephyr_AAX_TCP_ECH35J_AllForCamo(Olive)
Macro_Zephyr_AAX_TCP_ECH35J_AllForCamo(Tan)
Macro_Zephyr_AAX_TCP_ECH35J_AllForCamo(White)

#define Macro_Zephyr_AAX_TCP_ECH43A(ArgCamo, ArgColor) \
	class TCP_H_Helmet_ECH43A_##ArgCamo##_##ArgColor## \
	{ \
		model = "Zephyr_AAX_TCP_ECH43A"; \
		Camo = #ArgCamo; \
		Color = #ArgColor; \
	};
// end Macro_Zephyr_AAX_TCP_ECH43A

#define Macro_Zephyr_AAX_TCP_ECH43A_AllForCamo(ArgCamo) \
	Macro_Zephyr_AAX_TCP_ECH43A(ArgCamo,Black) \
	Macro_Zephyr_AAX_TCP_ECH43A(ArgCamo,Blue) \
	Macro_Zephyr_AAX_TCP_ECH43A(ArgCamo,Gold) \
	Macro_Zephyr_AAX_TCP_ECH43A(ArgCamo,Red) \
	Macro_Zephyr_AAX_TCP_ECH43A(ArgCamo,Silver) \
	Macro_Zephyr_AAX_TCP_ECH43A(ArgCamo,Yellow)
// end Macro_Zephyr_AAX_TCP_ECH43A_AllForCamo

Macro_Zephyr_AAX_TCP_ECH43A_AllForCamo(Black)
Macro_Zephyr_AAX_TCP_ECH43A_AllForCamo(Brown)
Macro_Zephyr_AAX_TCP_ECH43A_AllForCamo(Green)
Macro_Zephyr_AAX_TCP_ECH43A_AllForCamo(Olive)
Macro_Zephyr_AAX_TCP_ECH43A_AllForCamo(Tan)
Macro_Zephyr_AAX_TCP_ECH43A_AllForCamo(White)

#define Macro_Zephyr_AAX_TCP_Cap(ArgCamo) \
	class TCP_H_Cap_##ArgCamo## \
	{ \
		model = "Zephyr_AAX_TCP_Cap"; \
		Camo = #ArgCamo; \
		Orientation = "Forwards"; \
		Tactical = "No"; \
	};\
	class TCP_H_Cap_Reversed_##ArgCamo## \
	{ \
		model = "Zephyr_AAX_TCP_Cap"; \
		Camo = #ArgCamo; \
		Orientation = "Reversed"; \
		Tactical = "No"; \
	};\
	class TCP_H_TacticalCap_##ArgCamo## \
	{ \
		model = "Zephyr_AAX_TCP_Cap"; \
		Camo = #ArgCamo; \
		Orientation = "Forwards"; \
		Tactical = "Yes"; \
	};\
	class TCP_H_TacticalCap_Reversed_##ArgCamo## \
	{ \
		model = "Zephyr_AAX_TCP_Cap"; \
		Camo = #ArgCamo; \
		Orientation = "Reversed"; \
		Tactical = "Yes"; \
	};
// end Macro_Zephyr_AAX_TCP_Cap

Macro_Zephyr_AAX_TCP_Cap(Black)
Macro_Zephyr_AAX_TCP_Cap(Gray)
Macro_Zephyr_AAX_TCP_Cap(Green)
Macro_Zephyr_AAX_TCP_Cap(Olive)
Macro_Zephyr_AAX_TCP_Cap(Tan)
Macro_Zephyr_AAX_TCP_Cap(White)

#define Macro_Zephyr_AAX_TCP_BoonieHat(ArgCamo) \
	class TCP_H_boonieHat_##ArgCamo## \
	{ \
		model = "Zephyr_AAX_TCP_BoonieHat"; \
		Camo = #ArgCamo; \
		Fold = "None"; \
	};\
	class TCP_H_boonieHat_Folded_##ArgCamo## \
	{ \
		model = "Zephyr_AAX_TCP_BoonieHat"; \
		Camo = #ArgCamo; \
		Fold = "Both"; \
	};\
	class TCP_H_boonieHat_Folded_Left_##ArgCamo## \
	{ \
		model = "Zephyr_AAX_TCP_BoonieHat"; \
		Camo = #ArgCamo; \
		Fold = "Left"; \
	};\
	class TCP_H_boonieHat_Folded_Right_##ArgCamo## \
	{ \
		model = "Zephyr_AAX_TCP_BoonieHat"; \
		Camo = #ArgCamo; \
		Fold = "Right"; \
	};
// end Macro_Zephyr_AAX_TCP_BoonieHat

Macro_Zephyr_AAX_TCP_BoonieHat(Arctic)
Macro_Zephyr_AAX_TCP_BoonieHat(Arid)
Macro_Zephyr_AAX_TCP_BoonieHat(Black)
Macro_Zephyr_AAX_TCP_BoonieHat(Gray)
Macro_Zephyr_AAX_TCP_BoonieHat(Green)
Macro_Zephyr_AAX_TCP_BoonieHat(Olive)
Macro_Zephyr_AAX_TCP_BoonieHat(Tan)
Macro_Zephyr_AAX_TCP_BoonieHat(Tropic)
Macro_Zephyr_AAX_TCP_BoonieHat(Tundra)
Macro_Zephyr_AAX_TCP_BoonieHat(Urban)
Macro_Zephyr_AAX_TCP_BoonieHat(White)
Macro_Zephyr_AAX_TCP_BoonieHat(Woodland)
