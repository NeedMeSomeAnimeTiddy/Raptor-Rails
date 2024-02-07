// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/Login/EIK_Login_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_Login_AsyncFunction;
enum class ELoginTypes : uint8;
#ifdef ONLINESUBSYSTEMEIK_EIK_Login_AsyncFunction_generated_h
#error "EIK_Login_AsyncFunction.generated.h already included, missing '#pragma once' in EIK_Login_AsyncFunction.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Login_AsyncFunction_generated_h

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_26_DELEGATE \
ONLINESUBSYSTEMEIK_API void FResponsDelegate_DelegateWrapper(const FMulticastScriptDelegate& ResponsDelegate, const FString& ProductUserID, const FString& Error);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_31_SPARSE_DATA
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoginUsingEIK);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_31_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Login_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_Login_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Login_AsyncFunction)


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Login_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_Login_AsyncFunction(UEIK_Login_AsyncFunction&&); \
	NO_API UEIK_Login_AsyncFunction(const UEIK_Login_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Login_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Login_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Login_AsyncFunction) \
	NO_API virtual ~UEIK_Login_AsyncFunction();


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_28_PROLOG
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_31_SPARSE_DATA \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_31_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_31_INCLASS_NO_PURE_DECLS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Login_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h


#define FOREACH_ENUM_ELOGINTYPES(op) \
	op(ELoginTypes::AccountPortal) \
	op(ELoginTypes::PersistentAuth) \
	op(ELoginTypes::EpicLauncher) \
	op(ELoginTypes::DeviceID) \
	op(ELoginTypes::Google) \
	op(ELoginTypes::Steam) \
	op(ELoginTypes::Apple) \
	op(ELoginTypes::Discord) \
	op(ELoginTypes::Oculus) \
	op(ELoginTypes::OpenID) \
	op(ELoginTypes::Developer) \
	op(ELoginTypes::None) 

enum class ELoginTypes : uint8;
template<> struct TIsUEnumClass<ELoginTypes> { enum { Value = true }; };
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<ELoginTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
