class CfgPatches
{
	class SA_PMC_HEADGEAR
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
			"SA_Helmet_Black",
			"SA_Helmet_Sand",
			"SA_HelmetSpec_Sand",
			"SA_HelmetSpec_Green",
			"SA_Helmet_BlackSnake",
			"SA_HelmetSpec_BlackSnake",
			"SA_Helmet_WhiteSnake",
			"SA_Helmet_Brown",
			"SA_HelmetSpec_Brown",
			"SA_Helmet_Woodland",
			"SA_HelmetSpec_Woodland",
			"SA_Helmet_Autumn",
			"SA_HelmetSpec_Autumn",
			"SA_Helmet_Desert",
			"SA_HelmetSpec_Desert",
			"SA_Helmet_Multicam",
			"SA_HelmetSpec_Multicam",
			"SA_Helmet_Snowcam",
			"SA_HelmetSpec_Snowcam",
			"SA_Helmet_KhakiG",
			"SA_HelmetSpec_KhakiG",
			"SA_Helmet_KhakiG_U",
			"SA_HelmetSpec_KhakiG_U",
			"SA_Helmet_Fleck",
			"SA_HelmetSpec_Fleck",
			"SA_Helmet_Fleck_U",
			"SA_HelmetSpec_Fleck_U",
			"SA_Cap_headphones_B",
			"SA_Cap_headphones_G",
			"SA_Beanie_blk"
			/*"Rus_Helmet_Snow",
			"Rus_Helmet_Woodland",
			"Rus_Helmet_Black"*/
		};
	};
};
class CfgWeapons
{
	class HeadgearItem;	
	class H_HelmetB_light;
	class H_HelmetB;
	class SA_Helmet_Black: H_HelmetB_light
	{
		author="Rabid Squirrel";
		scope=2;
		displayName="SA ECH Light (Black Snake)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_BlackSnake.paa"
		};
		class ItemInfo: HeadgearItem //ItemInfo - Debug
		{
			mass=30;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class SA_Helmet_Sand: SA_Helmet_Black
	{
		author="Rabid Squirrel";
		displayName="SA ECH Light (Sand)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_Sand.paa"
		};
	};
	class SA_HelmetSpec_Sand: H_HelmetB
	{
		author="Rabid Squirrel";
		_generalMacro="SA_HelmetSpec_Sand";
		displayName="SA ECH (Sand)";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_Sand.paa"
		};
		class ItemInfo: HeadgearItem //ItemInfo - Debug
		{
			mass=50;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
	};
	class SA_Helmet_Green: SA_Helmet_Black
	{
		author="Rabid Squirrel";
		displayName="SA ECH Light (Green)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_Green.paa"
		};
	};
	class SA_HelmetSpec_Green: SA_HelmetSpec_Sand
	{
		author="Rabid Squirrel";
		_generalMacro="SA_HelmetSpec_Green";
		displayName="SA ECH (Green)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_Green.paa"
		};
	};
	class SA_Helmet_BlackSnake: SA_Helmet_Black
	{
		author="Rabid Squirrel";
		displayName="SA ECH Light (Black Snake)";
		scope=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_BlackSnake.paa"
		};
	};
	class SA_HelmetSpec_BlackSnake: SA_HelmetSpec_Sand
	{
		author="Rabid Squirrel";
		_generalMacro="SA_HelmetSpec_BlackSnake";
		displayName="SA ECH (Black Snake)";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_BlackSnake.paa"
		};
	};
	class SA_Helmet_WhiteSnake: SA_Helmet_Black
	{
		author="Rabid Squirrel";
		displayName="SA ECH Light (White Snake)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_WhiteSnake.paa"
		};
	};
	class SA_Helmet_Brown: SA_Helmet_Black
	{
		author="Rabid Squirrel";
		displayName="SA ECH Light (Brown)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_Brown.paa"
		};
	};
	class SA_HelmetSpec_Brown: SA_HelmetSpec_Sand
	{
		author="Rabid Squirrel";
		_generalMacro="SA_HelmetSpec_Brown";
		displayName="SA ECH (Brown)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_Brown.paa"
		};
	};
	class SA_Helmet_Woodland: SA_Helmet_Black
	{
		author="Rabid Squirrel";
		displayName="SA ECH Light (Woodland)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_Woodland.paa"
		};
	};
	class SA_HelmetSpec_Woodland: SA_HelmetSpec_Sand
	{
		author="Rabid Squirrel";
		_generalMacro="SA_HelmetSpec_Woodland";
		displayName="SA ECH (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_Woodland.paa"
		};
	};
	class SA_Helmet_Autumn: SA_Helmet_Black
	{
		author="Rabid Squirrel";
		displayName="SA ECH Light (Autumn)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_Autumn.paa"
		};
	};
	class SA_HelmetSpec_Autumn: SA_HelmetSpec_Sand
	{
		author="Rabid Squirrel";
		_generalMacro="SA_HelmetSpec_Autumn";
		displayName="SA ECH (Autumn)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_Autumn.paa"
		};
	};
	class SA_Helmet_Desert: SA_Helmet_Black
	{
		author="Rabid Squirrel";
		displayName="SA ECH Light (Desert)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_Desert.paa"
		};
	};
	class SA_HelmetSpec_Desert: SA_HelmetSpec_Sand
	{
		author="Rabid Squirrel";
		_generalMacro="SA_HelmetSpec_Desert";
		displayName="SA ECH (Desert)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_Desert.paa"
		};
	};
	class SA_Helmet_Multicam: SA_Helmet_Black
	{
		author="Rabid Squirrel";
		displayName="SA ECH Light (Multicam)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_Multicam.paa"
		};
	};
	class SA_HelmetSpec_Multicam: SA_HelmetSpec_Sand
	{
		author="Rabid Squirrel";
		_generalMacro="SA_HelmetSpec_Multicam";
		displayName="SA ECH (Multicam)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_Multicam.paa"
		};
	};
	class SA_Helmet_Snowcam: SA_Helmet_Black
	{
		author="Rabid Squirrel";
		displayName="SA ECH Light (Snowcam)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_Snowcam.paa"
		};
	};
	class SA_HelmetSpec_Snowcam: SA_HelmetSpec_Sand
	{
		author="Rabid Squirrel";
		_generalMacro="SA_HelmetSpec_Snowcam";
		displayName="SA ECH (Snowcam)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_Snowcam.paa"
		};
	};
	class SA_Helmet_KhakiG: SA_Helmet_Black
	{
		author="Rabid Squirrel";
		displayName="SA ECH Light (Khaki Green)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_KhakiGreen.paa"
		};
	};
	class SA_HelmetSpec_KhakiG: SA_HelmetSpec_Sand
	{
		author="Rabid Squirrel";
		_generalMacro="SA_HelmetSpec_Snowcam";
		displayName="SA ECH (Khaki Green)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_KhakiGreen.paa"
		};
	};
	class SA_Helmet_KhakiG_U: SA_Helmet_Black
	{
		author="Rabid Squirrel";
		displayName="ECH Light (Khaki Green)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_KhakiGreen_U.paa"
		};
	};
	class SA_HelmetSpec_KhakiG_U: SA_HelmetSpec_Sand
	{
		author="Rabid Squirrel";
		_generalMacro="SA_HelmetSpec_Snowcam";
		displayName="ECH (Khaki Green)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_KhakiGreen_U.paa"
		};
	};
	class SA_Helmet_Fleck: SA_Helmet_Black
	{
		author="Rabid Squirrel";
		displayName="SA ECH Light (Splinter Fleck)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_FleckS.paa"
		};
	};
	class SA_HelmetSpec_Fleck: SA_HelmetSpec_Sand
	{
		author="Rabid Squirrel";
		_generalMacro="SA_HelmetSpec_Snowcam";
		displayName="SA ECH (Splinter Fleck)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_FleckS.paa"
		};
	};
	class SA_Helmet_Fleck_U: SA_Helmet_Black
	{
		author="Rabid Squirrel";
		displayName="ECH Light (Splinter Flecktarn)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_FleckS_U.paa"
		};
	};
	class SA_HelmetSpec_Fleck_U: SA_HelmetSpec_Sand
	{
		author="Rabid Squirrel";
		_generalMacro="SA_HelmetSpec_Snowcam";
		displayName="ECH (Splinter Flecktarn)";
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Equip_FleckS_U.paa"
		};
	};
	class SA_Cap_headphones_B: H_HelmetB
	{
		author="Rabid Squirrel";
		scope=2;
		displayName="SA Cap Black (Headphones)";
		picture="\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
		model="\A3\Characters_F\common\capb_headphones";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Cap_Headphones_Blk.paa"
		};
		class ItemInfo: HeadgearItem //ItemInfo - Debug
		{
			mass=8;
			uniformModel="\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[]={6};
			allowedSlots[]={801,901,701,605};
			armor=0;
			passThrough=1;
			hiddenSelections[]=
			{
				"Camo"
			};
		};
	};
	class SA_Cap_headphones_G: SA_Cap_headphones_B
	{
		author="Rabid Squirrel";
		displayName="SA Cap Green (Headphones)";
		picture="\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Cap_Headphones_Grn.paa"
		};
	};
	class SA_Beanie_blk: H_HelmetB
	{
		author="Rabid Squirrel";
		scope=2;
		_generalMacro="SA_Beanie_blk";
		displayName="SA Beanie Black";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_beanie_CA.paa";
		model="\A3\Characters_F\Civil\headgear_beaniehat01";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\SA_Beanie_blk.paa"
		};
		allowedFacewear[]=
		{
			"G_Aviator",
			"G_Bandanna_aviator",
			"G_Bandanna_beast",
			"G_Bandanna_blk",
			"G_Bandanna_khk",
			"G_Bandanna_oli",
			"G_Bandanna_shades",
			"G_Bandanna_sport",
			"G_Shades_Black",
			"G_Shades_Blue",
			"G_Shades_Red",
			"G_Shades_Green"
		};
		class ItemInfo: HeadgearItem //ItemInfo - Debug
		{
			mass=6;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\Civil\headgear_beaniehat01";
			modelSides[]={6};
			armor=0;
			passThrough=1;
			hiddenSelections[]=
			{
				"Camo"
			};
		};
	};
	/*class ItemCore;
	class Rus_Helmet_Snow: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		author="Rabid Squirrel";
		displayName="Canvas Helmet (Snow)";
		picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\Canvas_Helmet_Snow.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=100;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			modelSides[]={2,3};
			armor=60;
			passThrough=0.85000002;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class Rus_Helmet_Woodland: Rus_Helmet_Snow
	{
		author="Rabid Squirrel";
		displayName="Canvas Helmet (Woodland)";
		picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\Canvas_Helmet_Woodland.paa"
		};
	};
	class Rus_Helmet_Black: Rus_Helmet_Snow
	{
		author="Rabid Squirrel";
		displayName="Canvas Helmet (Black)";
		picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_headgear\Data\Canvas_Helmet_Black.paa"
		};
	};*/
};