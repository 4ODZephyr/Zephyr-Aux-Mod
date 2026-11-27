#include "\z\Zephyr\addons\core\define.hpp"

class CfgPatches
{
	class Zephyr_Tweaks_TCP_SRS_OPTRE_Suppressor
	{
		addonRootClass = "Zephyr_Core";
		name = "Zephyr - Tweaks - TCP SRS OPTRE Suppressor";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
			"TCP_Weapons_LongRangeRifles_SRS99",
		};
		skipWhenMissingDependencies = TRUE;
		skipWhenAnyAddonPresent[] = {};
	};
};

class asdg_MuzzleSlot;
class asdg_MuzzleSlot_127: asdg_MuzzleSlot
{
	class compatibleItems;
};
class CfgWeapons
{
	class Rifle_Base_F;
	class TCP_srifle_SRS99: Rifle_Base_F
	{
		class WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_127
			{
				class compatibleItems: compatibleItems
				{
					OPTRE_SRS99D_Suppressor = TRUE;
				};
			};
		};
	};
};
