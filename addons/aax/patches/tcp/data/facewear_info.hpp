#define Macro_Zephyr_AAX_TCP_Balaclava(ArgCamo) \
	class TCP_G_Balaclava_##ArgCamo## { \
		model = "Zephyr_AAX_TCP_Balaclava"; \
		Camo = #ArgCamo; \
	};
// End Macro_Zephyr_AAX_TCP_Balaclava

#define Macro_Zephyr_AAX_TCP_TacticalGlasses(ArgColor) \
	class TCP_G_TacticalGlasses_##ArgColor## { \
		model = "Zephyr_AAX_TCP_TacticalGlasses"; \
		Color = #ArgColor; \
	};
// End Macro_Zephyr_AAX_TCP_TacticalGlasses

#define Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses(ArgCamo, ArgColor) \
	class TCP_G_BalaclavaTacticalGlasses_##ArgCamo##_##ArgColor## { \
		model = "Zephyr_AAX_TCP_BalaclavaTacticalGlasses"; \
		Camo = #ArgCamo; \
		Color = #ArgColor; \
	};
// End Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses

#define Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses_AllForCamo(ArgCamo) \
	Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses(ArgCamo,Black) \
	Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses(ArgCamo,Blue) \
	Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses(ArgCamo,Gold) \
	Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses(ArgCamo,Red) \
	Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses(ArgCamo,Silver) \
	Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses(ArgCamo,Yellow)
// End Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses_AllForCamo

Macro_Zephyr_AAX_TCP_Balaclava(Black)
Macro_Zephyr_AAX_TCP_Balaclava(Gray)
Macro_Zephyr_AAX_TCP_Balaclava(Green)
Macro_Zephyr_AAX_TCP_Balaclava(Olive)
Macro_Zephyr_AAX_TCP_Balaclava(Tan)
Macro_Zephyr_AAX_TCP_Balaclava(White)

Macro_Zephyr_AAX_TCP_TacticalGlasses(Black)
Macro_Zephyr_AAX_TCP_TacticalGlasses(Blue)
Macro_Zephyr_AAX_TCP_TacticalGlasses(Gold)
Macro_Zephyr_AAX_TCP_TacticalGlasses(Red)
Macro_Zephyr_AAX_TCP_TacticalGlasses(Silver)
Macro_Zephyr_AAX_TCP_TacticalGlasses(Yellow)

Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses_AllForCamo(Black)
Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses_AllForCamo(Gray)
Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses_AllForCamo(Green)
Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses_AllForCamo(Olive)
Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses_AllForCamo(Tan)
Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses_AllForCamo(White)
