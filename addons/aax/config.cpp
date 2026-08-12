#include "\z\Zephyr\addons\core\define.hpp"

class CfgPatches
{
	class Zephyr_AAX
	{
		addonRootClass = "Zephyr_Core";
		name = "Zephyr - AAX";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
			"aceax_gearinfo",
		};
		skipWhenMissingDependencies = TRUE;
		skipWhenAnyAddonPresent[] = {};
	};
};
