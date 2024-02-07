// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/Sessions/EIK_JoinSession_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_JoinSession_AsyncFunction;
class UObject;
enum class EEIKJoinResult : uint8;
struct FSessionFindStruct;
#ifdef ONLINESUBSYSTEMEIK_EIK_JoinSession_AsyncFunction_generated_h
#error "EIK_JoinSession_AsyncFunction.generated.h already included, missing '#pragma once' in EIK_JoinSession_AsyncFunction.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_JoinSession_AsyncFunction_generated_h

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_22_DELEGATE \
ONLINESUBSYSTEMEIK_API void FJoinSession_Delegate_DelegateWrapper(const FMulticastScriptDelegate& JoinSession_Delegate, EEIKJoinResult Result, const FString& SessionJoinAddress);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_29_SPARSE_DATA
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_29_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoinEIKSessions);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_29_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_JoinSession_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_JoinSession_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_JoinSession_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_JoinSession_AsyncFunction)


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_JoinSession_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_JoinSession_AsyncFunction(UEIK_JoinSession_AsyncFunction&&); \
	NO_API UEIK_JoinSession_AsyncFunction(const UEIK_JoinSession_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_JoinSession_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_JoinSession_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_JoinSession_AsyncFunction) \
	NO_API virtual ~UEIK_JoinSession_AsyncFunction();


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_26_PROLOG
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_29_SPARSE_DATA \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_29_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_29_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_29_INCLASS_NO_PURE_DECLS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_JoinSession_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_JoinSession_AsyncFunction_h


#define FOREACH_ENUM_EEIKJOINRESULT(op) \
	op(EEIKJoinResult::Success) \
	op(EEIKJoinResult::SessionIsFull) \
	op(EEIKJoinResult::SessionDoesNotExist) \
	op(EEIKJoinResult::CouldNotRetrieveAddress) \
	op(EEIKJoinResult::AlreadyInSession) \
	op(EEIKJoinResult::UnknownError) 

enum class EEIKJoinResult : uint8;
template<> struct TIsUEnumClass<EEIKJoinResult> { enum { Value = true }; };
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EEIKJoinResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
