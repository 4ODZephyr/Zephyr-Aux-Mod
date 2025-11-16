class CfgPatches
{
	class Zephyr_AAX_TCP_CBUU_FieldTop
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - CBUU - Field Top";
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
		class Zephyr_AAX_TCP_CBUU_FieldTop
		{
			label = "CBUU Field Top";
			author = "Lupus590";
			options[] = {"Camo", "Sleeves", "Gloves", "Pants", "Collar", };
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
			class Sleeves
			{
				label = "Sleeves";
				values[] = {"SleevesUnrolled", "SleevesHalfRoll", "SleevesQuarterRoll", "SleevesSlim"};
				changeingame = 1; // 1 if value can be changed in game via ACE menu
				alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
				// changedelay = 2; // If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
				// icon = "xxx"; // If can changeingame, action group icon in ACE menu
				class SleevesUnrolled
				{
					label = "Unrolled";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					actionlabel = "Unroll sleeves"; // If can changeingame, action label in ACE menu
					// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
					// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
				};
				class SleevesHalfRoll
				{
					label = "Half Roll";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					actionlabel = "Roll up sleeves halfway"; // If can changeingame, action label in ACE menu
					// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
					// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
				};
				class SleevesQuarterRoll
				{
					label = "Quarter Roll";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					actionlabel = "Roll up sleeves to quarter way"; // If can changeingame, action label in ACE menu
					// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
					// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
				};
				class SleevesSlim
				{
					label = "Slim";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					actionlabel = "Magically get slimmer sleeves, I don't know"; // If can changeingame, action label in ACE menu
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
			class Collar
			{
				label = "Collar";
				values[] = {"CollarZipped", "CollarUnzipped"};
				changeingame = 1; // 1 if value can be changed in game via ACE menu
				alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
				// changedelay = 2; // If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
				// icon = "xxx"; // If can changeingame, action group icon in ACE menu
				class CollarZipped
				{
					label = "Zipped Up";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					actionlabel = "Zip up collar"; // If can changeingame, action label in ACE menu
					// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
					// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
				};
				class CollarUnzipped
				{
					label = "Unzipped";
					//description = "Value 1 for option A"; // displayed as tooltip
					// image = "xxx"; // Background image in Arsenal
					// icon = "xxx"; // If can changeingame, action icon in ACE menu
					actionlabel = "Unzip Collar"; // //If can changeingame, action label in ACE menu
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
		#define Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo, ArgSleeves, ArgGloves, ArgPants, ArgCollar) \
			model = "Zephyr_AAX_TCP_CBUU_FieldTop"; \
			Camo = #ArgCamo; \
			Sleeves = #ArgSleeves; \
			Gloves = #ArgGloves; \
			Pants = #ArgPants; \
			Collar = #ArgCollar;
		// end Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body

		#define Macro_Zephyr_AAX_TCP_CBUU_FieldTop_AllForCamo(ArgCamo)\
			class TCP_U_B_CBUU_FieldTop_Full_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesUnrolled,GlovesOff,PantsUnbloused,CollarZipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_Full_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesUnrolled,GlovesOff,PantsBloused,CollarZipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_Full_Gloves_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesUnrolled,GlovesOn,PantsUnbloused,CollarZipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_Full_Gloves_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesUnrolled,GlovesOn,PantsBloused,CollarZipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_Full_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesUnrolled,GlovesOff,PantsUnbloused,CollarUnzipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_Full_Bloused_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesUnrolled,GlovesOff,PantsBloused,CollarUnzipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_Full_Gloves_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesUnrolled,GlovesOn,PantsUnbloused,CollarUnzipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_Full_Gloves_Bloused_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesUnrolled,GlovesOn,PantsBloused,CollarUnzipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_QuarterRoll_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesQuarterRoll,GlovesOff,PantsUnbloused,CollarZipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_QuarterRoll_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesQuarterRoll,GlovesOff,PantsBloused,CollarZipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesQuarterRoll,GlovesOn,PantsUnbloused,CollarZipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesQuarterRoll,GlovesOn,PantsBloused,CollarZipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_QuarterRoll_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesQuarterRoll,GlovesOff,PantsUnbloused,CollarUnzipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_QuarterRoll_Bloused_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesQuarterRoll,GlovesOff,PantsBloused,CollarUnzipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesQuarterRoll,GlovesOn,PantsUnbloused,CollarUnzipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Bloused_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesQuarterRoll,GlovesOn,PantsBloused,CollarUnzipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_HalfRoll_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesHalfRoll,GlovesOff,PantsUnbloused,CollarZipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_HalfRoll_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesHalfRoll,GlovesOff,PantsBloused,CollarZipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_HalfRoll_Gloves_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesHalfRoll,GlovesOn,PantsUnbloused,CollarZipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_HalfRoll_Gloves_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesHalfRoll,GlovesOn,PantsBloused,CollarZipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_HalfRoll_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesHalfRoll,GlovesOff,PantsUnbloused,CollarUnzipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_HalfRoll_Bloused_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesHalfRoll,GlovesOff,PantsBloused,CollarUnzipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_HalfRoll_Gloves_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesHalfRoll,GlovesOn,PantsUnbloused,CollarUnzipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_HalfRoll_Gloves_Bloused_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesHalfRoll,GlovesOn,PantsBloused,CollarUnzipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_SlimSleeve_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesSlim,GlovesOff,PantsUnbloused,CollarZipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_SlimSleeve_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesSlim,GlovesOff,PantsBloused,CollarZipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesSlim,GlovesOn,PantsUnbloused,CollarZipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesSlim,GlovesOn,PantsBloused,CollarZipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_SlimSleeve_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesSlim,GlovesOff,PantsUnbloused,CollarUnzipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_SlimSleeve_Bloused_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesSlim,GlovesOff,PantsBloused,CollarUnzipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesSlim,GlovesOn,PantsUnbloused,CollarUnzipped)\
			};\
			class TCP_U_B_CBUU_FieldTop_SlimSleeve_Gloves_Bloused_Unzipped_##ArgCamo##\
			{\
				Macro_Zephyr_AAX_TCP_CBUU_FieldTop_Body(ArgCamo,SleevesSlim,GlovesOn,PantsBloused,CollarUnzipped)\
			};
		// end Macro_Zephyr_AAX_TCP_CBUU_FieldTop_AllForCamo

		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_AllForCamo(Arctic)
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_AllForCamo(Arid)
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_AllForCamo(Black)
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_AllForCamo(Gray)
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_AllForCamo(Green)
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_AllForCamo(Olive)
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_AllForCamo(Tan)
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_AllForCamo(Tropic)
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_AllForCamo(Tundra)
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_AllForCamo(Urban)
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_AllForCamo(White)
		Macro_Zephyr_AAX_TCP_CBUU_FieldTop_AllForCamo(Woodland)
	};
};
