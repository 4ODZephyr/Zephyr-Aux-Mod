#include "\z\Zephyr\addons\core\define.hpp"

class CfgPatches
{
	class Zephyr_TCP_Servershortcut
	{
		name = "Zephyr - TCP Server Shortcut";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
			"TCP_Ui",
		};
		skipWhenMissingDependencies = TRUE;
		skipWhenAnyAddonPresent[] = {};
	};
};

class CfgMissions
{
    class TCPServers
    {
		class Zephyr_Official
        {
            author = "Lupus590";
            briefingName = "Official Zephyr Servers";
            overviewPicture = "";
            overviewText = "";
            class Zephyr_MainServer
            {
                author = "Lupus590";
                briefingName = "Zephyr Main Server";
                overviewPicture = "";
                overviewText = "overview text";
                address = "";
                port = "";
                pass = "";
            };
        };
    };
};
