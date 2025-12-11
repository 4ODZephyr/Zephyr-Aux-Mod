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
				values[] = {"Unrolled", "HalfRoll", "QuarterRoll", "Slim", };
				changeingame = 1;
				alwaysSelectable = 1;
				class Unrolled
				{
					actionlabel = "Unroll sleeves";
				};
				class HalfRoll
				{
					label = "Half Roll";
					actionlabel = "Roll up sleeves halfway";
				};
				class QuarterRoll
				{
					label = "Quarter Roll";
					actionlabel = "Roll up sleeves to quarter way";
				};
				class Slim
				{
					actionlabel = "Magically get slimmer sleeves, I don't know";
				};
			};
			class Gloves
			{
				label = "Gloves";
				values[] = {"On", "Off", };
				changeingame = 1;
				alwaysSelectable = 1;
				class On
				{
					actionlabel = "Put on gloves";
				};
				class Off
				{
					actionlabel = "Remove gloves";
				};
			};
			class Pants
			{
				label = "Pants";
				values[] = {"Bloused", "Unbloused", };
				changeingame = 1;
				alwaysSelectable = 1;
				class Bloused
				{
					actionlabel = "Tuck pants into boots";
				};
				class Unbloused
				{
					actionlabel = "Untuck pants from boots";
				};
			};
			class Collar
			{
				label = "Collar";
				values[] = {"Zipped", "Unzipped", };
				changeingame = 1;
				alwaysSelectable = 1;
				class Zipped
				{
					actionlabel = "Zip up collar";
				};
				class Unzipped
				{
					actionlabel = "Unzip collar";
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
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,Unrolled,Off,Unbloused,Zipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_Full_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,Unrolled,Off,Bloused,Zipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_Full_Gloves_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,Unrolled,On,Unbloused,Zipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_Full_Gloves_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,Unrolled,On,Bloused,Zipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_Full_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,Unrolled,Off,Unbloused,Unzipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_Full_Bloused_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,Unrolled,Off,Bloused,Unzipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_Full_Gloves_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,Unrolled,On,Unbloused,Unzipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_Full_Gloves_Bloused_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,Unrolled,On,Bloused,Unzipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_QuarterRoll_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,QuarterRoll,Off,Unbloused,Zipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_QuarterRoll_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,QuarterRoll,Off,Bloused,Zipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_QuarterRoll_Gloves_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,QuarterRoll,On,Unbloused,Zipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_QuarterRoll_Gloves_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,QuarterRoll,On,Bloused,Zipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_QuarterRoll_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,QuarterRoll,Off,Unbloused,Unzipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_QuarterRoll_Bloused_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,QuarterRoll,Off,Bloused,Unzipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_QuarterRoll_Gloves_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,QuarterRoll,On,Unbloused,Unzipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_QuarterRoll_Gloves_Bloused_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,QuarterRoll,On,Bloused,Unzipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_HalfRoll_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,HalfRoll,Off,Unbloused,Zipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_HalfRoll_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,HalfRoll,Off,Bloused,Zipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_HalfRoll_Gloves_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,HalfRoll,On,Unbloused,Zipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_HalfRoll_Gloves_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,HalfRoll,On,Bloused,Zipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_HalfRoll_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,HalfRoll,Off,Unbloused,Unzipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_HalfRoll_Bloused_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,HalfRoll,Off,Bloused,Unzipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_HalfRoll_Gloves_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,HalfRoll,On,Unbloused,Unzipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_HalfRoll_Gloves_Bloused_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,HalfRoll,On,Bloused,Unzipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_SlimSleeve_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,Slim,Off,Unbloused,Zipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_SlimSleeve_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,Slim,Off,Bloused,Zipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,Slim,On,Unbloused,Zipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,Slim,On,Bloused,Zipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_SlimSleeve_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,Slim,Off,Unbloused,Unzipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_SlimSleeve_Bloused_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,Slim,Off,Bloused,Unzipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,Slim,On,Unbloused,Unzipped)\
			};\
			class TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Bloused_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TacShirt_Body(ArgCamo,Slim,On,Bloused,Unzipped)\
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
