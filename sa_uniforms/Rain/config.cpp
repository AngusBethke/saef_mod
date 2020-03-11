class CfgPatches
{
	class SA_PMC_UNIFORMS_RAIN
	{
		author="Rabid Squirrel";
		addonRootClass="SA_PMC";
		requiredAddons[]=
		{
			"SA_PMC",
			"SA_PMC_UNIFORMS"
		};
		requiredVersion=0.1;
		units[]=
		{
			"SA_Soldier_R_Rain",
			"SA_Soldier_RL_Rain",
			"SA_Soldier_L_Rain",
			//"SA_Soldier_S_Rain",
			"SA_N_Soldier_R_Rain",
			"SA_N_Soldier_RL_Rain",
			"SA_N_Soldier_L_Rain",
			//"SA_N_Soldier_S_Rain",
			"SA_C_Soldier_R_Rain",
			"SA_C_Soldier_RL_Rain",
			"SA_C_Soldier_L_Rain",
			//"SA_C_Soldier_S_Rain",
			"SA_D_Soldier_R_Rain",
			"SA_D_Soldier_RL_Rain",
			"SA_D_Soldier_L_Rain",
			"SA_T_Soldier_R_Rain",
			"SA_T_Soldier_RL_Rain",
			"SA_T_Soldier_L_Rain",
			//"SA_T_Soldier_S_Rain",
			"SA_O_Soldier_R_Rain",
			"SA_O_Soldier_RL_Rain",
			"SA_O_Soldier_L_Rain",
			//"SA_O_Soldier_S_Rain",
			"SA_B_Soldier_R_Rain",
			"SA_B_Soldier_RL_Rain",
			"SA_B_Soldier_L_Rain",
			//"SA_B_Soldier_S_Rain",
			"SA_S_Soldier_R_Rain",
			//"SA_S_Soldier_S_Rain",
			"SA_W_Soldier_R_Rain",
			"SA_W_Soldier_RL_Rain",
			"SA_W_Soldier_L_Rain",
			//"SA_W_Soldier_S_Rain",
			"SA_Unmarked_Rain",
			"SA_Unmarked_S_Rain",
			"SA_Desert_BT_Rain",
			"SA_Desert_BT_S_Rain",
			"SA_F_Soldier_R_Rain",
			"SA_F_Soldier_RL_Rain",
			"SA_GER_Soldier_R_Rain",
			"SA_GER_Soldier_RL_Rain"
		};
		weapons[]=
		{
			"SA_Uniform_Rain",
			"SA_Uniform_S_Rain",
			"SA_Uniform_L_Rain",
			//"SA_Ghillie_Rain",
			"SA_N_Uniform_Rain",
			"SA_N_Uniform_S_Rain",
			"SA_N_Uniform_L_Rain",
			//"SA_N_Ghillie_Rain",
			"SA_C_Uniform_Rain",
			"SA_C_Uniform_S_Rain",
			"SA_C_Uniform_L_Rain",
			//"SA_C_Ghillie_Rain",
			"SA_D_Uniform_Rain",
			"SA_D_Uniform_S_Rain",
			"SA_D_Uniform_L_Rain",
			"SA_T_Uniform_Rain",
			"SA_T_Uniform_S_Rain",
			"SA_T_Uniform_L_Rain",
			//"SA_T_Ghillie_Rain",
			"SA_O_Uniform_Rain",
			"SA_O_Uniform_S_Rain",
			"SA_O_Uniform_L_Rain",
			//"SA_O_Ghillie_Rain",
			"SA_B_Uniform_Rain",
			"SA_B_Uniform_S_Rain",
			"SA_B_Uniform_L_Rain",
			//"SA_B_Ghillie_Rain",
			"SA_S_Uniform_Rain",
			//"SA_S_Ghillie_Rain",
			"SA_W_Uniform_Rain",
			"SA_W_Uniform_S_Rain",
			"SA_W_Uniform_L_Rain",
			//"SA_W_Ghillie_Rain",
			"SA_Unmarked_Uniform_Rain",
			"SA_Unmarked_Uniform_S_Rain",
			"SA_Desert_BT_Uniform_Rain",
			"SA_Desert_BT_Uniform_S_Rain",
			"SA_F_Uniform_Rain",
			"SA_F_Uniform_S_Rain",
			"SA_GER_Uniform_Rain",
			"SA_GER_Uniform_S_Rain"
		};
	};
};
class CfgVehicles
{
	class SA_Soldier_R;
	class SA_Soldier_RL;
	class SA_Soldier_L;
	//class SA_Soldier_S;
	class SA_N_Soldier_R;
	class SA_N_Soldier_RL;
	class SA_N_Soldier_L;
	//class SA_N_Soldier_S;
	class SA_C_Soldier_R;
	class SA_C_Soldier_RL;
	class SA_C_Soldier_L;
	//class SA_C_Soldier_S;
	class SA_D_Soldier_R;
	class SA_D_Soldier_RL;
	class SA_D_Soldier_L;
	class SA_T_Soldier_R;
	class SA_T_Soldier_RL;
	class SA_T_Soldier_L;
	//class SA_T_Soldier_S;
	class SA_O_Soldier_R;
	class SA_O_Soldier_RL;
	class SA_O_Soldier_L;
	//class SA_O_Soldier_S;
	class SA_B_Soldier_R;
	class SA_B_Soldier_RL;
	class SA_B_Soldier_L;
	//class SA_B_Soldier_S;
	class SA_S_Soldier_R;
	//class SA_S_Soldier_S;
	class SA_W_Soldier_R;
	class SA_W_Soldier_RL;
	class SA_W_Soldier_L;
	//class SA_W_Soldier_S;
	class SA_Unmarked;
	class SA_Unmarked_S;
	class SA_Desert_BT;
	class SA_Desert_BT_S;
	class SA_F_Soldier_R;
	class SA_F_Soldier_RL;
	class SA_GER_Soldier_R;
	class SA_GER_Soldier_RL;
	//Private Definitions
	class SA_Soldier_R_Rain: SA_Soldier_R
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_Uniform_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Desert_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_Soldier_RL_Rain: SA_Soldier_RL
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_Uniform_S_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Desert_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_Soldier_L_Rain: SA_Soldier_L
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_Uniform_L_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Bandit_Cloth_Tan_Rain.paa",
			"\sa_uniforms\Rain\Data\SA_Clothing_Desert_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	/*class SA_Soldier_S_Rain: SA_Soldier_S
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_Ghillie_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Desert_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};*/
	class SA_N_Soldier_R_Rain: SA_N_Soldier_R
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_N_Uniform_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_MultiC_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_N_Soldier_RL_Rain: SA_N_Soldier_RL
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_N_Uniform_S_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_MultiC_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_N_Soldier_L_Rain: SA_N_Soldier_L
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_N_Uniform_L_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Bandit_Cloth_Rain.paa",
			"\sa_uniforms\Rain\Data\SA_Clothing_MultiC_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	/*class SA_N_Soldier_S_Rain: SA_N_Soldier_S
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_N_Ghillie_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_MultiC_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};*/
	class SA_C_Soldier_R_Rain: SA_C_Soldier_R
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_C_Uniform_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Autumn_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_C_Soldier_RL_Rain: SA_C_Soldier_RL
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_C_Uniform_S_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Autumn_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_C_Soldier_L_Rain: SA_C_Soldier_L
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_C_Uniform_L_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Bandit_Cloth_Grey_Rain.paa",
			"\sa_uniforms\Rain\Data\SA_Clothing_Autumn_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	/*class SA_C_Soldier_S_Rain: SA_C_Soldier_S
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_C_Ghillie_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Autumn_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};*/
	class SA_D_Soldier_R_Rain: SA_D_Soldier_R
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_D_Uniform_Rain";
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_D_Soldier_RL_Rain: SA_D_Soldier_RL
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_D_Uniform_S_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_DigiUrban_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_D_Soldier_L_Rain: SA_D_Soldier_L
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_D_Uniform_L_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Bandit_Cloth_Grey_Rain.paa",
			"\sa_uniforms\Rain\Data\SA_Clothing_DigiUrban_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_T_Soldier_R_Rain: SA_T_Soldier_R
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_T_Uniform_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Tiger_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_T_Soldier_RL_Rain: SA_T_Soldier_RL
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_T_Uniform_S_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Tiger_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_T_Soldier_L_Rain: SA_T_Soldier_L
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_T_Uniform_L_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Bandit_Cloth_Rain.paa",
			"\sa_uniforms\Rain\Data\SA_Clothing_Tiger_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	/*class SA_T_Soldier_S_Rain: SA_T_Soldier_S
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_T_Ghillie_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Tiger_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};*/
	class SA_O_Soldier_R_Rain: SA_O_Soldier_R
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_O_Uniform_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_OliveDrab_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_O_Soldier_RL_Rain: SA_O_Soldier_RL
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_O_Uniform_S_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_OliveDrab_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_O_Soldier_L_Rain: SA_O_Soldier_L
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_O_Uniform_L_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Bandit_Cloth_Rain.paa",
			"\sa_uniforms\Rain\Data\SA_Clothing_OliveDrab_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	/*class SA_O_Soldier_S_Rain: SA_O_Soldier_S
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_O_Ghillie_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_OliveDrab_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};*/
	class SA_B_Soldier_R_Rain: SA_B_Soldier_R
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_B_Uniform_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_SABrown_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_B_Soldier_RL_Rain: SA_B_Soldier_RL
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_B_Uniform_S_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_SABrown_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_B_Soldier_L_Rain: SA_B_Soldier_L
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_B_Uniform_L_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Bandit_Cloth_Tan_Rain.paa",
			"\sa_uniforms\Rain\Data\SA_Clothing_SABrown_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	/*class SA_B_Soldier_S_Rain: SA_B_Soldier_S
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_B_Ghillie_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_SABrown_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};*/
	class SA_S_Soldier_R_Rain: SA_S_Soldier_R
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_S_Uniform_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Snow_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	/*class SA_S_Soldier_S_Rain: SA_S_Soldier_S
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_S_Ghillie_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Snow_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};*/
	class SA_W_Soldier_R_Rain: SA_W_Soldier_R
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_W_Uniform_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Woodland_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_W_Soldier_RL_Rain: SA_W_Soldier_RL
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_W_Uniform_S_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Woodland_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_W_Soldier_L_Rain: SA_W_Soldier_L
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_W_Uniform_L_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Bandit_Cloth_Rain.paa",
			"\sa_uniforms\Rain\Data\SA_Clothing_Woodland_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		
	};
	/*class SA_W_Soldier_S_Rain: SA_W_Soldier_S
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_W_Ghillie_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Woodland_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};*/
	class SA_Unmarked_Rain: SA_Unmarked
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_Unmarked_Uniform_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Unmarked_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_Unmarked_S_Rain: SA_Unmarked_S
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_Unmarked_Uniform_S_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Unmarked_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_Desert_BT_Rain: SA_Desert_BT
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_Desert_BT_Uniform_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Desert_BT_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_Desert_BT_S_Rain: SA_Desert_BT_S
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_Desert_BT_Uniform_S_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Desert_BT_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_F_Soldier_R_Rain: SA_F_Soldier_R
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_F_Uniform_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_FleckS_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_F_Soldier_RL_Rain: SA_F_Soldier_RL
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_F_Uniform_S_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_FleckS_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
	};
	class SA_GER_Soldier_R_Rain: SA_GER_Soldier_R
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_GER_Uniform_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_FleckS_G_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rt_indep\Data\ia_soldier_01_clothing_rain.rvmat"
		};
	};
	class SA_GER_Soldier_RL_Rain: SA_GER_Soldier_RL
	{
		author="Rabid Squirrel";
		scope=1;
		uniformClass="SA_GER_Uniform_S_Rain";
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_FleckS_G_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rt_indep\Data\ia_soldier_01_clothing_rain.rvmat"
		};
	};
};
class CfgWeapons
{
	class UniformItem;
	class SA_Uniform;
	class SA_Uniform_S;
	class SA_Uniform_L;
	//class SA_Ghillie;
	class SA_N_Uniform;
	class SA_N_Uniform_S;
	class SA_N_Uniform_L;
	//class SA_N_Ghillie;
	class SA_C_Uniform;
	class SA_C_Uniform_S;
	class SA_C_Uniform_L;
	//class SA_C_Ghillie;
	class SA_D_Uniform;
	class SA_D_Uniform_S;
	class SA_D_Uniform_L;
	class SA_T_Uniform;
	class SA_T_Uniform_S;
	class SA_T_Uniform_L;
	//class SA_T_Ghillie;
	class SA_O_Uniform;
	class SA_O_Uniform_S;
	class SA_O_Uniform_L;
	//class SA_O_Ghillie;
	class SA_B_Uniform;
	class SA_B_Uniform_S;
	class SA_B_Uniform_L;
	//class SA_B_Ghillie;
	class SA_S_Uniform;
	//class SA_S_Ghillie;
	class SA_W_Uniform;
	class SA_W_Uniform_S;
	class SA_W_Uniform_L;
	//class SA_W_Ghillie;
	class SA_Unmarked_Uniform;
	class SA_Unmarked_Uniform_S;
	class SA_Desert_BT_Uniform;
	class SA_Desert_BT_Uniform_S;
	class SA_F_Uniform;
	class SA_F_Uniform_S;
	class SA_GER_Uniform;
	class SA_GER_Uniform_S;
	class SA_Uniform_Rain: SA_Uniform
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Desert_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_Soldier_R_Rain";
		};
	};
	class SA_Uniform_S_Rain: SA_Uniform_S
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Desert_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_Soldier_RL_Rain";
		};
	};
	class SA_Uniform_L_Rain: SA_Uniform_L
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Bandit_Cloth_Tan_Rain.paa",
			"\sa_uniforms\Rain\Data\SA_Clothing_Desert_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_Soldier_L_Rain";
		};
	};
	/*class SA_Ghillie_Rain: SA_Ghillie
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Desert_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformModel="-";
			containerClass="Supply50";
			uniformClass="SA_Soldier_S";
		};
	};*/
	class SA_N_Uniform_Rain: SA_N_Uniform
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_MultiC_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_N_Soldier_R_Rain";
		};
	};
	class SA_N_Uniform_S_Rain: SA_N_Uniform_S
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_MultiC_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_N_Soldier_RL_Rain";
		};
	};
	class SA_N_Uniform_L_Rain: SA_N_Uniform_L
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Bandit_Cloth_Rain.paa",
			"\sa_uniforms\Rain\Data\SA_Clothing_MultiC_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_N_Soldier_L_Rain";
		};
	};
	/*class SA_N_Ghillie_Rain: SA_N_Ghillie
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_MultiC_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformModel="-";
			containerClass="Supply50";
			uniformClass="SA_N_Soldier_S_Rain";
		};
	};*/
	class SA_C_Uniform_Rain: SA_C_Uniform
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Autumn_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_C_Soldier_R_Rain";
		};
	};
	class SA_C_Uniform_S_Rain: SA_C_Uniform_S
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Autumn_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_C_Soldier_RL_Rain";
		};
	};
	class SA_C_Uniform_L_Rain: SA_C_Uniform_L
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Bandit_Cloth_Grey_Rain.paa",
			"\sa_uniforms\Rain\Data\SA_Clothing_Autumn_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_C_Soldier_L_Rain";
		};
	};
	/*class SA_C_Ghillie_Rain: SA_C_Ghillie
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Autumn_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformModel="-";
			containerClass="Supply50";
			uniformClass="SA_C_Soldier_S_Rain";
		};
	};*/
	class SA_D_Uniform_Rain: SA_D_Uniform
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_DigiUrban_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_D_Soldier_R_Rain";
		};
	};
	class SA_D_Uniform_S_Rain: SA_D_Uniform_S
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_DigiUrban_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_D_Soldier_RL_Rain";
		};
	};
	class SA_D_Uniform_L_Rain: SA_D_Uniform_L
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Bandit_Cloth_Grey_Rain.paa",
			"\sa_uniforms\Rain\Data\SA_Clothing_DigiUrban_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_D_Soldier_L_Rain";
		};
	};
	class SA_T_Uniform_Rain: SA_T_Uniform
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Tiger_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_T_Soldier_R_Rain";
		};
	};
	class SA_T_Uniform_S_Rain: SA_T_Uniform_S
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Tiger_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_T_Soldier_RL_Rain";
		};
	};
	class SA_T_Uniform_L_Rain: SA_T_Uniform_L
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Bandit_Cloth_Rain.paa",
			"\sa_uniforms\Rain\Data\SA_Clothing_Tiger_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_T_Soldier_L_Rain";
		};
	};
	/*class SA_T_Ghillie_Rain: SA_T_Ghillie
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Tiger_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformModel="-";
			containerClass="Supply50";
			uniformClass="SA_T_Soldier_S_Rain";
		};
	};*/
	class SA_O_Uniform_Rain: SA_O_Uniform
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_OliveDrab_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_O_Soldier_R_Rain";
		};
	};
	class SA_O_Uniform_S_Rain: SA_O_Uniform_S
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_OliveDrab_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_O_Soldier_RL_Rain";
		};
	};
	class SA_O_Uniform_L_Rain: SA_O_Uniform_L
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Bandit_Cloth_Rain.paa",
			"\sa_uniforms\Rain\Data\SA_Clothing_OliveDrab_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_O_Soldier_L_Rain";
		};
	};
	/*class SA_O_Ghillie_Rain: SA_O_Ghillie
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_OliveDrab_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformModel="-";
			containerClass="Supply50";
			uniformClass="SA_O_Soldier_S_Rain";
		};
	};*/
	class SA_B_Uniform_Rain: SA_B_Uniform
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_SABrown_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_B_Soldier_R_Rain";
		};
	};
	class SA_B_Uniform_S_Rain: SA_B_Uniform_S
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_SABrown_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_B_Soldier_RL_Rain";
		};
	};
	class SA_B_Uniform_L_Rain: SA_B_Uniform_L
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Bandit_Cloth_Tan_Rain.paa",
			"\sa_uniforms\Rain\Data\SA_Clothing_SABrown_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_B_Soldier_L_Rain";
		};
	};
	/*class SA_B_Ghillie_Rain: SA_B_Ghillie
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_SABrown_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformModel="-";
			containerClass="Supply50";
			uniformClass="SA_B_Soldier_S_Rain";
		};
	};*/
	class SA_S_Uniform_Rain: SA_S_Uniform
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Snow_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_S_Soldier_R_Rain";
		};
	};
	/*class SA_S_Ghillie_Rain: SA_S_Ghillie
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Snow_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformModel="-";
			containerClass="Supply50";
			uniformClass="SA_S_Soldier_S_Rain";
		};
	};*/
	class SA_W_Uniform_Rain: SA_W_Uniform
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Woodland_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_W_Soldier_R_Rain";
		};
	};
	class SA_W_Uniform_S_Rain: SA_W_Uniform_S
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Woodland_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_W_Soldier_RL_Rain";
		};
	};
	class SA_W_Uniform_L_Rain: SA_W_Uniform_L
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Bandit_Cloth_Rain.paa",
			"\sa_uniforms\Rain\Data\SA_Clothing_Woodland_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Data\SA_Clothing_TShirt.rvmat",
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_W_Soldier_L_Rain";
		};
	};
	/*class SA_W_Ghillie_Rain: SA_W_Ghillie
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Woodland_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformModel="-";
			containerClass="Supply50";
			uniformClass="SA_W_Soldier_S_Rain";
		};
	};*/
	class SA_Unmarked_Uniform_Rain: SA_Unmarked_Uniform
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Unmarked_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_Unmarked_Rain";
		};
	};
	class SA_Unmarked_Uniform_S_Rain: SA_Unmarked_Uniform_S
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Unmarked_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_Unmarked_S_Rain";
		};
	};
	class SA_Desert_BT_Uniform_Rain: SA_Desert_BT_Uniform
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Desert_BT_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_Desert_BT_Rain";
		};
	};
	class SA_Desert_BT_Uniform_S_Rain: SA_Desert_BT_Uniform_S
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Desert_BT_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_Desert_BT_S_Rain";
		};
	};
	class SA_F_Uniform_Rain: SA_F_Uniform
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_FleckS_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_F_Soldier_R_Rain";
		};
	};
	class SA_F_Uniform_S_Rain: SA_F_Uniform_S
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_FleckS_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_Jersey_Rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_F_Soldier_RL_Rain";
		};
	};
	class SA_GER_Uniform_Rain: SA_GER_Uniform
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_FleckS_G_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rt_indep\Data\ia_soldier_01_clothing_rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_GER_Soldier_R_Rain";
		};
	};
	class SA_GER_Uniform_S_Rain: SA_GER_Uniform_S
	{
		author="Rabid Squirrel";
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\sa_uniforms\Rain\Data\SA_Clothing_FleckS_G_Rain_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rt_indep\Data\ia_soldier_01_clothing_rain.rvmat"
		};
		class ItemInfo: UniformItem
		{
			scope=2;
			containerClass="Supply50";
			armor=10;
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformClass="SA_GER_Soldier_RL_Rain";
		};
	};
};