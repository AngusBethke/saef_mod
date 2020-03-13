class CfgPatches
{
	class SA_PMC_VESTS
	{
		author="Rabid Squirrel";
		addonRootClass="SA_PMC";
		requiredAddons[]=
		{
			"SA_PMC",
			"A3_Characters_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"SA_PlateCarrier_BA1",
			"SA_PlateCarrier_BA2",
			"SA_PlateCarrier_Bl1",
			"SA_PlateCarrier_Bl2",
			"SA_PlateCarrier_Un1",
			"SA_PlateCarrier_Un2",
			"SA_PlateCarrier_Khk1",
			"SA_PlateCarrier_Khk2",
			"SA_PlateCarrier_Cst1",
			"SA_PlateCarrier_Cst2",
			"SA_PlateCarrier_Green1",
			"SA_PlateCarrier_Green2",
			"SA_PlateCarrier_Olive1",
			"SA_PlateCarrier_Olive2",
			"SA_PlateCarrier_MC1",
			"SA_PlateCarrier_MC2",
			"SA_PlateCarrier_Tiger1",
			"SA_PlateCarrier_Tiger2",
			"SA_PlateCarrier_Snw1",
			"SA_PlateCarrier_Snw2",
			"SA_PlateCarrier_KhkU1",
			"SA_PlateCarrier_KhkU2",
			"SA_PlateCarrier_KhkG1",
			"SA_PlateCarrier_KhkG2",
			"SA_PlateCarrier_Fleck1",
			"SA_PlateCarrier_Fleck2",
			"SA_PlateCarrier_FleckU1",
			"SA_PlateCarrier_FleckU2",
			"SA_SANDF_Vest"
			/*"Rus_Harness",
			"Rus_Harness_Black",
			"Rus_Harness_Wood",
			"Rus_Harness_Snow",
			"SA_Harness",
			"SA_Harness_Black",
			"SA_Harness_Wood",
			"SA_Harness_Snow"*/
		};
	};
};
class CfgWeapons
{
	class V_PlateCarrier2_blk;
	class V_PlateCarrier1_tna_F;
	class SA_PlateCarrier_BA1: V_PlateCarrier2_blk
	{
		scope=2;
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 1 (Desert)";
		picture="\sa_vests\data\ui\saef_vest_desert_ca.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01";
		descriptionShort="Armor Level V";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_Desert_co.paa"
		};
	};
	class SA_PlateCarrier_BA2: V_PlateCarrier1_tna_F
	{
		scope=2;
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 2 (Desert)";
		picture="\sa_vests\data\ui\saef_vest_desert_ca.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		descriptionShort="Armor Level V";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_Desert_co.paa"
		};
	};
	class SA_PlateCarrier_Bl1: SA_PlateCarrier_BA1
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 1 (Multi Faction)";
		picture="\sa_vests\data\ui\saef_vest_black_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_MultiF_co.paa"
		};
	};
	class SA_PlateCarrier_Bl2: SA_PlateCarrier_BA2
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 2 (Multi Faction)";
		picture="\sa_vests\data\ui\saef_vest_black_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_MultiF_co.paa"
		};
	};
	class SA_PlateCarrier_Un1: SA_PlateCarrier_BA1
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 1 (Unmarked)";
		picture="\sa_vests\data\ui\saef_vest_unmarked_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_Unmarked_co.paa"
		};
	};
	class SA_PlateCarrier_Un2: SA_PlateCarrier_BA2
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 2 (Unmarked)";
		picture="\sa_vests\data\ui\saef_vest_unmarked_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_Unmarked_co.paa"
		};
	};
	class SA_PlateCarrier_Khk1: SA_PlateCarrier_BA1
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 1 (Khaki)";
		picture="\sa_vests\data\ui\saef_vest_khaki_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_Khaki_co.paa"
		};
	};
	class SA_PlateCarrier_Khk2: SA_PlateCarrier_BA2
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 2 (Khaki)";
		picture="\sa_vests\data\ui\saef_vest_khaki_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_Khaki_co.paa"
		};
	};
	class SA_PlateCarrier_Cst1: SA_PlateCarrier_BA1
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 1 (Autumn)";
		picture="\sa_vests\data\ui\saef_vest_autumn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_Autumn_co.paa"
		};
	};
	class SA_PlateCarrier_Cst2: SA_PlateCarrier_BA2
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 2 (Autumn)";
		picture="\sa_vests\data\ui\saef_vest_autumn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_Autumn_co.paa"
		};
	};
	class SA_PlateCarrier_Green1: SA_PlateCarrier_BA1
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 1 (Woodland)";
		picture="\sa_vests\data\ui\saef_vest_woodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_Woodland_co.paa"
		};
	};
	class SA_PlateCarrier_Green2: SA_PlateCarrier_BA2
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 2 (Woodland)";
		picture="\sa_vests\data\ui\saef_vest_woodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_Woodland_co.paa"
		};
	};
	class SA_PlateCarrier_Olive1: SA_PlateCarrier_BA1
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 1 (Olive)";
		picture="\sa_vests\data\ui\saef_vest_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_Olive_co.paa"
		};
	};
	class SA_PlateCarrier_Olive2: SA_PlateCarrier_BA2
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 2 (Olive)";
		picture="\sa_vests\data\ui\saef_vest_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_Olive_co.paa"
		};
	};
	class SA_PlateCarrier_MC1: SA_PlateCarrier_BA1
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 1 (Multicam)";
		picture="\sa_vests\data\ui\saef_vest_multicam_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_MultiC_co.paa"
		};
	};
	class SA_PlateCarrier_MC2: SA_PlateCarrier_BA2
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 2 (Multicam)";
		picture="\sa_vests\data\ui\saef_vest_multicam_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_MultiC_co.paa"
		};
	};
	class SA_PlateCarrier_Tiger1: SA_PlateCarrier_BA1
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 1 (Tiger)";
		picture="\sa_vests\data\ui\saef_vest_tiger_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_Tiger_co.paa"
		};
	};
	class SA_PlateCarrier_Tiger2: SA_PlateCarrier_BA2
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 2 (Tiger)";
		picture="\sa_vests\data\ui\saef_vest_tiger_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_Tiger_co.paa"
		};
	};
	class SA_PlateCarrier_Snw1: SA_PlateCarrier_BA1
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 1 (Snow)";
		picture="\sa_vests\data\ui\saef_vest_snow_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_Snow_co.paa"
		};
	};
	class SA_PlateCarrier_Snw2: SA_PlateCarrier_BA2
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 2 (Snow)";
		picture="\sa_vests\data\ui\saef_vest_snow_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_Snow_co.paa"
		};
	};
	class SA_PlateCarrier_KhkU1: SA_PlateCarrier_BA1
	{
		author="Rabid Squirrel";
		displayName="Carrier Rig (Khaki Green)";
		picture="\sa_vests\data\ui\saef_vest_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_KhakiGreen_U_co.paa"
		};
	};
	class SA_PlateCarrier_KhkU2: SA_PlateCarrier_BA2
	{
		author="Rabid Squirrel";
		displayName="Carrier Rig Light (Khaki Green)";
		picture="\sa_vests\data\ui\saef_vest_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_KhakiGreen_U_co.paa"
		};
	};
	class SA_PlateCarrier_KhkG1: SA_PlateCarrier_BA1
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 1 (Khaki Green)";
		picture="\sa_vests\data\ui\saef_vest_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_KhakiGreen_co.paa"
		};
	};
	class SA_PlateCarrier_KhkG2: SA_PlateCarrier_BA2
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 2 (Khaki Green)";
		picture="\sa_vests\data\ui\saef_vest_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_KhakiGreen_co.paa"
		};
	};
	class SA_PlateCarrier_Fleck1: SA_PlateCarrier_BA1
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 1 (Splinter Fleck)";
		picture="\sa_vests\data\ui\saef_vest_autumn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_FleckS_co.paa"
		};
	};
	class SA_PlateCarrier_Fleck2: SA_PlateCarrier_BA2
	{
		author="Rabid Squirrel";
		displayName="SA Plate Carrier 2 (Splinter Fleck)";
		picture="\sa_vests\data\ui\saef_vest_autumn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_FleckS_co.paa"
		};
	};
	class SA_PlateCarrier_FleckU1: SA_PlateCarrier_BA1
	{
		author="Rabid Squirrel";
		displayName="Carrier Rig (Splinter Flecktarn)";
		picture="\sa_vests\data\ui\saef_vest_autumn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_FleckS_U_co.paa"
		};
	};
	class SA_PlateCarrier_FleckU2: SA_PlateCarrier_BA2
	{
		author="Rabid Squirrel";
		displayName="Carrier Rig Light (Splinter Flecktarn)";
		picture="\sa_vests\data\ui\saef_vest_autumn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\SA_PlateCarrier_FleckS_U_co.paa"
		};
	};
	class Vest_Base_F;
	class V_Press_F;
	class VestItem;
	class SA_SANDF_Vest:V_Press_F
	{
		author="Mascot";
		scope=2;
		weaponPoolAvailable = 1;
		displayName="SA SANDF Vest";
		model = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\data\SA_SANDF_Vest.paa"
		};
		picture = "\sa_vests\data\ui\saef_vest_SANDF_ca.paa";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
			containerClass="Supply100";
			mass=50;
			armor="5*0.5";
			passThrough=0.69999999;
			hiddenSelections[]=
			{
				"camo"
			};
           hiddenSelectionsTextures[]=
			{
			"\sa_vests\data\SA_SANDF_Vest.paa"
			};
		};
	};
	/*class Rus_Harness: Vest_NoCamo_Base
	{
		scope=2;
		author="Rabid Squirrel";
		_generalMacro="Rus_Harness";
		picture="\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
		displayName="Russian Harness Green";
		model="\A3\Characters_F\OPFOR\equip_o_vest01";
		descriptionShort="Armor Level I";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\Black_Rus_Clothing.paa",
			"\sa_vests\Data\Rus_Tech"
		};
		class ItemInfo: VestItem //ItemInfo - Debug
		{
			uniformModel="\A3\Characters_F\OPFOR\equip_o_vest01.p3d";
			containerClass="Supply160";
			mass=30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=5;
					passThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=5;
					passThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=5;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=5;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
		};
	};
	class Rus_Harness_Black: Rus_Harness
	{
		author="Rabid Squirrel";
		_generalMacro="Rus_Harness_Black";
		picture="\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
		displayName="Russian Harness Black";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\Black_Rus_Clothing.paa",
			"\sa_vests\Data\Rus_Tech_Black"
		};
	};
	class Rus_Harness_Wood: Rus_Harness
	{
		author="Rabid Squirrel";
		_generalMacro="Rus_Harness_Wood";
		picture="\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
		displayName="Russian Harness Woodland";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\Black_Rus_Clothing.paa",
			"\sa_vests\Data\Rus_Tech_Wood"
		};
	};
	class Rus_Harness_Snow: Rus_Harness
	{
		author="Rabid Squirrel";
		_generalMacro="Rus_Harness_Snow";
		picture="\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
		displayName="Russian Harness Snow";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\Black_Rus_Clothing.paa",
			"\sa_vests\Data\Rus_Tech_Snow"
		};
	};
	class SA_Harness: Rus_Harness
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Harness";
		picture="\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
		displayName="SA Harness Green";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\Black_Rus_Clothing.paa",
			"\sa_vests\Data\SA_Tech"
		};
	};
	class SA_Harness_Black: Rus_Harness
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Harness_Black";
		picture="\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
		displayName="SA Harness Black";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\Black_Rus_Clothing.paa",
			"\sa_vests\Data\SA_Tech_Black"
		};
	};
	class SA_Harness_Wood: Rus_Harness
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Harness_Wood";
		picture="\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
		displayName="SA Harness Woodland";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\Black_Rus_Clothing.paa",
			"\sa_vests\Data\SA_Tech_Wood"
		};
	};
	class SA_Harness_Snow: Rus_Harness
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Harness_Snow";
		picture="\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
		displayName="SA Harness Snow";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\Data\Black_Rus_Clothing.paa",
			"\sa_vests\Data\SA_Tech_Snow"
		};
	};*/
};