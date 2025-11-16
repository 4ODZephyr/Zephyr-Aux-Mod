class CfgPatches
{
	class Zephyr_AAX_TCP_Headgear_Beret
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - Headgear - Beret";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Army_Headgear_beret",
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class Zephyr_AAX_TCP_Beret
		{
			label = "Beret";
			author = "Lupus590";
			options[] = {"Camo", };
			class Camo
			{
				label = "Camo";
				values[] =
				{
					"Black",
					"Blue",
					"Green",
					"Red",
					"Tan",
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
		#define Macro_Zephyr_AAX_TCP_Beret(ArgCamo) \
			class TCP_H_Beret_##ArgCamo## \
			{ \
				model = "Zephyr_AAX_TCP_Beret"; \
				Camo = #ArgCamo; \
			};
		// end Macro_Zephyr_AAX_TCP_Beret

		Macro_Zephyr_AAX_TCP_Beret(Black)
		Macro_Zephyr_AAX_TCP_Beret(Blue)
		Macro_Zephyr_AAX_TCP_Beret(Green)
		Macro_Zephyr_AAX_TCP_Beret(Red)
		Macro_Zephyr_AAX_TCP_Beret(Tan)

	};
};
