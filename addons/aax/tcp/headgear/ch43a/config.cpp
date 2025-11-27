class CfgPatches
{
	class Zephyr_AAX_TCP_Headgear_CH43A
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - Headgear - CH43/A";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Army_Headgear_helmet_CH43A",
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class Zephyr_AAX_TCP_CH43A
		{
			label = "CH43/A Helmet";
			author = "Lupus590";
			options[] = {"Camo", };
			class Camo
			{
				label = "Camo";
				values[] =
				{
					"Black",
					"Brown",
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
		#define Macro_Zephyr_AAX_TCP_CH43A(ArgCamo) \
			class TCP_H_Helmet_CH43A_##ArgCamo## \
			{ \
				model = "Zephyr_AAX_TCP_CH43A"; \
				Camo = #ArgCamo; \
			};
		// end Macro_Zephyr_AAX_TCP_CH43A

		Macro_Zephyr_AAX_TCP_CH43A(Black)
		Macro_Zephyr_AAX_TCP_CH43A(Brown)
		Macro_Zephyr_AAX_TCP_CH43A(Green)
		Macro_Zephyr_AAX_TCP_CH43A(Olive)
		Macro_Zephyr_AAX_TCP_CH43A(Tan)
		Macro_Zephyr_AAX_TCP_CH43A(White)
	};
};
