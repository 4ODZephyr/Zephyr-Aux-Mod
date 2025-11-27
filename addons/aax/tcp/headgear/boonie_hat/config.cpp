class CfgPatches
{
	class Zephyr_AAX_TCP_Headgear_BoonieHat
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - Headgear - Boonie Hat";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Army_Headgear_boonieHat",
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class Zephyr_AAX_TCP_BoonieHat
		{
			label = "Boonie Hat";
			author = "Lupus590";
			options[] = {"Camo", "Fold", };
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
			class Fold
			{
				label = "Brim Fold";
				values[] =
				{
					"None",
					"Left",
					"Right",
					"Both",
				};
				changeingame = 1;
				alwaysSelectable = 1;
				class None
				{
					label = "Unfolded";
					actionlabel = "Unfold hat";
				};
				class Left
				{
					label = "Left Folded";
					actionlabel = "Fold hat's left brim";
				};
				class Right
				{
					label = "Right Folded";
					actionlabel = "Fold hat's right brim";
				};
				class Both
				{
					label = "Both Folded";
					actionlabel = "Fold both brims of hat";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		#define Macro_Zephyr_AAX_TCP_BoonieHat(ArgCamo) \
			class TCP_H_boonieHat_##ArgCamo## \
			{ \
				model = "Zephyr_AAX_TCP_BoonieHat"; \
				Camo = #ArgCamo; \
				Fold = "None"; \
			};\
			class TCP_H_boonieHat_Folded_##ArgCamo## \
			{ \
				model = "Zephyr_AAX_TCP_BoonieHat"; \
				Camo = #ArgCamo; \
				Fold = "Both"; \
			};\
			class TCP_H_boonieHat_Folded_Left_##ArgCamo## \
			{ \
				model = "Zephyr_AAX_TCP_BoonieHat"; \
				Camo = #ArgCamo; \
				Fold = "Left"; \
			};\
			class TCP_H_boonieHat_Folded_Right_##ArgCamo## \
			{ \
				model = "Zephyr_AAX_TCP_BoonieHat"; \
				Camo = #ArgCamo; \
				Fold = "Right"; \
			};
		// end Macro_Zephyr_AAX_TCP_BoonieHat

		Macro_Zephyr_AAX_TCP_BoonieHat(Arctic)
		Macro_Zephyr_AAX_TCP_BoonieHat(Arid)
		Macro_Zephyr_AAX_TCP_BoonieHat(Black)
		Macro_Zephyr_AAX_TCP_BoonieHat(Gray)
		Macro_Zephyr_AAX_TCP_BoonieHat(Green)
		Macro_Zephyr_AAX_TCP_BoonieHat(Olive)
		Macro_Zephyr_AAX_TCP_BoonieHat(Tan)
		Macro_Zephyr_AAX_TCP_BoonieHat(Tropic)
		Macro_Zephyr_AAX_TCP_BoonieHat(Tundra)
		Macro_Zephyr_AAX_TCP_BoonieHat(Urban)
		Macro_Zephyr_AAX_TCP_BoonieHat(White)
		Macro_Zephyr_AAX_TCP_BoonieHat(Woodland)
	};
};
