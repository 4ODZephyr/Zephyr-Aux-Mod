#include "\z\Zephyr\addons\core\define.hpp"

class CfgPatches
{
	class Zephyr_Tweaks_LAGO_Biken_Rename
	{
		addonRootClass = "Zephyr_Core";
		name = "Zephyr - Tweaks - LAGO Biken Rename";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
			"LAGO_Biken",
		};
		skipWhenMissingDependencies = TRUE;
		skipWhenAnyAddonPresent[] = {};
	};
};

class CfgWeapons
{
	class Rifle_Base_F;
	class LAGO_Biken: Rifle_Base_F
	{
		displayName="XM85 Biken 20mm";
		descriptionShort="LAGO Heavy Industries";
	};
};
