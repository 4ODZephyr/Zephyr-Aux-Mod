#define Macro_Zephyr_AAX_TCP_CBUU_TShirt_Body(ArgCamo, ArgShirt, ArgGloves, ArgPants) \
	model = "Zephyr_AAX_TCP_CBUU_TShirt"; \
	Camo = #ArgCamo; \
	Shirt = #ArgShirt; \
	Gloves = #ArgGloves; \
	Pants = #ArgPants;
// End Macro_Zephyr_AAX_TCP_CBUU_TShirt

#define Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(ArgCamo)\
	class TCP_U_B_CBUU_TShirt_Tucked_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_Body(ArgCamo,ShirtTucked,GlovesOff,PantsUnbloused)\
	};\
	class TCP_U_B_CBUU_TShirt_Tucked_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_Body(ArgCamo,ShirtTucked,GlovesOff,PantsBloused)\
	};\
	class TCP_U_B_CBUU_TShirt_Tucked_Gloves_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_Body(ArgCamo,ShirtTucked,GlovesOn,PantsUnbloused)\
	};\
	class TCP_U_B_CBUU_TShirt_Tucked_Gloves_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_Body(ArgCamo,ShirtTucked,GlovesOn,PantsBloused)\
	};\
	class TCP_U_B_CBUU_TShirt_Untucked_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_Body(ArgCamo,ShirtUntucked,GlovesOff,PantsUnbloused)\
	};\
	class TCP_U_B_CBUU_TShirt_Untucked_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_Body(ArgCamo,ShirtUntucked,GlovesOff,PantsBloused)\
	};\
	class TCP_U_B_CBUU_TShirt_Untucked_Gloves_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_Body(ArgCamo,ShirtUntucked,GlovesOn,PantsUnbloused)\
	};\
	class TCP_U_B_CBUU_TShirt_Untucked_Gloves_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_Body(ArgCamo,ShirtUntucked,GlovesOn,PantsBloused)\
	};
// End Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo

#define Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo, ArgSleeves, ArgGloves, ArgPants, ArgCollar) \
	model = "Zephyr_AAX_TCP_CBUU_TacShirt"; \
	Camo = #ArgCamo; \
	Sleeves = #ArgSleeves; \
	Gloves = #ArgGloves; \
	Pants = #ArgPants; \
	Collar = #ArgCollar;
// End Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body

#define Macro_Zephyr_AAX_TCP_CBUU_TacShirt_AllForCamo(ArgCamo)\
	class TCP_U_B_CBUU_TacShirt_Full_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesUnrolled,GlovesOff,PantsUnbloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_Full_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesUnrolled,GlovesOff,PantsBloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_Full_Gloves_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesUnrolled,GlovesOn,PantsUnbloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_Full_Gloves_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesUnrolled,GlovesOn,PantsBloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_Full_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesUnrolled,GlovesOff,PantsUnbloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_Full_Bloused_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesUnrolled,GlovesOff,PantsBloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_Full_Gloves_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesUnrolled,GlovesOn,PantsUnbloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_Full_Gloves_Bloused_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesUnrolled,GlovesOn,PantsBloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_QuarterRoll_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesQuarterRoll,GlovesOff,PantsUnbloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_QuarterRoll_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesQuarterRoll,GlovesOff,PantsBloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_QuarterRoll_Gloves_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesQuarterRoll,GlovesOn,PantsUnbloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_QuarterRoll_Gloves_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesQuarterRoll,GlovesOn,PantsBloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_QuarterRoll_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesQuarterRoll,GlovesOff,PantsUnbloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_QuarterRoll_Bloused_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesQuarterRoll,GlovesOff,PantsBloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_QuarterRoll_Gloves_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesQuarterRoll,GlovesOn,PantsUnbloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_QuarterRoll_Gloves_Bloused_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesQuarterRoll,GlovesOn,PantsBloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_HalfRoll_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesHalfRoll,GlovesOff,PantsUnbloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_HalfRoll_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesHalfRoll,GlovesOff,PantsBloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_HalfRoll_Gloves_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesHalfRoll,GlovesOn,PantsUnbloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_HalfRoll_Gloves_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesHalfRoll,GlovesOn,PantsBloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_HalfRoll_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesHalfRoll,GlovesOff,PantsUnbloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_HalfRoll_Bloused_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesHalfRoll,GlovesOff,PantsBloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_HalfRoll_Gloves_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesHalfRoll,GlovesOn,PantsUnbloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_HalfRoll_Gloves_Bloused_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesHalfRoll,GlovesOn,PantsBloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_SlimSleeve_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesSlim,GlovesOff,PantsUnbloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_SlimSleeve_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesSlim,GlovesOff,PantsBloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesSlim,GlovesOn,PantsUnbloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesSlim,GlovesOn,PantsBloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_SlimSleeve_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesSlim,GlovesOff,PantsUnbloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_SlimSleeve_Bloused_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesSlim,GlovesOff,PantsBloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesSlim,GlovesOn,PantsUnbloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Bloused_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,SleevesSlim,GlovesOn,PantsBloused,CollarUnzipped)\
	};
// End Macro_Zephyr_AAX_TCP_CBUU_TacShirt_AllForCamo


#define Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo, ArgSleeves, ArgGloves, ArgPants, ArgCollar) \
	model = "Zephyr_AAX_TCP_CBUU_FieldTop"; \
	Camo = #ArgCamo; \
	Sleeves = #ArgSleeves; \
	Gloves = #ArgGloves; \
	Pants = #ArgPants; \
	Collar = #ArgCollar;
// End Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body

#define Macro_Zephyr_AAX_TCP_CBUU_FieldTop_AllForCamo(ArgCamo)\
	class TCP_U_B_CBUU_FieldTop_Full_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesUnrolled,GlovesOff,PantsUnbloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_Full_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesUnrolled,GlovesOff,PantsBloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_Full_Gloves_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesUnrolled,GlovesOn,PantsUnbloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_Full_Gloves_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesUnrolled,GlovesOn,PantsBloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_Full_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesUnrolled,GlovesOff,PantsUnbloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_Full_Bloused_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesUnrolled,GlovesOff,PantsBloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_Full_Gloves_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesUnrolled,GlovesOn,PantsUnbloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_Full_Gloves_Bloused_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesUnrolled,GlovesOn,PantsBloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_QuarterRoll_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesQuarterRoll,GlovesOff,PantsUnbloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_QuarterRoll_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesQuarterRoll,GlovesOff,PantsBloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesQuarterRoll,GlovesOn,PantsUnbloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesQuarterRoll,GlovesOn,PantsBloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesQuarterRoll,GlovesOff,PantsUnbloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_QuarterRoll_Bloused_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesQuarterRoll,GlovesOff,PantsBloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesQuarterRoll,GlovesOn,PantsUnbloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Bloused_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesQuarterRoll,GlovesOn,PantsBloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_HalfRoll_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesHalfRoll,GlovesOff,PantsUnbloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_HalfRoll_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesHalfRoll,GlovesOff,PantsBloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_HalfRoll_Gloves_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesHalfRoll,GlovesOn,PantsUnbloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_HalfRoll_Gloves_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesHalfRoll,GlovesOn,PantsBloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_HalfRoll_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesHalfRoll,GlovesOff,PantsUnbloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_HalfRoll_Bloused_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesHalfRoll,GlovesOff,PantsBloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_HalfRoll_Gloves_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesHalfRoll,GlovesOn,PantsUnbloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_HalfRoll_Gloves_Bloused_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesHalfRoll,GlovesOn,PantsBloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_SlimSleeve_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesSlim,GlovesOff,PantsUnbloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_SlimSleeve_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesSlim,GlovesOff,PantsBloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesSlim,GlovesOn,PantsUnbloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesSlim,GlovesOn,PantsBloused,CollarZipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_SlimSleeve_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesSlim,GlovesOff,PantsUnbloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_SlimSleeve_Bloused_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesSlim,GlovesOff,PantsBloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesSlim,GlovesOn,PantsUnbloused,CollarUnzipped)\
	};\
	class TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Unzipped_##ArgCamo##\
	{\
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesSlim,GlovesOn,PantsBloused,CollarUnzipped)\
	};
// End Macro_Zephyr_AAX_TCP_CBUU_FieldTop_AllForCamo

#define Macro_Zephyr_AAX_TCP_CBUU_All(ArgCamo)\
	Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(ArgCamo)\
	Macro_Zephyr_AAX_TCP_CBUU_TacShirt_AllForCamo(ArgCamo)\
	Macro_Zephyr_AAX_TCP_CBUU_FieldTop_AllForCamo(ArgCamo)
// End Macro_Zephyr_AAX_TCP_CBUU_All

Macro_Zephyr_AAX_TCP_CBUU_All(Arctic)
Macro_Zephyr_AAX_TCP_CBUU_All(Arid)
Macro_Zephyr_AAX_TCP_CBUU_All(Black)
Macro_Zephyr_AAX_TCP_CBUU_All(Gray)
Macro_Zephyr_AAX_TCP_CBUU_All(Green)
Macro_Zephyr_AAX_TCP_CBUU_All(Olive)
Macro_Zephyr_AAX_TCP_CBUU_All(Tan)
Macro_Zephyr_AAX_TCP_CBUU_All(Tropic)
Macro_Zephyr_AAX_TCP_CBUU_All(Tundra)
Macro_Zephyr_AAX_TCP_CBUU_All(Urban)
Macro_Zephyr_AAX_TCP_CBUU_All(White)
Macro_Zephyr_AAX_TCP_CBUU_All(Woodland)
