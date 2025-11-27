class CfgPatches
{
	class Zephyr_AAX_TCP_Facewear_Balaclava
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - Facewear - Balaclava";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Army_Facewear_balaclava",
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class CfgGlasses
	{
		class Zephyr_AAX_TCP_Balaclava
		{
			label = "Balaclava";
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
	class CfgGlasses
	{
		#define Macro_Zephyr_AAX_TCP_Balaclava(ArgCamo) \
			class TCP_G_Balaclava_##ArgCamo## \
			{ \
				model = "Zephyr_AAX_TCP_Balaclava"; \
				Camo = #ArgCamo; \
			};
		// end Macro_Zephyr_AAX_TCP_Balaclava

		Macro_Zephyr_AAX_TCP_Balaclava(Black)
		Macro_Zephyr_AAX_TCP_Balaclava(Gray)
		Macro_Zephyr_AAX_TCP_Balaclava(Green)
		Macro_Zephyr_AAX_TCP_Balaclava(Olive)
		Macro_Zephyr_AAX_TCP_Balaclava(Tan)
		Macro_Zephyr_AAX_TCP_Balaclava(White)
	};
};
