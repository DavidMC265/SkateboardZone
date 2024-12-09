// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkateboardSim/Public/Character/MainPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainPlayer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SKATEBOARDSIM_API UClass* Z_Construct_UClass_AMainPlayer();
SKATEBOARDSIM_API UClass* Z_Construct_UClass_AMainPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_SkateboardSim();
// End Cross Module References

// Begin Class AMainPlayer
void AMainPlayer::StaticRegisterNativesAMainPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainPlayer);
UClass* Z_Construct_UClass_AMainPlayer_NoRegister()
{
	return AMainPlayer::StaticClass();
}
struct Z_Construct_UClass_AMainPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/MainPlayer.h" },
		{ "ModuleRelativePath", "Public/Character/MainPlayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMainPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SkateboardSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainPlayer_Statics::ClassParams = {
	&AMainPlayer::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainPlayer()
{
	if (!Z_Registration_Info_UClass_AMainPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainPlayer.OuterSingleton, Z_Construct_UClass_AMainPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainPlayer.OuterSingleton;
}
template<> SKATEBOARDSIM_API UClass* StaticClass<AMainPlayer>()
{
	return AMainPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainPlayer);
AMainPlayer::~AMainPlayer() {}
// End Class AMainPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_Character_MainPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainPlayer, AMainPlayer::StaticClass, TEXT("AMainPlayer"), &Z_Registration_Info_UClass_AMainPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainPlayer), 3389529495U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_Character_MainPlayer_h_3237453865(TEXT("/Script/SkateboardSim"),
	Z_CompiledInDeferFile_FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_Character_MainPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dmayo_Documents_GitHub_SkateboardZone_SkateboardSim_Source_SkateboardSim_Public_Character_MainPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
