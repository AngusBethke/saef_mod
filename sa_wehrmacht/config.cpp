class CfgPatches
{
	class SA_WM_Gear
	{
		author="Rabid Squirrel";
		addonRootClass="SA_PMC";
		requiredAddons[]=
		{
			"SA_PMC_UNIFORMS",
			"SA_PMC_VESTS",
			"SA_PMC_HEADGEAR",
			"SA_PMC_BACKPACKS",
			"A3_Characters_F",
			"A3_Characters_F_Beta",
			"A3_Characters_F_Gamma"
		};
		requiredVersion=0.1;
		units[]=
		{
			// Full Sleeve SFD
			"SAEF_WM_Soldier_SFD",
			"SAEF_WM_Soldier_SFD_SFW_T",
			"SAEF_WM_Soldier_SFD_SND_B",
			"SAEF_WM_Soldier_SFD_SND_T",
			
			// Rolled Sleeve SFD
			"SAEF_WM_Soldier_SFD_RS",
			"SAEF_WM_Soldier_SFD_SFW_T_RS",
			"SAEF_WM_Soldier_SFD_SND_B_RS",
			"SAEF_WM_Soldier_SFD_SND_T_RS",
			
			// Full Sleeve SFW
			"SAEF_WM_Soldier_SFW",
			"SAEF_WM_Soldier_SFW_ODR_B",
			"SAEF_WM_Soldier_SFW_ODR_T",
			"SAEF_WM_Soldier_SFW_SFD_T",
			
			// Rolled Sleeve SFW
			"SAEF_WM_Soldier_SFW_RS",
			"SAEF_WM_Soldier_SFW_ODR_B_RS",
			"SAEF_WM_Soldier_SFW_ODR_T_RS",
			"SAEF_WM_Soldier_SFW_SFD_T_RS",
			
			// Backpacks 
			"SAEF_Backpack_SFD_U",
			"SAEF_Backpack_Fast_SFD_U",
			"SAEF_Backpack_SND_U",
			"SAEF_Backpack_Fast_SND_U",
			"SAEF_Bergen_SFD_U",
			"SAEF_Bergen_SND_U",
			"SAEF_Bergen_SFW_U",
			"SAEF_Bergen_KHK_U"
		};
		weapons[]=
		{
			// Full Sleeve SFD
			"SAEF_WM_Uniform_SFD",
			"SAEF_WM_Uniform_SFD_SFW_T",
			"SAEF_WM_Uniform_SFD_SND_B",
			"SAEF_WM_Uniform_SFD_SND_T",
			
			// Rolled Sleeve SFD
			"SAEF_WM_Uniform_SFD_RS",
			"SAEF_WM_Uniform_SFD_SFW_T_RS",
			"SAEF_WM_Uniform_SFD_SND_B_RS",
			"SAEF_WM_Uniform_SFD_SND_T_RS",
			
			// Full Sleeve SFW
			"SAEF_WM_Uniform_SFW",
			"SAEF_WM_Uniform_SFW_ODR_B",
			"SAEF_WM_Uniform_SFW_ODR_T",
			"SAEF_WM_Uniform_SFW_SFD_T",
			
			// Rolled Sleeve SFW
			"SAEF_WM_Uniform_SFW_RS",
			"SAEF_WM_Uniform_SFW_ODR_B_RS",
			"SAEF_WM_Uniform_SFW_ODR_T_RS",
			"SAEF_WM_Uniform_SFW_SFD_T_RS",
			
			// Vests
			"SAEF_PlateCarrier_SFD_U1",
			"SAEF_PlateCarrier_SFD_U2",
			"SAEF_PlateCarrier_SND_U1",
			"SAEF_PlateCarrier_SND_U2",
			
			// Helmets 
			"SAEF_ECH_Light_SFD_U",
			"SAEF_ECH_SFD_U",
			"SAEF_ECH_Light_SND_U",
			"SAEF_ECH_SND_U"
		};
	};
};

// Macro for our soldier classes
#define AddSoldierClass_Macro(baseClass, extension) \
	class SAEF_WM_Soldier_##extension##: ##baseClass## \
	{ \
		author="Rabid Squirrel"; \
		scope=1; \
		side=2; \
		faction="SA_PMC"; \
		vehicleClass="SA_PMC"; \
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01"; \
		uniformClass=SAEF_WM_Uniform_##extension##; \
		hiddenSelections[]= \
		{ \
			"camo", \
			"insignia" \
		}; \
		hiddenSelectionsTextures[]= \
		{ \
			sa_wehrmacht\Uniforms\Data\SAEF_WM_Clothing_##extension##_co.paa \
		}; \
	}; \
	\
	class SAEF_WM_Soldier_##extension##_RS: ##baseClass## \
	{ \
		author="Rabid Squirrel"; \
		scope=1; \
		side=2; \
		faction="SA_PMC"; \
		vehicleClass="SA_PMC"; \
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02"; \
		uniformClass=SAEF_WM_Uniform_##extension##_RS; \
		hiddenSelections[]= \
		{ \
			"camo", \
			"insignia" \
		}; \
		hiddenSelectionsTextures[]= \
		{ \
			sa_wehrmacht\Uniforms\Data\SAEF_WM_Clothing_##extension##_co.paa \
		}; \
	};

// Macro for our uniform classes
#define AddUniformClass_Macro(baseClass, extension, name, sName) \
	class SAEF_WM_Uniform_##extension##: ##baseClass## \
	{ \
		author="Rabid Squirrel"; \
		displayName=##name##; \
		picture="\sa_uniforms\data\ui\saef_uniform_autumn_ca.paa"; \
		hiddenSelections[]= \
		{ \
			"camo" \
		}; \
		hiddenSelectionsTextures[]= \
		{ \
			sa_wehrmacht\Uniforms\Data\SAEF_WM_Clothing_##extension##_co.paa \
		}; \
		class ItemInfo: UniformItem \
		{ \
			uniformModel="\A3\Characters_F_Beta\INDEP\ia_soldier_01"; \
			uniformClass=SAEF_WM_Soldier_##extension##; \
			scope=2; \
			containerClass="Supply50"; \
			armor=10; \
			mass=80; \
			hiddenSelections[]= \
			{ \
				"camo", \
				"insignia" \
			}; \
		}; \
	}; \
	\
	class SAEF_WM_Uniform_##extension##_RS: ##baseClass##_S \
	{ \
		author="Rabid Squirrel"; \
		displayName=##sName##; \
		picture="\sa_uniforms\data\ui\saef_uniform_autumn_ca.paa"; \
		hiddenSelections[]= \
		{ \
			"camo" \
		}; \
		hiddenSelectionsTextures[]= \
		{ \
			sa_wehrmacht\Uniforms\Data\SAEF_WM_Clothing_##extension##_co.paa \
		}; \
		class ItemInfo: UniformItem \
		{ \
			uniformModel="\A3\Characters_F_Beta\INDEP\ia_soldier_02"; \
			uniformClass=SAEF_WM_Soldier_##extension##_RS; \
			scope=2; \
			containerClass="Supply50"; \
			armor=10; \
			mass=80; \
			hiddenSelections[]= \
			{ \
				"camo", \
				"insignia" \
			}; \
		}; \
	};
	
// Vest Macro
#define AddVestClass_Macro(baseClass, extension, name, sName) \
	class SAEF_PlateCarrier_##extension##1: ##baseClass##1 \
	{ \
		author="Rabid Squirrel"; \
		displayName=##name##; \
		picture="\sa_vests\data\ui\saef_vest_autumn_ca.paa"; \
		hiddenSelectionsTextures[]= \
		{ \
			sa_wehrmacht\Vests\Data\SAEF_PlateCarrier_##extension##_co.paa \
		}; \
	}; \
	\
	class SAEF_PlateCarrier_##extension##2: ##baseClass##2 \
	{ \
		author="Rabid Squirrel"; \
		displayName=##sName##; \
		picture="\sa_vests\data\ui\saef_vest_autumn_ca.paa"; \
		hiddenSelectionsTextures[]= \
		{ \
			sa_wehrmacht\Vests\Data\SAEF_PlateCarrier_##extension##_co.paa \
		}; \
	}; \

// Helmet Macro
#define AddHelmetClass_Macro(baseClass1, baseClass2, extension, name, sName, cName) \
	class SAEF_ECH_Light_##extension##: ##baseClass1## \
	{ \
		author="Rabid Squirrel"; \
		displayName=##name##; \
		hiddenSelectionsTextures[]= \
		{ \
			sa_wehrmacht\Helmets\Data\SAEF_ECH_##extension##_co.paa \
		}; \
	}; \
	\
	class SAEF_ECH_##extension##: ##baseClass2## \
	{ \
		author="Rabid Squirrel"; \
		displayName=##sName##; \
		hiddenSelectionsTextures[]= \
		{ \
			sa_wehrmacht\Helmets\Data\SAEF_ECH_##extension##_co.paa \
		}; \
	}; \
	\
	class SAEF_ECH_Camo_##extension##: H_HelmetB_camo \
	{ \
		author="Rabid Squirrel"; \
		displayName=##cName##; \
		hiddenSelectionsTextures[]= \
		{ \
			sa_wehrmacht\Helmets\Data\SAEF_ECH_##extension##_co.paa \
			,"\A3\characters_f\common\data\ghillie2_co.paa" \
		}; \
	};

// Backpack Macro
#define AddBackpackClass_Macro(baseClass1, baseClass2, extension, name, sName) \
	class SAEF_Backpack_##extension##: ##baseClass1## \
	{ \
		author="Rabid Squirrel"; \
		scope=2; \
		displayName=##name##; \
		picture="\sa_backpacks\data\ui\saef_backpack_ap_autumn_ca.paa"; \
		hiddenSelectionsTextures[]= \
		{ \
			sa_wehrmacht\Backpacks\Data\SAEF_Backpack_##extension##_co.paa \
		}; \
	}; \
	\
	class SAEF_Backpack_Fast_##extension##: ##baseClass2## \
	{ \
		author="Rabid Squirrel"; \
		scope=2; \
		displayName=##sName##; \
		picture="\sa_backpacks\data\ui\saef_backpack_kitbag_olive_ca.paa"; \
		hiddenSelectionsTextures[]= \
		{ \
			sa_wehrmacht\Backpacks\Data\SAEF_Backpack_Fast_##extension##_co.paa \
		}; \
	}; 
	
// Bergen Macro
#define AddBergenClass_Macro(extension, name) \
	class SAEF_Bergen_##extension##: B_Bergen_Base_F \
	{ \
		author="Rabid Squirrel"; \
		scope=2; \
		displayName=##name##; \
		picture="\A3\Supplies_F_Exp\Bags\Data\UI\Icon_B_Bergen_digi_CA.paa"; \
		hiddenSelectionsTextures[]= \
		{ \
			sa_wehrmacht\Backpacks\Data\SAEF_Bergen_##extension##_co.paa \
		}; \
	};

class CfgVehicles
{
	// Delcare Base Classes
	class I_Soldier_base_F;
	
	// Macro to run vehicle class creation
	AddSoldierClass_Macro(I_Soldier_base_F,SFD)
	AddSoldierClass_Macro(I_Soldier_base_F,SFD_SFW_T)
	AddSoldierClass_Macro(I_Soldier_base_F,SFD_SND_B)
	AddSoldierClass_Macro(I_Soldier_base_F,SFD_SND_T)
	
	AddSoldierClass_Macro(I_Soldier_base_F,SFW)
	AddSoldierClass_Macro(I_Soldier_base_F,SFW_ODR_B)
	AddSoldierClass_Macro(I_Soldier_base_F,SFW_ODR_T)
	AddSoldierClass_Macro(I_Soldier_base_F,SFW_SFD_T)
	
	// Declare Backpack Base Classes 
	class SA_Backpack_Autumn;
	class SA_Backpack_Fast_Black;
	class B_Bergen_Base_F;
	
	// Macro to add our backpack classes
	AddBackpackClass_Macro(SA_Backpack_Autumn,SA_Backpack_Fast_Black,SFD_U,"Assault Pack (RS-Flecktarn (DST))","Kitbag (RS-Flecktarn (DST))")
	AddBackpackClass_Macro(SA_Backpack_Autumn,SA_Backpack_Fast_Black,SND_U,"Assault Pack (SND)","Kitbag (SND)")
	
	AddBergenClass_Macro(SFD_U,"Bergen (RS-Flecktarn (DST))")
	AddBergenClass_Macro(SND_U,"Bergen (SND)")
	AddBergenClass_Macro(SFW_U,"Bergen (RS-Flecktarn (WDL))")
	AddBergenClass_Macro(KHK_U,"Bergen (KHK)")
};

class CfgWeapons
{
	// Delcare uniform base classes
	class Uniform_Base;
	class UniformItem;
	class SA_Uniform;
	class SA_Uniform_S;
	
	// Macro to run uniform class creation
	AddUniformClass_Macro(SA_Uniform,SFD,"Fatigues RS-Flecktarn (DST)","Fatigues RS-Flecktarn (DST) SS")
	AddUniformClass_Macro(SA_Uniform,SFD_SFW_T,"Fatigues RS-Flecktarn (DST-WT)","Fatigues RS-Flecktarn (DST-WT) SS")
	AddUniformClass_Macro(SA_Uniform,SFD_SND_B,"Fatigues RS-Flecktarn (DST-SB)","Fatigues RS-Flecktarn (DST-SB) SS")
	AddUniformClass_Macro(SA_Uniform,SFD_SND_T,"Fatigues RS-Flecktarn (DST-ST)","Fatigues RS-Flecktarn (DST-ST) SS")
	
	AddUniformClass_Macro(SA_Uniform,SFW,"Fatigues RS-Flecktarn (WDL)","Fatigues RS-Flecktarn (WDL) SS")
	AddUniformClass_Macro(SA_Uniform,SFW_ODR_B,"Fatigues RS-Flecktarn (WDL-OB)","Fatigues RS-Flecktarn (WDL-OB) SS")
	AddUniformClass_Macro(SA_Uniform,SFW_ODR_T,"Fatigues RS-Flecktarn (WDL-OT)","Fatigues RS-Flecktarn (WDL-OT) SS")
	AddUniformClass_Macro(SA_Uniform,SFW_SFD_T,"Fatigues RS-Flecktarn (WDL-DT)","Fatigues RS-Flecktarn (WDL-DT) SS")
	
	// Declare vest base classes
	class SA_PlateCarrier_BA1;
	class SA_PlateCarrier_BA2;
	
	// Macro to run vest class creation
	AddVestClass_Macro(SA_PlateCarrier_BA,SFD_U,"Carrier Rig (RS-Flecktarn (DST))","Carrier Rig Light (RS-Flecktarn (DST))")
	AddVestClass_Macro(SA_PlateCarrier_BA,SND_U,"Carrier Rig (SND)","Carrier Rig Light (SND)")
	
	// Declare helmet base classes
	class SA_Helmet_Black;
	class SA_HelmetSpec_Sand;
	class H_HelmetB_camo;
	
	// Macro to run helmet class creation
	AddHelmetClass_Macro(SA_Helmet_Black,SA_HelmetSpec_Sand,SFD_U,"ECH Light (RS-Flecktarn (DST))","ECH (RS-Flecktarn (DST))","ECH-G (RS-Flecktarn (DST))")
	AddHelmetClass_Macro(SA_Helmet_Black,SA_HelmetSpec_Sand,SND_U,"ECH Light (SND)","ECH (SND)","ECH-G (SND)")
};