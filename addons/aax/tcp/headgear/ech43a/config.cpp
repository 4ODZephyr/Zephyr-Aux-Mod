class CfgPatches
{
	class Zephyr_AAX_TCP_Headgear_ECH43A
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - Headgear - ECH43/A";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Army_Headgear_helmet_ECH43A",
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class Zephyr_AAX_TCP_ECH43A
		{
			label = "ECH43/A Helmet";
			author = "Lupus590";
			options[] = {"Camo", "VisorColor", };
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
	class CfgWeapons
	{
		#define Macro_Zephyr_AAX_TCP_ECH43A(ArgCamo, ArgVisorColor) \
			class TCP_H_Helmet_ECH43A_##ArgCamo##_##ArgVisorColor## \
			{ \
				model = "Zephyr_AAX_TCP_ECH43A"; \
				Camo = #ArgCamo; \
				VisorColor = #ArgVisorColor; \
			};
		// end Macro_Zephyr_AAX_TCP_ECH43A

		#define Macro_Zephyr_AAX_TCP_ECH43A_AllForCamo(ArgCamo) \
			Macro_Zephyr_AAX_TCP_ECH43A(ArgCamo,Black) \
			Macro_Zephyr_AAX_TCP_ECH43A(ArgCamo,Blue) \
			Macro_Zephyr_AAX_TCP_ECH43A(ArgCamo,Gold) \
			Macro_Zephyr_AAX_TCP_ECH43A(ArgCamo,Red) \
			Macro_Zephyr_AAX_TCP_ECH43A(ArgCamo,Silver) \
			Macro_Zephyr_AAX_TCP_ECH43A(ArgCamo,Yellow)
		// end Macro_Zephyr_AAX_TCP_ECH43A_AllForCamo

		Macro_Zephyr_AAX_TCP_ECH43A_AllForCamo(Black)
		Macro_Zephyr_AAX_TCP_ECH43A_AllForCamo(Brown)
		Macro_Zephyr_AAX_TCP_ECH43A_AllForCamo(Green)
		Macro_Zephyr_AAX_TCP_ECH43A_AllForCamo(Olive)
		Macro_Zephyr_AAX_TCP_ECH43A_AllForCamo(Tan)
		Macro_Zephyr_AAX_TCP_ECH43A_AllForCamo(White)
	};
};
