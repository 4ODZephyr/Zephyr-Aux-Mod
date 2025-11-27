class CfgPatches
{
	class Zephyr_Unit_Patch
	{
		addonRootClass = "Zephyr_Core";
		name = "Zephyr - Unit Patch";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
		};
	};
};

class CfgUnitInsignia
{
	class Zephyr_Patch
	{
		displayName = "Zephyr Unit Patch";
		author = "Lupus590";
		texture = "\z\zephyr\addons\unit_patch\zephyr_patch.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
};

class CfgMarkerClasses
{
	class Zephyr_MapMarkers
	{
		displayName = "Zephyr Markers";
	};
};

class CfgMarkers
{
	class Zephyr_Marker
	{
		name="[4ODZ] Zephyr";
		icon="\z\zephyr\addons\unit_patch\zephyr_patch.paa";
		color[]={1,1,1,1};
		size=40;
		shadow = 0;
		scope = 2;
		markerClass = "Zephyr_MapMarkers";
	};
};
