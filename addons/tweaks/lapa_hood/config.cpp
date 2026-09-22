#include "\z\Zephyr\addons\core\define.hpp"

class CfgPatches
{
	class Zephyr_Tweaks_Lapa_Hood
	{
		addonRootClass = "Zephyr_Core";
		name = "Zephyr - Tweaks - Lapa Hood";
		author = "Lupus590";
		units[] = {};
		weapons[] =
		{
			"Zephyr_Lapa_Hood_NVG_MC_V1",
			"Zephyr_Lapa_Hood_NVG_MCAL_V1",
			"Zephyr_Lapa_Hood_NVG_SAPSAN_V1",
			"Zephyr_Lapa_Hood_NVG_MCT_V1",
			"Zephyr_Lapa_Hood_NVG_MC_V2",
			"Zephyr_Lapa_Hood_NVG_MCAL_V2",
			"Zephyr_Lapa_Hood_NVG_SAPSAN_V2",
			"Zephyr_Lapa_Hood_NVG_MCT_V2",
		};
		magazines[] = {};
		ammo[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
			"molot_lapa_face",
			"molot_lapa_back",
		};
		skipWhenMissingDependencies = TRUE;
		skipWhenAnyAddonPresent[] = {};
	};
};

class CfgVehicles
{
	class Bag_Base;
	class molot_lapa_backpack_base: Bag_Base
	{
		maximumLoad=140; // same as the TCP buttpack
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class molot_lapa
		{
			label="[MxG] Lapa Gear Viper Hood V7";
			author="MOLOT GROUP / benazy";
			options[]=
			{
				"Leaves",
				"Mask"
			};
			class Leaves
			{
				label="Leaves";
				alwaysSelectable=1;
				values[]=
				{
					"MC",
					"MCT",
					"MCAL",
					"SAPSAN"
				};
				class MC
				{
					label="";
					description="Lapa Gear Multicam";
					image="molot_lapa\tex\ui\lapa_mc.paa";
				};
				class MCT
				{
					label="";
					description="Lapa Gear Multicam Tropic";
					image="molot_lapa\tex\ui\lapa_mct.paa";
				};
				class MCAL
				{
					label="";
					description="Lapa Gear Multicam Alpine";
					image="molot_lapa\tex\ui\lapa_mcal.paa";
				};
				class SAPSAN
				{
					label="";
					description="Lapa Gear Autumn Dry Grass";
					image="molot_lapa\tex\ui\lapa_sapsan.paa";
				};
			};
			class Mask
			{
				label="Net Mask";
				alwaysSelectable=1;
				values[]=
				{
					"Yes",
					"None"
				};
				class Yes
				{
					label="";
					image="molot_lapa\tex\ui\yes.paa";
				};
				class None
				{
					label="";
					image="molot_lapa\tex\ui\no.paa";
				};
			};
		};
	};
};

class CfgWeapons
{
	class Binocular;
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};
	class Zephyr_Lapa_Hood_NVG_MC_V1: NVGoggles // TODO: reduce duplication
	{
		author="MOLOT GROUP / benazy ";
		picture="\molot_lapa\tex\ui\lapa.paa";
		displayName="[MxG] Lapa Gear Viper Hood V7";
		model="\molot_lapa\facewear\lapa_hood_up.p3d";
		mass=11;
		uniformModel="\molot_lapa\facewear\lapa_hood_up.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
		};
		hiddenSelectionsTextures[]=
		{
			"molot_lapa\tex\viper\lapa_hood_mc_co.paa",
			"molot_lapa\tex\viper\lapa_leaves_mc_co.paa",
			"",
		};
		modelOptics="";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI",
		};
		thermalMode[]={0};
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\molot_lapa\facewear\lapa_hood_up.p3d";
			modelOff="\molot_lapa\facewear\lapa_hood_up.p3d";
			mass=11;
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
			};
			hiddenSelectionsTextures[]=
			{
				"molot_lapa\tex\viper\lapa_hood_mc_co.paa",
				"molot_lapa\tex\viper\lapa_leaves_mc_co.paa",
				"",
			};
		};
		class XtdGearInfo
		{
			model="molot_lapa";
			Leaves="MC";
			Mask="None";
		};
	};
	class Zephyr_Lapa_Hood_NVG_MCAL_V1: Zephyr_Lapa_Hood_NVG_MC_V1
	{
		hiddenSelectionsTextures[]=
		{
			"molot_lapa\tex\viper\lapa_hood_mcal_co.paa",
			"molot_lapa\tex\viper\lapa_leaves_mcal_co.paa",
			"",
		};
		class XtdGearInfo
		{
			model="molot_lapa";
			Leaves="MCAL";
			Mask="None";
		};
	};
	class Zephyr_Lapa_Hood_NVG_SAPSAN_V1: Zephyr_Lapa_Hood_NVG_MC_V1
	{
		hiddenSelectionsTextures[]=
		{
			"molot_lapa\tex\viper\lapa_hood_sapsan_co.paa",
			"molot_lapa\tex\viper\lapa_leaves_sapsan_co.paa",
			"",
		};
		class XtdGearInfo
		{
			model="molot_lapa";
			Leaves="SAPSAN";
			Mask="None";
		};
	};
	class Zephyr_Lapa_Hood_NVG_MCT_V1: Zephyr_Lapa_Hood_NVG_MC_V1
	{
		hiddenSelectionsTextures[]=
		{
			"molot_lapa\tex\viper\lapa_hood_mct_co.paa",
			"molot_lapa\tex\viper\lapa_leaves_mct_co.paa",
			"",
		};
		class XtdGearInfo
		{
			model="molot_lapa";
			Leaves="MCT";
			Mask="None";
		};
	};
	class Zephyr_Lapa_Hood_NVG_MC_V2: Zephyr_Lapa_Hood_NVG_MC_V1
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
		};
		hiddenSelectionsTextures[]=
		{
			"molot_lapa\tex\viper\lapa_hood_mc_co.paa",
			"molot_lapa\tex\viper\lapa_leaves_mc_co.paa",
			"molot_lapa\tex\viper\lapa_hood_mc_co.paa",
		};
		class XtdGearInfo
		{
			model="molot_lapa";
			Leaves="MC";
			Mask="Yes";
		};
	};
	class Zephyr_Lapa_Hood_NVG_MCAL_V2: Zephyr_Lapa_Hood_NVG_MC_V2
	{
		hiddenSelectionsTextures[]=
		{
			"molot_lapa\tex\viper\lapa_hood_mcal_co.paa",
			"molot_lapa\tex\viper\lapa_leaves_mcal_co.paa",
			"molot_lapa\tex\viper\lapa_hood_mcal_co.paa",
		};
		class XtdGearInfo
		{
			model="molot_lapa";
			Leaves="MCAL";
			Mask="Yes";
		};
	};
	class Zephyr_Lapa_Hood_NVG_SAPSAN_V2: Zephyr_Lapa_Hood_NVG_MC_V2
	{
		hiddenSelectionsTextures[]=
		{
			"molot_lapa\tex\viper\lapa_hood_sapsan_co.paa",
			"molot_lapa\tex\viper\lapa_leaves_sapsan_co.paa",
			"molot_lapa\tex\viper\lapa_hood_sapsan_co.paa",
		};
		class XtdGearInfo
		{
			model="molot_lapa";
			Leaves="SAPSAN";
			Mask="Yes";
		};
	};
	class Zephyr_Lapa_Hood_NVG_MCT_V2: Zephyr_Lapa_Hood_NVG_MC_V1
	{
		hiddenSelectionsTextures[]=
		{
			"molot_lapa\tex\viper\lapa_hood_mct_co.paa",
			"molot_lapa\tex\viper\lapa_leaves_mct_co.paa",
			"molot_lapa\tex\viper\lapa_hood_mct_co.paa",
		};
		class XtdGearInfo
		{
			model="molot_lapa";
			Leaves="MCT";
			Mask="Yes";
		};
	};
};
