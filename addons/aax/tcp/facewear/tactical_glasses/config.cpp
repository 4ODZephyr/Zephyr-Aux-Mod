class CfgPatches
{
	class Zephyr_AAX_TCP_Facewear_TacticalGlasses
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - Facewear - Tactical Glasses";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Army_Facewear_tacticalGlasses",
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class CfgGlasses
	{
		class Zephyr_AAX_TCP_TacticalGlasses
		{
			label = "Tactical Glasses";
			author = "Lupus590";
			options[] = {"Color", };
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
		#define Macro_Zephyr_AAX_TCP_TacticalGlasses(ArgColor) \
			class TCP_G_TacticalGlasses_##ArgColor## \
			{ \
				model = "Zephyr_AAX_TCP_TacticalGlasses"; \
				Color = #ArgColor; \
			};
		// end Macro_Zephyr_AAX_TCP_TacticalGlasses

		Macro_Zephyr_AAX_TCP_TacticalGlasses(Black)
		Macro_Zephyr_AAX_TCP_TacticalGlasses(Blue)
		Macro_Zephyr_AAX_TCP_TacticalGlasses(Gold)
		Macro_Zephyr_AAX_TCP_TacticalGlasses(Red)
		Macro_Zephyr_AAX_TCP_TacticalGlasses(Silver)
		Macro_Zephyr_AAX_TCP_TacticalGlasses(Yellow)
	};
};
