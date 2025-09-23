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
			"TCP_Data",
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
			class Zephyr_Main
			{
				main_addon = "Zephyr_Main";
			};
		};
	};
};

class CfgDiscordRichPresence
{
	applicationID = "805901921554006056";
	defaultLargeImageKey = "zephyr-logo";
	defaultLargeImageText = "4th Orion Division Zephyr";
	defaultSmallImageKey = "arma3logo";
	defaultSmallImageText = "Arma 3";
	useTimeElapsed = 1;
};
