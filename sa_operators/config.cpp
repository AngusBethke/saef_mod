class CfgPatches
{
	class SA_OPR_UNIFORMS
	{
		author="Rabid Squirrel";
		addonRootClass="SA_PMC";
		requiredAddons[]=
		{
			"SA_PMC_UNIFORMS",
			"A3_Characters_F",
			"A3_Characters_F_Beta",
			"A3_Characters_F_Gamma"
		};
		requiredVersion=0.1;
		units[]=
		{
			"SA_OPR_Soldier_BLK",
			"SA_OPR_Soldier_RED",
			"SA_OPR_Soldier_BLU",
			"SA_OPR_Soldier_GRN"
		};
		weapons[]=
		{
			"SA_OPR_Uniform_BLK",
			"SA_OPR_Uniform_RED",
			"SA_OPR_Uniform_BLU",
			"SA_OPR_Uniform_GRN"
		};
	};
};
class CfgVehicles
{
	class I_Soldier_base_F;
	
	//Private Definitions
	class SA_OPR_Soldier_BLK: I_Soldier_base_F
	{
		author="Rabid Squirrel";
		scope=1;
		side=2;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass="SA_OPR_Uniform_BLK";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_operators\Data\SA_Operator_OLV_BLK_co.paa"
		};
	};
	class SA_OPR_Soldier_RED: I_Soldier_base_F
	{
		author="Rabid Squirrel";
		scope=1;
		side=2;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass="SA_OPR_Uniform_RED";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_operators\Data\SA_Operator_OLV_RED_co.paa"
		};
	};
	class SA_OPR_Soldier_BLU: I_Soldier_base_F
	{
		author="Rabid Squirrel";
		scope=1;
		side=2;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass="SA_OPR_Uniform_BLU";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_operators\Data\SA_Operator_OLV_BLU_co.paa"
		};
	};
	class SA_OPR_Soldier_GRN: I_Soldier_base_F
	{
		author="Rabid Squirrel";
		scope=1;
		side=2;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass="SA_OPR_Uniform_GRN";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_operators\Data\SA_Operator_OLV_GRN_co.paa"
		};
	};
};
class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class SA_Uniform_S;
	class SA_OPR_Uniform_BLK: SA_Uniform_S
	{
		author="Rabid Squirrel";
		displayName="Operator Fatigues (Black)";
		picture="\sa_uniforms\data\ui\saef_uniform_autumn_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_operators\Data\SA_Operator_OLV_BLK_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
			uniformClass="SA_OPR_Soldier_BLK";
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo",
				"insignia"
			};
		};
	};
	class SA_OPR_Uniform_RED: SA_OPR_Uniform_BLK
	{
		author="Rabid Squirrel";
		displayName="Operator Fatigues (Red)";
		picture="\sa_uniforms\data\ui\saef_uniform_autumn_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_operators\Data\SA_Operator_OLV_RED_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_OPR_Soldier_RED";
		};
	};
	class SA_OPR_Uniform_BLU: SA_OPR_Uniform_BLK
	{
		author="Rabid Squirrel";
		displayName="Operator Fatigues (Blue)";
		picture="\sa_uniforms\data\ui\saef_uniform_autumn_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_operators\Data\SA_Operator_OLV_BLU_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_OPR_Soldier_BLU";
		};
	};
	class SA_OPR_Uniform_GRN: SA_OPR_Uniform_BLK
	{
		author="Rabid Squirrel";
		displayName="Operator Fatigues (Green)";
		picture="\sa_uniforms\data\ui\saef_uniform_autumn_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_operators\Data\SA_Operator_OLV_GRN_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_OPR_Soldier_GRN";
		};
	};
};