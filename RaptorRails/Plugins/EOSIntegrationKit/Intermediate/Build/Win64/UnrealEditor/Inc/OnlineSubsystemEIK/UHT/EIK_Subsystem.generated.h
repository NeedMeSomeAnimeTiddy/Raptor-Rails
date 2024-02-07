// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystem/EIK_Subsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class USaveGame;
enum class EMatchType : uint8;
enum class ERegionInfo : uint8;
struct FBlueprintSessionResult;
struct FEIK_Stats;
struct FEIKUniqueNetId;
struct FFileListStruct;
struct FOffersStruct;
struct FSessionFindStruct;
#ifdef ONLINESUBSYSTEMEIK_EIK_Subsystem_generated_h
#error "EIK_Subsystem.generated.h already included, missing '#pragma once' in EIK_Subsystem.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Subsystem_generated_h

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIKAttribute_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIKAttribute>();

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOffersStruct_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FOffersStruct>();

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSessionFindStruct_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FSessionFindStruct>();

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFileListStruct_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FFileListStruct>();

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_219_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIKUniqueNetId_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIKUniqueNetId>();

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_293_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_Stats_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_Stats>();

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_305_DELEGATE \
ONLINESUBSYSTEMEIK_API void FBP_Login_Callback_DelegateWrapper(const FScriptDelegate& BP_Login_Callback, bool bWasSuccess, const FString& Error);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_306_DELEGATE \
ONLINESUBSYSTEMEIK_API void FBP_Logout_Callback_DelegateWrapper(const FScriptDelegate& BP_Logout_Callback, bool bWasSuccess);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_307_DELEGATE \
ONLINESUBSYSTEMEIK_API void FBP_CreateSession_Callback_DelegateWrapper(const FScriptDelegate& BP_CreateSession_Callback, bool bWasSuccess, FName const& SessionName);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_308_DELEGATE \
ONLINESUBSYSTEMEIK_API void FBP_CreateLobby_Callback_DelegateWrapper(const FScriptDelegate& BP_CreateLobby_Callback, bool bWasSuccess, FName const& SessionName);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_309_DELEGATE \
ONLINESUBSYSTEMEIK_API void FBP_DestroySession_Callback_DelegateWrapper(const FScriptDelegate& BP_DestroySession_Callback, bool bWasSuccess);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_310_DELEGATE \
ONLINESUBSYSTEMEIK_API void FBP_PurchaseOffer_Callback_DelegateWrapper(const FScriptDelegate& BP_PurchaseOffer_Callback, bool bWasSuccess);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_311_DELEGATE \
ONLINESUBSYSTEMEIK_API void FBP_JoinSession_Callback_DelegateWrapper(const FScriptDelegate& BP_JoinSession_Callback, bool bWasSuccess);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_312_DELEGATE \
ONLINESUBSYSTEMEIK_API void FBP_GetTitleFile_Callback_DelegateWrapper(const FScriptDelegate& BP_GetTitleFile_Callback, bool bWasSuccess);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_313_DELEGATE \
ONLINESUBSYSTEMEIK_API void FBP_UpdateStat_Callback_DelegateWrapper(const FScriptDelegate& BP_UpdateStat_Callback, bool bWasSuccess);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_314_DELEGATE \
ONLINESUBSYSTEMEIK_API void FBP_GetStats_Callback_DelegateWrapper(const FScriptDelegate& BP_GetStats_Callback, bool bWasSuccess, TArray<FEIK_Stats> const& Stats);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_315_DELEGATE \
ONLINESUBSYSTEMEIK_API void FBP_FindSession_Callback_DelegateWrapper(const FScriptDelegate& BP_FindSession_Callback, bool bWasSuccess, TArray<FSessionFindStruct> const& SessionResults);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_316_DELEGATE \
ONLINESUBSYSTEMEIK_API void FBP_WriteFile_Callback_DelegateWrapper(const FScriptDelegate& BP_WriteFile_Callback, bool bWasSuccess);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_317_DELEGATE \
ONLINESUBSYSTEMEIK_API void FBP_GetOffers_Callback_DelegateWrapper(const FScriptDelegate& BP_GetOffers_Callback, bool bWasSuccess, TArray<FOffersStruct> const& Offers);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_318_DELEGATE \
ONLINESUBSYSTEMEIK_API void FBP_GetOwnedItems_Callback_DelegateWrapper(const FScriptDelegate& BP_GetOwnedItems_Callback, bool bWasSuccess, TArray<FString> const& OwnedItemNames);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_319_DELEGATE \
ONLINESUBSYSTEMEIK_API void FBP_GetFile_Callback_DelegateWrapper(const FScriptDelegate& BP_GetFile_Callback, bool bWasSuccess, USaveGame* SaveGame);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_320_DELEGATE \
ONLINESUBSYSTEMEIK_API void FBP_ConnectEOSAndPlayFab_Callback_DelegateWrapper(const FScriptDelegate& BP_ConnectEOSAndPlayFab_Callback, bool bWasSuccess, const FString& Error);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_321_DELEGATE \
ONLINESUBSYSTEMEIK_API void FBP_TitleFileList_Callback_DelegateWrapper(const FScriptDelegate& BP_TitleFileList_Callback, bool bWasSuccess, const FString& Error);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_322_DELEGATE \
ONLINESUBSYSTEMEIK_API void FBP_HostMigration_Callback_DelegateWrapper(const FScriptDelegate& BP_HostMigration_Callback, bool bLocalHost, const FString& PromotedMember, const FString& JoinAddress);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_328_SPARSE_DATA
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_328_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_328_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_328_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHostMigrated); \
	DECLARE_FUNCTION(execGenerateSessionCode); \
	DECLARE_FUNCTION(execGetOwnedItems); \
	DECLARE_FUNCTION(execQueryOffers); \
	DECLARE_FUNCTION(execPurchaseItem); \
	DECLARE_FUNCTION(execConnectEosAndPlayFab); \
	DECLARE_FUNCTION(execGetLeaderboard); \
	DECLARE_FUNCTION(execGetTitleFileContent); \
	DECLARE_FUNCTION(execGetTitleFile); \
	DECLARE_FUNCTION(execGetTitleFileList); \
	DECLARE_FUNCTION(execEnumerateTitleFiles); \
	DECLARE_FUNCTION(execGetPlayerData); \
	DECLARE_FUNCTION(execSetPlayerData); \
	DECLARE_FUNCTION(execGetStats); \
	DECLARE_FUNCTION(execUpdateStats); \
	DECLARE_FUNCTION(execShowFriendUserInterface); \
	DECLARE_FUNCTION(execEndSession); \
	DECLARE_FUNCTION(execStartSession); \
	DECLARE_FUNCTION(execRegisterPlayer); \
	DECLARE_FUNCTION(execUnRegisterPlayer); \
	DECLARE_FUNCTION(execGetEpicID); \
	DECLARE_FUNCTION(execGetProductUserID); \
	DECLARE_FUNCTION(execGetUserUniqueID); \
	DECLARE_FUNCTION(execJoinEosSession); \
	DECLARE_FUNCTION(execDestroyEosSession); \
	DECLARE_FUNCTION(execFindEOSSession); \
	DECLARE_FUNCTION(execCreateEOSLobby); \
	DECLARE_FUNCTION(execCreateEOSSession); \
	DECLARE_FUNCTION(execGetLoginStatus); \
	DECLARE_FUNCTION(execGetPlayerNickname); \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execLoginWithEpicLauncher); \
	DECLARE_FUNCTION(execLoginWithDeveloperTool); \
	DECLARE_FUNCTION(execLoginWithPersistantAuth); \
	DECLARE_FUNCTION(execLoginWithSteam); \
	DECLARE_FUNCTION(execLoginWithAccountPortal); \
	DECLARE_FUNCTION(execLoginWithDeviceID); \
	DECLARE_FUNCTION(execInitializeEIK);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_328_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_328_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Subsystem(); \
	friend struct Z_Construct_UClass_UEIK_Subsystem_Statics; \
public: \
	DECLARE_CLASS(UEIK_Subsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Subsystem)


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_328_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Subsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_Subsystem(UEIK_Subsystem&&); \
	NO_API UEIK_Subsystem(const UEIK_Subsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Subsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Subsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEIK_Subsystem) \
	NO_API virtual ~UEIK_Subsystem();


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_325_PROLOG
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_328_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_328_SPARSE_DATA \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_328_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_328_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_328_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_328_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_328_INCLASS_NO_PURE_DECLS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_328_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Subsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h


#define FOREACH_ENUM_EEIKATTRIBUTETYPE(op) \
	op(String) \
	op(Bool) \
	op(Integer) 
#define FOREACH_ENUM_EREGIONINFO(op) \
	op(ERegionInfo::RE_NoSelection) \
	op(ERegionInfo::RE_Asia) \
	op(ERegionInfo::RE_NorthAmerica) \
	op(ERegionInfo::RE_SouthAmerica) \
	op(ERegionInfo::RE_Africa) \
	op(ERegionInfo::RE_Europe) \
	op(ERegionInfo::RE_Australia) 

enum class ERegionInfo : uint8;
template<> struct TIsUEnumClass<ERegionInfo> { enum { Value = true }; };
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<ERegionInfo>();

#define FOREACH_ENUM_EMATCHTYPE(op) \
	op(EMatchType::MT_MatchMakingSession) \
	op(EMatchType::MT_Lobby) 

enum class EMatchType : uint8;
template<> struct TIsUEnumClass<EMatchType> { enum { Value = true }; };
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EMatchType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
