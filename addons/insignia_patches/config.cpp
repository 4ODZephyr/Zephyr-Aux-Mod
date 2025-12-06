class CfgPatches
{
	class Zephyr_Insignia_Patch
	{
		addonRootClass = "Zephyr_Core";
		name = "Zephyr - Insignia Patch";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
		};
	};
};

class CfgUnitInsignia
{
	class Zephyr_Patch
	{
		displayName = "Zephyr Unit Patch";
		author = "Lupus590";
		texture = "\z\zephyr\addons\insignia_patches\zephyr_patch.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
};
