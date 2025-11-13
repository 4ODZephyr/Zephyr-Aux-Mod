#define Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo, ArgShoulderArmor, ArgExtraArmor) \
	model = "Zephyr_AAX_TCP_CBBAS_M43A"; \
	Camo = #ArgCamo; \
	ShoulderArmor = #ArgShoulderArmor; \
	ExtraArmor = #ArgExtraArmor;
// end Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body

#define Macro_Zephyr_AAX_TCP_CBBAS_M43A_AllForCamo(ArgCamo) \
	class TCP_V_M43A_Light_##ArgCamo## \
	{ \
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderNone,ExtraNone) \
	}; \
	class TCP_V_M43A_BaseSec_1_##ArgCamo## \
	{ \
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderBaseSecurity,ExtraNone) \
	}; \
	class TCP_V_M43A_BaseSec_2_##ArgCamo## \
	{ \
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderBaseSecurity,ExtraThighs) \
	}; \
	class TCP_V_M43A_BaseSec_3_##ArgCamo## \
	{ \
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderBaseSecurity,ExtraThighsShins) \
	}; \
	class TCP_V_M43A_GungnirS_1_##ArgCamo## \
	{ \
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderGungnirSmall,ExtraNone) \
	}; \
	class TCP_V_M43A_GungnirS_2_##ArgCamo## \
	{ \
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderGungnirSmall,ExtraThighs) \
	}; \
	class TCP_V_M43A_GungnirS_3_##ArgCamo## \
	{ \
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderGungnirSmall,ExtraThighsShins) \
	}; \
	class TCP_V_M43A_GungnirL_1_##ArgCamo## \
	{ \
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderGungnirLarge,ExtraNone) \
	}; \
	class TCP_V_M43A_GungnirL_2_##ArgCamo## \
	{ \
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderGungnirLarge,ExtraThighs) \
	}; \
	class TCP_V_M43A_GungnirL_3_##ArgCamo## \
	{ \
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderGungnirLarge,ExtraThighsShins) \
	};
// end Macro_Zephyr_AAX_TCP_CBBAS_M43A

#define Macro_Zephyr_AAX_TCP_CBBAS_M43D(ArgCamo) \
	class TCP_V_M43D_Light_##ArgCamo## { \
		model = "Zephyr_AAX_TCP_CBBAS_M43D"; \
		Camo = #ArgCamo; \
		ShoulderArmor = "ShoulderNone"; \
		ExtraArmor = "ExtraNone"; \
	}; \
	class TCP_V_M43D_ODST_1_##ArgCamo## { \
		model = "Zephyr_AAX_TCP_CBBAS_M43D"; \
		Camo = #ArgCamo; \
		ShoulderArmor = "ShoulderOdst"; \
		ExtraArmor = "ExtraNone"; \
	}; \
	class TCP_V_M43D_ODST_2_##ArgCamo## { \
		model = "Zephyr_AAX_TCP_CBBAS_M43D"; \
		Camo = #ArgCamo; \
		ShoulderArmor = "ShoulderOdst"; \
		ExtraArmor = "ExtraThighs"; \
	}; \
	class TCP_V_M43D_ODST_3_##ArgCamo## { \
		model = "Zephyr_AAX_TCP_CBBAS_M43D"; \
		Camo = #ArgCamo; \
		ShoulderArmor = "ShoulderOdst"; \
		ExtraArmor = "ExtraThighsShins"; \
	}; \
	class TCP_V_M43D_ODST_4_##ArgCamo## { \
		model = "Zephyr_AAX_TCP_CBBAS_M43D"; \
		Camo = #ArgCamo; \
		ShoulderArmor = "ShoulderOdst"; \
		ExtraArmor = "ExtraThinShinsGauntlets"; \
	}; \
	class TCP_V_M43D_BREACHER_1_##ArgCamo## { \
		model = "Zephyr_AAX_TCP_CBBAS_M43D"; \
		Camo = #ArgCamo; \
		ShoulderArmor = "ShoulderBreacher"; \
		ExtraArmor = "ExtraNone"; \
	}; \
	class TCP_V_M43D_BREACHER_2_##ArgCamo## { \
		model = "Zephyr_AAX_TCP_CBBAS_M43D"; \
		Camo = #ArgCamo; \
		ShoulderArmor = "ShoulderBreacher"; \
		ExtraArmor = "ExtraThighs"; \
	}; \
	class TCP_V_M43D_BREACHER_3_##ArgCamo## { \
		model = "Zephyr_AAX_TCP_CBBAS_M43D"; \
		Camo = #ArgCamo; \
		ShoulderArmor = "ShoulderBreacher"; \
		ExtraArmor = "ExtraThighsShins"; \
	}; \
	class TCP_V_M43D_BREACHER_4_##ArgCamo## { \
		model = "Zephyr_AAX_TCP_CBBAS_M43D"; \
		Camo = #ArgCamo; \
		ShoulderArmor = "ShoulderBreacher"; \
		ExtraArmor = "ExtraThinShinsGauntlets"; \
	}; \
	class TCP_V_M43D_SHARPSHOOTER_1_##ArgCamo## { \
		model = "Zephyr_AAX_TCP_CBBAS_M43D"; \
		Camo = #ArgCamo; \
		ShoulderArmor = "ShoulderSharpshooter"; \
		ExtraArmor = "ExtraNone"; \
	}; \
	class TCP_V_M43D_SHARPSHOOTER_2_##ArgCamo## { \
		model = "Zephyr_AAX_TCP_CBBAS_M43D"; \
		Camo = #ArgCamo; \
		ShoulderArmor = "ShoulderSharpshooter"; \
		ExtraArmor = "ExtraThighs"; \
	}; \
	class TCP_V_M43D_SHARPSHOOTER_3_##ArgCamo## { \
		model = "Zephyr_AAX_TCP_CBBAS_M43D"; \
		Camo = #ArgCamo; \
		ShoulderArmor = "ShoulderSharpshooter"; \
		ExtraArmor = "ExtraThighsShins"; \
	}; \
	class TCP_V_M43D_SHARPSHOOTER_4_##ArgCamo## { \
		model = "Zephyr_AAX_TCP_CBBAS_M43D"; \
		Camo = #ArgCamo; \
		ShoulderArmor = "ShoulderSharpshooter"; \
		ExtraArmor = "ExtraThinShinsGauntlets"; \
	};
// End Macro_Zephyr_AAX_TCP_CBBAS_M43D


Macro_Zephyr_AAX_TCP_CBBAS_M43A(Black)
Macro_Zephyr_AAX_TCP_CBBAS_M43A(Brown)
Macro_Zephyr_AAX_TCP_CBBAS_M43A(Green)
Macro_Zephyr_AAX_TCP_CBBAS_M43A(Olive)
Macro_Zephyr_AAX_TCP_CBBAS_M43A(Tan)
Macro_Zephyr_AAX_TCP_CBBAS_M43A(White)
Macro_Zephyr_AAX_TCP_CBBAS_M43A(Woodland)

Macro_Zephyr_AAX_TCP_CBBAS_M43D(Black)
