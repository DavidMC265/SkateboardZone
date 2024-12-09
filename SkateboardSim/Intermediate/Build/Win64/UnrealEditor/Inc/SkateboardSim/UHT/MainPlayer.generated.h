// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/MainPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SKATEBOARDSIM_MainPlayer_generated_h
#error "MainPlayer.generated.h already included, missing '#pragma once' in MainPlayer.h"
#endif
#define SKATEBOARDSIM_MainPlayer_generated_h

#define FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_Character_MainPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainPlayer(); \
	friend struct Z_Construct_UClass_AMainPlayer_Statics; \
public: \
	DECLARE_CLASS(AMainPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkateboardSim"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayer)


#define FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_Character_MainPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainPlayer(AMainPlayer&&); \
	AMainPlayer(const AMainPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainPlayer) \
	NO_API virtual ~AMainPlayer();


#define FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_Character_MainPlayer_h_9_PROLOG
#define FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_Character_MainPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_Character_MainPlayer_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_Character_MainPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKATEBOARDSIM_API UClass* StaticClass<class AMainPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_Character_MainPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
