class Zephyr_AAX_TCP_CBUU_FieldTop
{
	label = "CBUU Field Top";
	author = "Lupus590";
	options[] = {"camo", "Sleeves", "Gloves", "Pants", "Collar", };
	class Camo
	{
		label= "Camo";
		values[]=
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
			"Woodland"
		};
		changeingame=0;
		alwaysSelectable=1;
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
			actionlabel = "Magically get slimmer leaves, I don't know"; // If can changeingame, action label in ACE menu
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
class Zephyr_AAX_TCP_CBUU_TacShirt
{
	label = "CBUU Tac-Shirt";
	author = "Lupus590";
	options[] = {"camo", "Sleeves", "Gloves", "Pants", "Collar", };
	class Camo
	{
		label= "Camo";
		values[]=
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
			"Woodland"
		};
		changeingame=0;
		alwaysSelectable=1;
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
			actionlabel = "Magically get slimmer leaves, I don't know"; // If can changeingame, action label in ACE menu
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

class Zephyr_AAX_TCP_CBUU_TShirt
{
	label = "CBUU TShirt";
	author = "Lupus590";
	options[] = {"Camo", "Shirt", "Gloves", "Pants", };
	class Camo
	{
		label= "Camo";
		values[]=
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
			"Woodland"
		};
		changeingame=0;
		alwaysSelectable=1;
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
