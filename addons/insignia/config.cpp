class CfgPatches
{
	class Zephyr_Insignia
	{
		addonRootClass = "Zephyr_Core";
		name = "Zephyr - Insignia";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
			"A3_Ui_F",
		};
	};
};

class CfgUnitInsignia
{
	class Zephyr_Emblem_Bright
	{
		displayName = "Zephyr Unit Patch Bright";
		author = "Shewolf & Lexicon";
		texture = "\z\zephyr\addons\insignia\zephyr_emblem_bright.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class Zephyr_Emblem_Dark
	{
		displayName = "Zephyr Unit Path Dark";
		author = "Shewolf & Lexicon";
		texture = "\z\zephyr\addons\insignia\zephyr_emblem_dark.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
};
