// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExceptSpaceProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef EXCEPTSPACE_ExceptSpaceProjectile_generated_h
#error "ExceptSpaceProjectile.generated.h already included, missing '#pragma once' in ExceptSpaceProjectile.h"
#endif
#define EXCEPTSPACE_ExceptSpaceProjectile_generated_h

#define FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpaceProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpaceProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExceptSpaceProjectile(); \
	friend struct Z_Construct_UClass_AExceptSpaceProjectile_Statics; \
public: \
	DECLARE_CLASS(AExceptSpaceProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ExceptSpace"), NO_API) \
	DECLARE_SERIALIZER(AExceptSpaceProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpaceProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AExceptSpaceProjectile(AExceptSpaceProjectile&&); \
	AExceptSpaceProjectile(const AExceptSpaceProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExceptSpaceProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExceptSpaceProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExceptSpaceProjectile) \
	NO_API virtual ~AExceptSpaceProjectile();


#define FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpaceProjectile_h_12_PROLOG
#define FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpaceProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpaceProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpaceProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpaceProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXCEPTSPACE_API UClass* StaticClass<class AExceptSpaceProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpaceProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
