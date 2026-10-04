#include "\z\Zephyr\addons\core\define.hpp"

class CfgPatches
{
	class Zephyr_Tweaks_TCP_Weapons_Magazine_Shotgun
	{
		addonRootClass = "Zephyr_Core";
		name = "Zephyr - Tweaks - TCP Weapons Magazine Shotgun";
		author = "Lupus590";
		units[] = {};
		weapons[] =
		{
			"Zephyr_TCP_sgun_M45",
			"Zephyr_TCP_sgun_M45E",
		};
		magazines[] = {};
		ammo[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
			"OPTRE_Weapons_Ammo",
			"TCP_Weapons_Shotguns_M45",
			"TCP_Weapons_Shotguns_M45E",
		};
		skipWhenMissingDependencies = TRUE;
		skipWhenAnyAddonPresent[] = {};
	};
};
class CfgWeapons
{
	class TCP_sgun_M45;
	class Zephyr_TCP_sgun_M45: TCP_sgun_M45
	{
		magazines[] = {"OPTRE_6Rnd_8Gauge_Pellets"};
		magazineWell[] = {"OPTRE_Magwell_M45"};
	};
	class TCP_sgun_M45E;
	class Zephyr_TCP_sgun_M45E: TCP_sgun_M45E
	{
		magazines[] = {"OPTRE_6Rnd_8Gauge_Pellets"};
		magazineWell[] = {"OPTRE_Magwell_M45"};
	};
};
