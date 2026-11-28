#include "\z\Zephyr\addons\core\define.hpp"

class CfgPatches
{
	class Zephyr_Tweaks_TCP_Weapons_GL_Flashbang
	{
		addonRootClass = "Zephyr_Core";
		name = "Zephyr - Tweaks - TCP Weapons GL Flashbang";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
			"TCP_Weapons_Ammo_40_HE",
			"tsp_flashbang",
		};
		skipWhenMissingDependencies = TRUE;
		skipWhenAnyAddonPresent[] = {};
	};
};

class CfgAmmo
{
	class tsp_flashbang_fakels_ammo;
	class Zephyr_G_40_Flashbang_Tsp: tsp_flashbang_fakels_ammo
	{
		typicalSpeed = 76;
		deflecting = 30;
		deflectionSlowDown = 0.5;
		model = "\TCP\Weapons\Ammo\40\HE\slug_40mm.p3d";
		airFriction = -0.001;
	};
};
class CfgMagazines
{
	class TCP_1Rnd_40_Shell_HE;
	class Zephyr_1Rnd_40_Shell_Flashbang: TCP_1Rnd_40_Shell_HE
	{
		author = "Lupus590";
		displayName = "40 mm Flashbang Round";
		descriptionShort = "Warning:<br/>Bright light can damage ears<br/>Loud noise can damage eyes<br/>Wait<br/>I think that was supposed to be the other way round<br/><br/>Whatever, it's not service related, whichever it is";
		ammo = "Zephyr_G_40_Flashbang_Tsp";
		flashbang="sleep 1.5; [_this#0, _this#1] spawn tsp_fnc_flashbang";
	};
	class Zephyr_1Rnd_40_Shell_Flashbang2: Zephyr_1Rnd_40_Shell_Flashbang
	{
		displayName = "40 mm Flashbang Round (2-Bang)";
		flashbang="sleep 1.5; for '_i' from 1 to 2 do {[_this#0, _this#1] spawn tsp_fnc_flashbang; sleep ((random 1) min 0.25 max 0.2)}";
	};
};
class CfgMagazineWells
{
	class TCP_40_1
	{
		ZephyrFlashbangGL[] += {
			"Zephyr_1Rnd_40_Shell_Flashbang",
			"Zephyr_1Rnd_40_Shell_Flashbang2",
		};
	};
	class UGL_40x36
	{
		ZephyrFlashbangGL[] += {
			"Zephyr_1Rnd_40_Shell_Flashbang",
			"Zephyr_1Rnd_40_Shell_Flashbang2",
		};
	};
	class CBA_40mm_M203
	{
		ZephyrFlashbangGL[] += {
			"Zephyr_1Rnd_40_Shell_Flashbang",
			"Zephyr_1Rnd_40_Shell_Flashbang2",
		};
	};
	class CBA_40mm_EGLM
	{
		ZephyrFlashbangGL[] += {
			"Zephyr_1Rnd_40_Shell_Flashbang",
			"Zephyr_1Rnd_40_Shell_Flashbang2",
		};
	};
};
