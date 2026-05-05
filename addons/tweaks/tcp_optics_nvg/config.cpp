class CfgPatches
{
	class Zephyr_Tweaks_TCP_Optics_NVG
	{
		addonRootClass = "Zephyr_Core";
		name = "Zephyr - Tweaks - TCP Optics NVG";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
			"TCP_Weapons_Acc_Optic_KFA_M6G2",
		};
		skipWhenMissingDependencies = 1;
	};
};


class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class TCP_OpticsMode_Base_3D;
	class TCP_optic_KFA_M6G2: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class 2D
				{
					visionMode[] = {};
				};
			};
		};
	};
};
