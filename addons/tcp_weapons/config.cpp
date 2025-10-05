class CfgPatches
{
	class Zephyr_TCP_Weapons
	{
		name = "TCP Weapons";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Weapons_Ammo_40",
		};
	};
};
class CfgMagazineWells
{
	class TCP_40_1
	{
		TCP_Weapons_Ammo_40_Smoke[] += {
			// normal smokes
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			// Impact smokes
			"OPTRE_1Rnd_Smoke_Grenade_shell",
			"OPTRE_1Rnd_SmokeRed_Grenade_shell",
			"OPTRE_1Rnd_SmokeGreen_Grenade_shell",
			"OPTRE_1Rnd_SmokeYellow_Grenade_shell",
			"OPTRE_1Rnd_SmokePurple_Grenade_shell",
			"OPTRE_1Rnd_SmokeBlue_Grenade_shell",
			"OPTRE_1Rnd_SmokeOrange_Grenade_shell",
		};
	};
};
