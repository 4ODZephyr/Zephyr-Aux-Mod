class CfgPatches
{
	class Zephyr_Callout_Reference_Card
	{
		addonRootClass = "Zephyr_Core";
		name = "Zephyr - Callout Reference Card";
		author = "Lupus590";
		units[] = {Zephyr_Item_CalloutReferenceCard};
		weapons[] = {Zephyr_CalloutReferenceCard};
		requiredAddons[] =
		{
			"Zephyr_Core",
			"Zephyr_Unit_Patch",
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
        //descriptionShort = CSTRING(Description);
        //picture = QPATHTOF(UI\RangeCard_Icon.paa);
        icon = "iconObject_circle";
        mapSize = 0.034;
        ACE_isTool = 1;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.1;
        };
    };
};


class CfgVehicles {
	/*
    class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class ACE_Weapon {
                class GVAR(copyRangeCard) {
                    displayName = CSTRING(CopyRangeCard);
                    distance = 2.0;
                    condition = QUOTE(_target call FUNC(canCopy));
                    statement = QUOTE(_target call FUNC(updateClassNames));
                    icon = QPATHTOF(UI\RangeCard_Icon.paa);
                };
            };
        };
        class ACE_SelfActions {
            class ACE_Equipment {
                class GVAR(open) {
                    displayName = CSTRING(OpenRangeCard);
                    condition = QUOTE(call FUNC(canShow) && !GVAR(RangeCardOpened));
                    statement = QUOTE(false call FUNC(openRangeCard));
                    showDisabled = 0;
                    icon = QPATHTOF(UI\RangeCard_Icon.paa);
                    exceptions[] = {"notOnMap", "isNotInside"};
                    class GVAR(openCopy) {
                        displayName = CSTRING(OpenRangeCardCopy);
                        condition = QUOTE(call FUNC(canShowCopy) && !GVAR(RangeCardOpened));
                        statement = QUOTE(true call FUNC(openRangeCard));
                        showDisabled = 0;
                        icon = QPATHTOF(UI\RangeCard_Icon.paa);
                        exceptions[] = {"notOnMap", "isNotInside"};
                    };
                    class GVAR(makeCopy) {
                        displayName = CSTRING(CopyRangeCard);
                        condition = QUOTE(call FUNC(canShow) && !GVAR(RangeCardOpened));
                        statement = QUOTE(GVAR(zeroRangeCopy)=GVAR(zeroRange); GVAR(boreHeightCopy)=GVAR(boreHeight); GVAR(ammoClassCopy)=GVAR(ammoClass); GVAR(magazineClassCopy)=GVAR(magazineClass); GVAR(weaponClassCopy)=GVAR(weaponClass););
                        showDisabled = 0;
                        icon = QPATHTOF(UI\RangeCard_Icon.paa);
                        exceptions[] = {"notOnMap", "isNotInside"};
                    };
                };
            };
        };
    };
	*/

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


//#include "CfgEventHandlers.hpp"
//#include "RscTitles.hpp"
