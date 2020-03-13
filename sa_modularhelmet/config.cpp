class CfgPatches
{
	class SA_ModularHelmet
	{
		author="Mascot";
		addonRootClass="SA_PMC";
		units[]={};
		requiredAddons[]=
		{
			"SA_PMC",
			"A3_Weapons_F",
			"A3_Weapons_F_Ammoboxes"
		};
		weapons[]= 
		{
			"SA_Modular_headset_Autumn",
			"SA_Modular_ear_Autumn",
			"SA_Modular_chops_Autumn",
			"SA_Modular_Autumn",
			"SA_Modular_headset_Desert",
			"SA_Modular_ear_Desert",
			"SA_Modular_chops_Desert",
			"SA_Modular_Desert",
			"SA_Modular_headset_Khaki",
			"SA_Modular_ear_Khaki",
			"SA_Modular_chops_Khaki",
			"SA_Modular_Khaki",
			"SA_Modular_headset_KhakiGreen",
			"SA_Modular_ear_KhakiGreen",
			"SA_Modular_chops_KhakiGreen",
			"SA_Modular_KhakiGreen",
			"SA_Modular_headset_MultiCam",
			"SA_Modular_ear_MultiCam",
			"SA_Modular_chops_MultiCam",
			"SA_Modular_MultiCam",
			"SA_Modular_headset_Olive",
			"SA_Modular_ear_Olive",
			"SA_Modular_chops_Olive",
			"SA_Modular_Olive",
			"SA_Modular_headset_SANDF",
			"SA_Modular_ear_SANDF",
			"SA_Modular_chops_SANDF",
			"SA_Modular_SANDF",
			"SA_Modular_headset_SplinterFlek",
			"SA_Modular_ear_SplinterFlek",
			"SA_Modular_chops_SplinterFlek",
			"SA_Modular_SplinterFlek",
			"SA_Modular_headset_Tiger",
			"SA_Modular_ear_Tiger",
			"SA_Modular_chops_Tiger",
			"SA_Modular_Tiger",
			"SA_Modular_headset_Unmarked",
			"SA_Modular_ear_Unmarked",
			"SA_Modular_chops_Unmarked",
			"SA_Modular_Unmarked",
			"SA_Modular_headset_Woodland",
			"SA_Modular_ear_Woodland",
			"SA_Modular_chops_Woodland",
			"SA_Modular_Woodland",
		};
		requiredVersion=0.1;
	};
};

class CfgWeapons
{
	class H_HelmetHBK_headset_F;
	class H_HelmetHBK_chops_F;
	class H_HelmetHBK_ear_F;
	class H_HelmetHBK_F;
	class Headgear_Base_F;

	class SA_Modular_headset_Autumn:H_HelmetHBK_headset_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Headset (Autumn)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Autumn.paa"
		};
	};
	class SA_Modular_ear_Autumn:H_HelmetHBK_ear_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Ear protection (Autumn)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Autumn.paa"
		};
	};
	class SA_Modular_chops_Autumn:H_HelmetHBK_chops_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Chops (Autumn)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Autumn.paa"
		};
	};
	class SA_Modular_Autumn:H_HelmetHBK_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular (Autumn)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Autumn.paa"
		};
	};
	class SA_Modular_headset_Desert:H_HelmetHBK_headset_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Headset (Desert)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Desert.paa"
		};
	};
	class SA_Modular_ear_Desert:H_HelmetHBK_ear_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Ear protection (Desert)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Desert.paa"
		};
	};
	class SA_Modular_chops_Desert:H_HelmetHBK_chops_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Chops (Desert)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Desert.paa"
		};
	};
	class SA_Modular_Desert:H_HelmetHBK_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular (Desert)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Desert.paa"
		};
	};
	class SA_Modular_headset_Khaki:H_HelmetHBK_headset_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Headset (Khaki)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Khaki.paa"
		};
	};
	class SA_Modular_ear_Khaki:H_HelmetHBK_ear_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Ear protection (Khaki)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Khaki.paa"
		};
	};
	class SA_Modular_chops_Khaki:H_HelmetHBK_chops_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Chops (Khaki)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Khaki.paa"
		};
	};
	class SA_Modular_Khaki:H_HelmetHBK_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular (Khaki)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Khaki.paa"
		};
	};
	class SA_Modular_headset_KhakiGreen:H_HelmetHBK_headset_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Headset (Khaki Green)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_KhakiGreen.paa"
		};
	};
	class SA_Modular_ear_KhakiGreen:H_HelmetHBK_ear_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Ear protection (Khaki Green)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_KhakiGreen.paa"
		};
	};
	class SA_Modular_chops_KhakiGreen:H_HelmetHBK_chops_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Chops (Khaki Green)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_KhakiGreen.paa"
		};
	};
	class SA_Modular_KhakiGreen:H_HelmetHBK_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular (Khaki Green)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_KhakiGreen.paa"
		};
	};
	class SA_Modular_headset_MultiCam:H_HelmetHBK_headset_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Headset (MultiCam)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Multicam.paa"
		};
	};
	class SA_Modular_ear_MultiCam:H_HelmetHBK_ear_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Ear protection (MultiCam)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Multicam.paa"
		};
	};
	class SA_Modular_chops_MultiCam:H_HelmetHBK_chops_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Chops (MultiCam)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Multicam.paa"
		};
	};
	class SA_Modular_MultiCam:H_HelmetHBK_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular (MultiCam)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Multicam.paa"
		};
	};
	class SA_Modular_headset_Olive:H_HelmetHBK_headset_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Headset (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Olive.paa"
		};
	};
	class SA_Modular_ear_Olive:H_HelmetHBK_ear_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Ear protection (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Olive.paa"
		};
	};
	class SA_Modular_chops_Olive:H_HelmetHBK_chops_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Chops (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Olive.paa"
		};
	};
	class SA_Modular_Olive:H_HelmetHBK_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Olive.paa"
		};
	};
	class SA_Modular_headset_SANDF:H_HelmetHBK_headset_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Headset (SANDF)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_SANDF.paa"
		};
	};
	class SA_Modular_ear_SANDF:H_HelmetHBK_ear_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Ear protection (SANDF)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_SANDF.paa"
		};
	};
	class SA_Modular_chops_SANDF:H_HelmetHBK_chops_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Chops (SANDF)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_SANDF.paa"
		};
	};
	class SA_Modular_SANDF:H_HelmetHBK_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular (SANDF)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_SANDF.paa"
		};
	};
	class SA_Modular_headset_Snow:H_HelmetHBK_headset_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Headset (Snow)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Snow.paa"
		};
	};
	class SA_Modular_ear_Snow:H_HelmetHBK_ear_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Ear protection (Snow)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Snow.paa"
		};
	};
	class SA_Modular_chops_Snow:H_HelmetHBK_chops_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Chops (Snow)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Snow.paa"
		};
	};
	class SA_Modular_Snow:H_HelmetHBK_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular (Snow)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Snow.paa"
		};
	};
	class SA_Modular_headset_SplinterFlek:H_HelmetHBK_headset_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Headset (Splinter Flek)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_SplinterFleck.paa"
		};
	};
	class SA_Modular_ear_SplinterFlek:H_HelmetHBK_ear_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Ear protection (Splinter Flek)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_SplinterFleck.paa"
		};
	};
	class SA_Modular_chops_SplinterFlek:H_HelmetHBK_chops_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Chops (Splinter Flek)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_SplinterFleck.paa"
		};
	};
	class SA_Modular_SplinterFlek:H_HelmetHBK_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular (Splinter Flek)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_SplinterFleck.paa"
		};
	};
	class SA_Modular_headset_Tiger:H_HelmetHBK_headset_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Headset (Tiger)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Tiger.paa"
		};
	};
	class SA_Modular_ear_Tiger:H_HelmetHBK_ear_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Ear protection (Tiger)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Tiger.paa"
		};
	};
	class SA_Modular_chops_Tiger:H_HelmetHBK_chops_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Chops (Tiger)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Tiger.paa"
		};
	};
	class SA_Modular_Tiger:H_HelmetHBK_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular (Tiger)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Tiger.paa"
		};
	};
	class SA_Modular_headset_Unmarked:H_HelmetHBK_headset_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Headset (Unmarked)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Unmarked.paa"
		};
	};
	class SA_Modular_ear_Unmarked:H_HelmetHBK_ear_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Ear protection (Unmarked)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Unmarked.paa"
		};
	};
	class SA_Modular_chops_Unmarked:H_HelmetHBK_chops_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Chops (Unmarked)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Unmarked.paa"
		};
	};
	class SA_Modular_Unmarked:H_HelmetHBK_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular (Unmarked)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Unmarked.paa"
		};
	};
		class SA_Modular_headset_Woodland:H_HelmetHBK_headset_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Headset (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Woodland.paa"
		};
	};
	class SA_Modular_ear_Woodland:H_HelmetHBK_ear_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Ear protection (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Woodland.paa"
		};
	};
	class SA_Modular_chops_Woodland:H_HelmetHBK_chops_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular Chops (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Woodland.paa"
		};
	};
	class SA_Modular_Woodland:H_HelmetHBK_F
	{
		author="Mascot";
		scope=2;
		displayName="SA Modular (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"\sa_modularhelmet\data\H_HelmetHBK_SA_Woodland.paa"
		};
	};
};

class cfgMods
{
	author="Mascot";
	timepacked="";
};