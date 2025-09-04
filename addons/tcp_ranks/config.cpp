class CfgPatches
{
	class 4ODZ_TCP_Ranks
	{
		name = "TCP Ranks";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Data",
		};
	};
};

class CfgTCPRanks
{
	class ZephyrCommon
	{
		Scope = 0;
		class Ranks
		{
			class Cadet
			{
				displayName = "E1 Cadet";
				black = "\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E1_CA.paa";
				white = "\TCP\Data\Decals\Ranks\UNICOM\White\rank_E1_CA.paa";
				//material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class Private
			{
				displayName = "E2 Private";
				black = "\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E1_CA.paa";
				white = "\TCP\Data\Decals\Ranks\UNICOM\White\rank_E1_CA.paa";
				//material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class PrivateFirstClass
			{
				displayName = "E3 Private First Class";
				black = "\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E1_CA.paa";
				white = "\TCP\Data\Decals\Ranks\UNICOM\White\rank_E1_CA.paa";
				//material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class LanceCorporal
			{
				displayName = "E4 Lance Corporal";
				black = "\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E1_CA.paa";
				white = "\TCP\Data\Decals\Ranks\UNICOM\White\rank_E1_CA.paa";
				//material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
		};
	};
	class ZephyrGeneralTrack : ZephyrCommon
	{
		Scope = 2;
		displayName = "Zephyr General Track";
		class Ranks : Ranks
		{
			class Specialist
			{
				displayName = "E5 Specialist";
				black = "\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E1_CA.paa";
				white = "\TCP\Data\Decals\Ranks\UNICOM\White\rank_E1_CA.paa";
				//material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class WarrentOfficer
			{
				displayName = "E6 Warrent Officer";
				black = "\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E1_CA.paa";
				white = "\TCP\Data\Decals\Ranks\UNICOM\White\rank_E1_CA.paa";
				//material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class ChiefWarrentOfficer
			{
				displayName = "E7 Chief Warrent Officer";
				black = "\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E1_CA.paa";
				white = "\TCP\Data\Decals\Ranks\UNICOM\White\rank_E1_CA.paa";
				//material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class PettytOfficer
			{
				displayName = "E8 Petty Officer";
				black = "\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E1_CA.paa";
				white = "\TCP\Data\Decals\Ranks\UNICOM\White\rank_E1_CA.paa";
				//material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class ChiefPettyOfficer
			{
				displayName = "E9 Chief Petty Officer";
				black = "\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E1_CA.paa";
				white = "\TCP\Data\Decals\Ranks\UNICOM\White\rank_E1_CA.paa";
				//material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class SeniorChiefPettyOfficer
			{
				displayName = "E10 Senior Chief Petty Officer";
				black = "\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E1_CA.paa";
				white = "\TCP\Data\Decals\Ranks\UNICOM\White\rank_E1_CA.paa";
				//material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
		};
	};
	class ZephyrLeadershipTrack : ZephyrCommon
	{
		Scope = 2;
		displayName = "Zephyr Leadership Track";
		class Ranks : Ranks
		{
			class Corporal
			{
				displayName = "O5 Corporal";
				black = "\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E1_CA.paa";
				white = "\TCP\Data\Decals\Ranks\UNICOM\White\rank_E1_CA.paa";
				//material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class Sergeant
			{
				displayName = "O6 Sergeant";
				black = "\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E1_CA.paa";
				white = "\TCP\Data\Decals\Ranks\UNICOM\White\rank_E1_CA.paa";
				//material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class StaffSergeant
			{
				displayName = "O7 Staff Sergeant";
				black = "\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E1_CA.paa";
				white = "\TCP\Data\Decals\Ranks\UNICOM\White\rank_E1_CA.paa";
				//material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class 2ndLieutenant
			{
				displayName = "O8 2nd Lieutenant";
				black = "\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E1_CA.paa";
				white = "\TCP\Data\Decals\Ranks\UNICOM\White\rank_E1_CA.paa";
				//material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class 1stLieutenant
			{
				displayName = "O9 1st Lieutenant";
				black = "\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E1_CA.paa";
				white = "\TCP\Data\Decals\Ranks\UNICOM\White\rank_E1_CA.paa";
				//material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
			class Captain
			{
				displayName = "O10 Captain";
				black = "\TCP\Data\Decals\Ranks\UNICOM\Black\rank_E1_CA.paa";
				white = "\TCP\Data\Decals\Ranks\UNICOM\White\rank_E1_CA.paa";
				//material = "\TCP\Data\Decals\Ranks\UNICOM\rank_E1.rvmat";
			};
		};
	};
};
