// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FEIKAttribute;
class UEIK_CreateSession_AsyncFunction;
struct FCreateSessionExtraSettings;
struct FDedicatedServerSettings;
#ifdef ONLINESUBSYSTEMEIK_EIK_CreateSession_AsyncFunction_generated_h
#error "EIK_CreateSession_AsyncFunction.generated.h already included, missing '#pragma once' in EIK_CreateSession_AsyncFunction.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_CreateSession_AsyncFunction_generated_h

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_16_DELEGATE \
ONLINESUBSYSTEMEIK_API void FCreateSession_Delegate_DelegateWrapper(const FMulticastScriptDelegate& CreateSession_Delegate, const FString& SessionID);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDedicatedServerSettings_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FDedicatedServerSettings>();

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCreateSessionExtraSettings_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FCreateSessionExtraSettings>();

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_61_SPARSE_DATA
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_61_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_61_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateEIKSession);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_61_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_CreateSession_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_CreateSession_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_CreateSession_AsyncFunction)


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_CreateSession_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_CreateSession_AsyncFunction(UEIK_CreateSession_AsyncFunction&&); \
	NO_API UEIK_CreateSession_AsyncFunction(const UEIK_CreateSession_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_CreateSession_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_CreateSession_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_CreateSession_AsyncFunction) \
	NO_API virtual ~UEIK_CreateSession_AsyncFunction();


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_58_PROLOG
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_61_SPARSE_DATA \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_61_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_61_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_61_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_61_INCLASS_NO_PURE_DECLS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_CreateSession_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
