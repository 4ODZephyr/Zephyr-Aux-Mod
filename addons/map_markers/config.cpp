class CfgPatches
{
	class Zephyr_Map_Markers
	{
		addonRootClass = "Zephyr_Core";
		name = "Zephyr - Map Markers";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
			"Zephyr_Insignia_Patch",
		};
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
		icon = "\z\zephyr\addons\insignia_patch\zephyr_patch.paa";
		color[]={1,1,1,1};
		size=40;
		shadow = 0;
		scope = 2;
		markerClass = "Zephyr_MapMarkers";
	};
};
