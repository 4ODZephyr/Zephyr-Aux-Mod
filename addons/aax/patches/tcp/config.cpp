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
			// TODO: need to find from TCP
		};
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		#include "data\uniforms_model.hpp"
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		#include "data\uniforms_info.hpp"
	};
};
