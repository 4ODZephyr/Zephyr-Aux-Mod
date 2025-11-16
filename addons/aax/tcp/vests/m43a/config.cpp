class CfgPatches
{
	class Zephyr_AAX_TCP_Vest_M43A
	{
		addonRootClass = "Zephyr_AAX";
		name = "Zephyr - AAX - TCP - Vests - M43A";
		author = "Lupus590";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"TCP_Characters_BLUFOR_UNSC_Army_Vests_M43A",
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class Zephyr_AAX_TCP_CBBAS_M43A
		{
			label = "M43/A CBBAS";
			author = "Lupus590";
			options[] = {"Camo", "ShoulderArmor", "ExtraArmor", };
			class Camo
			{
				label = "Camo";
				values[] =
				{
					"Black",
					"Brown",
					"Green",
					"Olive",
					"Tan",
					"White",
					"Woodland",
				};
				changeingame = 0;
				alwaysSelectable = 1;
			};
			class ShoulderArmor
			{
				label = "Shoulder Armor";
				values[] = {"None", "BaseSecurity", "GungnirLarge", "GungnirSmall", };
				changeingame = 0;
				alwaysSelectable = 1;
				class BaseSecurity
				{
					label = "Base Security";
				};
				class GungnirLarge
				{
					label = "Gungnir Large";
				};
				class GungnirSmall
				{
					label = "Gungnir Small";
				};
			};
			class ExtraArmor
			{
				label = "Extra Armor";
				values[] = {"None", "Thighs", "ThighsShins", };
				changeingame = 0;
				alwaysSelectable = 1;
				class ThighsShins
				{
					label = "Thighs & Shins";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		#define Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo, ArgShoulderArmor, ArgExtraArmor) \
			model = "Zephyr_AAX_TCP_CBBAS_M43A"; \
			Camo = #ArgCamo; \
			ShoulderArmor = #ArgShoulderArmor; \
			ExtraArmor = #ArgExtraArmor;
		// end Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body

		#define Macro_Zephyr_AAX_TCP_CBBAS_M43A_AllForCamo(ArgCamo) \
			class TCP_V_M43A_Light_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,None,None) \
			}; \
			class TCP_V_M43A_BaseSec_1_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,BaseSecurity,None) \
			}; \
			class TCP_V_M43A_BaseSec_2_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,BaseSecurity,Thighs) \
			}; \
			class TCP_V_M43A_BaseSec_3_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,BaseSecurity,ThighsShins) \
			}; \
			class TCP_V_M43A_GungnirS_1_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,GungnirSmall,None) \
			}; \
			class TCP_V_M43A_GungnirS_2_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,GungnirSmall,Thighs) \
			}; \
			class TCP_V_M43A_GungnirS_3_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,GungnirSmall,ThighsShins) \
			}; \
			class TCP_V_M43A_GungnirL_1_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,GungnirLarge,None) \
			}; \
			class TCP_V_M43A_GungnirL_2_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,GungnirLarge,Thighs) \
			}; \
			class TCP_V_M43A_GungnirL_3_##ArgCamo## \
			{ \
				Macro_Zephyr_AAX_TCP_CBBAS_M43A_Body(ArgCamo,GungnirLarge,ThighsShins) \
			};
		// end Macro_Zephyr_AAX_TCP_CBBAS_M43A_AllForCamo

		Macro_Zephyr_AAX_TCP_CBBAS_M43A_AllForCamo(Black)
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_AllForCamo(Brown)
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_AllForCamo(Green)
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_AllForCamo(Olive)
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_AllForCamo(Tan)
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_AllForCamo(White)
		Macro_Zephyr_AAX_TCP_CBBAS_M43A_AllForCamo(Woodland)
	};
};
