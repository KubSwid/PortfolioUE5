// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExceptSpacePickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AExceptSpaceCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef EXCEPTSPACE_ExceptSpacePickUpComponent_generated_h
#error "ExceptSpacePickUpComponent.generated.h already included, missing '#pragma once' in ExceptSpacePickUpComponent.h"
#endif
#define EXCEPTSPACE_ExceptSpacePickUpComponent_generated_h

#define FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpacePickUpComponent_h_12_DELEGATE \
EXCEPTSPACE_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AExceptSpaceCharacter* PickUpCharacter);


#define FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpacePickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpacePickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExceptSpacePickUpComponent(); \
	friend struct Z_Construct_UClass_UExceptSpacePickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UExceptSpacePickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ExceptSpace"), NO_API) \
	DECLARE_SERIALIZER(UExceptSpacePickUpComponent)


#define FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpacePickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UExceptSpacePickUpComponent(UExceptSpacePickUpComponent&&); \
	UExceptSpacePickUpComponent(const UExceptSpacePickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExceptSpacePickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExceptSpacePickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UExceptSpacePickUpComponent) \
	NO_API virtual ~UExceptSpacePickUpComponent();


#define FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpacePickUpComponent_h_14_PROLOG
#define FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpacePickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpacePickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpacePickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpacePickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXCEPTSPACE_API UClass* StaticClass<class UExceptSpacePickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swide_Documents_UnrealProjects_PortfolioUE5_ExceptSpace_Source_ExceptSpace_ExceptSpacePickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
