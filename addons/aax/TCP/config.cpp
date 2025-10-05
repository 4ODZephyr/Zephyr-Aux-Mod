class CfgPatches
{
	class Zephyr_AAX_TCP
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP";
		author = "RoutOfWolves";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"Zephyr_AAX",
			// TODO: what's the TCP addon name?
		};
		skipWhenMissingDependencies = 1;
	};
};
