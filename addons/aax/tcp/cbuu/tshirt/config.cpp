class CfgPatches
{
	class Zephyr_AAX_TCP_CBUU_TShirt
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - CBUU - TShirt";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Army_Uniforms_CBUU",
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class Zephyr_AAX_TCP_CBUU_TShirt
		{
			label = "CBUU TShirt";
			author = "Lupus590";
			options[] = {"Camo", "Shirt", "Gloves", "Pants", };
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
			class Shirt
			{
				label = "Shirt";
				values[] = {"ShirtTucked", "ShirtUntucked",};
				changeingame = 1; // 1 if value can be changed in game via ACE menu
				alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
				// changedelay = 2; // If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
				// icon = "xxx"; // If can changeingame, action group icon in ACE menu
				class ShirtTucked
				{
					label = "Tucked";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					actionlabel = "Tuck in shirt"; // If can changeingame, action label in ACE menu
					// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
					// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
				};
				class ShirtUntucked
				{
					label = "Untucked";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					actionlabel = "Untuck shirt"; // If can changeingame, action label in ACE menu
					// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
					// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
				};
			};
			class Gloves
			{
				label = "Gloves";
				values[] = {"GlovesOn", "GlovesOff"};
				changeingame = 1; // 1 if value can be changed in game via ACE menu
				alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
				// changedelay = 2; // If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
				// icon = "xxx"; // If can changeingame, action group icon in ACE menu
				class GlovesOn
				{
					label = "On";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					actionlabel = "Put on gloves"; // If can changeingame, action label in ACE menu
					// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
					// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
				};
				class GlovesOff
				{
					label = "Off";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					actionlabel = "Remove gloves"; // If can changeingame, action label in ACE menu
					// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
					// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
				};
			};
			class Pants
			{
				label = "Pants";
				values[] = {"PantsBloused", "PantsUnbloused"};
				changeingame = 1; // 1 if value can be changed in game via ACE menu
				alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
				// changedelay = 2; // If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
				// icon = "xxx"; // If can changeingame, action group icon in ACE menu
				class PantsBloused
				{
					label = "Bloused";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					actionlabel = "Tuck pants into boots"; // If can changeingame, action label in ACE menu
					// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
					// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
				};
				class PantsUnbloused
				{
					label = "Unbloused";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					actionlabel = "Untuck pants from boots"; // If can changeingame, action label in ACE menu
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
		#define Macro_Zephyr_AAX_TCP_CBUU_TShirt_Body(ArgCamo, ArgShirt, ArgGloves, ArgPants) \
			model = "Zephyr_AAX_TCP_CBUU_TShirt"; \
			Camo = #ArgCamo; \
			Shirt = #ArgShirt; \
			Gloves = #ArgGloves; \
			Pants = #ArgPants;
		// end Macro_Zephyr_AAX_TCP_CBUU_TShirt

		#define Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(ArgCamo)\
			class TCP_U_B_CBUU_TShirt_Tucked_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TShirt_Body(ArgCamo,ShirtTucked,GlovesOff,PantsUnbloused)\
			};\
			class TCP_U_B_CBUU_TShirt_Tucked_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TShirt_Body(ArgCamo,ShirtTucked,GlovesOff,PantsBloused)\
			};\
			class TCP_U_B_CBUU_TShirt_Tucked_Gloves_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TShirt_Body(ArgCamo,ShirtTucked,GlovesOn,PantsUnbloused)\
			};\
			class TCP_U_B_CBUU_TShirt_Tucked_Gloves_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TShirt_Body(ArgCamo,ShirtTucked,GlovesOn,PantsBloused)\
			};\
			class TCP_U_B_CBUU_TShirt_Untucked_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TShirt_Body(ArgCamo,ShirtUntucked,GlovesOff,PantsUnbloused)\
			};\
			class TCP_U_B_CBUU_TShirt_Untucked_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TShirt_Body(ArgCamo,ShirtUntucked,GlovesOff,PantsBloused)\
			};\
			class TCP_U_B_CBUU_TShirt_Untucked_Gloves_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TShirt_Body(ArgCamo,ShirtUntucked,GlovesOn,PantsUnbloused)\
			};\
			class TCP_U_B_CBUU_TShirt_Untucked_Gloves_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_TShirt_Body(ArgCamo,ShirtUntucked,GlovesOn,PantsBloused)\
			};
		// end Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo

		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Arctic)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Arid)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Black)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Gray)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Green)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Olive)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Tan)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Tropic)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Tundra)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Urban)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(White)
		Macro_Zephyr_AAX_TCP_CBUU_TShirt_AllForCamo(Woodland)
	};
};
