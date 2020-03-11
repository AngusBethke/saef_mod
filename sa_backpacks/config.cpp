class CfgPatches
{
	class SA_PMC_BACKPACKS
	{
		author="Rabid Squirrel";
		addonRootClass="SA_PMC";
		requiredAddons[]=
		{
			"SA_PMC",
			"A3_Weapons_F",
			"A3_Weapons_F_Ammoboxes"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"SA_Carryall_Black",
			"SA_Carryall_CSAT",
			"SA_Carryall_Khaki",
			"SA_Carryall_Oli",
			"SA_Backpack_Autumn",
			"SA_Backpack_MultiC",
			"SA_Backpack_Olive",
			"SA_Backpack_Tiger",
			"SA_Backpack_UrbanDigi",
			"SA_Backpack_Desert",
			"SA_Backpack_Snow",
			"SA_Backpack_Woodland",
			"SA_Backpack_KhakiGreen",
			"SA_Backpack_KhakiGreen_U",
			"SA_Backpack_FleckS",
			"SA_Backpack_FleckS_U",
			"SA_Backpack_Fast_Black",
			"SA_Backpack_Fast_Black_Unmarked",
			"SA_Backpack_Fast_Olive",
			"SA_Backpack_Fast_MultiC",
			"SA_Backpack_Fast_Tiger",
			"SA_Backpack_Fast_UrbanDigi",
			"SA_Backpack_Fast_Sand",
			"SA_Backpack_Fast_Woodland",
			"SA_Backpack_Fast_Desert",
			"SA_Backpack_Fast_Autumn",
			"SA_Backpack_Fast_Snow",
			"SA_Backpack_Fast_KhakiGreen",
			"SA_Backpack_Fast_KhakiGreen_U",
			"SA_Backpack_Fast_FleckS",
			"SA_Backpack_Fast_FleckS_U"
			/*"SA_Backpack_G_Green",
			"SA_Backpack_G_Black",
			"SA_Backpack_G_Snow",
			"SA_Backpack_G_Woodland"*/
		};
	};
};
class CfgVehicles
{
	class Bag_Base;
	class B_Kitbag_Base;
	class B_AssaultPack_Base;
	class B_Carryall_Base;
	class SA_Carryall_Black: B_Carryall_Base
	{
		author="Rabid Squirrel";
		scope=2;
		displayName="SA Carryall (Black)";
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		picture="\sa_backpacks\data\ui\saef_backpack_carryall_black_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Carryall_Black_co.paa"
		};
		maximumLoad=320;
		mass=40;
	};
	class SA_Carryall_CSAT: SA_Carryall_Black
	{
		author="Rabid Squirrel";
		displayName="SA Carryall (CSAT)";
		picture="\sa_backpacks\data\ui\saef_backpack_carryall_autumn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Carryall_CSAT_co.paa"
		};
	};
	class SA_Carryall_Khaki: SA_Carryall_Black
	{
		author="Rabid Squirrel";
		displayName="SA Carryall (Khaki)";
		picture="\sa_backpacks\data\ui\saef_backpack_carryall_khaki_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Carryall_Khaki_co.paa"
		};
	};
	class SA_Carryall_Oli: SA_Carryall_Black
	{
		author="Rabid Squirrel";
		displayName="SA Carryall (Olive)";
		picture="\sa_backpacks\data\ui\saef_backpack_carryall_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Carryall_Oli_co.paa"
		};
	};
	class SA_Backpack_Autumn: B_AssaultPack_Base
	{
		scope=2;
		author="Rabid Squirrel";
		displayName="SAEF Assault Pack (Autumn)";
		picture="\sa_backpacks\data\ui\saef_backpack_ap_autumn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Autumn_co.paa"
		};
	};
	class SA_Backpack_MultiC: SA_Backpack_Autumn
	{
		author="Rabid Squirrel";
		displayName="SAEF Assault Pack (Mutlicam)";
		picture="\sa_backpacks\data\ui\saef_backpack_ap_multicam_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_MultiC_co.paa"
		};
	};
	class SA_Backpack_Olive: SA_Backpack_Autumn
	{
		author="Rabid Squirrel";
		displayName="SAEF Assault Pack (Olive)";
		picture="\sa_backpacks\data\ui\saef_backpack_ap_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Olive_co.paa"
		};
	};
	class SA_Backpack_Tiger: SA_Backpack_Autumn
	{
		author="Rabid Squirrel";
		displayName="SAEF Assault Pack (Tiger)";
		picture="\sa_backpacks\data\ui\saef_backpack_ap_tiger_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Tiger_co.paa"
		};
	};
	class SA_Backpack_Desert: SA_Backpack_Autumn
	{
		author="Rabid Squirrel";
		displayName="SAEF Assault Pack (Desert)";
		picture="\sa_backpacks\data\ui\saef_backpack_ap_desert_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Desert_co.paa"
		};
	};
	class SA_Backpack_Snow: SA_Backpack_Autumn
	{
		author="Rabid Squirrel";
		displayName="SAEF Assault Pack (Snow)";
		picture="\sa_backpacks\data\ui\saef_backpack_ap_snow_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Snow_co.paa"
		};
	};
	class SA_Backpack_Woodland: SA_Backpack_Autumn
	{
		author="Rabid Squirrel";
		displayName="SAEF Assault Pack (Woodland)";
		picture="\sa_backpacks\data\ui\saef_backpack_ap_woodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Wood_co.paa"
		};
	};
	class SA_Backpack_KhakiGreen: SA_Backpack_Autumn
	{
		author="Rabid Squirrel";
		displayName="SAEF Assault Pack (Khaki Green)";
		picture="\sa_backpacks\data\ui\saef_backpack_ap_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_KhakiGreen_co.paa"
		};
	};
	class SA_Backpack_KhakiGreen_U: SA_Backpack_Autumn
	{
		author="Rabid Squirrel";
		displayName="Assault Pack (Khaki Green)";
		picture="\sa_backpacks\data\ui\saef_backpack_ap_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_KhakiGreen_U_co.paa"
		};
	};
	class SA_Backpack_FleckS: SA_Backpack_Autumn
	{
		author="Rabid Squirrel";
		displayName="SAEF Assault Pack (Splinter Fleck)";
		picture="\sa_backpacks\data\ui\saef_backpack_ap_autumn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_FleckS_co.paa"
		};
	};
	class SA_Backpack_FleckS_U: SA_Backpack_Autumn
	{
		author="Rabid Squirrel";
		displayName="Assault Pack (Splinter Flecktarn)";
		picture="\sa_backpacks\data\ui\saef_backpack_ap_autumn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_FleckS_U_co.paa"
		};
	};
	class SA_Backpack_UrbanDigi: SA_Backpack_Autumn
	{
		author="Rabid Squirrel";
		displayName="SAEF Assault Pack (Urban)";
		picture="\sa_backpacks\data\ui\saef_backpack_ap_urban_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_UrbanDigi_co.paa"
		};
	};
	class SA_Backpack_Fast_Black: B_Kitbag_Base
	{
		scope=2;
		author="Rabid Squirrel";
		displayName="SAEF Kitbag (Black)";
		picture="\sa_backpacks\data\ui\saef_backpack_kitbag_black_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Fast_Black_co.paa"
		};
	};
	class SA_Backpack_Fast_Black_Unmarked: SA_Backpack_Fast_Black
	{
		author="Rabid Squirrel";
		displayName="SAEF Kitbag (Unmarked)";
		picture="\sa_backpacks\data\ui\saef_backpack_kitbag_unmarked_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Fast_Black_Unmarked_co.paa"
		};
	};
	class SA_Backpack_Fast_Olive: SA_Backpack_Fast_Black
	{
		author="Rabid Squirrel";
		displayName="SAEF Kitbag (Olive)";
		picture="\sa_backpacks\data\ui\saef_backpack_kitbag_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Fast_Olive_co.paa"
		};
	};
	class SA_Backpack_Fast_MultiC: SA_Backpack_Fast_Black
	{
		author="Rabid Squirrel";
		displayName="SAEF Kitbag (Mutlicam)";
		picture="\sa_backpacks\data\ui\saef_backpack_kitbag_multicam_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Fast_MultiC_co.paa"
		};
	};
	class SA_Backpack_Fast_Tiger: SA_Backpack_Fast_Black
	{
		author="Rabid Squirrel";
		displayName="SAEF Kitbag (Tiger)";
		picture="\sa_backpacks\data\ui\saef_backpack_kitbag_tiger_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Fast_Tiger_co.paa"
		};
	};
	class SA_Backpack_Fast_UrbanDigi: SA_Backpack_Fast_Black
	{
		author="Rabid Squirrel";
		displayName="SAEF Kitbag (Urban)";
		picture="\sa_backpacks\data\ui\saef_backpack_kitbag_urban_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Fast_UrbanDigi_co.paa"
		};
	};
	class SA_Backpack_Fast_Sand: SA_Backpack_Fast_Black
	{
		author="Rabid Squirrel";
		displayName="SAEF Kitbag (Khaki)";
		picture="\sa_backpacks\data\ui\saef_backpack_kitbag_khaki_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Fast_Sand_co.paa"
		};
	};
	class SA_Backpack_Fast_Woodland: SA_Backpack_Fast_Black
	{
		author="Rabid Squirrel";
		displayName="SAEF Kitbag (Woodland)";
		picture="\sa_backpacks\data\ui\saef_backpack_kitbag_woodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Fast_Wood_co.paa"
		};
	};
	class SA_Backpack_Fast_Desert: SA_Backpack_Fast_Black
	{
		author="Rabid Squirrel";
		displayName="SAEF Kitbag (Desert)";
		picture="\sa_backpacks\data\ui\saef_backpack_kitbag_desert_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Fast_Desert_co.paa"
		};
	};
	class SA_Backpack_Fast_Autumn: SA_Backpack_Fast_Black
	{
		author="Rabid Squirrel";
		displayName="SAEF Kitbag (Autumn)";
		picture="\sa_backpacks\data\ui\saef_backpack_kitbag_autumn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Fast_Autumn_co.paa"
		};
	};
	class SA_Backpack_Fast_Snow: SA_Backpack_Fast_Black
	{
		author="Rabid Squirrel";
		displayName="SAEF Kitbag (Snow)";
		picture="\sa_backpacks\data\ui\saef_backpack_kitbag_snow_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Fast_Snow_co.paa"
		};
	};
	class SA_Backpack_Fast_KhakiGreen: SA_Backpack_Fast_Black
	{
		author="Rabid Squirrel";
		displayName="SAEF Kitbag (Khaki Green)";
		picture="\sa_backpacks\data\ui\saef_backpack_kitbag_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Fast_KhakiGreen_co.paa"
		};
	};
	class SA_Backpack_Fast_KhakiGreen_U: SA_Backpack_Fast_Black
	{
		author="Rabid Squirrel";
		displayName="Kitbag (Khaki Green)";
		picture="\sa_backpacks\data\ui\saef_backpack_kitbag_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Fast_KhakiGreen_U_co.paa"
		};
	};
	class SA_Backpack_Fast_FleckS: SA_Backpack_Fast_Black
	{
		author="Rabid Squirrel";
		displayName="SAEF Kitbag (Splinter Fleck)";
		picture="\sa_backpacks\data\ui\saef_backpack_kitbag_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Fast_FleckS_co.paa"
		};
	};
	class SA_Backpack_Fast_FleckS_U: SA_Backpack_Fast_Black
	{
		author="Rabid Squirrel";
		displayName="Kitbag (Splinter Flecktarn)";
		picture="\sa_backpacks\data\ui\saef_backpack_kitbag_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Backpack_Fast_FleckS_U_co.paa"
		};
	};
	/*class B_FieldPack_Base;
	class SA_Backpack_G_Green: B_FieldPack_Base
	{
		author="Rabid Squirrel";
		scope=2;
		displayName="SA FieldPack (Green)";
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Gorod";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Gorod_Green_co.paa"
		};
	};
	class SA_Backpack_G_Black: SA_Backpack_G_Green
	{
		author="Rabid Squirrel";
		displayName="SAEF FieldPack (Black)";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Gorod_Black_co.paa"
		};
	};
	class SA_Backpack_G_Snow: SA_Backpack_G_Green
	{
		author="Rabid Squirrel";
		displayName="SAEF FieldPack (Snow)";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Gorod_Snow_co.paa"
		};
	};
	class SA_Backpack_G_Woodland: SA_Backpack_G_Green
	{
		author="Rabid Squirrel";
		displayName="SAEF FieldPack (Woodland)";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"\sa_backpacks\Data\SA_Gorod_Woodland_co.paa"
		};
	};
	*/
};