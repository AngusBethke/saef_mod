class CfgPatches
{
	class SA_NDF_UNIFORMS
	{
		author="Rabid Squirrel";
		addonRootClass="SA_NDF";
		requiredAddons[]=
		{
			"SA_NDF",
			"A3_Characters_F",
			"A3_Characters_F_Beta",
			"A3_Characters_F_Gamma"
		};
		requiredVersion=0.1;
		units[]=
		{
			"SANDF_Soldier_R",
			"SANDF_Soldier_RL"
		};
		weapons[]=
		{
			"SANDF_Uniform",
			"SANDF_Uniform_S"
		};
	};
};
class CfgVehicles
{
	class I_Soldier_base_F;
	
	//Private Definitions
	class SANDF_Soldier_R: I_Soldier_base_F
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Soldier_R";
		scope=1;
		side=2;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformClass="SANDF_Uniform";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SA_NDF\Uniforms\Data\SANDF_Clothing_co.paa"
		};
	};
	class SANDF_Soldier_RL: SANDF_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Soldier_RL";
		scope=1;
		side=2;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass="SANDF_Uniform_S";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\SA_NDF\Uniforms\Data\SANDF_Clothing_co.paa"
		};
	};
};
class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class SANDF_Uniform: Uniform_Base
	{
		scope=2;
		author="Rabid Squirrel";
		displayName="SANDF Uniform";
		picture="\sa_ndf\uniforms\data\ui\sandf_uniform_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SA_NDF\Uniforms\Data\SANDF_Clothing_co.paa"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			uniformModel="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
			uniformClass="SANDF_Soldier_R";
			containerClass="Supply50";
			armor=10;
			mass=50;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class SANDF_Uniform_S: Uniform_Base
	{
		scope=2;
		author="Rabid Squirrel";
		displayName="SANDF Uniform SS";
		picture="\sa_ndf\uniforms\data\ui\sandf_uniform_s_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SA_NDF\Uniforms\Data\SANDF_Clothing_co.paa"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			uniformModel="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
			uniformClass="SANDF_Soldier_RL";
			containerClass="Supply50";
			armor=10;
			mass=50;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
};