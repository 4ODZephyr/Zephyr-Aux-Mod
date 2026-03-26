class CfgPatches
{
	class Zephyr_TCP_Ranks
	{
		name = "Zephyr - TCP Ranks";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"Zephyr_Core",
			"TCP_Data",
		};
	};
};

class CfgTCPRanks
{
	class Zephyr
	{
		scope = 2;
		displayName = "Zephyr";
		class Ranks
		{
			class R01
			{
				displayName = "Cadet";
				displayNameShort = "CDT";
				black = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R01_CDT_CA.paa";
				white = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R01_CDT_CA.paa";
				material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class R02
			{
				displayName = "Private";
				displayNameShort = "PVT";
				black = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R02_PVT_CA.paa";
				white = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R02_PVT_CA.paa";
				material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class R03
			{
				displayName = "Private First Class";
				displayNameShort = "PFC";
				black = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R03_PFC_CA.paa";
				white = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R03_PFC_CA.paa";
				material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class R04
			{
				displayName = "Lance Corporal";
				displayNameShort = "LCPL";
				black = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R04_LCPL_CA.paa";
				white = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R04_LCPL_CA.paa";
				material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class R05
			{
				displayName = "Specialist";
				displayNameShort = "SPC";
				black = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R05_SPC_CA.paa";
				white = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R05_SPC_CA.paa";
				material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class R06
			{
				displayName = "Warrent Officer";
				displayNameShort = "WO";
				black = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R06_WO_CA.paa";
				white = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R06_WO_CA.paa";
				material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class R07
			{
				displayName = "Chief Warrent Officer";
				displayNameShort = "CWO";
				black = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R07_CWO_CA.paa";
				white = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R07_CWO_CA.paa";
				material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class R08
			{
				displayName = "Petty Officer";
				displayNameShort = "PO";
				black = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R08_PO_CA.paa";
				white = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R08_PO_CA.paa";
				material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class R09
			{
				displayName = "Chief Petty Officer";
				displayNameShort = "CPO";
				black = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R09_CPO_CA.paa";
				white = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R09_CPO_CA.paa";
				material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class R10
			{
				displayName = "Senior Chief Petty Officer";
				displayNameShort = "SCPO";
				black = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R10_SCPO_CA.paa";
				white = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\R10_SCPO_CA.paa";
				material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class L05
			{
				displayName = "Corporal";
				displayNameShort = "CPL";
				black = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\L05_CPL_CA.paa";
				white = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\L05_CPL_CA.paa";
				material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class L06
			{
				displayName = "Sergeant";
				displayNameShort = "SGT";
				black = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\L06_SGT_CA.paa";
				white = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\L06_SGT_CA.paa";
				material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class L07
			{
				displayName = "Staff Sergeant";
				displayNameShort = "SSGT";
				black = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\L07_SSGT_CA.paa";
				white = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\L07_SSGT_CA.paa";
				material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class L08
			{
				displayName = "2nd Lieutenant";
				displayNameShort = "2LT";
				black = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\L08_2LT_CA.paa";
				white = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\L08_2LT_CA.paa";
				material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class L09
			{
				displayName = "1st Lieutenant";
				displayNameShort = "1LT";
				black = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\L09_1LT_CA.paa";
				white = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\L09_1LT_CA.paa";
				material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class L10
			{
				displayName = "Captain";
				displayNameShort = "CPT";
				black = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\L10_CPT_CA.paa";
				white = "\z\zephyr\addons\tcp_ranks\data\decals\ranks\L10_CPT_CA.paa";
				material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
		};
	};
};
