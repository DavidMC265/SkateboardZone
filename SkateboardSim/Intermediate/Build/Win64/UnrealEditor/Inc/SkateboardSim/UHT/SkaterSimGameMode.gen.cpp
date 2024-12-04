// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkateboardSim/Public/GameMode/SkaterSimGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkaterSimGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
SKATEBOARDSIM_API UClass* Z_Construct_UClass_ASkateBoardCharacter_NoRegister();
SKATEBOARDSIM_API UClass* Z_Construct_UClass_ASkaterSimGameMode();
SKATEBOARDSIM_API UClass* Z_Construct_UClass_ASkaterSimGameMode_NoRegister();
SKATEBOARDSIM_API UClass* Z_Construct_UClass_UMainHUDWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SkateboardSim();
// End Cross Module References

// Begin Class ASkaterSimGameMode Function SpawnPlayer
struct Z_Construct_UFunction_ASkaterSimGameMode_SpawnPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameMode/SkaterSimGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkaterSimGameMode_SpawnPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkaterSimGameMode, nullptr, "SpawnPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASkaterSimGameMode_SpawnPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASkaterSimGameMode_SpawnPlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASkaterSimGameMode_SpawnPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASkaterSimGameMode_SpawnPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASkaterSimGameMode::execSpawnPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnPlayer();
	P_NATIVE_END;
}
// End Class ASkaterSimGameMode Function SpawnPlayer

// Begin Class ASkaterSimGameMode
void ASkaterSimGameMode::StaticRegisterNativesASkaterSimGameMode()
{
	UClass* Class = ASkaterSimGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnPlayer", &ASkaterSimGameMode::execSpawnPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASkaterSimGameMode);
UClass* Z_Construct_UClass_ASkaterSimGameMode_NoRegister()
{
	return ASkaterSimGameMode::StaticClass();
}
struct Z_Construct_UClass_ASkaterSimGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/SkaterSimGameMode.h" },
		{ "ModuleRelativePath", "Public/GameMode/SkaterSimGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkateboardCharacterSubClass_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/GameMode/SkaterSimGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountDownTimerValue_MetaData[] = {
		{ "Category", "SkaterSimGameMode" },
		{ "ModuleRelativePath", "Public/GameMode/SkaterSimGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainUIWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/GameMode/SkaterSimGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRespawnDelay_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/GameMode/SkaterSimGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDefeatedWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/GameMode/SkaterSimGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerWinWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/GameMode/SkaterSimGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SkateboardCharacterSubClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CountDownTimerValue;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainUIWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerRespawnDelay;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerDefeatedWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerWinWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASkaterSimGameMode_SpawnPlayer, "SpawnPlayer" }, // 3027200465
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASkaterSimGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASkaterSimGameMode_Statics::NewProp_SkateboardCharacterSubClass = { "SkateboardCharacterSubClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkaterSimGameMode, SkateboardCharacterSubClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASkateBoardCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkateboardCharacterSubClass_MetaData), NewProp_SkateboardCharacterSubClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASkaterSimGameMode_Statics::NewProp_CountDownTimerValue = { "CountDownTimerValue", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkaterSimGameMode, CountDownTimerValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountDownTimerValue_MetaData), NewProp_CountDownTimerValue_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASkaterSimGameMode_Statics::NewProp_MainUIWidget = { "MainUIWidget", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkaterSimGameMode, MainUIWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UMainHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainUIWidget_MetaData), NewProp_MainUIWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASkaterSimGameMode_Statics::NewProp_PlayerRespawnDelay = { "PlayerRespawnDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkaterSimGameMode, PlayerRespawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRespawnDelay_MetaData), NewProp_PlayerRespawnDelay_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASkaterSimGameMode_Statics::NewProp_PlayerDefeatedWidget = { "PlayerDefeatedWidget", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkaterSimGameMode, PlayerDefeatedWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerDefeatedWidget_MetaData), NewProp_PlayerDefeatedWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASkaterSimGameMode_Statics::NewProp_PlayerWinWidget = { "PlayerWinWidget", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkaterSimGameMode, PlayerWinWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerWinWidget_MetaData), NewProp_PlayerWinWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASkaterSimGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkaterSimGameMode_Statics::NewProp_SkateboardCharacterSubClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkaterSimGameMode_Statics::NewProp_CountDownTimerValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkaterSimGameMode_Statics::NewProp_MainUIWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkaterSimGameMode_Statics::NewProp_PlayerRespawnDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkaterSimGameMode_Statics::NewProp_PlayerDefeatedWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkaterSimGameMode_Statics::NewProp_PlayerWinWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASkaterSimGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASkaterSimGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_SkateboardSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASkaterSimGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASkaterSimGameMode_Statics::ClassParams = {
	&ASkaterSimGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASkaterSimGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASkaterSimGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASkaterSimGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASkaterSimGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASkaterSimGameMode()
{
	if (!Z_Registration_Info_UClass_ASkaterSimGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASkaterSimGameMode.OuterSingleton, Z_Construct_UClass_ASkaterSimGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASkaterSimGameMode.OuterSingleton;
}
template<> SKATEBOARDSIM_API UClass* StaticClass<ASkaterSimGameMode>()
{
	return ASkaterSimGameMode::StaticClass();
}
ASkaterSimGameMode::ASkaterSimGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASkaterSimGameMode);
ASkaterSimGameMode::~ASkaterSimGameMode() {}
// End Class ASkaterSimGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_SkateboardSim_Source_SkateboardSim_Public_GameMode_SkaterSimGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASkaterSimGameMode, ASkaterSimGameMode::StaticClass, TEXT("ASkaterSimGameMode"), &Z_Registration_Info_UClass_ASkaterSimGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASkaterSimGameMode), 262106753U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SkateboardSim_Source_SkateboardSim_Public_GameMode_SkaterSimGameMode_h_4192684254(TEXT("/Script/SkateboardSim"),
	Z_CompiledInDeferFile_FID_SkateboardSim_Source_SkateboardSim_Public_GameMode_SkaterSimGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SkateboardSim_Source_SkateboardSim_Public_GameMode_SkaterSimGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
