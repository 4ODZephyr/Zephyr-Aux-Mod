class CfgPatches
{
	class Zephyr_AAX_TCP_Vests_M43D
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - Vests - M43D";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Marines_Vests_M43D",
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class Zephyr_AAX_TCP_CBBAS_M43D
		{
			label = "M43/D CBBAS (Black)";
			author = "Lupus590";
			options[] = {"Camo", "ShoulderArmor", "ExtraArmor"};
			class Camo
			{
				label = "Camo";
				values[] = {"Black"};
				changeingame = 0;
				alwaysSelectable = 1;
			};
			class ShoulderArmor
			{
				label = "Shoulder Armor";
				values[] = {"ShoulderNone", "ShoulderBreacher", "ShoulderOdst", "ShoulderSharpshooter"};
				changeingame = 0;
				alwaysSelectable = 1;
				class ShoulderNone
				{
					label = "None";
				};
				class ShoulderBreacher
				{
					label = "Breacher";
				};
				class ShoulderOdst
				{
					label = "ODST";
				};
				class ShoulderSharpshooter
				{
					label = "Sharpshooter";
				};
			};
			class ExtraArmor
			{
				label = "Extra Armor";
				values[] = {"ExtraNone", "ExtraThighs", "ExtraThighsShins", "ExtraThinShinsGauntlets"};
				changeingame = 0;
				alwaysSelectable = 1;
				class ExtraNone
				{
					label = "None";
				};
				class ExtraThighs
				{
					label = "Thighs";
				};
				class ExtraThighsShins
				{
					label = "Thighs & Shins";
				};
				class ExtraThinShinsGauntlets
				{
					label = "Thin, Shins & Gauntlets";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		#define Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo, ArgShoulderArmor, ArgExtraArmor) \
			model = "Zephyr_AAX_TCP_CBBAS_M43D"; \
			Camo = #ArgCamo; \
			ShoulderArmor = #ArgShoulderArmor; \
			ExtraArmor = #ArgExtraArmor;
		// end Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body

		#define Macro_Zephyr_AAX_TCP_CBBAS_M43D_AllForCamo(ArgCamo) \
			class TCP_V_M43D_Light_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,ShoulderNone,ExtraNone) \
			}; \
			class TCP_V_M43D_ODST_1_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,ShoulderOdst,ExtraNone) \
			}; \
			class TCP_V_M43D_ODST_2_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,ShoulderOdst,ExtraThighs) \
			}; \
			class TCP_V_M43D_ODST_3_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,ShoulderOdst,ExtraThighsShins) \
			}; \
			class TCP_V_M43D_ODST_4_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,ShoulderOdst,ExtraThinShinsGauntlets) \
			}; \
			class TCP_V_M43D_BREACHER_1_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,ShoulderBreacher,ExtraNone) \
			}; \
			class TCP_V_M43D_BREACHER_2_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,ShoulderBreacher,ExtraThighs) \
			}; \
			class TCP_V_M43D_BREACHER_3_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,ShoulderBreacher,ExtraThighsShins) \
			}; \
			class TCP_V_M43D_BREACHER_4_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,ShoulderBreacher,ExtraThinShinsGauntlets) \
			}; \
			class TCP_V_M43D_SHARPSHOOTER_1_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,ShoulderSharpshooter,ExtraNone) \
			}; \
			class TCP_V_M43D_SHARPSHOOTER_2_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,ShoulderSharpshooter,ExtraThighs) \
			}; \
			class TCP_V_M43D_SHARPSHOOTER_3_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,ShoulderSharpshooter,ExtraThighsShins) \
			}; \
			class TCP_V_M43D_SHARPSHOOTER_4_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,ShoulderSharpshooter,ExtraThinShinsGauntlets) \
			};
		// end Macro_Zephyr_AAX_TCP_CBBAS_M43D_AllForCamo

		Macro_Zephyr_AAX_TCP_CBBAS_M43D_AllForCamo(Black)
	};
};
