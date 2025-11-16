class CfgPatches
{
	class Zephyr_AAX_TCP_Headgear_ECH35J
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - Headgear - ECH35/J";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Army_Headgear_helmet_ECH35J",
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class Zephyr_AAX_TCP_ECH35J
		{
			label = "ECH35/J Helmet";
			author = "Lupus590";
			options[] = {"Camo", "Color", };
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
			class Color
			{
				label = "Visor Color";
				values[] =
				{
					"Black",
					"Blue",
					"Gold",
					"Red",
					"Silver",
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
		#define Macro_Zephyr_AAX_TCP_ECH35J(ArgCamo, ArgColor) \
			class TCP_H_Helmet_ECH35J_##ArgCamo##_##ArgColor## \
			{ \
				model = "Zephyr_AAX_TCP_ECH35J"; \
				Camo = #ArgCamo; \
				Color = #ArgColor; \
			};
		// end Macro_Zephyr_AAX_TCP_ECH35J

		#define Macro_Zephyr_AAX_TCP_ECH35J_AllForCamo(ArgCamo) \
			Macro_Zephyr_AAX_TCP_ECH35J(ArgCamo,Black) \
			Macro_Zephyr_AAX_TCP_ECH35J(ArgCamo,Blue) \
			Macro_Zephyr_AAX_TCP_ECH35J(ArgCamo,Gold) \
			Macro_Zephyr_AAX_TCP_ECH35J(ArgCamo,Red) \
			Macro_Zephyr_AAX_TCP_ECH35J(ArgCamo,Silver)
		// end Macro_Zephyr_AAX_TCP_ECH35J_AllForCamo

		Macro_Zephyr_AAX_TCP_ECH35J_AllForCamo(Black)
		Macro_Zephyr_AAX_TCP_ECH35J_AllForCamo(Brown)
		Macro_Zephyr_AAX_TCP_ECH35J_AllForCamo(Green)
		Macro_Zephyr_AAX_TCP_ECH35J_AllForCamo(Olive)
		Macro_Zephyr_AAX_TCP_ECH35J_AllForCamo(Tan)
		Macro_Zephyr_AAX_TCP_ECH35J_AllForCamo(White)
	};
};
