class CfgPatches
{
	class Zephyr_AAX_TCP_Headgear_PatrolCap
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - Headgear - Patrol Cap";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Army_Headgear_patrolCap",
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class Zephyr_AAX_TCP_PatrolCap
		{
			label = "Patrol Cap";
			author = "Lupus590";
			options[] = {"Camo", };
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
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		#define Macro_Zephyr_AAX_TCP_PatrolCap(ArgCamo) \
			class TCP_H_PatrolCap_##ArgCamo## \
			{ \
				model = "Zephyr_AAX_TCP_PatrolCap"; \
				Camo = #ArgCamo; \
			};
		// end Macro_Zephyr_AAX_TCP_PatrolCap

		Macro_Zephyr_AAX_TCP_PatrolCap(Arctic)
		Macro_Zephyr_AAX_TCP_PatrolCap(Arid)
		Macro_Zephyr_AAX_TCP_PatrolCap(Black)
		Macro_Zephyr_AAX_TCP_PatrolCap(Gray)
		Macro_Zephyr_AAX_TCP_PatrolCap(Green)
		Macro_Zephyr_AAX_TCP_PatrolCap(Olive)
		Macro_Zephyr_AAX_TCP_PatrolCap(Tan)
		Macro_Zephyr_AAX_TCP_PatrolCap(Tropic)
		Macro_Zephyr_AAX_TCP_PatrolCap(Tundra)
		Macro_Zephyr_AAX_TCP_PatrolCap(Urban)
		Macro_Zephyr_AAX_TCP_PatrolCap(White)
		Macro_Zephyr_AAX_TCP_PatrolCap(Woodland)
	};
};
