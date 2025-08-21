#include "script_version.hpp"

class CfgPatches
{
	class Template_Main
	{
		name = "main";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
		};
		VERSION_CONFIG;
	};
};

class CfgSettings {
	class CBA {
		class Versioning { // https://github.com/CBATeam/CBA_A3/wiki/Versioning-System
			class Template_Main {
				main_addon = "Template_Main";
			};
		};
	};
};
