/*
	macros.hpp
	
	Description: 
		Macros for class creation, to make the configs neat,
		and very easy to add to. Going to try and keep this 
		file as generic as possible... so that we only make
		changes here, everywhere else just uses this macro.
		
*/

// Macro for our soldier classes
#define AddSoldierClass_Macro(path, baseClass, extension) \
	class SAEF_Soldier_##extension##: ##baseClass## \
	{ \
		author="SAEF Dev Team"; \
		scope=1; \
		side=2; \
		faction="SA_PMC"; \
		vehicleClass="SA_PMC"; \
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01"; \
		uniformClass=SAEF_Uniform_##extension##; \
		hiddenSelections[]= \
		{ \
			"camo", \
			"insignia" \
		}; \
		hiddenSelectionsTextures[]= \
		{ \
			##path##\Uniforms\Data\SAEF_Clothing_##extension##_co.paa \
		}; \
	}; \
	\
	class SAEF_Soldier_##extension##_RS: ##baseClass## \
	{ \
		author="SAEF Dev Team"; \
		scope=1; \
		side=2; \
		faction="SA_PMC"; \
		vehicleClass="SA_PMC"; \
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02"; \
		uniformClass=SAEF_Uniform_##extension##_RS; \
		hiddenSelections[]= \
		{ \
			"camo", \
			"insignia" \
		}; \
		hiddenSelectionsTextures[]= \
		{ \
			##path##\Uniforms\Data\SAEF_Clothing_##extension##_co.paa \
		}; \
	}; 

// Macro for our uniform classes
#define AddUniformClass_Macro(path, baseClass, extension, name, sName) \
	class SAEF_Uniform_##extension##: ##baseClass## \
	{ \
		author="SAEF Dev Team"; \
		scope=2; \
		scopeArsenal=2; \
		displayName=##name##; \
		picture=##path##\Uniforms\data\ui\saef_uniform_##extension##_ca.paa; \
		hiddenSelections[]= \
		{ \
			"camo" \
		}; \
		hiddenSelectionsTextures[]= \
		{ \
			##path##\Uniforms\Data\SAEF_Clothing_##extension##_co.paa \
		}; \
		class ItemInfo: UniformItem \
		{ \
			uniformModel="\A3\Characters_F_Beta\INDEP\ia_soldier_01"; \
			uniformClass=SAEF_Soldier_##extension##; \
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
	class SAEF_Uniform_##extension##_RS: ##baseClass##_RS \
	{ \
		author="SAEF Dev Team"; \
		scope=2; \
		scopeArsenal=2; \
		displayName=##sName##; \
		picture=##path##\Uniforms\data\ui\saef_uniform_##extension##_ca.paa; \
		hiddenSelections[]= \
		{ \
			"camo" \
		}; \
		hiddenSelectionsTextures[]= \
		{ \
			##path##\Uniforms\Data\SAEF_Clothing_##extension##_co.paa \
		}; \
		class ItemInfo: UniformItem \
		{ \
			uniformModel="\A3\Characters_F_Beta\INDEP\ia_soldier_02"; \
			uniformClass=SAEF_Soldier_##extension##_RS; \
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
#define AddVestClass_Macro(path, baseClass, extension, name, sName) \
	class SAEF_PlateCarrier_##extension##_1: ##baseClass##_1 \
	{ \
		author="SAEF Dev Team"; \
		scope=2; \
		scopeArsenal=2; \
		displayName=##name##; \
		picture=##path##\Vests\data\ui\saef_vest_##extension##_ca.paa; \
		hiddenSelectionsTextures[]= \
		{ \
			##path##\Vests\Data\SAEF_PlateCarrier_##extension##_co.paa \
		}; \
	}; \
	\
	class SAEF_PlateCarrier_##extension##_2: ##baseClass##_2 \
	{ \
		author="SAEF Dev Team"; \
		scope=2; \
		scopeArsenal=2; \
		displayName=##sName##; \
		picture=##path##\Vests\data\ui\saef_vest_##extension##_ca.paa; \
		hiddenSelectionsTextures[]= \
		{ \
			##path##\Vests\Data\SAEF_PlateCarrier_##extension##_co.paa \
		}; \
	}; \

// Helmet Macro
#define AddHelmetClass_Macro(path, baseClass1, baseClass2, baseClass3, extension, name, sName, cName) \
	class SAEF_ECH_Light_##extension##: ##baseClass1## \
	{ \
		author="SAEF Dev Team"; \
		scope=2; \
		scopeArsenal=2; \
		displayName=##name##; \
		picture=##path##\Helmets\data\ui\saef_ech_light_##extension##_ca.paa; \
		hiddenSelectionsTextures[]= \
		{ \
			##path##\Helmets\Data\SAEF_ECH_##extension##_co.paa \
		}; \
	}; \
	\
	class SAEF_ECH_Spec_##extension##: ##baseClass2## \
	{ \
		author="SAEF Dev Team"; \
		scope=2; \
		scopeArsenal=2; \
		displayName=##sName##; \
		picture=##path##\Helmets\data\ui\saef_ech_##extension##_ca.paa; \
		hiddenSelectionsTextures[]= \
		{ \
			##path##\Helmets\Data\SAEF_ECH_##extension##_co.paa \
		}; \
	}; \
	\
	class SAEF_ECH_Camo_##extension##: ##baseClass3## \
	{ \
		author="SAEF Dev Team"; \
		scope=2; \
		scopeArsenal=2; \
		displayName=##cName##; \
		picture=##path##\Helmets\data\ui\saef_ech_camo_##extension##_ca.paa; \
		hiddenSelectionsTextures[]= \
		{ \
			##path##\Helmets\Data\SAEF_ECH_##extension##_co.paa \
			,"\A3\characters_f\common\data\ghillie2_co.paa" \
		}; \
	};

// Backpack Macro
#define AddBackpackClass_Macro(path, baseClass1, baseClass2, baseClass3, baseClass4, extension, name, sName, cName, bName) \
	class SAEF_Backpack_##extension##: ##baseClass1## \
	{ \
		author="SAEF Dev Team"; \
		scope=2; \
		scopeArsenal=2; \
		displayName=##name##; \
		picture=##path##\Backpacks\data\ui\saef_backpack_##extension##_ca.paa; \
		hiddenSelectionsTextures[]= \
		{ \
			##path##\Backpacks\Data\SAEF_Backpack_##extension##_co.paa \
		}; \
	}; \
	\
	class SAEF_Kitbag_##extension##: ##baseClass2## \
	{ \
		author="SAEF Dev Team"; \
		scope=2; \
		scopeArsenal=2; \
		displayName=##sName##; \
		picture=##path##\Backpacks\data\ui\saef_kitbag_##extension##_ca.paa; \
		hiddenSelectionsTextures[]= \
		{ \
			##path##\Backpacks\Data\SAEF_Kitbag_##extension##_co.paa \
		}; \
	}; \
	\
	class SAEF_Carryall_##extension##: ##baseClass3## \
	{ \
		author="SAEF Dev Team"; \
		scope=2; \
		scopeArsenal=2; \
		displayName=##cName##; \
		picture=##path##\Backpacks\data\ui\saef_carryall_##extension##_ca.paa; \
		hiddenSelectionsTextures[]= \
		{ \
			##path##\Backpacks\Data\SAEF_Carryall_##extension##_co.paa \
		}; \
	}; \
	\
	class SAEF_Bergen_##extension##: ##baseClass4## \
	{ \
		author="SAEF Dev Team"; \
		scope=2; \
		scopeArsenal=2; \
		displayName=##bName##; \
		picture=##path##\Backpacks\data\ui\saef_bergen_##extension##_ca.paa; \
		hiddenSelectionsTextures[]= \
		{ \
			##path##\Backpacks\Data\SAEF_Bergen_##extension##_co.paa \
		}; \
	};
