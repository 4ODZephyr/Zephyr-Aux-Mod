class CfgPatches
{
	class Zephyr_Tweaks_Yulakia_Pickup_Rocks
	{
		addonRootClass = "Zephyr_Core";
		name = "Zephyr - Tweaks - Yulakia Pickup Rocks";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
			"ibr_lartanians",
			"ace_common",
		};
		skipWhenMissingDependencies = 1;
	};
};

class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class Zephyr_Pickup_Rocks
			{
				displayName = "Pickup some rocks";
				condition = "_player call ACE_Common_fnc_canDig"; // ace has a seperate check for having an entrenching tool
				statement = "for ""_i"" from 1 to 5 do { _player addItem ""ibr_throwable_stone""; };";
			};
        };
	};
};
