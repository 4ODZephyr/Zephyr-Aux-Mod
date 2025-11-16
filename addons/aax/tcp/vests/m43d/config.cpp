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
			options[] = {"Camo", "ShoulderArmor", "ExtraArmor", };
			class Camo
			{
				label = "Camo";
				values[] = {"Black", };
				changeingame = 0;
				alwaysSelectable = 1;
			};
			class ShoulderArmor
			{
				label = "Shoulder Armor";
				values[] = {"None", "Breacher", "Odst", "Sharpshooter", };
				changeingame = 0;
				alwaysSelectable = 1;
				class Odst
				{
					label = "ODST";
				};
			};
			class ExtraArmor
			{
				label = "Extra Armor";
				values[] = {"None", "Thighs", "ThighsShins", "ThighsShinsGauntlets", };
				changeingame = 0;
				alwaysSelectable = 1;
				class ThighsShins
				{
					label = "Thighs & Shins";
				};
				class ThighsShinsGauntlets
				{
					label = "Thighs, Shins & Gauntlets";
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
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,None,None) \
			}; \
			class TCP_V_M43D_ODST_1_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,Odst,None) \
			}; \
			class TCP_V_M43D_ODST_2_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,Odst,Thighs) \
			}; \
			class TCP_V_M43D_ODST_3_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,Odst,ThighsShins) \
			}; \
			class TCP_V_M43D_ODST_4_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,Odst,ThighsShinsGauntlets) \
			}; \
			class TCP_V_M43D_BREACHER_1_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,Breacher,None) \
			}; \
			class TCP_V_M43D_BREACHER_2_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,Breacher,Thighs) \
			}; \
			class TCP_V_M43D_BREACHER_3_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,Breacher,ThighsShins) \
			}; \
			class TCP_V_M43D_BREACHER_4_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,Breacher,ThighsShinsGauntlets) \
			}; \
			class TCP_V_M43D_SHARPSHOOTER_1_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,Sharpshooter,None) \
			}; \
			class TCP_V_M43D_SHARPSHOOTER_2_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,Sharpshooter,Thighs) \
			}; \
			class TCP_V_M43D_SHARPSHOOTER_3_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,Sharpshooter,ThighsShins) \
			}; \
			class TCP_V_M43D_SHARPSHOOTER_4_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43D_Body(ArgCamo,Sharpshooter,ThighsShinsGauntlets) \
			};
		// end Macro_Zephyr_AAX_TCP_CBBAS_M43D_AllForCamo

		Macro_Zephyr_AAX_TCP_CBBAS_M43D_AllForCamo(Black)
	};
};
