#include "define.hpp"
//#include "\z\Zephyr\addons\core\define.hpp"

class CfgPatches
{
	class Zephyr_Core
	{
		name = "Zephyr - Core";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredAddons[] =
		{
			"CBA_Main",
		};
		skipWhenMissingDependencies = FALSE;
		skipWhenAnyAddonPresent[] = {};
		VERSION_CONFIG;
	};
};

class CfgSettings
{
	class CBA
	{
		class Versioning // https://github.com/CBATeam/CBA_A3/wiki/Versioning-System
		{
			class Zephyr_Core
			{
				main_addon = "Zephyr_Core";
			};
		};
	};
};
