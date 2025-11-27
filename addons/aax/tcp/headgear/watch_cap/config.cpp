class CfgPatches
{
	class Zephyr_AAX_TCP_Headgear_WatchCap
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - Headgear - Watch Cap";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Army_Headgear_watchCap",
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class Zephyr_AAX_TCP_WatchCap
		{
			label = "Watch Cap";
			author = "Lupus590";
			options[] = {"Camo", };
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
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		#define Macro_Zephyr_AAX_TCP_WatchCap(ArgCamo) \
			class TCP_H_WatchCap_##ArgCamo## \
			{ \
				model = "Zephyr_AAX_TCP_WatchCap"; \
				Camo = #ArgCamo; \
			};
		// end Macro_Zephyr_AAX_TCP_WatchCap

		Macro_Zephyr_AAX_TCP_WatchCap(Black)
		Macro_Zephyr_AAX_TCP_WatchCap(Gray)
		Macro_Zephyr_AAX_TCP_WatchCap(Green)
		Macro_Zephyr_AAX_TCP_WatchCap(Olive)
		Macro_Zephyr_AAX_TCP_WatchCap(Tan)
		Macro_Zephyr_AAX_TCP_WatchCap(White)
	};
};
