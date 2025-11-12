class Zephyr_AAX_TCP_CBBAS_M43A
{
	label = "M43/A CBBAS";
	author = "Lupus590";
	options[] = {"Camo", "ShoulderArmor", "ExtraArmor", };
	class Camo
	{
		label= "Camo";
		values[]=
		{
			"Black",
			"Brown",
			"Green",
			"Olive",
			"Tan",
			"White",
			"Woodland",
		};
		changeingame=0;
		alwaysSelectable=1;
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

class Zephyr_AAX_TCP_CBBAS_M43D
{
	label = "M43/D CBBAS (Black)";
	author = "Lupus590";
	options[] = {"Camo", "ShoulderArmor", "ExtraArmor"};
	class Camo
	{
		label = "Camo";
		values[] = {"Black"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
	class ShoulderArmor
	{
		label = "Shoulder Armor";
		values[] = {"ShoulderNone", "ShoulderBreacher", "ShoulderOdst", "ShoulderSharpshooter"};
		changeingame = 0;
		alwaysSelectable = 1;
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
		class ShoulderBreacher
		{
			label = "Breacher";
			//description = "Value 1 for option A"; // displayed as tooltip
			// image = "xxx"; // Background image in Arsenal
			// icon = "xxx"; // If can changeingame, action icon in ACE menu
			// actionlabel = "xxx; // If can changeingame, action label in ACE menu
			// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
			// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
		};
		class ShoulderOdst
		{
			label = "ODST";
			//description = "Value 1 for option A"; // displayed as tooltip
			// image = "xxx"; // Background image in Arsenal
			// icon = "xxx"; // If can changeingame, action icon in ACE menu
			// actionlabel = "xxx; // If can changeingame, action label in ACE menu
			// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
			// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
		};
		class ShoulderSharpshooter
		{
			label = "Sharpshooter";
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
		values[] = {"ExtraNone", "ExtraThighs", "ExtraThighsShins", "ExtraThinShinsGauntlets"};
		changeingame = 0;
		alwaysSelectable = 1;
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
			label = "Thighs & Shins";
			//description = "Value 1 for option A"; // displayed as tooltip
			// image = "xxx"; // Background image in Arsenal
			// icon = "xxx"; // If can changeingame, action icon in ACE menu
			// actionlabel = "xxx; // If can changeingame, action label in ACE menu
			// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
			// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
		};
		class ExtraThinShinsGauntlets
		{
			label = "Thin, Shins & Gauntlets";
			//description = "Value 1 for option A"; // displayed as tooltip
			// image = "xxx"; // Background image in Arsenal
			// icon = "xxx"; // If can changeingame, action icon in ACE menu
			// actionlabel = "xxx; // If can changeingame, action label in ACE menu
			// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
			// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
		};
	};
};
