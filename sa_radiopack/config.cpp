class CfgPatches
{
	class SA_RadioPack
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
			"SAEF_RadioPack_Woodland",
			"SAEF_RadioPack_Autumn",
			"SAEF_RadioPack_Desert",
			"SAEF_RadioPack_MultiCam",
			"SAEF_RadioPack_Olive",
			"SAEF_RadioPack_Snow",
			"SAEF_RadioPack_SplinterFleck",
			"SAEF_RadioPack_Tiger",
			"SAEF_RadioPack_Unmarked",
			"SAEF_RadioPack_SANDF",
			"SAEF_RadioPack_Khaki",
			"SAEF_RadioPack_KhakiGreen"
		};
		requiredVersion=0.1;
	};
};

class CfgVehicles
{
	class B_RadioBag_01_base_F;
	class SAEF_RadioPack_Woodland:B_RadioBag_01_base_F
	{
		author="Mascot";
		scope=2;
		displayName="SAEF Radio Pack (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"\SAEF_Radiopack\data\B_Radiobag_01_Woodland.paa"
		};
		picture = "\SAEF_Radiopack\data\ui\B_Radiobag_01_UI_Woodland.paa";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=30000;
	};
	class SAEF_RadioPack_Autumn:B_RadioBag_01_base_F
	{
		author="Mascot";
		scope=2;
		displayName="SAEF Radio Pack (Autumn)";
		hiddenSelectionsTextures[]=
		{
			"\SAEF_Radiopack\data\B_Radiobag_01_Autumn.paa"
		};
		picture = "\SAEF_Radiopack\data\ui\B_Radiobag_01_UI_Autumn.paa";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=30000;
	};
	class SAEF_RadioPack_Desert:B_RadioBag_01_base_F
	{
		author="Mascot";
		scope=2;
		displayName="SAEF Radio Pack (Desert)";
		hiddenSelectionsTextures[]=
		{
			"\SAEF_Radiopack\data\B_Radiobag_01_Desert.paa"
		};
		picture = "\SAEF_Radiopack\data\ui\B_Radiobag_01_UI_Desert.paa";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=30000;
	};
	class SAEF_RadioPack_MultiCam:B_RadioBag_01_base_F
	{
		author="Mascot";
		scope=2;
		displayName="SAEF Radio Pack (Multi Cam)";
		hiddenSelectionsTextures[]=
		{
			"\SAEF_Radiopack\data\B_Radiobag_01_MultiCam.paa"
		};
		picture = "\SAEF_Radiopack\data\ui\B_Radiobag_01_UI_MultiCam.paa";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=30000;
	};
	class SAEF_RadioPack_Olive:B_RadioBag_01_base_F
	{
		author="Mascot";
		scope=2;
		displayName="SAEF Radio Pack (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\SAEF_Radiopack\data\B_Radiobag_01_Olive.paa"
		};
		picture = "\SAEF_Radiopack\data\ui\B_Radiobag_01_UI_Olive.paa";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=30000;
	};
	class SAEF_RadioPack_Snow:B_RadioBag_01_base_F
	{
		author="Mascot";
		scope=2;
		displayName="SAEF Radio Pack (Snow)";
		hiddenSelectionsTextures[]=
		{
			"\SAEF_Radiopack\data\B_Radiobag_01_Snow.paa"
		};
		picture = "\SAEF_Radiopack\data\ui\B_Radiobag_01_UI_Snow.paa";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=30000;
	};
	class SAEF_RadioPack_SplinterFleck:B_RadioBag_01_base_F
	{
		author="Mascot";
		scope=2;
		displayName="SAEF Radio Pack (Splinter Fleck)";
		hiddenSelectionsTextures[]=
		{
			"\SAEF_Radiopack\data\B_Radiobag_01_SplinterFleck.paa"
		};
		picture = "\SAEF_Radiopack\data\ui\B_Radiobag_01_UI_SplinterFleck.paa";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=30000;
	};
	class SAEF_RadioPack_Tiger:B_RadioBag_01_base_F
	{
		author="Mascot";
		scope=2;
		displayName="SAEF Radio Pack (Tiger)";
		hiddenSelectionsTextures[]=
		{
			"\SAEF_Radiopack\data\B_Radiobag_01_Tiger.paa"
		};
		picture = "\SAEF_Radiopack\data\ui\B_Radiobag_01_UI_Tiger.paa";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=30000;
	};
	class SAEF_RadioPack_Unmarked:B_RadioBag_01_base_F
	{
		author="Mascot";
		scope=2;
		displayName="SAEF Radio Pack (Unmarked)";
		hiddenSelectionsTextures[]=
		{
			"\SAEF_Radiopack\data\B_Radiobag_01_Unmarked.paa"
		};
		picture = "\SAEF_Radiopack\data\ui\B_Radiobag_01_UI_Unmarked.paa";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=30000;
	};
	class SAEF_RadioPack_SANDF:B_RadioBag_01_base_F
	{
		author="Mascot";
		scope=2;
		displayName="SAEF Radio Pack (SANDF)";
		hiddenSelectionsTextures[]=
		{
			"\SAEF_Radiopack\data\B_Radiobag_01_SANDF.paa"
		};
		picture = "\SAEF_Radiopack\data\ui\B_Radiobag_01_UI_SANDF.paa";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=30000;
	};
	class SAEF_RadioPack_Khaki:B_RadioBag_01_base_F
	{
		author="Mascot";
		scope=2;
		displayName="SAEF Radio Pack (Khaki)";
		hiddenSelectionsTextures[]=
		{
			"\SAEF_Radiopack\data\B_Radiobag_01_Khaki.paa"
		};
		picture = "\SAEF_Radiopack\data\ui\B_Radiobag_01_UI_Khaki.paa";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=30000;
	};
	class SAEF_RadioPack_KhakiGreen:B_RadioBag_01_base_F
	{
		author="Mascot";
		scope=2;
		displayName="SAEF Radio Pack (Khaki Green)";
		hiddenSelectionsTextures[]=
		{
			"\SAEF_Radiopack\data\B_RadioBag_01_KhakiGreen.paa"
		};
		picture = "\SAEF_Radiopack\data\ui\B_Radiobag_01_UI_KhakiGreen.paa";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=30000;
	};
}

class cfgMods
{
	author="Mascot";
	timepacked="";
};