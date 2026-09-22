#include "\z\Zephyr\addons\core\define.hpp"

class CfgPatches
{
	class Zephyr_Tweaks_Lapa_Hood
	{
		addonRootClass = "Zephyr_Core";
		name = "Zephyr - Tweaks - Lapa Hood";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
			"molot_lapa_face",
			"molot_lapa_back",
		};
		skipWhenMissingDependencies = TRUE;
		skipWhenAnyAddonPresent[] = {};
	};
};

class CfgVehicles
{
	class Bag_Base;
	class molot_lapa_backpack_base: Bag_Base
	{
		maximumLoad=140; // same as the TCP buttpack
	};
};

