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

Macro_Zephyr_AAX_TCP_Balaclava(Black)
Macro_Zephyr_AAX_TCP_Balaclava(Brown)
Macro_Zephyr_AAX_TCP_Balaclava(Gray)
Macro_Zephyr_AAX_TCP_Balaclava(Green)
Macro_Zephyr_AAX_TCP_Balaclava(Olive)
Macro_Zephyr_AAX_TCP_Balaclava(Tan)
Macro_Zephyr_AAX_TCP_Balaclava(White)
Macro_Zephyr_AAX_TCP_Balaclava(Woodland)

Macro_Zephyr_AAX_TCP_TacticalGlasses(Black)
Macro_Zephyr_AAX_TCP_TacticalGlasses(Blue)
Macro_Zephyr_AAX_TCP_TacticalGlasses(Gold)
Macro_Zephyr_AAX_TCP_TacticalGlasses(Red)
Macro_Zephyr_AAX_TCP_TacticalGlasses(Silver)
Macro_Zephyr_AAX_TCP_TacticalGlasses(Yellow)
