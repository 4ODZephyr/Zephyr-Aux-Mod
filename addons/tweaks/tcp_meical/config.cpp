#include "\z\Zephyr\addons\core\define.hpp"

class CfgPatches
{
	class Zephyr_Tweaks_TCP_Medical
	{
		addonRootClass = "Zephyr_Core";
		name = "Zephyr - Tweaks - TCP Medical";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
			"TCP_Compat_ACE_Medical_Treatment",
		};
		skipWhenMissingDependencies = TRUE;
		skipWhenAnyAddonPresent[] = {};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class TCP_ACE_BiomedicalFoam: CA_Magazine
	{
		count = 5;
	};
	/*class TCP_ACE_Medigel: CA_Magazine
	{
		count = 10;
	};*/
};
