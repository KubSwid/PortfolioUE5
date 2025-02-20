// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExceptSpace/MazeManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
EXCEPTSPACE_API UClass* Z_Construct_UClass_AMazeManager();
EXCEPTSPACE_API UClass* Z_Construct_UClass_AMazeManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ExceptSpace();
// End Cross Module References

// Begin Class AMazeManager
void AMazeManager::StaticRegisterNativesAMazeManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMazeManager);
UClass* Z_Construct_UClass_AMazeManager_NoRegister()
{
	return AMazeManager::StaticClass();
}
struct Z_Construct_UClass_AMazeManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MazeManager.h" },
		{ "ModuleRelativePath", "MazeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MazeWidth_MetaData[] = {
		{ "Category", "Maze Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Parametry labiryntu\n" },
#endif
		{ "ModuleRelativePath", "MazeManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parametry labiryntu" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MazeHeight_MetaData[] = {
		{ "Category", "Maze Settings" },
		{ "ModuleRelativePath", "MazeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "Maze Settings" },
		{ "ModuleRelativePath", "MazeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallPrefab_MetaData[] = {
		{ "Category", "Maze Prefabs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Prefaby u\xef\xbf\xbdywane do wizualizacji\n" },
#endif
		{ "ModuleRelativePath", "MazeManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prefaby u\xef\xbf\xbdywane do wizualizacji" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorPrefab_MetaData[] = {
		{ "Category", "Maze Prefabs" },
		{ "ModuleRelativePath", "MazeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MazeWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MazeHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WallPrefab;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FloorPrefab;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeManager_Statics::NewProp_MazeWidth = { "MazeWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeManager, MazeWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MazeWidth_MetaData), NewProp_MazeWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeManager_Statics::NewProp_MazeHeight = { "MazeHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeManager, MazeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MazeHeight_MetaData), NewProp_MazeHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMazeManager_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeManager, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMazeManager_Statics::NewProp_WallPrefab = { "WallPrefab", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeManager, WallPrefab), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallPrefab_MetaData), NewProp_WallPrefab_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMazeManager_Statics::NewProp_FloorPrefab = { "FloorPrefab", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeManager, FloorPrefab), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorPrefab_MetaData), NewProp_FloorPrefab_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMazeManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeManager_Statics::NewProp_MazeWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeManager_Statics::NewProp_MazeHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeManager_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeManager_Statics::NewProp_WallPrefab,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeManager_Statics::NewProp_FloorPrefab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMazeManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ExceptSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMazeManager_Statics::ClassParams = {
	&AMazeManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMazeManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMazeManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AMazeManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMazeManager()
{
	if (!Z_Registration_Info_UClass_AMazeManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMazeManager.OuterSingleton, Z_Construct_UClass_AMazeManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMazeManager.OuterSingleton;
}
template<> EXCEPTSPACE_API UClass* StaticClass<AMazeManager>()
{
	return AMazeManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeManager);
AMazeManager::~AMazeManager() {}
// End Class AMazeManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_MazeManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMazeManager, AMazeManager::StaticClass, TEXT("AMazeManager"), &Z_Registration_Info_UClass_AMazeManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMazeManager), 3417924179U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_MazeManager_h_2656807991(TEXT("/Script/ExceptSpace"),
	Z_CompiledInDeferFile_FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_MazeManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_MazeManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
