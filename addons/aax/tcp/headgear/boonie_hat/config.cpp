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
					"FoldNone",
					"FoldLeft",
					"FoldRight",
					"FoldBoth",
				};
				changeingame = 1;
				alwaysSelectable = 1;
				class FoldNone
				{
					label = "Unfolded";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					actionlabel = "Unfold hat"; // If can changeingame, action label in ACE menu
					// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
					// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
				};
				class FoldLeft
				{
					label = "Left Folded";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					actionlabel = "Fold hat's left brim"; // If can changeingame, action label in ACE menu
					// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
					// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
				};
				class FoldRight
				{
					label = "Right Folded";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					actionlabel = "Fold hat's right brim"; // If can changeingame, action label in ACE menu
					// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
					// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
				};
				class FoldBoth
				{
					label = "Both Folded";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					actionlabel = "Fold both brims of hat"; // If can changeingame, action label in ACE menu
					// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
					// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
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
				Fold = "FoldNone"; \
			};\
			class TCP_H_boonieHat_Folded_##ArgCamo## \
			{ \
				model = "Zephyr_AAX_TCP_BoonieHat"; \
				Camo = #ArgCamo; \
				Fold = "FoldBoth"; \
			};\
			class TCP_H_boonieHat_Folded_Left_##ArgCamo## \
			{ \
				model = "Zephyr_AAX_TCP_BoonieHat"; \
				Camo = #ArgCamo; \
				Fold = "FoldLeft"; \
			};\
			class TCP_H_boonieHat_Folded_Right_##ArgCamo## \
			{ \
				model = "Zephyr_AAX_TCP_BoonieHat"; \
				Camo = #ArgCamo; \
				Fold = "FoldRight"; \
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
