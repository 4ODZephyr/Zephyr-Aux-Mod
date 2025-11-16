class CfgPatches
{
	class Zephyr_AAX_TCP_Headgear_UtilityCover
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - Headgear - Utility Cover";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Marines_Headgear_utilityCover",
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class Zephyr_AAX_TCP_UtilityCover
		{
			label = "Utility Cover";
			author = "Lupus590";
			options[] = {"Camo", };
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
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
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
	};
};
