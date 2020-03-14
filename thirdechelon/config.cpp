class CfgPatches
{
	class ThirdEchelon_Gear
	{
		author="Rabid Squirrel";
		name="Third Echelon Gear";
		requiredAddons[]=
		{
			"A3_Characters_F_Exp",
			"A3_Weapons_F_Rifles_MK20",
			"A3_Supplies_F_Exp",
			"A3_Characters_F_Exp_Vests"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_V_Soldier_ThirdEchelon_F",
			"B_ViperHarness_ThirdEchelon_F",
			"B_ViperLightHarness_ThirdEchelon_F"
		};
		weapons[]=
		{
			"U_B_V_Soldier_ThirdEchelon_F",
			"V_TacChestrig_ThirdEchelon_F",
			"arifle_Mk20_ThirdEchelon_F",
			"arifle_Mk20C_ThirdEchelon_F",
			"arifle_Mk20_GL_ThirdEchelon_F",
			"hgun_Pistol_heavy_01_ThirdEchelon_F",
			"O_NVGoggles_blk_F"
		};
	};
};

class CfgVehicles
{
	// Vehicle Classes for the Uniform
	class O_V_Soldier_Viper_F;
	class B_V_Soldier_ThirdEchelon_F: O_V_Soldier_Viper_F
	{
		author="Rabid Squirrel";
		scope=1;
		faction="OPF_T_F";
		displayName="Third Echelon Operative";
		uniformClass="U_B_V_Soldier_ThirdEchelon_F";
		hiddenSelectionsTextures[]=
		{
			"\ThirdEchelon\Data\ThirdEchelon_Suit_co.paa"
		};
		weapons[]=
		{
			"arifle_ARX_Viper_hex_F",
			"Throw",
			"Put"
		};
		respawnWeaponsp[]=
		{
			"arifle_ARX_Viper_hex_F",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"H_HelmetO_ViperSP_hex_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"H_HelmetO_ViperSP_hex_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		DLC="Expansion";
	};
	
	// Backpacks
	class B_ViperHarness_base_F;
	class B_ViperHarness_ThirdEchelon_F: B_ViperHarness_base_F
	{
		author="Rabid Squirrel";
		scope=2;
		displayName="Third Echelon Backpack";
		picture="\ThirdEchelon\Data\UI\Icon_ThirdEchelon_Backpack_co.paa";
		hiddenSelectionsTextures[]=
		{
			"\ThirdEchelon\Data\ThirdEchelon_Backpack_co.paa"
		};
	};
	class B_ViperLightHarness_base_F;
	class B_ViperLightHarness_ThirdEchelon_F: B_ViperLightHarness_base_F
	{
		author="Rabid Squirrel";
		scope=2;
		displayName="Third Echelon Light Backpack";
		picture="\ThirdEchelon\Data\UI\Icon_ThirdEchelon_Backpack_co.paa";
		hiddenSelectionsTextures[]=
		{
			"\ThirdEchelon\Data\ThirdEchelon_Backpack_co.paa"
		};
	};
};

class CfgWeapons
{
	// Uniform
	class UniformItem;
	class Uniform_Base;
	class U_B_V_Soldier_ThirdEchelon_F: Uniform_Base
	{
		author="Rabid Squirrel";
		scope=2;
		displayName="Third Echelon Suit";
		picture="\ThirdEchelon\Data\UI\Icon_ThirdEchelon_Suit_co.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ThirdEchelon\Data\ThirdEchelon_Suit_co.paa"
		};
		DLC="Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_V_Soldier_ThirdEchelon_F";
			containerClass="Supply20";
			mass=120;
		};
	};
	
	// Vests
	class V_TacChestrig_grn_F;
	class V_TacChestrig_ThirdEchelon_F: V_TacChestrig_grn_F
	{
		author="Rabid Squirrel";
		displayName="Third Echelon Chestrig";
		picture="\ThirdEchelon\Data\UI\Icon_ThirdEchelon_TacChestrig_co.paa";
		hiddenSelectionsTextures[]=
		{
			"\ThirdEchelon\Data\ThirdEchelon_TacChestrig_co.paa"
		};
		DLC="Expansion";
	};
	
	// Weapons
	class arifle_Mk20_F;
	class arifle_Mk20_ThirdEchelon_F: arifle_Mk20_F
	{
		author="Rabid Squirrel";
		baseWeapon="arifle_Mk20_blk_F";
		displayName="$STR_A3_CfgWeapons_arifle_Mk200";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\ThirdEchelon\Data\ThirdEchelon_MK20_co.paa",
			"\ThirdEchelon\Data\ThirdEchelon_MK20_UTL_CO.paa"
		};
		picture="\ThirdEchelon\Data\UI\Gear_ThirdEchelon_MK20_co.paa";
	};
	class arifle_Mk20C_F;
	class arifle_Mk20C_ThirdEchelon_F: arifle_Mk20C_F
	{
		author="Rabid Squirrel";
		baseWeapon="arifle_Mk20C_ThirdEchelon_F";
		displayName="$STR_A3_CFGWEAPONS_ARIFLE_MK20C0";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\ThirdEchelon\Data\ThirdEchelon_MK20_co.paa",
			"\ThirdEchelon\Data\ThirdEchelon_MK20_UTL_CO.paa"
		};
		picture="\ThirdEchelon\Data\UI\Gear_ThirdEchelon_MK20_C_co.paa";
	};
	class arifle_Mk20_GL_F;
	class arifle_Mk20_GL_ThirdEchelon_F: arifle_Mk20_GL_F
	{
		author="Rabid Squirrel";
		baseWeapon="arifle_Mk20_GL_ThirdEchelon_F";
		displayName="$STR_A3_CfgWeapons_arifle_Mk20_GL0";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\ThirdEchelon\Data\ThirdEchelon_MK20_co.paa",
			"\ThirdEchelon\Data\ThirdEchelon_MK20_UTL_CO.paa"
		};
		picture="\ThirdEchelon\Data\UI\Gear_ThirdEchelon_MK20_GL_co.paa";
	};
	
	class hgun_Pistol_heavy_01_F;
	class hgun_Pistol_heavy_01_ThirdEchelon_F: hgun_Pistol_heavy_01_F
	{
		author="Rabid Squirrel";
		baseWeapon="hgun_Pistol_heavy_01_ThirdEchelon_F";
		displayName="$STR_A3_CfgWeapons_hgun_Pistol_heavy_01_F0";
		hiddenSelectionsTextures[]=
		{
			"\ThirdEchelon\Data\ThirdEchelon_4Five_co.paa"
		};
		picture="\ThirdEchelon\Data\UI\Gear_ThirdEchelon_4Five_co.paa";
	};
	
	// NVGs
	class NVGoggles;
	class O_NVGoggles_hex_F: NVGoggles
	{
		class ItemInfo;
	};
	class O_NVGoggles_blk_F: O_NVGoggles_hex_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="Compact NVG (Black)";
		model="\A3\Weapons_F_Exp\Binocular\O_NVGoggles_blk_F.p3d";
		picture="\ThirdEchelon\Data\UI\Icon_ThirdEchelon_NVG_co.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ThirdEchelon\Data\ThirdEchelon_NVG_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Weapons_F_Exp\Binocular\O_NVGoggles_blk_F.p3d";
			modelOff="\A3\Weapons_F_Exp\Binocular\O_NVGoggles_blk_off_F.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\ThirdEchelon\Data\ThirdEchelon_NVG_co.paa"
			};
		};
	};
};

class CfgGlasses
{
	// Balaclava
	class G_Balaclava_TI_blk_F;
	class G_Balaclava_TI_ThirdEchelon_F: G_Balaclava_TI_blk_F
	{
		author="Rabid Squirrel";
		displayName="Third Echelon Balaclava";
		picture="\ThirdEchelon\Data\UI\Icon_ThirdEchelon_Balaclava_co.paa";
		hiddenSelectionsTextures[]=
		{
			"\ThirdEchelon\Data\ThirdEchelon_Balaclava_co.paa"
		};
		DLC="Expansion";
	};
};