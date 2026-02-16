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
			"Zephyr_Insignia",
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
		icon = "\z\zephyr\addons\insignia\zephyr_patch.paa";
		color[]={1,1,1,1};
		size=40;
		shadow = 0;
		scope = 2;
		markerClass = "Zephyr_MapMarkers";
	};

	class Zephyr_Marker_CAA : Zephyr_Marker
	{
		name="[4ODZ] CAA";
		icon = "\z\zephyr\addons\map_markers\CAA.paa";
	};

	class Zephyr_Marker_Innie : Zephyr_Marker
	{
		name="[4ODZ] Innie";
		icon = "\z\zephyr\addons\map_markers\Innie.paa";
	};

	class Zephyr_Marker_Innie2 : Zephyr_Marker
	{
		name="[4ODZ] Innie Alt.";
		icon = "\z\zephyr\addons\map_markers\Innie2.paa";
	};

	class Zephyr_Marker_ONI : Zephyr_Marker
	{
		name="[4ODZ] ONI";
		icon = "\z\zephyr\addons\map_markers\ONI.paa";
	};

	class Zephyr_Marker_UEG : Zephyr_Marker
	{
		name="[4ODZ] UEG";
		icon = "\z\zephyr\addons\map_markers\UEG.paa";
	};

	class Zephyr_Marker_UNSC : Zephyr_Marker
	{
		name="[4ODZ] UNSC";
		icon = "\z\zephyr\addons\map_markers\UNSC.paa";
	};

	class Zephyr_Marker_UNSC_Air_Force : Zephyr_Marker
	{
		name="[4ODZ] UNSC Air Force";
		icon = "\z\zephyr\addons\map_markers\UNSC_Air_Force.paa";
	};

	class Zephyr_Marker_UNSC_Army : Zephyr_Marker
	{
		name="[4ODZ] UNSC Army";
		icon = "\z\zephyr\addons\map_markers\UNSC_Army.paa";
	};

	class Zephyr_Marker_UNSC_Marine_Corps : Zephyr_Marker
	{
		name="[4ODZ] UNSC Marine Corps";
		icon = "\z\zephyr\addons\map_markers\UNSC_Marine_Corps.paa";
	};

	class Zephyr_Marker_UNSC_Navy : Zephyr_Marker
	{
		name="[4ODZ] UNSC Navy";
		icon = "\z\zephyr\addons\map_markers\UNSC_Navy.paa";
	};
};
