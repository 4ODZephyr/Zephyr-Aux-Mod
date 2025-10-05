#include "script_version.hpp"

class CfgPatches
{
	class Zephyr_Core
	{
		name = "Zephyr - Core";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"CBA_Main",
		};
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
