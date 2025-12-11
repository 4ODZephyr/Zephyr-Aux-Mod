class CfgPatches
{
	class Zephyr_AAX_TCP_Headgear_UtilityCap
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - Headgear - Utility Cap";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Army_Headgear_utilityCap",
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class Zephyr_AAX_TCP_UtilityCap
		{
			label = "Utility Cap";
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
		#define Macro_Zephyr_AAX_TCP_UtilityCap(ArgCamo) \
			class TCP_H_UtilityCap_##ArgCamo## \
			{ \
				model = "Zephyr_AAX_TCP_UtilityCap"; \
				Camo = #ArgCamo; \
			};
		// end Macro_Zephyr_AAX_TCP_UtilityCap

		Macro_Zephyr_AAX_TCP_UtilityCap(Black)
		Macro_Zephyr_AAX_TCP_UtilityCap(Gray)
		Macro_Zephyr_AAX_TCP_UtilityCap(Green)
		Macro_Zephyr_AAX_TCP_UtilityCap(Olive)
		Macro_Zephyr_AAX_TCP_UtilityCap(Tan)
		Macro_Zephyr_AAX_TCP_UtilityCap(White)
	};
};
