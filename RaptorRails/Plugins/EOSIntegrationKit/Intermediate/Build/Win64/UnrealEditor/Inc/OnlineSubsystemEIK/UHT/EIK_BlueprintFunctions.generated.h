// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/Extra/EIK_BlueprintFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameModeBase;
class APlayerController;
class UObject;
class USaveGame;
enum class EEIK_LoginStatus : uint8;
enum class EEOSSanctionType : uint8;
enum class ELoginTypes : uint8;
struct FEIKUniqueNetId;
struct FSessionFindStruct;
#ifdef ONLINESUBSYSTEMEIK_EIK_BlueprintFunctions_generated_h
#error "EIK_BlueprintFunctions.generated.h already included, missing '#pragma once' in EIK_BlueprintFunctions.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_BlueprintFunctions_generated_h

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_17_DELEGATE \
ONLINESUBSYSTEMEIK_API void FOnResponseFromSanctions_DelegateWrapper(const FScriptDelegate& OnResponseFromSanctions, bool bWasSuccess);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_18_DELEGATE \
ONLINESUBSYSTEMEIK_API void FOnResponseFromEpicForAccessToken_DelegateWrapper(const FScriptDelegate& OnResponseFromEpicForAccessToken, bool bWasSuccess, const FString& AccessToken);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_40_SPARSE_DATA
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_40_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_40_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestEOSAccessToken); \
	DECLARE_FUNCTION(execMakeSanctionAppeal); \
	DECLARE_FUNCTION(execGetCurrentPort); \
	DECLARE_FUNCTION(execInitialize_EIK_For_Friends); \
	DECLARE_FUNCTION(execIsValidSession); \
	DECLARE_FUNCTION(execGetEOSSDKVersion); \
	DECLARE_FUNCTION(execGetUserUniqueID); \
	DECLARE_FUNCTION(execSaveGameObjectToByteArray); \
	DECLARE_FUNCTION(execByteArrayToSaveGameObject); \
	DECLARE_FUNCTION(execStringToByteArray); \
	DECLARE_FUNCTION(execByteArrayToString); \
	DECLARE_FUNCTION(execGetActivePlatformSubsystem); \
	DECLARE_FUNCTION(execGetActiveSubsystem); \
	DECLARE_FUNCTION(execIsEIKActive); \
	DECLARE_FUNCTION(execGenerateSessionCode); \
	DECLARE_FUNCTION(execGetLoginStatus); \
	DECLARE_FUNCTION(execGetPlayerNickname); \
	DECLARE_FUNCTION(execIsInSession); \
	DECLARE_FUNCTION(execEndSession); \
	DECLARE_FUNCTION(execUnRegisterPlayer); \
	DECLARE_FUNCTION(execRegisterPlayer); \
	DECLARE_FUNCTION(execStartSession); \
	DECLARE_FUNCTION(execShowFriendsList); \
	DECLARE_FUNCTION(execGetProductUserID); \
	DECLARE_FUNCTION(execGetEpicAccountId);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_40_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_BlueprintFunctions(); \
	friend struct Z_Construct_UClass_UEIK_BlueprintFunctions_Statics; \
public: \
	DECLARE_CLASS(UEIK_BlueprintFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_BlueprintFunctions)


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_BlueprintFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_BlueprintFunctions(UEIK_BlueprintFunctions&&); \
	NO_API UEIK_BlueprintFunctions(const UEIK_BlueprintFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_BlueprintFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_BlueprintFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_BlueprintFunctions) \
	NO_API virtual ~UEIK_BlueprintFunctions();


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_37_PROLOG
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_40_SPARSE_DATA \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_40_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_40_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_40_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_40_INCLASS_NO_PURE_DECLS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_BlueprintFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h


#define FOREACH_ENUM_EEOSSANCTIONTYPE(op) \
	op(EEOSSanctionType::IncorrectSanction) \
	op(EEOSSanctionType::CompromisedAccount) \
	op(EEOSSanctionType::UnfairPunishment) \
	op(EEOSSanctionType::AppealForForgiveness) 

enum class EEOSSanctionType : uint8;
template<> struct TIsUEnumClass<EEOSSanctionType> { enum { Value = true }; };
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EEOSSanctionType>();

#define FOREACH_ENUM_EEIK_LOGINSTATUS(op) \
	op(EEIK_LoginStatus::NotLoggedIn) \
	op(EEIK_LoginStatus::UsingLocalProfile) \
	op(EEIK_LoginStatus::LoggedIn) 

enum class EEIK_LoginStatus : uint8;
template<> struct TIsUEnumClass<EEIK_LoginStatus> { enum { Value = true }; };
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EEIK_LoginStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
