class CfgPatches
{
	class Zephyr_Tweaks_TCP_Weapons_GX_Drones
	{
		addonRootClass = "Zephyr_Core";
		name = "Zephyr - Tweaks - TCP Weapons GX Drones";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
			"TCP_Weapons_Ammo_40",
			"GX_DRONES_UAV_DRONE40",
		};
		skipWhenMissingDependencies = 1;
	};
};
class CfgMagazineWells
{
	class TCP_40_1
	{
		GX_DRONES[]+=
		{
			"GX_1RND_DRONE40_RECON_M203",
			"GX_1RND_DRONE40_HE_M203",
			"GX_1RND_DRONE40_SMOKE_WHITE_M203",
			"GX_1RND_DRONE40_SMOKE_RED_M203",
			"GX_1RND_DRONE40_SMOKE_GREEN_M203",
			"GX_1RND_DRONE40_SMOKE_BLUE_M203",
			"GX_1RND_DRONE40_SMOKE_PURPLE_M203",
			"GX_1RND_DRONE40_SMOKE_YELLOW_M203",
			"GX_1RND_DRONE40_SMOKE_ORANGE_M203"
		};
	};
};
