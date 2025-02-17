// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExceptSpace/ExceptSpaceGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExceptSpaceGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
EXCEPTSPACE_API UClass* Z_Construct_UClass_AExceptSpaceGameMode();
EXCEPTSPACE_API UClass* Z_Construct_UClass_AExceptSpaceGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ExceptSpace();
// End Cross Module References

// Begin Class AExceptSpaceGameMode
void AExceptSpaceGameMode::StaticRegisterNativesAExceptSpaceGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExceptSpaceGameMode);
UClass* Z_Construct_UClass_AExceptSpaceGameMode_NoRegister()
{
	return AExceptSpaceGameMode::StaticClass();
}
struct Z_Construct_UClass_AExceptSpaceGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ExceptSpaceGameMode.h" },
		{ "ModuleRelativePath", "ExceptSpaceGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExceptSpaceGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AExceptSpaceGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ExceptSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExceptSpaceGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AExceptSpaceGameMode_Statics::ClassParams = {
	&AExceptSpaceGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExceptSpaceGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AExceptSpaceGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AExceptSpaceGameMode()
{
	if (!Z_Registration_Info_UClass_AExceptSpaceGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExceptSpaceGameMode.OuterSingleton, Z_Construct_UClass_AExceptSpaceGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AExceptSpaceGameMode.OuterSingleton;
}
template<> EXCEPTSPACE_API UClass* StaticClass<AExceptSpaceGameMode>()
{
	return AExceptSpaceGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AExceptSpaceGameMode);
AExceptSpaceGameMode::~AExceptSpaceGameMode() {}
// End Class AExceptSpaceGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpaceGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AExceptSpaceGameMode, AExceptSpaceGameMode::StaticClass, TEXT("AExceptSpaceGameMode"), &Z_Registration_Info_UClass_AExceptSpaceGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExceptSpaceGameMode), 3979121784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpaceGameMode_h_3174486893(TEXT("/Script/ExceptSpace"),
	Z_CompiledInDeferFile_FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpaceGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpaceGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
