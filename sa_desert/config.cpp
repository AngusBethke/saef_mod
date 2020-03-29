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
			"SAEF_Soldier_DST",
			"SAEF_Soldier_DST_J",
			"SAEF_Soldier_DST_MCM_T",
			"SAEF_Soldier_DST_SND_B",
			"SAEF_Soldier_DST_SND_T",
			
			// Soldiers - Rolled Sleeve
			"SAEF_Soldier_DST_RS",
			"SAEF_Soldier_DST_J_RS",
			"SAEF_Soldier_DST_MCM_T_RS",
			"SAEF_Soldier_DST_SND_B_RS",
			"SAEF_Soldier_DST_SND_T_RS"
		};
		weapons[]=
		{
			// Uniforms - Full Sleeve
			"SAEF_Uniform_DST",
			"SAEF_Uniform_DST_J",
			"SAEF_Uniform_DST_MCM_T",
			"SAEF_Uniform_DST_SND_B",
			"SAEF_Uniform_DST_SND_T",
			
			// Uniforms - Rolled Sleeve
			"SAEF_Uniform_DST_RS",
			"SAEF_Uniform_DST_J_RS",
			"SAEF_Uniform_DST_MCM_T_RS",
			"SAEF_Uniform_DST_SND_B_RS",
			"SAEF_Uniform_DST_SND_T_RS",
			
			// Vests - Camo
			"SAEF_PlateCarrier_DST_1",
			"SAEF_PlateCarrier_DST_2",
			
			// Vests - Flat Color
			"SAEF_PlateCarrier_SND_1",
			"SAEF_PlateCarrier_SND_2",
			
			// Helmets - Camo
			"SAEF_ECH_Light_DST",
			"SAEF_ECH_DST",
			"SAEF_ECH_Camo_DST",
			
			// Helmets - Sand
			"SAEF_ECH_Light_DST",
			"SAEF_ECH_DST",
			"SAEF_ECH_Camo_DST",
			
			// Backpack - Camo
			"SAEF_RadioPack_DST"
		};
	};
};

#include "..\sa_pmc\macros.hpp"

class CfgVehicles
{
	// Delcare Base Classes
	class SA_Soldier_Base;
	class SA_Soldier_Base_Jersey;
	
	class B_RadioBag_01_base_F;
	
	// Macro to run vehicle class creation
	AddSoldierClass_Macro(sa_desert,SA_Soldier_Base,DST)
	AddSoldierClass_Macro(sa_desert,SA_Soldier_Base,DST_MCM_T)
	AddSoldierClass_Macro(sa_desert,SA_Soldier_Base,DST_SND_B)
	AddSoldierClass_Macro(sa_desert,SA_Soldier_Base,DST_SND_T)
	AddSoldierClass_Macro(sa_desert,SA_Soldier_Base_Jersey,DST_J)
	
	// Declare Backpack Base Classes 
	class SA_Base_Backpack;
	class SA_Base_Kitbag;
	class SA_Base_Bergen;
	class SA_Base_Carryall;
	
	// Macro to add our backpack classes
	AddBackpackClass_Macro(sa_desert,SA_Base_Backpack,SA_Base_Kitbag,SA_Base_Carryall,SA_Base_Bergen,DST,"Assault Pack (RS-Splinter (DST))","Kitbag (RS-Splinter (DST))","Carryall (RS-Splinter (DST))","Bergen (RS-Splinter (DST))")
	AddBackpackClass_Macro(sa_desert,SA_Base_Backpack,SA_Base_Kitbag,SA_Base_Carryall,SA_Base_Bergen,SND,"Assault Pack (SND)","Kitbag (SND)","Carryall (SND)","Bergen (SND)")
	
	class SAEF_RadioPack_DST:B_RadioBag_01_base_F
	{
		author="SAEF Dev";
		scope=2;
		displayName="SAEF Radio Pack (Desert)";
		hiddenSelectionsTextures[]=
		{
			"\sa_desert\Backpacks\Data\SAEF_RadioBag_DST_co.paa"
		};
		picture = "\sa_desert\Backpacks\Data\ui\SAEF_RadioBag_ui_DST_co.paa";
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
	class SA_Base_Uniform_RS;
	class SA_Base_Uniform_Jersey;
	class SA_Base_Uniform_Jersey_RS;
	
	// Macro to run uniform class creation
	AddUniformClass_Macro(sa_desert,SA_Base_Uniform,DST,"Fatigues RS-Splinter (DST)","Fatigues RS-Splinter (DST) Rolled")
	AddUniformClass_Macro(sa_desert,SA_Base_Uniform,DST_MCM_T,"Fatigues RS-Splinter (DST-MCM)","Fatigues RS-Splinter (DST-MCM) Rolled")
	AddUniformClass_Macro(sa_desert,SA_Base_Uniform,DST_SND_T,"Fatigues RS-Splinter (DST-SND)","Fatigues RS-Splinter (DST-SND) Rolled")
	AddUniformClass_Macro(sa_desert,SA_Base_Uniform,DST_SND_B,"Fatigues RS-Splinter (DST-SND-B)","Fatigues RS-Splinter (DST-SND-B) Rolled")
	AddUniformClass_Macro(sa_desert,SA_Base_Uniform_Jersey,DST_J,"Fatigues RS-Splinter (DST-J)","Fatigues RS-Splinter (DST-J) Rolled")
	
	// Declare vest base classes
	class SA_Base_PlateCarrier_1;
	class SA_Base_PlateCarrier_2;
	
	// Macro to run vest class creation
	AddVestClass_Macro(sa_desert,SA_Base_PlateCarrier,DST,"Carrier Rig (RS-Splinter (DST))","Carrier Rig Light (RS-Splinter (DST))")
	AddVestClass_Macro(sa_desert,SA_Base_PlateCarrier,SND,"Carrier Rig (SND)","Carrier Rig Light (SND)")
	
	// Declare helmet base classes
	class SA_Base_ECH_Light;
	class SA_Base_ECH_Spec;
	class SA_Base_ECH_Camo;
	
	// Macro to run helmet class creation
	AddHelmetClass_Macro(sa_desert,SA_Base_ECH_Light,SA_Base_ECH_Spec,SA_Base_ECH_Camo,DST,"ECH Light (RS-Splinter (DST))","ECH (RS-Splinter (DST))","ECH-G (RS-Splinter (DST))")
	AddHelmetClass_Macro(sa_desert,SA_Base_ECH_Light,SA_Base_ECH_Spec,SA_Base_ECH_Camo,SND,"ECH Light (SND)","ECH (SND)","ECH-G (SND)")
	
	class SA_MH_headset_DST:H_HelmetHBK_headset_F
	{
		author="Mascot";
		scope=2;
		displayName="SA MH Headset (DST)";
		picture = "\sa_desert\Helmets\Data\ui\SAEF_MH_ui_DST.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_desert\Helmets\Data\SAEF_MH_DST.paa"
		};
	};
	class SA_MH_ear_DST:H_HelmetHBK_ear_F
	{
		author="Mascot";
		scope=2;
		displayName="SA MH Ear Protection (DST)";
		picture = "\sa_desert\Helmets\Data\ui\SAEF_MH_ui_DST.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_desert\Helmets\Data\SAEF_MH_DST.paa"
		};
	};
	class SA_MH_chops_DST:H_HelmetHBK_chops_F
	{
		author="Mascot";
		scope=2;
		displayName="SA MH Chops (DST)";
		picture = "\sa_desert\Helmets\Data\ui\SAEF_MH_ui_DST.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_desert\Helmets\Data\SAEF_MH_DST.paa"
		};
	};
	class SA_MH_DST:H_HelmetHBK_F
	{
		author="Mascot";
		scope=2;
		displayName="SA MH (DST)";
		picture = "\sa_desert\Helmets\Data\ui\SAEF_MH_ui_DST.paa";
		hiddenSelectionsTextures[]=
		{
			"\sa_desert\Helmets\Data\SAEF_MH_DST.paa"
		};
	};
};