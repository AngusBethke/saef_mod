class CfgPatches
{
	class SAEF_D_Gear
	{
		author="SAEF Dev Team";
		addonRootClass="SA_PMC";
		requiredAddons[]=
		{
			"SA_PMC"
		};
		requiredVersion=0.1;
		units[]=
		{
		};
		weapons[]=
		{			
			// Vests - Flat Color
			"SAEF_PlateCarrier_CAY_1",
			"SAEF_PlateCarrier_CAY_2",
			
			// Helmets - Cayote
			"SAEF_ECH_Light_CAY",
			"SAEF_ECH_CAY",
			"SAEF_ECH_Camo_CAY",
			
			// Backpack - Camo
			"SAEF_RadioPack_CAY"
		};
	};
};

#include "..\sa_pmc\macros.hpp"

class CfgVehicles
{
	// Delcare Base Classes
	class SA_Soldier_Base;
	class SA_Soldier_Base_Jersey;
	
	// Declare Backpack Base Classes 
	class SA_Base_Backpack;
	class SA_Base_Kitbag;
	class SA_Base_Bergen;
	class SA_Base_Carryall;
	class B_RadioBag_01_base_F;
	
	// Macro to add our backpack classes
	AddBackpackClass_Macro(sa_cayote,SA_Base_Backpack,SA_Base_Kitbag,SA_Base_Carryall,SA_Base_Bergen,CAY,"Assault Pack (CAY)","Kitbag (CAY)","Carryall (CAY)","Bergen (CAY)")
	
	class SAEF_RadioPack_CAY:B_RadioBag_01_base_F
	{
		author="SAEF Dev";
		scope=2;
		displayName="SAEF Radio Pack (Cayote)";
		hiddenSelectionsTextures[]=
		{
			"\sa_cayote\Backpacks\Data\SAEF_RadioBag_CAY_co.paa"
		};
		picture = "\sa_cayote\Backpacks\Data\ui\SAEF_RadioBag_ui_CAY_co.paa";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=30000;
	};
};

class CfgWeapons
{	
	// Declare vest base classes
	class SA_Base_PlateCarrier_1;
	class SA_Base_PlateCarrier_2;
	
	// Macro to run vest class creation
	AddVestClass_Macro(sa_cayote,SA_Base_PlateCarrier,CAY,"Carrier Rig (CAY)","Carrier Rig Light (CAY)")
	
	// Declare helmet base classes
	class SA_Base_ECH_Light;
	class SA_Base_ECH_Spec;
	class SA_Base_ECH_Camo;
	
	// Macro to run helmet class creation
	AddHelmetClass_Macro(sa_cayote,SA_Base_ECH_Light,SA_Base_ECH_Spec,SA_Base_ECH_Camo,SND,"ECH Light (CAY)","ECH (CAY)","ECH-G (CAY)")
	
	class SA_MH_headset_CAY:H_HelmetHBK_headset_F
	{
		author="Mascot";
		scope=2;
		displayName="SA MH Headset (CAY)";
		hiddenSelectionsTextures[]=
		{
			"\sa_cayote\Helmets\Data\SAEF_MH_CAY_co.paa"
		};
	};
	class SA_MH_ear_CAY:H_HelmetHBK_ear_F
	{
		author="Mascot";
		scope=2;
		displayName="SA MH Ear Protection (CAY)";
		hiddenSelectionsTextures[]=
		{
			"\sa_cayote\Helmets\Data\SAEF_MH_CAY_co.paa"
		};
	};
	class SA_MH_chops_CAY:H_HelmetHBK_chops_F
	{
		author="Mascot";
		scope=2;
		displayName="SA MH Chops (CAY)";
		picture = "\sa_cayote\Helmets\Data\SAEF_MH_CAY_co.paa"
		hiddenSelectionsTextures[]=
		{
			"\sa_cayote\Helmets\Data\SAEF_MH_CAY_co.paa"
		};
	};
	class SA_MH_CAY:H_HelmetHBK_F
	{
		author="Mascot";
		scope=2;
		displayName="SA MH (CAY)";
		picture = "\sa_cayote\Helmets\Data\SAEF_MH_CAY_co.paa"
		hiddenSelectionsTextures[]=
		{
			"\sa_cayote\Helmets\Data\SAEF_MH_CAY_co.paa"
		};
	};
};