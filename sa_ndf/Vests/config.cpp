class CfgPatches
{
	class SA_NDF_VESTS
	{
		author="Rabid Squirrel";
		addonRootClass="SA_NDF";
		requiredAddons[]=
		{
			"SA_NDF",
			"SA_PMC_VESTS",
			"A3_Characters_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"SANDF_Harness"
		};
	};
};
class CfgWeapons
{
	class Vest_NoCamo_Base;
	class VestItem;
	class SANDF_Harness: Vest_NoCamo_Base
	{
		scope=2;
		author="Rabid Squirrel";
		_generalMacro="Rus_Harness";
		picture="\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
		displayName="SANDF Harness";
		model="\A3\Characters_F\OPFOR\equip_o_vest01";
		descriptionShort="Armor Level I";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_vests\data\Black_Rus_Clothing.paa",
			"\SA_NDF\Vests\Data\SANDF_Tech_co.paa"
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
};