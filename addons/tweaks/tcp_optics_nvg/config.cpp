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
			"TCP_Weapons_Acc_Optic_EVOSD",
			"TCP_Weapons_Acc_Optic_KFA_M6G",
			"TCP_Weapons_ins_Acc_Optic_M43RCO",
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
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class TCP_optic_EVOSD: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class EVOSD
				{
					visionMode[] = {};
				};
			};
		};
	};

	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class TCP_OpticsMode_Base_3D;
	class TCP_optic_KFA_M6G: ItemCore
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
	class TCP_OpticsMode_Base_Irons;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class TCP_optic_M43RCO: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class EVOSD
				{
					visionMode[] = {};
				};
			};
		};
	};
};
