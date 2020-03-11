class CfgPatches
{
	class SA_NDF_HEADGEAR
	{
		author="Rabid Squirrel";
		addonRootClass="SA_NDF";
		requiredAddons[]=
		{
			"SA_NDF",
			"A3_Characters_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"SANDF_Helmet"
		};
	};
};
class CfgWeapons
{
	class HeadgearItem;	
	class ItemCore;
	class SANDF_Helmet: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		author="Rabid Squirrel";
		displayName="SANDF Canvas Helmet";
		picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SA_NDF\Headgear\Data\SANDF_Helmet_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			modelSides[]={2,3};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=5;
					passThrough=0.5;
				};
			};
		};
	};
};