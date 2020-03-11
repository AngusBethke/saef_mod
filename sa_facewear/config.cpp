class CfgPatches
{
	class SA_PMC_GLASSES
	{
		author="Rabid Squirrel";
		addonRootClass="SA_PMC";
		requiredAddons[]=
		{
			"SA_PMC"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgGlasses
{
	class None;
	class SA_Bandanna_Flag: None
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Bandanna_Flag";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="SA Bandanna Flag";
		model="\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_clean.p3d";
		picture="\SA_PMC\Data\UI\icon_SA_Bandana_Flag.paa";
		identityTypes[]={};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\SA_Bandana_Flag.paa"
		};
		mass=4;
	};
	class SA_Bandanna_Flag_Green: SA_Bandanna_Flag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Bandanna_Flag_Green";
		displayName="SA Bandanna Flag (Green)";
		picture="\SA_PMC\Data\UI\icon_SA_Bandana_Flag_Green.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\SA_Bandana_Flag_Green.paa"
		};
	};
	class SA_Bandanna_Peace: SA_Bandanna_Flag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Bandanna_Peace";
		displayName="SA Bandanna Peace";
		picture="\SA_PMC\Data\UI\icon_SA_Bandana_Peace.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\SA_Bandana_Peace.paa"
		};
	};
	class SA_Bandanna_Pirate: SA_Bandanna_Flag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Bandanna_Pirate";
		displayName="SA Bandanna Pirate";
		picture="\SA_PMC\Data\UI\icon_SA_Bandana_Pirate.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\SA_Bandana_Pirate.paa"
		};
	};
	class SA_Bandanna_Xeno: SA_Bandanna_Flag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Bandanna_Xeno";
		displayName="SA Bandanna Xeno";
		picture="\SA_PMC\Data\UI\icon_SA_Bandana_Xeno.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\SA_Bandana_Xeno.paa"
		};
	};
	class SA_Bandanna_XenoMouth: SA_Bandanna_Flag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Bandanna_XenoMouth";
		displayName="SA Bandanna Xeno Mouth";
		picture="\SA_PMC\Data\UI\icon_SA_Bandana_XenoMouth.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\SA_Bandana_XenoMouth.paa"
		};
	};
	class SA_Bandanna_XenoMouth_White: SA_Bandanna_Flag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Bandanna_XenoMouth_White";
		displayName="SA Bandanna Xeno Mouth (White)";
		picture="\SA_PMC\Data\UI\icon_SA_Bandana_XenoMouth_White.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\SA_Bandana_XenoMouth_White.paa"
		};
	};
	class SA_Bandanna_Pirate_White: SA_Bandanna_Flag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Bandanna_Pirate_White";
		displayName="SA Bandanna Pirate (White)";
		picture="\SA_PMC\Data\UI\icon_SA_Bandana_Pirate_White.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\SA_Bandana_Pirate_White.paa"
		};
	};
	class SA_Bandanna_Peace_White: SA_Bandanna_Flag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Bandanna_Peace_White";
		displayName="SA Bandanna Peace (White)";
		picture="\SA_PMC\Data\UI\icon_SA_Bandana_Peace_White.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\SA_Bandana_Peace_White.paa"
		};
	};
	class SA_Bandanna_Templar: SA_Bandanna_Flag
	{
		author="Snow Fangs";
		_generalMacro="SA_Bandanna_Templar";
		displayName="SA Bandanna Templar";
		picture="\SA_PMC\Data\UI\icon_SA_Bandana_Flag.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\SA_Bandana_sergal_mouth.paa"
		};
	};
	class SA_Bandanna_Autumn: SA_Bandanna_Flag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Bandanna_Autumn";
		displayName="SA Bandanna (Autumn)";
		picture="\SA_PMC\Data\UI\icon_SA_Bandana_Flag.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\SA_Bandana_Autumn.paa"
		};
	};
	class SA_Bandanna_Desert: SA_Bandanna_Flag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Bandanna_Desert";
		displayName="SA Bandanna (Desert)";
		picture="\SA_PMC\Data\UI\icon_SA_Bandana_Flag.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\SA_Bandana_Desert.paa"
		};
	};
	class SA_Bandanna_Multicam: SA_Bandanna_Flag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Bandanna_Multicam";
		displayName="SA Bandanna (Multicam)";
		picture="\SA_PMC\Data\UI\icon_SA_Bandana_Flag.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\SA_Bandana_Multicam.paa"
		};
	};
	class SA_Bandanna_Snowcam: SA_Bandanna_Flag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Bandanna_Snowcam";
		displayName="SA Bandanna (Snowcam)";
		picture="\SA_PMC\Data\UI\icon_SA_Bandana_Peace_White.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\SA_Bandana_Snowcam.paa"
		};
	};
	class SA_Bandanna_Tiger: SA_Bandanna_Flag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Bandanna_Tiger";
		displayName="SA Bandanna (Tiger)";
		picture="\SA_PMC\Data\UI\icon_SA_Bandana_Flag.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\SA_Bandana_Tiger.paa"
		};
	};
	class SA_Bandanna_Woodland: SA_Bandanna_Flag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Bandanna_Woodland";
		displayName="SA Bandanna (Woodland)";
		picture="\SA_PMC\Data\UI\icon_SA_Bandana_Flag.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\SA_Bandana_Woodland.paa"
		};
	};
	class Rus_Shemag: None
	{
		author="Rabid Squirrel";
		_generalMacro="Rus_Shemag";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Shemag";
		model="\A3\characters_f_gamma\Guerrilla\headgear_shemagmask.p3d";
		picture="\SA_PMC\Data\UI\icon_SA_Shemag_Green.paa";
		identityTypes[]={};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\Shemag.paa"
		};
		mass=6;
	};
	class Rus_Shemag_Snow: Rus_Shemag
	{
		author="Rabid Squirrel";
		_generalMacro="Rus_Shemag_Snow";
		displayName="Shemag (Snow)";
		picture="\SA_PMC\Data\UI\icon_SA_Shemag_Snow.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\Shemag_Snow.paa"
		};
	};
	class Rus_Shemag_Black: Rus_Shemag
	{
		author="Rabid Squirrel";
		_generalMacro="Rus_Shemag_Black";
		displayName="Shemag (Black)";
		picture="\SA_PMC\Data\UI\icon_SA_Shemag_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\Shemag_Black.paa"
		};
	};
	class Rus_Shemag_Brown: Rus_Shemag
	{
		author="Rabid Squirrel";
		_generalMacro="Rus_Shemag_Brown";
		displayName="Shemag (Brown)";
		picture="\SA_PMC\Data\UI\icon_SA_Shemag_Brown.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\Shemag_Brown.paa"
		};
	};
	class SA_Shemag_Autumn: Rus_Shemag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Shemag_Autumn";
		displayName="Shemag (Autumn)";
		picture="\SA_PMC\Data\UI\icon_SA_Shemag_Brown.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\Shemag_Autumn.paa"
		};
	};
	class SA_Shemag_Desert: Rus_Shemag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Shemag_Desert";
		displayName="Shemag (Desert)";
		picture="\SA_PMC\Data\UI\icon_SA_Shemag_Brown.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\Shemag_Desert.paa"
		};
	};
	class SA_Shemag_Multicam: Rus_Shemag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Shemag_Multicam";
		displayName="Shemag (Multicam)";
		picture="\SA_PMC\Data\UI\icon_SA_Shemag_Green.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\Shemag_Multicam.paa"
		};
	};
	class SA_Shemag_Snowcam: Rus_Shemag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Shemag_Snowcam";
		displayName="Shemag (Snowcam)";
		picture="\SA_PMC\Data\UI\icon_SA_Shemag_Snow.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\Shemag_Snowcam.paa"
		};
	};
	class SA_Shemag_Tiger: Rus_Shemag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Shemag_Tiger";
		displayName="Shemag (Tiger)";
		picture="\SA_PMC\Data\UI\icon_SA_Shemag_Green.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\Shemag_Tiger.paa"
		};
	};
	class SA_Shemag_Woodland: Rus_Shemag
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Shemag_Woodland";
		displayName="Shemag (Woodland)";
		picture="\SA_PMC\Data\UI\icon_SA_Shemag_Green.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_facewear\Data\Shemag_Woodland.paa"
		};
	};
};