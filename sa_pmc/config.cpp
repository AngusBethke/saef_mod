class CfgPatches
{
	class SA_PMC
	{
		version=2;
		units[]={};
		weapons[]={};
		author="Rabid Squirrel";
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class CfgMods
{
	class Mod_Base;
	class SAEF: Mod_Base
	{
		author="Rabid Squirrel";
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
	author="Rabid Squirrel";
};
