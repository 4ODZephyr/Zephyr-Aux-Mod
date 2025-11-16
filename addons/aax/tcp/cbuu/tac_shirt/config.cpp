class CfgPatches
{
	class Zephyr_AAX_TCP_CBUU_TacShirt
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - CBUU - Tac Shirt";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Army_Uniforms_CBUU",
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class Zephyr_AAX_TCP_CBUU_TacShirt
		{
			label = "CBUU Tac-Shirt";
			author = "Lupus590";
			options[] = {"Camo", "Sleeves", "Gloves", "Pants", "Collar", };
			class Camo
			{
				label = "Camo";
				values[] =
				{
					"Arctic",
					"Arid",
					"Black",
					"Gray",
					"Green",
					"Olive",
					"Tan",
					"Tropic",
					"Tundra",
					"Urban",
					"White",
					"Woodland",
				};
				changeingame = 0;
				alwaysSelectable = 1;
			};
			class Sleeves
			{
				label = "Sleeves";
				values[] = {"SleevesUnrolled", "SleevesHalfRoll", "SleevesQuarterRoll", "SleevesSlim"};
				changeingame = 1;
				alwaysSelectable = 1;
				class SleevesUnrolled
				{
					label = "Unrolled";
					actionlabel = "Unroll sleeves";
				};
				class SleevesHalfRoll
				{
					label = "Half Roll";
					actionlabel = "Roll up sleeves halfway";
				};
				class SleevesQuarterRoll
				{
					label = "Quarter Roll";
					actionlabel = "Roll up sleeves to quarter way";
				};
				class SleevesSlim
				{
					label = "Slim";
					actionlabel = "Magically get slimmer sleeves, I don't know";
				};
			};
			class Gloves
			{
				label = "Gloves";
				values[] = {"GlovesOn", "GlovesOff"};
				changeingame = 1;
				alwaysSelectable = 1;
				class GlovesOn
				{
					label = "On";
					actionlabel = "Put on gloves";
				};
				class GlovesOff
				{
					label = "Off";
					actionlabel = "Remove gloves";
				};
			};
			class Pants
			{
				label = "Pants";
				values[] = {"PantsBloused", "PantsUnbloused"};
				changeingame = 1;
				alwaysSelectable = 1;
				class PantsBloused
				{
					label = "Bloused";
					actionlabel = "Tuck pants into boots";
				};
				class PantsUnbloused
				{
					label = "Unbloused";
					actionlabel = "Untuck pants from boots";
				};
			};
			class Collar
			{
				label = "Collar";
				values[] = {"CollarZipped", "CollarUnzipped"};
				changeingame = 1;
				alwaysSelectable = 1;
				class CollarZipped
				{
					label = "Zipped Up";
					actionlabel = "Zip up collar";
				};
				class CollarUnzipped
				{
					label = "Unzipped";
					actionlabel = "Unzip Collar";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		#define Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo, ArgSleeves, ArgGloves, ArgPants, ArgCollar) \
			model = "Zephyr_AAX_TCP_CBUU_TacShirt"; \
			Camo = #ArgCamo; \
			Sleeves = #ArgSleeves; \
			Gloves = #ArgGloves; \
			Pants = #ArgPants; \
			Collar = #ArgCollar;
		// end Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body

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
		// end Macro_Zephyr_AAX_TCP_CBUU_TacShirt_AllForCamo

		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_AllForCamo(Arctic)
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_AllForCamo(Arid)
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_AllForCamo(Black)
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_AllForCamo(Gray)
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_AllForCamo(Green)
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_AllForCamo(Olive)
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_AllForCamo(Tan)
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_AllForCamo(Tropic)
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_AllForCamo(Tundra)
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_AllForCamo(Urban)
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_AllForCamo(White)
		Macro_Zephyr_AAX_TCP_CBUU_TacShirt_AllForCamo(Woodland)
	};
};
