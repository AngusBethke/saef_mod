class CfgPatches
{
	class SA_BALACLAVA
	{
		author="Rabid Squirrel";
		name="SAEF Balaclava";
		requiredAddons[]=
		{
			"A3_Characters_F_Exp"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};

class CfgGlasses
{
	// Balaclava
	class G_Balaclava_TI_blk_F;
	class SAEF_G_Balaclava_TI_Woodland_F: G_Balaclava_TI_blk_F
	{
		author="Rabid Squirrel";
		displayName="Stealth Balaclava (WDL)";
		picture="\sa_balaclava\Data\UI\Icon_StealthBalaclava.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_balaclava\Data\StealthBalaclava_Woodland.paa"
		};
		DLC="Expansion";
	};
};