// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FEIKAttribute;
class UEIK_CreateLobby_AsyncFunction;
struct FCreateLobbySettings;
#ifdef ONLINESUBSYSTEMEIK_EIK_CreateLobby_AsyncFunction_generated_h
#error "EIK_CreateLobby_AsyncFunction.generated.h already included, missing '#pragma once' in EIK_CreateLobby_AsyncFunction.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_CreateLobby_AsyncFunction_generated_h

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCreateLobbySettings_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FCreateLobbySettings>();

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_57_DELEGATE \
ONLINESUBSYSTEMEIK_API void FCreateLobby_Delegate_DelegateWrapper(const FMulticastScriptDelegate& CreateLobby_Delegate, const FString& LobbyID);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_62_SPARSE_DATA
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_62_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_62_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateEIKLobby);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_62_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_CreateLobby_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_CreateLobby_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_CreateLobby_AsyncFunction)


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_CreateLobby_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_CreateLobby_AsyncFunction(UEIK_CreateLobby_AsyncFunction&&); \
	NO_API UEIK_CreateLobby_AsyncFunction(const UEIK_CreateLobby_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_CreateLobby_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_CreateLobby_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_CreateLobby_AsyncFunction) \
	NO_API virtual ~UEIK_CreateLobby_AsyncFunction();


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_59_PROLOG
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_62_SPARSE_DATA \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_62_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_62_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_62_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_62_INCLASS_NO_PURE_DECLS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_CreateLobby_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
