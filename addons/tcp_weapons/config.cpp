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
		TCP_Weapons_Ammo_40_Smoke[] += {"M319_Smoke","M319_Smoke_Red","M319_Smoke_Green","M319_Smoke_Orange"};
	};
};
