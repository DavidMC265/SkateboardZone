// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/SkaterSimGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SKATEBOARDSIM_SkaterSimGameMode_generated_h
#error "SkaterSimGameMode.generated.h already included, missing '#pragma once' in SkaterSimGameMode.h"
#endif
#define SKATEBOARDSIM_SkaterSimGameMode_generated_h

#define FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_GameMode_SkaterSimGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnPlayer);


#define FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_GameMode_SkaterSimGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASkaterSimGameMode(); \
	friend struct Z_Construct_UClass_ASkaterSimGameMode_Statics; \
public: \
	DECLARE_CLASS(ASkaterSimGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkateboardSim"), NO_API) \
	DECLARE_SERIALIZER(ASkaterSimGameMode)


#define FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_GameMode_SkaterSimGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASkaterSimGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASkaterSimGameMode(ASkaterSimGameMode&&); \
	ASkaterSimGameMode(const ASkaterSimGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASkaterSimGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkaterSimGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASkaterSimGameMode) \
	NO_API virtual ~ASkaterSimGameMode();


#define FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_GameMode_SkaterSimGameMode_h_12_PROLOG
#define FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_GameMode_SkaterSimGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_GameMode_SkaterSimGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_GameMode_SkaterSimGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_GameMode_SkaterSimGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKATEBOARDSIM_API UClass* StaticClass<class ASkaterSimGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_GameMode_SkaterSimGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
