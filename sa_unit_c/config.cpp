class CfgPatches
{
	class SA_PMC_UNIT_C
	{
		author="Rabid Squirrel";
		addonRootClass="SA_PMC";
		requiredAddons[]=
		{
			"SA_PMC",
			"A3_Characters_F",
			"A3_Characters_F_Beta",
			"A3_Characters_F_Gamma"
		};
		requiredVersion=0.1;
		units[]=
		{
			"SA_Soldier_Base_F",
			"SA_Recon_TL",
			"SA_Recon_Medic",
			"SA_Recon_AR",
			"SA_Recon_M",
			"SA_Recon_TL_MCam",
			"SA_Recon_Medic_MCam",
			"SA_Recon_AR_MCam",
			"SA_Recon_M_MCam",
			"SA_Recon_TL_Tig",
			"SA_Recon_Medic_Tig",
			"SA_Recon_AR_Tig",
			"SA_Recon_M_Tig",
			"SA_N_Recon_TL",
			"SA_N_Recon_Medic",
			"SA_N_Recon_AR",
			"SA_N_Recon_M",
			"SA_N_Recon_TL_MCam",
			"SA_N_Recon_Medic_MCam",
			"SA_N_Recon_AR_MCam",
			"SA_N_Recon_M_MCam",
			"SA_N_Recon_TL_Tig",
			"SA_N_Recon_Medic_Tig",
			"SA_N_Recon_AR_Tig",
			"SA_N_Recon_M_Tig",
			"SA_Recon_Diver"
		};
		weapons[]={};
	};
};
class cfgFactionClasses
{
	class SA_PMC
	{
		displayName="SAEF";
		priority=2;
		side=2;
		icon="\sa_pmc\Data\SAEF_logo_square.paa";
	};
	class SA_PMC_BLUFOR
	{
		displayName="SAEF";
		priority=2;
		side=1;
		icon="\sa_pmc\Data\SAEF_logo_square.paa";
	};
	
	//Legacy Needs to be Removed
	class SA_PMC_URB
	{
		displayName="SA (Urban)";
		priority=2;
		side=2;
		icon="\SA_PMC\data\ui\icon_SA_FactionClass_Urban.paa";
	};
	class EO_PMC
	{
		displayName="E.O. PMC";
		priority=2;
		side=2;
		icon="\SA_PMC\data\ui\icon_EO_FactionClass.paa";
	};
	class SA_PMC_NATO
	{
		displayName="SA (NATO)";
		priority=2;
		side=1;
		icon="\SA_PMC\data\ui\icon_SA_FactionClass_NATO.paa";
	};
	class SA_PMC_TIG
	{
		displayName="SA (Tiger)";
		priority=2;
		side=1;
		icon="\SA_PMC\data\ui\icon_SA_FactionClass.paa";
	};
	class SA_PMC_OLIVE
	{
		displayName="SA (Olive)";
		priority=2;
		side=1;
		icon="\SA_PMC\data\ui\icon_SA_FactionClass.paa";
	};
	class SA_PMC_CSAT
	{
		displayName="SA (CSAT)";
		priority=2;
		side=0;
		icon="\SA_PMC\data\ui\icon_SA_FactionClass_CSAT.paa";
	};
	class SA_PMC_BROWN
	{
		displayName="SA (Brown)";
		priority=2;
		side=0;
		icon="\SA_PMC\data\ui\icon_SA_FactionClass_CSAT.paa";
	};
	class SA_PMC_SNOW
	{
		displayName="SA (Snow)";
		priority=2;
		side=1;
		icon="\SA_PMC\data\ui\icon_SA_FactionClass_Urban.paa";
	};
	class SA_PMC_WOOD
	{
		displayName="SA (Woodland)";
		priority=2;
		side=1;
		icon="\SA_PMC\data\ui\icon_SA_FactionClass.paa";
	};
	class RUS_WOOD
	{
		displayName="Russian (Woodland)";
		priority=2;
		side=0;
		icon="\SA_PMC\data\ui\icon_SA_FactionClass.paa";
	};
	class RUS_SNOW
	{
		displayName="Russian (SNOW)";
		priority=2;
		side=0;
		icon="\SA_PMC\data\ui\icon_SA_FactionClass.paa";
	};
};
class CfgVehicleClasses
{
	//This Class Appears Obsolete
	class SA_PMC
	{
		displayName="Men";
	};
	class SA_PMC_RECON_DES
	{
		displayName="Recon (Desert)";
	};
	class SA_PMC_SNIPER
	{
		displayName="Men (Snipers)";
	};
};
class CfgGroups
{
	class Indep
	{
		side=2;
		class SAEF_D_GROUPS_IND
		{
			name="SAEF (Desert)";
			class Infantry
			{
				name="Infantry";
				class SAEF_D_RecSquad_IND
				{
					name="Recon Fireteam";
					side=2;
					faction="SA_PMC";
					class Unit0
					{
						side=2;
						vehicle="SA_Recon_TL";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="SA_Recon_AR";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=2;
						vehicle="SA_Recon_Medic";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=2;
						vehicle="SA_Recon_M";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
				};
			};
		};
		class SAEF_MCAM_GROUPS_IND
		{
			name="SAEF (Multicam)";
			class Infantry
			{
				name="Infantry";
				class SAEF_MCAM_RecSquad_IND
				{
					name="Recon Fireteam";
					side=2;
					faction="SA_PMC";
					class Unit0
					{
						side=2;
						vehicle="SA_Recon_TL_MCam";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="SA_Recon_AR_MCam";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=2;
						vehicle="SA_Recon_Medic_MCam";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=2;
						vehicle="SA_Recon_M_MCam";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
				};
			};
		};
		class SAEF_TIG_GROUPS_IND
		{
			name="SAEF (Tiger Stripe)";
			class Infantry
			{
				name="Infantry";
				class SAEF_TIG_RecSquad_IND
				{
					name="Recon Fireteam";
					side=2;
					faction="SA_PMC";
					class Unit0
					{
						side=2;
						vehicle="SA_Recon_TL_Tig";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="SA_Recon_AR_Tig";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=2;
						vehicle="SA_Recon_Medic_Tig";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=2;
						vehicle="SA_Recon_M_Tig";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
				};
			};
		};
	};
	class West
	{
		side=1;
		class SAEF_D_GROUPS_BLU
		{
			name="SAEF (Desert)";
			class Infantry
			{
				name="Infantry";
				class SAEF_D_RecSquad_BLU
				{
					name="Recon Fireteam";
					side=1;
					faction="SA_PMC_BLUFOR";
					class Unit0
					{
						side=1;
						vehicle="SA_N_Recon_TL";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="SA_N_Recon_AR";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="SA_N_Recon_Medic";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="SA_N_Recon_M";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
				};
			};
		};
		class SAEF_MCAM_GROUPS_BLU
		{
			name="SAEF (Multicam)";
			class Infantry
			{
				name="Infantry";
				class SAEF_MCAM_RecSquad_BLU
				{
					name="Recon Fireteam";
					side=1;
					faction="SA_PMC_BLUFOR";
					class Unit0
					{
						side=1;
						vehicle="SA_N_Recon_TL_MCam";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="SA_N_Recon_AR_MCam";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="SA_N_Recon_Medic_MCam";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="SA_N_Recon_M_MCam";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
				};
			};
		};
		class SAEF_TIG_GROUPS_BLU
		{
			name="SAEF (Tiger Stripe)";
			class Infantry
			{
				name="Infantry";
				class SAEF_TIG_RecSquad_BLU
				{
					name="Recon Fireteam";
					side=1;
					faction="SA_PMC_BLUFOR";
					class Unit0
					{
						side=1;
						vehicle="SA_N_Recon_TL_Tig";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="SA_N_Recon_AR_Tig";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="SA_N_Recon_Medic_Tig";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="SA_N_Recon_M_Tig";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
				};
			};
		};
	};
};
class CfgVehicles
{
	class I_Soldier_base_F;
	class I_Sniper_F;
	class B_Soldier_base_F;
	class SA_Soldier_Base_F: I_Soldier_base_F
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Soldier_Base_F";
		scope=0;
		side=2;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
	};
	class SA_Recon_TL: SA_Soldier_Base_F
	{
		scope=2;
		uniformClass="SA_Uniform";
		displayName="Recon Team Leader";
		faction="SA_PMC";
		vehicleClass="Recon";
		linkedItems[]=
		{
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio",
			"FirstAidKit",
			"SA_PlateCarrier_Khk1",
			"SA_HelmetSpec_Sand"
		};
		respawnLinkedItems[]=
		{
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio",
			"FirstAidKit",
			"SA_PlateCarrier_Khk1",
			"SA_HelmetSpec_Sand"
		};
		magazines[]=
		{
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"HandGrenade",
			"HandGrenade"
		};
		weapons[]=
		{
			"rs_arifle_r2016_Tan_MRCO_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rs_arifle_r2016_Tan_MRCO_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
	};
	class SA_Recon_Medic: SA_Recon_TL
	{
		uniformClass="SA_Uniform_S";
		displayName="Recon Medic";
		faction="SA_PMC";
		vehicleClass="Recon";
		backpack="SA_Backpack_Fast_Sand";
		linkedItems[]=
		{
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio",
			"SA_PlateCarrier_Khk2",
			"Medikit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"SA_Helmet_Sand"
		};
		respawnLinkedItems[]=
		{
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio",
			"SA_PlateCarrier_Khk2",
			"Medikit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"SA_Helmet_Sand"
		};
		magazines[]=
		{
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"HandGrenade",
			"HandGrenade"
		};
		weapons[]=
		{
			"rs_arifle_r2016_Tan_ACO_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rs_arifle_r2016_Tan_ACO_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
	};
	class SA_Recon_AR: SA_Recon_TL
	{
		uniformClass="SA_Uniform_L";
		displayName="Recon Autorifleman";
		faction="SA_PMC";
		vehicleClass="Recon";
		linkedItems[]=
		{
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio",
			"FirstAidKit",
			"SA_PlateCarrier_Khk1",
			"SA_HelmetSpec_Sand"
		};
		respawnLinkedItems[]=
		{
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio",
			"FirstAidKit",
			"SA_PlateCarrier_Khk1",
			"SA_HelmetSpec_Sand"
		};
		magazines[]=
		{
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"HandGrenade",
			"HandGrenade"
		};
		weapons[]=
		{
			"rs_arifle_r2016_Tan_ACO_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rs_arifle_r2016_Tan_ACO_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
	};
	class SA_Recon_M: I_Sniper_F
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Recon_M";
		scope=2;
		side=2;
		faction="SA_PMC";
		vehicleClass="Recon";
		displayName="Recon Marksman";
		uniformClass="SA_Uniform";
		linkedItems[]=
		{
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio",
			"FirstAidKit",
			"SA_PlateCarrier_Khk1"
		};
		respawnLinkedItems[]=
		{
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio",
			"FirstAidKit",
			"SA_PlateCarrier_Khk1",
		};
		magazines[]=
		{
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"Chemlight_green",
			"Chemlight_green",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"HandGrenade",
			"HandGrenade"
		};
		weapons[]=
		{
			"rs_arifle_r2016_Tan_RCO_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rs_arifle_r2016_Tan_RCO_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
	};
	class SA_Recon_TL_MCam: SA_Recon_TL
	{
		uniformClass="SA_N_Uniform";
		weapons[]=
		{
			"rs_arifle_r2016_Olive_MRCO_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rs_arifle_r2016_Olive_MRCO_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
	};
	class SA_Recon_Medic_MCam: SA_Recon_Medic
	{
		uniformClass="SA_N_Uniform_S";
		weapons[]=
		{
			"rs_arifle_r2016_Olive_ACO_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rs_arifle_r2016_Olive_ACO_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
	};
	class SA_Recon_AR_MCam: SA_Recon_AR
	{
		uniformClass="SA_N_Uniform_L";
		weapons[]=
		{
			"rs_arifle_r2016_Olive_ACO_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rs_arifle_r2016_Olive_ACO_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
	};
	class SA_Recon_M_MCam: SA_Recon_M
	{
		author="Rabid Squirrel";
		uniformClass="SA_N_Uniform";
		weapons[]=
		{
			"rs_arifle_r2016_Olive_RCO_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rs_arifle_r2016_Olive_RCO_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
	};
	class SA_Recon_TL_Tig: SA_Recon_TL_MCam
	{
		uniformClass="SA_T_Uniform";
		linkedItems[]=
		{
			"NVGoggles_INDEP",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio",
			"FirstAidKit",
			"SA_PlateCarrier_Green1",
			"SA_HelmetSpec_Green"
		};
		respawnLinkedItems[]=
		{
			"NVGoggles_INDEP",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio",
			"FirstAidKit",
			"SA_PlateCarrier_Green1",
			"SA_HelmetSpec_Green"
		};
	};
	class SA_Recon_Medic_Tig: SA_Recon_Medic_MCam
	{
		uniformClass="SA_T_Uniform_S";
		backpack="SA_Backpack_Fast_Tiger";
		linkedItems[]=
		{
			"NVGoggles_INDEP",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio",
			"SA_PlateCarrier_Green2",
			"Medikit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"SA_Helmet_Green"
		};
		respawnLinkedItems[]=
		{
			"NVGoggles_INDEP",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio",
			"SA_PlateCarrier_Green2",
			"Medikit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"SA_Helmet_Green"
		};
	};
	class SA_Recon_AR_Tig: SA_Recon_AR_MCam
	{
		uniformClass="SA_T_Uniform_L";
		linkedItems[]=
		{
			"NVGoggles_INDEP",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio",
			"FirstAidKit",
			"SA_PlateCarrier_Green1",
			"SA_HelmetSpec_Green"
		};
		respawnLinkedItems[]=
		{
			"NVGoggles_INDEP",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio",
			"FirstAidKit",
			"SA_PlateCarrier_Green1",
			"SA_HelmetSpec_Green"
		};
	};
	class SA_Recon_M_Tig: SA_Recon_M_MCam
	{
		uniformClass="SA_T_Uniform";
		linkedItems[]=
		{
			"NVGoggles_INDEP",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio",
			"FirstAidKit",
			"SA_PlateCarrier_Green1"
		};
		respawnLinkedItems[]=
		{
			"NVGoggles_INDEP",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio",
			"FirstAidKit",
			"SA_PlateCarrier_Green1",
		};
	};
	class SA_N_Recon_TL: SA_Recon_TL
	{
		side=1;
	};
	class SA_N_Recon_Medic: SA_Recon_Medic
	{
		side=1;
	};
	class SA_N_Recon_AR: SA_Recon_AR
	{
		side=1;
	};
	class SA_N_Recon_M: SA_Recon_M
	{
		side=1;
	};
	class SA_N_Recon_TL_MCam: SA_Recon_TL_MCam
	{
		side=1;
	};
	class SA_N_Recon_Medic_MCam: SA_Recon_Medic_MCam
	{
		side=1;
	};
	class SA_N_Recon_AR_MCam: SA_Recon_AR_MCam
	{
		side=1;
	};
	class SA_N_Recon_M_MCam: SA_Recon_M_MCam
	{
		side=1;
	};
	class SA_N_Recon_TL_Tig: SA_Recon_TL_Tig
	{
		side=1;
	};
	class SA_N_Recon_Medic_Tig: SA_Recon_Medic_Tig
	{
		side=1;
	};
	class SA_N_Recon_AR_Tig: SA_Recon_AR_Tig
	{
		side=1;
	};
	class SA_N_Recon_M_Tig: SA_Recon_M_Tig
	{
		side=1;
	};
	class SA_Recon_Diver: B_Soldier_base_F
	{
		author="Rabid Squirrel";
		scope=2;
		side=2;
		faction="SA_PMC";
		vehicleClass="Recon";
		displayName="Recon Diver";
		modelSides[]={3,1};
		uniformClass="SA_Survival_Uniform";
		linkedItems[]=
		{
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio",
			"FirstAidKit",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"SA_PlateCarrier_Khk1",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"HandGrenade",
			"HandGrenade",
			"SA_HelmetSpec_Sand",
			"Optic_Aco"
		};
		respawnLinkedItems[]=
		{
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio",
			"FirstAidKit",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"SA_PlateCarrier_Khk1",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_B_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"rs_35Rnd_556x45_T_Stanag",
			"HandGrenade",
			"HandGrenade",
			"SA_HelmetSpec_Sand",
			"Optic_Aco"
		};
		weapons[]=
		{
			"rs_arifle_r2016_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rs_arifle_r2016_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Diving_Uniform.paa"
		};
		hiddenUnderwaterSelections[]=
		{
			"hide"
		};
		shownUnderwaterSelections[]=
		{
			"unhide",
			"unhide2"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\data\visors_ca.paa"
		};
	};
};