class CfgPatches
{
	class Zephyr_AAX_TCP
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Army_Uniforms_CBUU",
			"TCP_Characters_BLUFOR_UNSC_Army_Vests_M43A",
			"TCP_Characters_BLUFOR_UNSC_Marines_Vests_M43D",
			"TCP_Characters_BLUFOR_UNSC_Army_Facewear_balaclava",
			"TCP_Characters_BLUFOR_UNSC_Army_Facewear_tacticalGlasses",
			"TCP_Characters_BLUFOR_UNSC_Army_Facewear_balaclavaTacticalGlasses",
			"TCP_Characters_BLUFOR_UNSC_Marines_Headgear_utilityCover",
			"TCP_Characters_BLUFOR_UNSC_Army_Headgear_beret",
			"TCP_Characters_BLUFOR_UNSC_Army_Headgear_utilityCap",
			"TCP_Characters_BLUFOR_UNSC_Army_Headgear_watchCap",
			"TCP_Characters_BLUFOR_UNSC_Army_Headgear_patrolCap",
			"TCP_Characters_BLUFOR_UNSC_Army_Headgear_helmet_CH43A",
			"TCP_Characters_BLUFOR_UNSC_Marines_Headgear_helmet_ECH55D",
			"TCP_Characters_BLUFOR_UNSC_Army_Headgear_helmet_ECH35J",
		};
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		#include "data\uniforms_model.hpp"
		#include "data\vests_model.hpp"
		#include "data\headgear_model.hpp"
	};
	class CfgGlasses
	{
		#include "data\facewear_model.hpp"
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		#include "data\uniforms_info.hpp"
		#include "data\vests_info.hpp"
		#include "data\headgear_info.hpp"
	};
	class CfgGlasses
	{
		#include "data\facewear_info.hpp"
	};
};
