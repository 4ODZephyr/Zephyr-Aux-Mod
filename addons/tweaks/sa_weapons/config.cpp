class CfgPatches
{
	class Zephyr_Tweaks_SA_Weapons
	{
		addonRootClass = "Zephyr_Core";
		name = "Zephyr - Tweaks - SA Weapons";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
			"SA_Weapons_Beta",
			"TCP_Weapons_Ammo_65x48",
		};
		skipWhenMissingDependencies = 1;
	};
};

class CfgWeapons
{
	class arifle_MSBS65_Mark_base_F;
	class SA_TR12M: arifle_MSBS65_Mark_base_F
	{
		magazineWell[] +=
		{
			"TCP_65x48_20"
		};
	};
};
