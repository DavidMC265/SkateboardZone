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
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
SKATEBOARDSIM_API UClass* Z_Construct_UClass_ASkaterSimGameMode();
SKATEBOARDSIM_API UClass* Z_Construct_UClass_ASkaterSimGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SkateboardSim();
// End Cross Module References

// Begin Class ASkaterSimGameMode
void ASkaterSimGameMode::StaticRegisterNativesASkaterSimGameMode()
{
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/SkaterSimGameMode.h" },
		{ "ModuleRelativePath", "Public/GameMode/SkaterSimGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASkaterSimGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_ASkaterSimGameMode, ASkaterSimGameMode::StaticClass, TEXT("ASkaterSimGameMode"), &Z_Registration_Info_UClass_ASkaterSimGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASkaterSimGameMode), 2971643648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SkateboardSim_Source_SkateboardSim_Public_GameMode_SkaterSimGameMode_h_1395707915(TEXT("/Script/SkateboardSim"),
	Z_CompiledInDeferFile_FID_SkateboardSim_Source_SkateboardSim_Public_GameMode_SkaterSimGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SkateboardSim_Source_SkateboardSim_Public_GameMode_SkaterSimGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
