class CfgPatches
{
	class SA_PMC
	{
		version=2;
		units[]=
		{
			"SA_Soldier_Base",
			"SA_Soldier_Base_Jersey"
		};
		weapons[]=
		{
			// Backpacks
			"SA_Base_Carryall",
			"SA_Base_Kitbag",
			"SA_Base_Carryall",
			"SA_Base_Bergen",
			
			// Vests
			"SA_Base_PlateCarrier_1",
			"SA_Base_PlateCarrier_2",
			
			// Uniforms
			"SA_Base_Uniform",
			"SA_Base_Uniform_RS",
			"SA_Base_Uniform_Jersey",
			"SA_Base_Uniform_Jersey_RS",
			
			// Helmets
			"SA_Base_ECH_Light",
			"SA_Base_ECH_Spec",
			"SA_Base_ECH_Camo"
		};
		author="SAEF Dev Team";
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Weapons_F",
			"A3_Weapons_F_Ammoboxes"
		};
	};
};

class CfgMods
{
	class Mod_Base;
	class SAEF: Mod_Base
	{
		author="SAEF Dev Team";
		picture="\sa_pmc\Data\SAEF_logo_square.paa";
		logo="\sa_pmc\Data\SAEF_logo_square.paa";
		logoOver="\sa_pmc\Data\SAEF_logo_square.paa";
		logoSmall="\sa_pmc\Data\SAEF_logo_square.paa";
		dlcColor[]={0,0,0,1};
		hideName=1;
		hidePicture=0;
		tooltip="SAEF";
		tooltipOwned="SAEF";
		name="SAEF: South African Expeditionary Forces";
		overview="South African Forces brought to Arma 3";
		dir="sa_pmc";
	};
	author="SAEF Dev Team";
};

class CfgVehicles
{
	// Soldier Base Classes
	class I_Soldier_base_F;
	class SA_Soldier_Base: I_Soldier_base_F
	{
		author="SAEF Dev Team";
		scope=1;
		side=2;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformClass="SA_Base_Uniform";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
	};
	class SA_Soldier_Base_RS: SA_Soldier_Base
	{
		author="SAEF Dev Team";
		scope=1;
		side=2;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass="SA_Base_Uniform_RS";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
	};
	class SA_Soldier_Base_Jersey: I_Soldier_base_F
	{
		author="SAEF Dev Team";
		scope=1;
		side=2;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformClass="SA_Base_Uniform_Jersey";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_pmc\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_Soldier_Base_Jersey_RS: SA_Soldier_Base_Jersey
	{
		author="SAEF Dev Team";
		scope=1;
		side=2;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass="SA_Base_Uniform_Jersey_RS";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_pmc\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	
	// Backpack Base Classes
	class Bag_Base;
	class B_Kitbag_Base;
	class B_AssaultPack_Base;
	class B_Carryall_Base;
	class B_Bergen_Base_F;
	
	class SA_Base_Carryall: B_Carryall_Base
	{
		author="SAEF Dev Team";
		scope=2;
		scopeArsenal=0;
		displayName="SAEF Carryall Base";
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		maximumLoad=320;
		mass=40;
		hiddenSelections[]=
		{
			"camo"
		};
	};
	
	class SA_Base_Backpack: B_AssaultPack_Base
	{
		author="SAEF Dev Team";
		scope=2;
		scopeArsenal=0;
		displayName="SAEF Assault Pack Base";
		hiddenSelections[]=
		{
			"camo"
		};
	};
	
	class SA_Base_Kitbag: B_Kitbag_Base
	{
		author="SAEF Dev Team";
		scope=2;
		scopeArsenal=0;
		displayName="SAEF Kitbag Base";
		hiddenSelections[]=
		{
			"camo"
		};
	};
	
	class SA_Base_Bergen: B_Bergen_Base_F
	{
		author="SAEF Dev Team";
		scope=2;
		scopeArsenal=0;
		displayName="SAEF Bergen Base";
	};
};

class CfgWeapons
{
	// Uniform Base Classes
	class Uniform_Base;
	class UniformItem;
	
	class SA_Base_Uniform: Uniform_Base
	{
		author="SAEF Dev Team";
		scope=2;
		scopeArsenal=0;
		displayName="SAEF BASE Uniform";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			uniformModel="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
			uniformClass="SA_Soldier_R";
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class SA_Base_Uniform_RS: Uniform_Base
	{
		author="SAEF Dev Team";
		scope=2;
		scopeArsenal=0;
		displayName="SAEF BASE Uniform Rolled";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			uniformModel="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
			uniformClass="SA_Soldier_RL";
			containerClass="Supply50";
			armor=10;
			mass=50;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class SA_Base_Uniform_Jersey: SA_Base_Uniform
	{
		author="SAEF Dev Team";
		scope=2;
		scopeArsenal=0;
		displayName="SAEF BASE Uniform Jersey";
		hiddenSelectionsMaterials[]=
		{
			"sa_pmc\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_Base_Uniform_Jersey_RS: SA_Base_Uniform_RS
	{
		author="SAEF Dev Team";
		scope=2;
		scopeArsenal=0;
		displayName="SAEF BASE Uniform Jersey Rolled";
		hiddenSelectionsMaterials[]=
		{
			"sa_pmc\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	
	// Vest Base Classes
	class V_PlateCarrier2_blk;
	class V_PlateCarrier1_tna_F;
	
	class SA_Base_PlateCarrier_1: V_PlateCarrier2_blk
	{
		author="SAEF Dev Team";
		scope=2;
		scopeArsenal=0;
		displayName="SAEF BASE Plate Carrier 1";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01";
		descriptionShort="Armor Level V";
		hiddenSelections[]=
		{
			"camo"
		};
	};
	class SA_Base_PlateCarrier_2: V_PlateCarrier1_tna_F
	{
		author="SAEF Dev Team";
		scope=2;
		scopeArsenal=0;
		displayName="SAEF BASE Plate Carrier 2";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		descriptionShort="Armor Level V";
		hiddenSelections[]=
		{
			"camo"
		};
	};
	
	// Helmet Base Classes
	class H_HelmetB_light;
	class H_HelmetSpecB;
	class H_HelmetB_camo;
	
	class SA_Base_ECH_Light: H_HelmetB_light
	{
		author="SAEF Dev Team";
		scope=2;
		scopeArsenal=0;
		displayName="SAEF ECH Light Base";
		hiddenSelections[]=
		{
			"camo"
		};
	};
	class SA_Base_ECH_Spec: H_HelmetSpecB
	{
		author="SAEF Dev Team";
		scope=2;
		scopeArsenal=0;
		displayName="SAEF ECH Base";
		hiddenSelections[]=
		{
			"camo"
		};
	}
	class SA_Base_ECH_Camo: H_HelmetB_camo
	{
		author="SAEF Dev Team";
		scope=2;
		scopeArsenal=0;
		displayName="SAEF ECH Camo Base";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
		};
	};
};