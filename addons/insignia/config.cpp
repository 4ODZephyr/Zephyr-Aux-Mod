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
	class Zephyr_Patch
	{
		displayName = "Zephyr Unit Patch";
		author = "Lupus590";
		texture = "\z\zephyr\addons\insignia\zephyr_patch.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
};
