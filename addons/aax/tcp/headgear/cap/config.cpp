class CfgPatches
{
	class Zephyr_AAX_TCP_Headgear_Cap
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - Headgear - Cap";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Army_Headgear_cap",
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class Zephyr_AAX_TCP_Cap
		{
			label = "Cap";
			author = "Lupus590";
			options[] = {"Camo", "Orientation", "Tactical", };
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
			class Orientation
			{
				label = "Orientation";
				values[] =
				{
					"OrientationForwards",
					"OrientationBackwards",
				};
				changeingame = 1;
				alwaysSelectable = 1;
				class OrientationForwards
				{
					label = "Forwards";
				   actionlabel = "Face hat forwards";
				};
				class OrientationBackwards
				{
					label = "Backwards";
				   actionlabel = "Face hat backwards";
				};
			};
			class Tactical
			{
				label = "Tactical";
				values[] =
				{
					"Yes",
					"No",
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
		#define Macro_Zephyr_AAX_TCP_Cap(ArgCamo) \
			class TCP_H_Cap_##ArgCamo## \
			{ \
				model = "Zephyr_AAX_TCP_Cap"; \
				Camo = #ArgCamo; \
				Orientation = "OrientationForwards"; \
				Tactical = "No"; \
			};\
			class TCP_H_Cap_Reversed_##ArgCamo## \
			{ \
				model = "Zephyr_AAX_TCP_Cap"; \
				Camo = #ArgCamo; \
				Orientation = "OrientationBackwards"; \
				Tactical = "No"; \
			};\
			class TCP_H_TacticalCap_##ArgCamo## \
			{ \
				model = "Zephyr_AAX_TCP_Cap"; \
				Camo = #ArgCamo; \
				Orientation = "OrientationForwards"; \
				Tactical = "Yes"; \
			};\
			class TCP_H_TacticalCap_Reversed_##ArgCamo## \
			{ \
				model = "Zephyr_AAX_TCP_Cap"; \
				Camo = #ArgCamo; \
				Orientation = "OrientationBackwards"; \
				Tactical = "Yes"; \
			};
		// end Macro_Zephyr_AAX_TCP_Cap

		Macro_Zephyr_AAX_TCP_Cap(Black)
		Macro_Zephyr_AAX_TCP_Cap(Gray)
		Macro_Zephyr_AAX_TCP_Cap(Green)
		Macro_Zephyr_AAX_TCP_Cap(Olive)
		Macro_Zephyr_AAX_TCP_Cap(Tan)
		Macro_Zephyr_AAX_TCP_Cap(White)
	};
};
