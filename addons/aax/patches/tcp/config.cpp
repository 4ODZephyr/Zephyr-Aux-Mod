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
