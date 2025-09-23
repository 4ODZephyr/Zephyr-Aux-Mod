#include "script_version.hpp"

class CfgPatches
{
	class Zephyr_Main
	{
		name = "Zephyr Main";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"CBA_settings",
		};
		VERSION_CONFIG;
	};
};

class CfgSettings {
	class CBA {
		class Versioning { // https://github.com/CBATeam/CBA_A3/wiki/Versioning-System
			class Zephyr_Main {
				main_addon = "Zephyr_Main";
			};
		};
	};
};
