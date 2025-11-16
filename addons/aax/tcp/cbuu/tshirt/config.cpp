class CfgPatches
{
	class Zephyr_AAX_TCP_CBUU_TShirt
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - CBUU - TShirt";
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
		class Zephyr_AAX_TCP_CBUU_TShirt
		{
			label = "CBUU TShirt";
			author = "Lupus590";
			options[] = {"Camo", "Shirt", "Gloves", "Pants", };
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
			class Shirt
			{
				label = "Shirt";
				values[] = {"ShirtTucked", "ShirtUntucked",};
				changeingame = 1;
				alwaysSelectable = 1;
				class ShirtTucked
				{
					label = "Tucked";
					actionlabel = "Tuck in shirt";
				};
				class ShirtUntucked
				{
					label = "Untucked";
					actionlabel = "Untuck shirt";
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
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		#define Macro_Zephyr_AAX_TCP_CBUU_TShirt_Body(ArgCamo, ArgShirt, ArgGloves, ArgPants) \
			model = "Zephyr_AAX_TCP_CBUU_TShirt"; \
			Camo = #ArgCamo; \
			Shirt = #ArgShirt; \
			Gloves = #ArgGloves; \
			Pants = #ArgPants;
		// end Macro_Zephyr_AAX_TCP_CBUU_TShirt

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
		// end Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo

		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Arctic)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Arid)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Black)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Gray)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Green)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Olive)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Tan)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Tropic)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Tundra)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Urban)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(White)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Woodland)
	};
};
