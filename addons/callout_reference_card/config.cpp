class CfgPatches
{
	class Zephyr_Callout_Reference_Card
	{
		addonRootClass = "Zephyr_Core";
		name = "Zephyr - Callout Reference Card";
		author = "Lupus590";
		units[] = {
			"Zephyr_Item_CalloutReferenceCard",
			};
		weapons[] = {
			"Zephyr_CalloutReferenceCard",
			};
		requiredAddons[] =
		{
			"Zephyr_Core",
			"Zephyr_Insignia",
			"ace_main",
		};
		skipWhenMissingDependencies = 1;
	};
};

class CfgWeapons {
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;

	class Zephyr_CalloutReferenceCard: ACE_ItemCore {
		author = "Lupus590";
		scope = 2;
		displayName = "Callout Reference Card";
		descriptionShort = "A handy reference for Zephyr specific tactical callouts.";
		picture = "\z\zephyr\addons\insignia_patches\zephyr_patch.paa";
		mapSize = 0.034;

		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 0.1;
		};
	};
};


class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_Actions {
			class ACE_MainActions {
				class Zephyr_CopyCalloutReferenceCard {
					displayName = "Copy Callout Reference Card";
					distance = 2.0;
					condition = "('Zephyr_CalloutReferenceCard' in (uniformItems _target)) || ('Zephyr_CalloutReferenceCard' in (vestItems _target))";
					statement = "_player call hint ""copy other""";
					icon = "\z\zephyr\addons\insignia_patches\zephyr_patch.paa";
				};
			};
		};
		class ACE_SelfActions {
			class ACE_Equipment {
				class Zephyr_OpenCalloutReferenceCard {
					displayName = "Open Callout Reference Card";
					condition = "('Zephyr_CalloutReferenceCard' in (uniformItems _player)) || ('Zephyr_CalloutReferenceCard' in (vestItems _player))";
					statement = "createDialog ""Zephyr_Dialog_CalloutReferenceCard""";
					showDisabled = 0;
					icon = "\z\zephyr\addons\insignia_patches\zephyr_patch.paa";
					exceptions[] = {"notOnMap", "isNotInside"};
					class Zephyr_MakeCopyCalloutReferenceCard {
						displayName = "Copy Callout Reference Card";
						condition = "('Zephyr_CalloutReferenceCard' in (uniformItems _player)) || ('Zephyr_CalloutReferenceCard' in (vestItems _player))";
						statement = "_player call hint ""copy self""";
						showDisabled = 0;
						icon = "\z\zephyr\addons\insignia_patches\zephyr_patch.paa";
						exceptions[] = {"notOnMap", "isNotInside"};
					};
				};
			};
		};
	};

// TODO: remove macro?
	#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
	name = #ITEM; \
	count = COUNT; \
}

	class Item_Base_F;
	class Zephyr_Item_CalloutReferenceCard: Item_Base_F {
		displayName = "Callout Reference Card";
		author = "Lupus590";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Items";
		class TransportItems {
			MACRO_ADDITEM(Zephyr_CalloutReferenceCard,1);
		};
	};

	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F {
		class TransportItems {
			MACRO_ADDITEM(Zephyr_CalloutReferenceCard,6);
		};
	};
};

class Zephyr_Dialog_CalloutReferenceCard
{
	idd = -1;
	movingEnable = 1;
	onLoad = "uiNamespace setVariable ['Zephyr_CalloutReferenceCard_Display', (_this select 0)]";
	onUnload = "uiNamespace setVariable ['Zephyr_CalloutReferenceCard_Display', nil]";
	objects[] = {};

	class controls
	{
		class background
		{
			moving = 1;
			type = 0;
			font = "TahomaB";
			SizeEX = 0.025;
			idc = -1;
			style = 48;
			x = "safezoneX";
			y = "safezoneY+0.181889";
			w = 2;
			h = 1;
			colorBackground[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			text = "\z\zephyr\addons\callout_reference_card\callout-reference-card.paa";
		};
	};
};
