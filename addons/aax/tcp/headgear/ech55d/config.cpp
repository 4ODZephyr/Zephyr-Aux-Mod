class CfgPatches
{
	class Zephyr_AAX_TCP_Headgear_ECH55D
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - Headgear - ECH55/D";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Marines_Headgear_helmet_ECH55D",
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class Zephyr_AAX_TCP_ECH55D
		{
			label = "ECH55/D Helmet";
			author = "Lupus590";
			options[] = {"Camo", "VisorColor", };
			class Camo
			{
				label = "Camo";
				values[] =
				{
					"Black",
				};
				changeingame = 0;
				alwaysSelectable = 1;
			};
			class VisorColor
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
		#define Macro_Zephyr_AAX_TCP_ECH55D(ArgCamo, ArgVisorColor) \
			class TCP_H_Helmet_ECH55D_##ArgCamo##_##ArgVisorColor## \
			{ \
				model = "Zephyr_AAX_TCP_ECH55D"; \
				Camo = #ArgCamo; \
				VisorColor = #ArgVisorColor; \
			};
		// end Macro_Zephyr_AAX_TCP_ECH55D

		#define Macro_Zephyr_AAX_TCP_ECH55D_AllForCamo(ArgCamo) \
			Macro_Zephyr_AAX_TCP_ECH55D(ArgCamo,Black) \
			Macro_Zephyr_AAX_TCP_ECH55D(ArgCamo,Blue) \
			Macro_Zephyr_AAX_TCP_ECH55D(ArgCamo,Gold) \
			Macro_Zephyr_AAX_TCP_ECH55D(ArgCamo,Red) \
			Macro_Zephyr_AAX_TCP_ECH55D(ArgCamo,Silver)
		// end Macro_Zephyr_AAX_TCP_ECH55D_AllForCamo

		Macro_Zephyr_AAX_TCP_ECH55D_AllForCamo(Black)
	};
};
