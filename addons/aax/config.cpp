class CfgPatches
{
	class Zephyr_AAX
	{
		addonRootClass = "Zephyr_Core";
		name = "Zepgyr - AAX";
		author = "RoutOfWolves";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
			"aceax_gearinfo",
			// TODO: what's the TCP addon name?
		};
		skipWhenMissingDependencies = 1;
	};
};
