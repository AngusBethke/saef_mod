class CfgPatches
{
	class SA_PMC_UNIFORMS
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
			"SA_Soldier_R",
			"SA_Soldier_RL",
			"SA_Soldier_L",
			//"SA_Soldier_S",
			"SA_N_Soldier_R",
			"SA_N_Soldier_RL",
			"SA_N_Soldier_L",
			//"SA_N_Soldier_S",
			"SA_C_Soldier_R",
			"SA_C_Soldier_RL",
			"SA_C_Soldier_L",
			//"SA_C_Soldier_S",
			"SA_D_Soldier_R",
			"SA_D_Soldier_RL",
			"SA_D_Soldier_L",
			"SA_T_Soldier_R",
			"SA_T_Soldier_RL",
			"SA_T_Soldier_L",
			//"SA_T_Soldier_S",
			"SA_O_Soldier_R",
			"SA_O_Soldier_RL",
			"SA_O_Soldier_L",
			//"SA_O_Soldier_S",
			"SA_B_Soldier_R",
			"SA_B_Soldier_RL",
			"SA_B_Soldier_L",
			//"SA_B_Soldier_S",
			"SA_S_Soldier_R",
			//"SA_S_Soldier_S",
			"SA_W_Soldier_R",
			"SA_W_Soldier_RL",
			"SA_W_Soldier_L",
			//"SA_W_Soldier_S",
			"SA_Diver",
			"SA_Unmarked",
			"SA_Unmarked_S",
			"SA_Desert_BT",
			"SA_Desert_BT_S",
			"SA_F_Soldier_R",
			"SA_F_Soldier_RL",
			"SA_GER_Soldier_R",
			"SA_GER_Soldier_RL"
		};
		weapons[]=
		{
			"SA_Uniform",
			"SA_Uniform_S",
			"SA_Uniform_L",
			//"SA_Ghillie",
			"SA_N_Uniform",
			"SA_N_Uniform_S",
			"SA_N_Uniform_L",
			//"SA_N_Ghillie",
			"SA_C_Uniform",
			"SA_C_Uniform_S",
			"SA_C_Uniform_L",
			//"SA_C_Ghillie",
			"SA_D_Uniform",
			"SA_D_Uniform_S",
			"SA_D_Uniform_L",
			"SA_T_Uniform",
			"SA_T_Uniform_S",
			"SA_T_Uniform_L",
			//"SA_T_Ghillie",
			"SA_O_Uniform",
			"SA_O_Uniform_S",
			"SA_O_Uniform_L",
			//"SA_O_Ghillie",
			"SA_B_Uniform",
			"SA_B_Uniform_S",
			"SA_B_Uniform_L",
			//"SA_B_Ghillie",
			"SA_S_Uniform",
			//"SA_S_Ghillie",
			"SA_W_Uniform",
			"SA_W_Uniform_S",
			"SA_W_Uniform_L",
			//"SA_W_Ghillie",
			"SA_Survival_Uniform",
			"SA_Unmarked_Uniform",
			"SA_Unmarked_Uniform_S",
			"SA_Desert_BT_Uniform",
			"SA_Desert_BT_Uniform_S",
			"SA_F_Uniform",
			"SA_F_Uniform_S",
			"SA_GER_Uniform",
			"SA_GER_Uniform_S"
		};
	};
};
class CfgVehicles
{
	class I_Soldier_base_F;
	class I_Sniper_F;
	class B_Soldier_base_F;
	
	//Private Definitions
	class SA_Soldier_R: I_Soldier_base_F
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Soldier_R";
		scope=1;
		side=2;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformClass="SA_Uniform";
		linkedItems[]=
		{
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
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
			"\sa_uniforms\Data\SA_Clothing_Desert_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_Soldier_RL: SA_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Soldier_RL";
		scope=1;
		side=2;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass="SA_Uniform_S";
		linkedItems[]=
		{
			"ItemMap",
			"NVGoggles",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"NVGoggles",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
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
			"\sa_uniforms\Data\SA_Clothing_Desert_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_Soldier_L: SA_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Soldier_L";
		side=2;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformClass="SA_Uniform_L";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Bandit_Cloth_Tan.paa",
			"\sa_uniforms\Data\SA_Clothing_Desert_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_Soldier_S: I_Sniper_F
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Soldier_S";
		scope=1;
		side=2;
		faction="SA_PMC";
		vehicleClass="SA_PMC_SNIPER";
		model="\A3\Characters_F_Beta\INDEP\ia_sniper";
		uniformClass="SA_Ghillie";
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Desert_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_N_Soldier_R: SA_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_N_Soldier_R";
		scope=1;
		side=1;
		faction="SA_PMC_NATO";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformClass="SA_N_Uniform";
		linkedItems[]=
		{
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
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
			"\sa_uniforms\Data\SA_Clothing_MultiC_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_N_Soldier_RL: SA_Soldier_RL
	{
		author="Rabid Squirrel";
		_generalMacro="SA_N_Soldier_RL";
		scope=1;
		side=1;
		faction="SA_PMC_NATO";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass="SA_N_Uniform_S";
		linkedItems[]=
		{
			"ItemMap",
			"NVGoggles",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"NVGoggles",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
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
			"\sa_uniforms\Data\SA_Clothing_MultiC_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_N_Soldier_L: SA_Soldier_RL
	{
		author="Rabid Squirrel";
		_generalMacro="SA_N_Soldier_L";
		side=1;
		faction="SA_PMC_NATO";
		vehicleClass="SA_PMC";
		model="\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformClass="SA_N_Uniform_L";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Bandit_Cloth.paa",
			"\sa_uniforms\Data\SA_Clothing_MultiC_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_N_Soldier_S: SA_Soldier_S
	{
		author="Rabid Squirrel";
		_generalMacro="SA_N_Soldier_S";
		scope=1;
		side=1;
		faction="SA_PMC_NATO";
		vehicleClass="SA_PMC_SNIPER";
		model="\A3\Characters_F_Beta\INDEP\ia_sniper";
		uniformClass="SA_N_Ghillie";
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_MultiC_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_C_Soldier_R: SA_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_C_Soldier_R";
		scope=1;
		side=0;
		faction="SA_PMC_CSAT";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformClass="SA_C_Uniform";
		linkedItems[]=
		{
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"NVGoggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
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
			"\sa_uniforms\Data\SA_Clothing_Autumn_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_C_Soldier_RL: SA_Soldier_RL
	{
		author="Rabid Squirrel";
		_generalMacro="SA_C_Soldier_RL";
		scope=1;
		side=0;
		faction="SA_PMC_CSAT";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass="SA_C_Uniform_S";
		linkedItems[]=
		{
			"ItemMap",
			"NVGoggles",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"NVGoggles",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
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
			"\sa_uniforms\Data\SA_Clothing_Autumn_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_C_Soldier_L: SA_C_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_C_Soldier_L";
		side=0;
		faction="SA_PMC_CSAT";
		vehicleClass="SA_PMC";
		model="\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformClass="SA_C_Uniform_L";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Bandit_Cloth_Grey.paa",
			"\sa_uniforms\Data\SA_Clothing_Autumn_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_C_Soldier_S: SA_Soldier_S
	{
		author="Rabid Squirrel";
		_generalMacro="SA_C_Soldier_S";
		scope=1;
		side=0;
		faction="SA_PMC_CSAT";
		vehicleClass="SA_PMC_SNIPER";
		model="\A3\Characters_F_Beta\INDEP\ia_sniper";
		uniformClass="SA_C_Ghillie";
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Autumn_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_D_Soldier_R: SA_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_D_Soldier_R";
		faction="SA_PMC_URB";
		vehicleClass="SA_PMC";
		side=2;
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformClass="SA_D_Uniform";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_DigiUrban_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_D_Soldier_RL: SA_Soldier_RL
	{
		author="Rabid Squirrel";
		_generalMacro="SA_D_Soldier_RL";
		faction="SA_PMC_URB";
		vehicleClass="SA_PMC";
		side=2;
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass="SA_D_Uniform_S";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_DigiUrban_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_D_Soldier_L: SA_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_D_Soldier_L";
		side=2;
		faction="SA_PMC_URB";
		vehicleClass="SA_PMC";
		model="\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformClass="SA_D_Uniform_L";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Bandit_Cloth_Grey.paa",
			"\sa_uniforms\Data\SA_Clothing_DigiUrban_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_T_Soldier_R: SA_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_T_Soldier_R";
		faction="SA_PMC_TIG";
		vehicleClass="SA_PMC";
		side=1;
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformClass="SA_T_Uniform";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Tiger_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_T_Soldier_RL: SA_Soldier_RL
	{
		author="Rabid Squirrel";
		_generalMacro="SA_T_Soldier_RL";
		faction="SA_PMC_TIG";
		vehicleClass="SA_PMC";
		side=1;
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass="SA_T_Uniform_S";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Tiger_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_T_Soldier_L: SA_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_T_Soldier_L";
		side=1;
		faction="SA_PMC_TIG";
		vehicleClass="SA_PMC";
		model="\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformClass="SA_T_Uniform_L";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Bandit_Cloth.paa",
			"\sa_uniforms\Data\SA_Clothing_Tiger_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_T_Soldier_S: SA_Soldier_S
	{
		author="Rabid Squirrel";
		_generalMacro="SA_T_Soldier_S";
		side=1;
		faction="SA_PMC_TIG";
		vehicleClass="SA_PMC_SNIPER";
		model="\A3\Characters_F_Beta\INDEP\ia_sniper";
		uniformClass="SA_T_Ghillie";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Tiger_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_O_Soldier_R: SA_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_O_Soldier_R";
		faction="SA_PMC_OLIVE";
		vehicleClass="SA_PMC";
		side=1;
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformClass="SA_O_Uniform";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_OliveDrab_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_O_Soldier_RL: SA_Soldier_RL
	{
		author="Rabid Squirrel";
		_generalMacro="SA_O_Soldier_RL";
		faction="SA_PMC_OLIVE";
		vehicleClass="SA_PMC";
		side=1;
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass="SA_O_Uniform_S";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_OliveDrab_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_O_Soldier_L: SA_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_O_Soldier_L";
		side=1;
		faction="SA_PMC_OLIVE";
		vehicleClass="SA_PMC";
		model="\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformClass="SA_O_Uniform_L";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Bandit_Cloth.paa",
			"\sa_uniforms\Data\SA_Clothing_OliveDrab_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_O_Soldier_S: SA_Soldier_S
	{
		author="Rabid Squirrel";
		_generalMacro="SA_O_Soldier_S";
		side=1;
		faction="SA_PMC_OLIVE";
		vehicleClass="SA_PMC_SNIPER";
		model="\A3\Characters_F_Beta\INDEP\ia_sniper";
		uniformClass="SA_O_Ghillie";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_OliveDrab_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_B_Soldier_R: SA_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_B_Soldier_R";
		faction="SA_PMC_BROWN";
		vehicleClass="SA_PMC";
		side=0;
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformClass="SA_B_Uniform";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_SABrown_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_B_Soldier_RL: SA_Soldier_RL
	{
		author="Rabid Squirrel";
		_generalMacro="SA_B_Soldier_RL";
		faction="SA_PMC_BROWN";
		vehicleClass="SA_PMC";
		side=0;
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass="SA_B_Uniform_S";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_SABrown_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_B_Soldier_L: SA_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_B_Soldier_L";
		side=0;
		faction="SA_PMC_BROWN";
		vehicleClass="SA_PMC";
		model="\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformClass="SA_B_Uniform_L";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Bandit_Cloth_Tan.paa",
			"\sa_uniforms\Data\SA_Clothing_SABrown_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_B_Soldier_S: SA_Soldier_S
	{
		author="Rabid Squirrel";
		_generalMacro="SA_B_Soldier_S";
		side=0;
		faction="SA_PMC_BROWN";
		vehicleClass="SA_PMC_SNIPER";
		model="\A3\Characters_F_Beta\INDEP\ia_sniper";
		uniformClass="SA_B_Ghillie";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_SABrown_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_S_Soldier_R: SA_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_S_Soldier_R";
		faction="SA_PMC_SNOW";
		vehicleClass="SA_PMC";
		side=1;
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformClass="SA_S_Uniform";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Snow_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_S_Soldier_S: SA_Soldier_S
	{
		author="Rabid Squirrel";
		_generalMacro="SA_S_Soldier_S";
		side=1;
		faction="SA_PMC_SNOW";
		vehicleClass="SA_PMC_SNIPER";
		model="\A3\Characters_F_Beta\INDEP\ia_sniper";
		uniformClass="SA_S_Ghillie";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Snow_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_W_Soldier_R: SA_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_W_Soldier_R";
		faction="SA_PMC_WOOD";
		vehicleClass="SA_PMC";
		side=1;
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformClass="SA_W_Uniform";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Woodland_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_W_Soldier_RL: SA_Soldier_RL
	{
		author="Rabid Squirrel";
		_generalMacro="SA_W_Soldier_RL";
		faction="SA_PMC_WOOD";
		vehicleClass="SA_PMC";
		side=1;
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass="SA_W_Uniform_S";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Woodland_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_W_Soldier_L: SA_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_W_Soldier_L";
		side=0;
		faction="SA_PMC_WOOD";
		vehicleClass="SA_PMC";
		model="\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformClass="SA_W_Uniform_L";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Bandit_Cloth.paa",
			"\sa_uniforms\Data\SA_Clothing_Woodland_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		
	};
	class SA_W_Soldier_S: SA_Soldier_S
	{
		author="Rabid Squirrel";
		_generalMacro="SA_B_Soldier_S";
		side=1;
		faction="SA_PMC_WOOD";
		vehicleClass="SA_PMC_SNIPER";
		model="\A3\Characters_F_Beta\INDEP\ia_sniper";
		uniformClass="SA_W_Ghillie";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Woodland_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_Diver: B_Soldier_base_F
	{
		author="Rabid Squirrel";
		scope=1;
		displayName="SA Diving Kit";
		model="\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		modelSides[]={3,1};
		uniformClass="SA_Survival_Uniform";
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
	class SA_Unmarked: SA_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Unmarked";
		side=1;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformClass="SA_Unmarked_Uniform";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Unmarked_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_Unmarked_S: SA_Soldier_RL
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Unmarked_S";
		side=1;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass="SA_Unmarked_Uniform_S";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Unmarked_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_Desert_BT: SA_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Desert_BT";
		side=1;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformClass="SA_Desert_BT_Uniform";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Desert_BT_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_Desert_BT_S: SA_Soldier_RL
	{
		author="Rabid Squirrel";
		_generalMacro="SA_Desert_BT_S";
		side=1;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass="SA_Desert_BT_Uniform_S";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Desert_BT_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_F_Soldier_R: SA_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_F_Soldier_R";
		side=1;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformClass="SA_F_Uniform";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_FleckS_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_F_Soldier_RL: SA_Soldier_RL
	{
		author="Rabid Squirrel";
		_generalMacro="SA_F_Soldier_RL";
		side=1;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass="SA_F_Uniform_S";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_FleckS_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
	};
	class SA_GER_Soldier_R: I_Soldier_base_F
	{
		author="Rabid Squirrel";
		_generalMacro="SA_GER_Soldier_R";
		scope=1;
		side=2;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformClass="SA_GER_Uniform";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_FleckS_G_co.paa"
		};
	};
	class SA_GER_Soldier_RL: SA_GER_Soldier_R
	{
		author="Rabid Squirrel";
		_generalMacro="SA_GER_Soldier_RL";
		scope=1;
		side=2;
		faction="SA_PMC";
		vehicleClass="SA_PMC";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass="SA_GER_Uniform_S";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_FleckS_G_co.paa"
		};
	};
};
class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class SA_Uniform: Uniform_Base
	{
		scope=2;
		author="Rabid Squirrel";
		displayName="SAEF Desert";
		picture="\sa_uniforms\data\ui\saef_uniform_desert_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Desert_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			uniformModel="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
			uniformClass="SA_Soldier_R";
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class SA_Uniform_S: Uniform_Base
	{
		scope=2;
		author="Rabid Squirrel";
		displayName="SAEF Desert SS";
		picture="\sa_uniforms\data\ui\saef_uniform_desert_s_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Desert_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			uniformModel="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
			uniformClass="SA_Soldier_RL";
			containerClass="Supply50";
			armor=10;
			mass=50;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class SA_Uniform_L: Uniform_Base
	{
		scope=2;
		author="Rabid Squirrel";
		displayName="SAEF Desert T-Shirt";
		picture="\sa_uniforms\data\ui\saef_uniform_desert_l_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Bandit_Cloth_Tan.paa",
			"\sa_uniforms\Data\SA_Clothing_Desert_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			uniformModel="\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1";
			uniformClass="SA_Soldier_L";
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo",
				"insignia"
			};
		};
	};
	/*class SA_Ghillie: Uniform_Base
	{
		scope=2;
		author="Rabid Squirrel";
		displayName="SAEF Desert Suit Ghillie";
		picture="\sa_uniforms\data\ui\icon_SA_Ghillie_IA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Desert_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			uniformModel="\A3\Characters_F_Beta\INDEP\ia_sniper";
			uniformClass="SA_Soldier_S";
			containerClass="Supply50";
			armor=10;
			mass=50;
			hiddenSelections[]=
			{
				"camo",
				"insignia"
			};
		};
	};*/
	class SA_N_Uniform: SA_Uniform
	{
		author="Rabid Squirrel";
		displayName="SAEF Multicam";
		picture="\sa_uniforms\data\ui\saef_uniform_multicam_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_MultiC_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_N_Soldier_R";
		};
	};
	class SA_N_Uniform_S: SA_Uniform_S
	{
		author="Rabid Squirrel";
		displayName="SAEF Multicam SS";
		picture="\sa_uniforms\data\ui\saef_uniform_multicam_s_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_MultiC_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_N_Soldier_RL";
		};
	};
	class SA_N_Uniform_L: SA_Uniform_L
	{
		author="Rabid Squirrel";
		displayName="SAEF Multicam T-Shirt";
		picture="\sa_uniforms\data\ui\saef_uniform_multicam_l_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Bandit_Cloth.paa",
			"\sa_uniforms\Data\SA_Clothing_MultiC_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_N_Soldier_L";
		};
	};
	/*class SA_N_Ghillie: SA_Ghillie
	{
		author="Rabid Squirrel";
		displayName="SAEF Multicam Suit Ghillie";
		picture="\sa_uniforms\data\ui\icon_SA_Ghillie_IA.paa";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_MultiC_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_N_Soldier_S";
		};
	};*/
	class SA_C_Uniform: SA_Uniform
	{
		author="Rabid Squirrel";
		displayName="SAEF Autumn";
		picture="\sa_uniforms\data\ui\saef_uniform_autumn_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Autumn_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_C_Soldier_R";
		};
	};
	class SA_C_Uniform_S: SA_Uniform_S
	{
		author="Rabid Squirrel";
		displayName="SAEF Autumn SS";
		picture="\sa_uniforms\data\ui\saef_uniform_autumn_s_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Autumn_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_C_Soldier_RL";
		};
	};
	class SA_C_Uniform_L: SA_Uniform_L
	{
		author="Rabid Squirrel";
		displayName="SAEF Autumn T-Shirt";
		picture="\sa_uniforms\data\ui\saef_uniform_autumn_l_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Bandit_Cloth_Grey.paa",
			"\sa_uniforms\Data\SA_Clothing_Autumn_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_C_Soldier_L";
		};
	};
	/*class SA_C_Ghillie: SA_Ghillie
	{
		author="Rabid Squirrel";
		displayName="SAEF Autumn Suit Ghillie";
		picture="\sa_uniforms\data\ui\icon_SA_Ghillie_IA2.paa";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Autumn_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_C_Soldier_S";
		};
	};*/
	class SA_D_Uniform: SA_Uniform
	{
		author="Rabid Squirrel";
		displayName="SAEF Urban";
		picture="\sa_uniforms\data\ui\saef_uniform_urban_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_DigiUrban_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_D_Soldier_R";
		};
	};
	class SA_D_Uniform_S: SA_Uniform_S
	{
		author="Rabid Squirrel";
		displayName="SAEF Urban SS";
		picture="\sa_uniforms\data\ui\saef_uniform_urban_s_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_DigiUrban_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_D_Soldier_RL";
		};
	};
	class SA_D_Uniform_L: SA_Uniform_L
	{
		author="Rabid Squirrel";
		displayName="SAEF Urban T-Shirt";
		picture="\sa_uniforms\data\ui\saef_uniform_urban_l_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Bandit_Cloth_Grey.paa",
			"\sa_uniforms\Data\SA_Clothing_DigiUrban_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_D_Soldier_L";
		};
	};
	class SA_T_Uniform: SA_Uniform
	{
		author="Rabid Squirrel";
		displayName="SAEF Tiger";
		picture="\sa_uniforms\data\ui\saef_uniform_tiger_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Tiger_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_T_Soldier_R";
		};
	};
	class SA_T_Uniform_S: SA_Uniform_S
	{
		author="Rabid Squirrel";
		displayName="SAEF Tiger SS";
		picture="\sa_uniforms\data\ui\saef_uniform_tiger_s_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Tiger_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_T_Soldier_RL";
		};
	};
	class SA_T_Uniform_L: SA_Uniform_L
	{
		author="Rabid Squirrel";
		displayName="SAEF Tiger T-Shirt";
		picture="\sa_uniforms\data\ui\saef_uniform_tiger_l_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Bandit_Cloth.paa",
			"\sa_uniforms\Data\SA_Clothing_Tiger_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_T_Soldier_L";
		};
	};
	/*class SA_T_Ghillie: SA_Ghillie
	{
		author="Rabid Squirrel";
		displayName="SAEF Tiger Suit Ghillie";
		picture="\sa_uniforms\data\ui\icon_SA_Ghillie_IA2.paa";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Tiger_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_T_Soldier_S";
		};
	};*/
	class SA_O_Uniform: SA_Uniform
	{
		author="Rabid Squirrel";
		displayName="SAEF Olive";
		picture="\sa_uniforms\data\ui\saef_uniform_olive_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_OliveDrab_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_O_Soldier_R";
		};
	};
	class SA_O_Uniform_S: SA_Uniform_S
	{
		author="Rabid Squirrel";
		displayName="SAEF Olive SS";
		picture="\sa_uniforms\data\ui\saef_uniform_olive_s_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_OliveDrab_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_O_Soldier_RL";
		};
	};
	class SA_O_Uniform_L: SA_Uniform_L
	{
		author="Rabid Squirrel";
		displayName="SAEF Olive T-Shirt";
		picture="\sa_uniforms\data\ui\saef_uniform_olive_l_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Bandit_Cloth.paa",
			"\sa_uniforms\Data\SA_Clothing_OliveDrab_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_O_Soldier_L";
		};
	};
	/*class SA_O_Ghillie: SA_Ghillie
	{
		author="Rabid Squirrel";
		displayName="SAEF Olive Suit Ghillie";
		picture="\sa_uniforms\data\ui\icon_SA_Ghillie_IA2.paa";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_OliveDrab_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_O_Soldier_S";
		};
	};*/
	class SA_B_Uniform: SA_Uniform
	{
		author="Rabid Squirrel";
		displayName="SAEF Brown";
		picture="\sa_uniforms\data\ui\saef_uniform_brown_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_SABrown_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_B_Soldier_R";
		};
	};
	class SA_B_Uniform_S: SA_Uniform_S
	{
		author="Rabid Squirrel";
		displayName="SAEF Brown SS";
		picture="\sa_uniforms\data\ui\saef_uniform_brown_s_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_SABrown_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_B_Soldier_RL";
		};
	};
	class SA_B_Uniform_L: SA_Uniform_L
	{
		author="Rabid Squirrel";
		displayName="SAEF Brown T-Shirt";
		picture="\sa_uniforms\data\ui\saef_uniform_brown_l_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Bandit_Cloth_Tan.paa",
			"\sa_uniforms\Data\SA_Clothing_SABrown_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_B_Soldier_L";
		};
	};
	/*class SA_B_Ghillie: SA_Ghillie
	{
		author="Rabid Squirrel";
		displayName="SAEF Brown Suit Ghillie";
		picture="\sa_uniforms\data\ui\icon_SA_Ghillie_IA2.paa";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_SABrown_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_B_Soldier_S";
		};
	};*/
	class SA_S_Uniform: SA_Uniform
	{
		author="Rabid Squirrel";
		displayName="SAEF Snow";
		picture="\sa_uniforms\data\ui\saef_uniform_snow_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Snow_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_S_Soldier_R";
		};
	};
	/*class SA_S_Ghillie: SA_Ghillie
	{
		author="Rabid Squirrel";
		displayName="SAEF Snow Suit Ghillie";
		picture="\sa_uniforms\data\ui\icon_SA_Ghillie_IA2.paa";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Snow_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_S_Soldier_S";
		};
	};*/
	class SA_W_Uniform: SA_Uniform
	{
		author="Rabid Squirrel";
		displayName="SAEF Wood";
		picture="\sa_uniforms\data\ui\saef_uniform_woodland_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Woodland_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_W_Soldier_R";
		};
	};
	class SA_W_Uniform_S: SA_Uniform_S
	{
		author="Rabid Squirrel";
		displayName="SAEF Wood SS";
		picture="\sa_uniforms\data\ui\saef_uniform_woodland_s_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Woodland_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_W_Soldier_RL";
		};
	};
	class SA_W_Uniform_L: SA_Uniform_L
	{
		author="Rabid Squirrel";
		displayName="SAEF Wood T-Shirt";
		picture="\sa_uniforms\data\ui\saef_uniform_woodland_l_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Bandit_Cloth.paa",
			"\sa_uniforms\Data\SA_Clothing_Woodland_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_W_Soldier_L";
		};
	};
	/*class SA_W_Ghillie: SA_Ghillie
	{
		author="Rabid Squirrel";
		displayName="SAEF Wood Suit Ghillie";
		picture="\sa_uniforms\data\ui\icon_SA_Ghillie_IA2.paa";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Woodland_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_W_Soldier_S";
		};
	};*/
	class SA_Survival_Uniform: Uniform_Base
	{
		author="Rabid Squirrel";
		scope=2;
		displayName="SA Diving Kit";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\characters_f\common\data\diver_suit_nato_co.paa",
			"\sa_uniforms\Data\SA_Diving_Uniform.paa"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			uniformModel="\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
			uniformClass="SA_Diver";
			containerClass="Supply40";
			uniformType="Neopren";
			armor=10;
			mass=60;
		};
	};
	class SA_Unmarked_Uniform: SA_Uniform
	{
		author="Rabid Squirrel";
		displayName="SAEF Unmarked";
		picture="\sa_uniforms\data\ui\saef_uniform_unmarked_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Unmarked_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_Unmarked";
		};
	};
	class SA_Unmarked_Uniform_S: SA_Uniform_S
	{
		author="Rabid Squirrel";
		displayName="SAEF Unmarked SS";
		picture="\sa_uniforms\data\ui\saef_uniform_unmarked_s_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Unmarked_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_Unmarked_S";
		};
	};
	class SA_Desert_BT_Uniform: SA_Uniform
	{
		author="Rabid Squirrel";
		displayName="SAEF Desert BT";
		picture="\sa_uniforms\data\ui\saef_uniform_unmarked_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Desert_BT_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_Desert_BT";
		};
	};
	class SA_Desert_BT_Uniform_S: SA_Uniform_S
	{
		author="Rabid Squirrel";
		displayName="SAEF Desert BT SS";
		picture="\sa_uniforms\data\ui\saef_uniform_unmarked_s_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_Desert_BT_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_Desert_BT_S";
		};
	};
	class SA_F_Uniform: SA_Uniform
	{
		author="Rabid Squirrel";
		displayName="SAEF Splinter Fleck";
		picture="\sa_uniforms\data\ui\saef_uniform_autumn_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_FleckS_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_F_Soldier_R";
		};
	};
	class SA_F_Uniform_S: SA_Uniform_S
	{
		author="Rabid Squirrel";
		displayName="SAEF Splinter Fleck SS";
		picture="\sa_uniforms\data\ui\saef_uniform_autumn_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_FleckS_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sa_uniforms\Data\SA_Clothing_Jersey.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="SA_F_Soldier_RL";
		};
	};
	class SA_GER_Uniform: SA_Uniform
	{
		author="Rabid Squirrel";
		displayName="Fatigues Splinter Flecktarn";
		picture="\sa_uniforms\data\ui\saef_uniform_autumn_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_FleckS_G_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\ia_soldier_01";
			uniformClass="SA_GER_Soldier_R";
		};
	};
	class SA_GER_Uniform_S: SA_Uniform_S
	{
		author="Rabid Squirrel";
		displayName="Fatigues Splinter Flecktarn SS";
		picture="\sa_uniforms\data\ui\saef_uniform_autumn_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Data\SA_Clothing_FleckS_G_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\ia_soldier_02";
			uniformClass="SA_GER_Soldier_RL";
		};
	};
};