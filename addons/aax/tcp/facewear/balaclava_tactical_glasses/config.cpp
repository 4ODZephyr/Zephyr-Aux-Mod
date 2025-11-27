class CfgPatches
{
	class Zephyr_AAX_TCP_Facewear_BalaclavaTacticalGlasses
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - Facewear - Balaclava Tactical Glasses";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Army_Facewear_balaclavaTacticalGlasses",
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class CfgGlasses
	{
		class Zephyr_AAX_TCP_BalaclavaTacticalGlasses
		{
			label = "Balaclava with Tactical Glasses";
			author = "Lupus590";
			options[] = {"Camo", "Color", };
			class Camo
			{
				label = "Camo";
				values[] =
				{
					"Black",
					"Gray",
					"Green",
					"Olive",
					"Tan",
					"White",
				};
				changeingame = 0;
				alwaysSelectable = 1;
			};
			class Color
			{
				label = "Color";
				values[] =
				{
					"Black",
					"Blue",
					"Gold",
					"Red",
					"Silver",
					"Yellow",
				};
				changeingame = 0;
				alwaysSelectable = 1;
			};
		};
	};
};
class XtdGearInfos
{
	class CfgGlasses
	{
		#define Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses(ArgCamo, ArgColor) \
			class TCP_G_BalaclavaTacticalGlasses_##ArgCamo##_##ArgColor## \
			{ \
				model = "Zephyr_AAX_TCP_BalaclavaTacticalGlasses"; \
				Camo = #ArgCamo; \
				Color = #ArgColor; \
			};
		// end Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses

		#define Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses_AllForCamo(ArgCamo) \
			Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses(ArgCamo,Black) \
			Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses(ArgCamo,Blue) \
			Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses(ArgCamo,Gold) \
			Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses(ArgCamo,Red) \
			Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses(ArgCamo,Silver) \
			Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses(ArgCamo,Yellow)
		// end Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses_AllForCamo

		Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses_AllForCamo(Black)
		Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses_AllForCamo(Gray)
		Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses_AllForCamo(Green)
		Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses_AllForCamo(Olive)
		Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses_AllForCamo(Tan)
		Macro_Zephyr_AAX_TCP_BalaclavaTacticalGlasses_AllForCamo(White)
	};
};
