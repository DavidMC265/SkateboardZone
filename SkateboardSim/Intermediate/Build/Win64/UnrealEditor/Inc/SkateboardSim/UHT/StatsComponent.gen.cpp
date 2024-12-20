// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkateboardSim/Public/Stats/StatsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SKATEBOARDSIM_API UClass* Z_Construct_UClass_UStatsComponent();
SKATEBOARDSIM_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SkateboardSim();
// End Cross Module References

// Begin Class UStatsComponent
void UStatsComponent::StaticRegisterNativesUStatsComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatsComponent);
UClass* Z_Construct_UClass_UStatsComponent_NoRegister()
{
	return UStatsComponent::StaticClass();
}
struct Z_Construct_UClass_UStatsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Stats/StatsComponent.h" },
		{ "ModuleRelativePath", "Public/Stats/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPointsTotal_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Stats/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaypointsCollected_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Stats/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPointsTotal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WaypointsCollected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_CurrentPointsTotal = { "CurrentPointsTotal", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, CurrentPointsTotal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPointsTotal_MetaData), NewProp_CurrentPointsTotal_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_WaypointsCollected = { "WaypointsCollected", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, WaypointsCollected), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaypointsCollected_MetaData), NewProp_WaypointsCollected_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_CurrentPointsTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_WaypointsCollected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SkateboardSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatsComponent_Statics::ClassParams = {
	&UStatsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStatsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatsComponent()
{
	if (!Z_Registration_Info_UClass_UStatsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatsComponent.OuterSingleton, Z_Construct_UClass_UStatsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatsComponent.OuterSingleton;
}
template<> SKATEBOARDSIM_API UClass* StaticClass<UStatsComponent>()
{
	return UStatsComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsComponent);
UStatsComponent::~UStatsComponent() {}
// End Class UStatsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_Stats_StatsComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatsComponent, UStatsComponent::StaticClass, TEXT("UStatsComponent"), &Z_Registration_Info_UClass_UStatsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsComponent), 2778450725U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_Stats_StatsComponent_h_1446253080(TEXT("/Script/SkateboardSim"),
	Z_CompiledInDeferFile_FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_Stats_StatsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_Stats_StatsComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
