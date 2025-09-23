#include "script_version.hpp"

class CfgPatches
{
	class 4ODZ_Main
	{
		name = "main";
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
			class 4ODZ_Main {
				main_addon = "4ODZ_Main";
			};
		};
	};
};
