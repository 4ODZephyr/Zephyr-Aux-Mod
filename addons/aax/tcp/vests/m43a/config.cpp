class CfgPatches
{
	class Zephyr_AAX_TCP_Vest_M43A
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - Vests - M43A";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Army_Vests_M43A",
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class Zephyr_AAX_TCP_CBBAS_M43A
		{
			label = "M43/A CBBAS";
			author = "Lupus590";
			options[] = {"Camo", "ShoulderArmor", "ExtraArmor", };
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
					"Woodland",
				};
				changeingame = 0;
				alwaysSelectable = 1;
			};
			class ShoulderArmor
			{
				label = "Shoulder Armor";
				values[] = {"ShoulderNone", "ShoulderBaseSecurity", "ShoulderGungnirLarge", "ShoulderGungnirSmall", };
				changeingame = 0; // 1 if value can be changed in game via ACE menu
				alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
				// changedelay = 2; // If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
				// icon = "xxx"; // If can changeingame, action group icon in ACE menu
				class ShoulderNone
				{
					label = "None";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					// actionlabel = "xxx; // If can changeingame, action label in ACE menu
					// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
					// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
				};
				class ShoulderBaseSecurity
				{
					label = "Base Security";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					// actionlabel = "xxx; // If can changeingame, action label in ACE menu
					// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
					// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
				};
				class ShoulderGungnirLarge
				{
					label = "Gungnir Large";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					// actionlabel = "xxx; // If can changeingame, action label in ACE menu
					// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
					// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
				};
				class ShoulderGungnirSmall
				{
					label = "Gungnir Small";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					// actionlabel = "xxx; // If can changeingame, action label in ACE menu
					// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
					// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
				};
			};
			class ExtraArmor
			{
				label = "Extra Armor";
				values[] = {"ExtraNone", "ExtraThighs", "ExtraThighsShins", };
				changeingame = 0; // 1 if value can be changed in game via ACE menu
				alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
				// changedelay = 2; // If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
				// icon = "xxx"; // If can changeingame, action group icon in ACE menu
				class ExtraNone
				{
					label = "None";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					// actionlabel = "xxx; // If can changeingame, action label in ACE menu
					// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
					// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
				};
				class ExtraThighs
				{
					label = "Thighs";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					// actionlabel = "xxx; // If can changeingame, action label in ACE menu
					// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
					// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
				};
				class ExtraThighsShins
				{
					label = "Thighs And Shins";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					// actionlabel = "xxx; // If can changeingame, action label in ACE menu
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
		#define Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo, ArgShoulderArmor, ArgExtraArmor) \
			model = "Zephyr_AAX_TCP_CBBAS_M43A"; \
			Camo = #ArgCamo; \
			ShoulderArmor = #ArgShoulderArmor; \
			ExtraArmor = #ArgExtraArmor;
		// end Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body

		#define Macro_Zephyr_AAX_TCP_CBBAS_M43A_AllForCamo(ArgCamo) \
			class TCP_V_M43A_Light_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderNone,ExtraNone) \
			}; \
			class TCP_V_M43A_BaseSec_1_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderBaseSecurity,ExtraNone) \
			}; \
			class TCP_V_M43A_BaseSec_2_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderBaseSecurity,ExtraThighs) \
			}; \
			class TCP_V_M43A_BaseSec_3_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderBaseSecurity,ExtraThighsShins) \
			}; \
			class TCP_V_M43A_GungnirS_1_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderGungnirSmall,ExtraNone) \
			}; \
			class TCP_V_M43A_GungnirS_2_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderGungnirSmall,ExtraThighs) \
			}; \
			class TCP_V_M43A_GungnirS_3_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderGungnirSmall,ExtraThighsShins) \
			}; \
			class TCP_V_M43A_GungnirL_1_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderGungnirLarge,ExtraNone) \
			}; \
			class TCP_V_M43A_GungnirL_2_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderGungnirLarge,ExtraThighs) \
			}; \
			class TCP_V_M43A_GungnirL_3_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,ShoulderGungnirLarge,ExtraThighsShins) \
			};
		// end Macro_Zephyr_AAX_TCP_CBBAS_M43A

		Macro_Zephyr_AAX_TCP_CBBAS_M43A_AllForCamo(Black)
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_AllForCamo(Brown)
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_AllForCamo(Green)
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_AllForCamo(Olive)
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_AllForCamo(Tan)
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_AllForCamo(White)
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_AllForCamo(Woodland)
	};
};
