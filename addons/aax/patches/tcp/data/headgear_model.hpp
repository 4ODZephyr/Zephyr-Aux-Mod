class Zephyr_AAX_TCP_UtilityCover
{
	label = "Utility Cover";
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

class Zephyr_AAX_TCP_Beret
{
	label = "Beret";
	author = "Lupus590";
	options[] = {"Camo", };
	class Camo
	{
		label = "Camo";
		values[] =
		{
			"Black",
			"Blue",
			"Green",
			"Red",
			"Tan",
		};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

class Zephyr_AAX_TCP_UtilityCap
{
	label = "Utility Cap";
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

class Zephyr_AAX_TCP_WatchCap
{
	label = "Watch Cap";
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

class Zephyr_AAX_TCP_CH43A
{
	label = "CH43/A Helmet";
	author = "Lupus590";
	options[] = {"Camo", };
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
		};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

class Zephyr_AAX_TCP_ECH55D
{
	label = "ECH55/D Helmet";
	author = "Lupus590";
	options[] = {"Camo", "Color", };
	class Camo
	{
		label = "Camo";
		values[] =
		{
			"Black",
		};
		changeingame = 0;
		alwaysSelectable = 1;
	};
	class Color
	{
		label = "Visor Color";
		values[] =
		{
			"Black",
			"Blue",
			"Gold",
			"Red",
			"Silver",
		};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

class Zephyr_AAX_TCP_ECH35J
{
	label = "ECH35/J Helmet";
	author = "Lupus590";
	options[] = {"Camo", "Color", };
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
		};
		changeingame = 0;
		alwaysSelectable = 1;
	};
	class Color
	{
		label = "Visor Color";
		values[] =
		{
			"Black",
			"Blue",
			"Gold",
			"Red",
			"Silver",
		};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

class Zephyr_AAX_TCP_ECH43A
{
	label = "ECH43/A Helmet";
	author = "Lupus590";
	options[] = {"Camo", "Color", };
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
		};
		changeingame = 0;
		alwaysSelectable = 1;
	};
	class Color
	{
		label = "Visor Color";
		values[] =
		{
			"Black",
			"Blue",
			"Gold",
			"Red",
			"Silver",
			"Yellow",
		};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};

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
			//description = "Value 1 for option A"; // displayed as tooltip
			// image = "xxx"; // Background image in Arsenal
			// icon = "xxx"; // If can changeingame, action icon in ACE menu
			actionlabel = "Face hat forwards"; // If can changeingame, action label in ACE menu
			// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
			// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
		};
		class OrientationBackwards
		{
			label = "Backwards";
			//description = "Value 1 for option A"; // displayed as tooltip
			// image = "xxx"; // Background image in Arsenal
			// icon = "xxx"; // If can changeingame, action icon in ACE menu
			actionlabel = "Face hat backwards"; // If can changeingame, action label in ACE menu
			// itemingame = "xxx"; // If can changeingame, requires this item to be present in inventory. Item will be removed from inventory (added back if an other value is choosen)
			// changedelay = (inherited by default); // If can changeingame, wait delay before change is effective
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
