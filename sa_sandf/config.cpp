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
			// Soldiers - Full Sleeve
			"SANDF_Soldier_ORG",
			"SANDF_Soldier_WDL",
			
			// Soldiers - Rolled Sleeve
			"SANDF_Soldier_ORG_RS",
			"SANDF_Soldier_WDL_RS"
		};
		weapons[]=
		{
			// Uniforms - Full Sleeve
			"SANDF_Uniform_ORG",
			"SANDF_Uniform_WDL",
			
			// Uniforms - Rolled Sleeve
			"SANDF_Uniform_ORG_RS",
			"SANDF_Uniform_WDL_RS",
			
			// Vests - Camo
			"SANDF_PlateCarrier_ORG_1",
			"SANDF_PlateCarrier_ORG_2",
			"SANDF_PlateCarrier_WDL_1",
			"SANDF_PlateCarrier_WDL_2",
			
			// Helmets - Camo
			"SANDF_Canvas_ORG",
			"SANDF_Canvas_WDL",
			"SANDF_MH_ORG",
			"SANDF_MH_WDL",
			
			// Backpack - Camo
			"SANDF_RadioBag_ORG",
			"SANDF_RadioBag_WDL"
		};
	};
};

#include "..\sa_pmc\macros.hpp"

class CfgVehicles
{
	// Delcare Base Classes
	class SA_Soldier_Base;
	
	class B_RadioBag_01_base_F;
	
	// Macro to run vehicle class creation
	AddSoldierClass_Macro(sa_sandf,SA_Soldier_Base,ORG)
	
	// Declare Backpack Base Classes 
	class SA_Base_Backpack;
	class SA_Base_Kitbag;
	class SA_Base_Bergen;
	class SA_Base_Carryall;
	
	// Macro to add our backpack classes
	AddBackpackClass_Macro(sa_sandf,SA_Base_Backpack,SA_Base_Kitbag,SA_Base_Carryall,SA_Base_Bergen,ORG,"Assault Pack (SANDF (ORG))","Kitbag (SANDF (ORG))","Carryall (SANDF (ORG))","Bergen (SANDF (ORG))")
	AddBackpackClass_Macro(sa_sandf,SA_Base_Backpack,SA_Base_Kitbag,SA_Base_Carryall,SA_Base_Bergen,WDL,"Assault Pack (SANDF (WDL))","Kitbag (SANDF (WDL))","Carryall (SANDF (WDL))","Bergen (SANDF (WDL))")
	
	class SANDF_RadioBag_ORG:B_RadioBag_01_base_F
	{
		author="SAEF Dev";
		scope=2;
		displayName="SANDF Radio Pack (ORG)";
		hiddenSelectionsTextures[]=
		{
			"\sa_sandf\Backpacks\Data\SANDF_RadioBag_ORG_co.paa"
		};
		picture = "\sa_sandf\Backpacks\Data\ui\SANDF_RadioBag_ui_ORG_co.paa"
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=30000;
	};
	class SANDF_RadioBag_WDL:B_RadioBag_01_base_F
	{
		author="SAEF Dev";
		scope=2;
		displayName="SANDF Radio Pack (WDL)";
		hiddenSelectionsTextures[]=
		{
			"\sa_sandf\Backpacks\Data\SANDF_RadioBag_WDL_co.paa"
		};
		picture = "\sa_sandf\Backpacks\Data\ui\SANDF_RadioBag_ui_WDL_co.paa"
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
	// Delcare uniform base classes
	class Uniform_Base;
	class UniformItem;
	class SA_Base_Uniform;
	
	// Macro to run uniform class creation
	AddUniformClass_Macro(sa_sandf,SA_Base_Uniform,ORG,"Fatigues SANDF (ORG)","Fatigues SANDF (ORG) Rolled")
	
	// Declare vest base classes
	class SA_Base_PlateCarrier_1;
	class SA_Base_PlateCarrier_2;
	
	// Macro to run vest class creation
	AddVestClass_Macro(sa_sandf,SA_Base_PlateCarrier,ORG,"Carrier Rig (SANDF (ORG))","Carrier Rig Light (SANDF (ORG))")
	AddVestClass_Macro(sa_sandf,SA_Base_PlateCarrier,WDL,"Carrier Rig (SANDF (WDL))","Carrier Rig Light (SANDF (WDL))")
	
	// Declare helmet base classes
	class SA_Base_ECH_Light;
	class SA_Base_ECH_Spec;
	class SA_Base_ECH_Camo;
	
	// Macro to run helmet class creation
	AddHelmetClass_Macro(sa_sandf,SA_Base_ECH_Light,SA_Base_ECH_Spec,SA_Base_ECH_Camo,ORG,"ECH Light (SANDF (ORG))","ECH (SANDF (ORG))","ECH-G (SANDF (ORG))")
	AddHelmetClass_Macro(sa_sandf,SA_Base_ECH_Light,SA_Base_ECH_Spec,SA_Base_ECH_Camo,WDL,"ECH Light (SANDF (WDL))","ECH (SANDF (WDL))","ECH-G (SANDF (WDL))")
	
	class SANDF_MH_headset_ORG:H_HelmetHBK_headset_F
	{
		author="Mascot";
		scope=2;
		displayName="SANDF MH Headset (ORG)";
		hiddenSelectionsTextures[]=
		{
			"\sa_sandf\Helmets\Data\SANDF_MH_ORG.paa"
		};
	};
	class SANDF_MH_ear_ORG:H_HelmetHBK_ear_F
	{
		author="Mascot";
		scope=2;
		displayName="SANDF MH Ear Protection (ORG)";
		hiddenSelectionsTextures[]=
		{
			"\sa_sandf\Helmets\Data\SANDF_MH_ORG.paa"
		};
	};
	class SANDF_MH_chops_ORG:H_HelmetHBK_chops_F
	{
		author="Mascot";
		scope=2;
		displayName="SANDF MH Chops (ORG)";
		hiddenSelectionsTextures[]=
		{
			"\sa_sandf\Helmets\Data\SANDF_MH_ORG.paa"
		};
	};
	class SANDF_MH_ORG:H_HelmetHBK_F
	{
		author="Mascot";
		scope=2;
		displayName="SANDF MH (ORG)";
		hiddenSelectionsTextures[]=
		{
			"\sa_sandf\Helmets\Data\SANDF_MH_ORG.paa"
		};
	};
	class SANDF_MH_headset_WDL:H_HelmetHBK_headset_F
	{
		author="Mascot";
		scope=2;
		displayName="SANDF MH Headset (WDL)";
		hiddenSelectionsTextures[]=
		{
			"\sa_sandf\Helmets\Data\SANDF_MH_WDL.paa"
		};
	};
	class SANDF_MH_ear_WDL:H_HelmetHBK_ear_F
	{
		author="Mascot";
		scope=2;
		displayName="SANDF MH Ear Protection (WDL)";
		hiddenSelectionsTextures[]=
		{
			"\sa_sandf\Helmets\Data\SANDF_MH_WDL.paa"
		};
	};
	class SANDF_MH_chops_WDL:H_HelmetHBK_chops_F
	{
		author="Mascot";
		scope=2;
		displayName="SANDF MH Chops (WDL)";
		hiddenSelectionsTextures[]=
		{
			"\sa_sandf\Helmets\Data\SANDF_MH_WDL.paa"
		};
	};
	class SANDF_MH_WDL:H_HelmetHBK_F
	{
		author="Mascot";
		scope=2;
		displayName="SANDF MH (WDL)";
		hiddenSelectionsTextures[]=
		{
			"\sa_sandf\Helmets\Data\SANDF_MH_WDL.paa"
		};
	};
};