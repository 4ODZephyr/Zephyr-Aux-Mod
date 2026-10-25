#include "\z\Zephyr\addons\core\define.hpp"

class CfgPatches
{
	class Zephyr_Tweaks_TCP_Weapons_GL_Shotgun_Shells
	{
		addonRootClass = "Zephyr_Core";
		name = "Zephyr - Tweaks - TCP Weapons GL Shotgun Shells";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
		};
		skipWhenMissingDependencies = TRUE;
		skipWhenAnyAddonPresent[] = {};
	};
};
class CfgMagazineWells
{
	class TCP_40_1
	{
		TCP_Shotgun_Shells[] += {
			"TCP_1Rnd_12Gauge_Shell_Pellets",
			"TCP_1Rnd_12Gauge_Shell_Slug",
		};
	};
};
