// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AntiCheat/AntiCheatServer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UObject;
#ifdef ONLINESUBSYSTEMEIK_AntiCheatServer_generated_h
#error "AntiCheatServer.generated.h already included, missing '#pragma once' in AntiCheatServer.h"
#endif
#define ONLINESUBSYSTEMEIK_AntiCheatServer_generated_h

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_47_DELEGATE \
ONLINESUBSYSTEMEIK_API void FAntiCheatActionRequired_DelegateWrapper(const FMulticastScriptDelegate& AntiCheatActionRequired, APlayerController* ControllerRef, bool bRemoveFromSession);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_48_DELEGATE \
ONLINESUBSYSTEMEIK_API void FAntiCheatRegisterClient_DelegateWrapper(const FMulticastScriptDelegate& AntiCheatRegisterClient, APlayerController* ControllerRef, TArray<uint8> const& ClientData);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_52_SPARSE_DATA
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_52_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_52_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRecievedMessageFromClient); \
	DECLARE_FUNCTION(execRegisterClientForAntiCheat); \
	DECLARE_FUNCTION(execRegisterAntiCheatServer); \
	DECLARE_FUNCTION(execPrintAdvancedLogs); \
	DECLARE_FUNCTION(execIsAntiCheatServerAvailable);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_52_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAntiCheatServer(); \
	friend struct Z_Construct_UClass_UAntiCheatServer_Statics; \
public: \
	DECLARE_CLASS(UAntiCheatServer, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UAntiCheatServer)


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAntiCheatServer(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAntiCheatServer(UAntiCheatServer&&); \
	NO_API UAntiCheatServer(const UAntiCheatServer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAntiCheatServer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAntiCheatServer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAntiCheatServer) \
	NO_API virtual ~UAntiCheatServer();


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_49_PROLOG
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_52_SPARSE_DATA \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_52_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_52_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_52_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_52_INCLASS_NO_PURE_DECLS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UAntiCheatServer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h


#define FOREACH_ENUM_EUSERPLATFORM(op) \
	op(EOS_Unknown) \
	op(EOS_Windows) \
	op(EOS_Mac) \
	op(EOS_Linux) \
	op(EOS_Xbox) \
	op(EOS_PlayStation) \
	op(EOS_Nintendo) \
	op(EOS_IOS) \
	op(EOS_Android) 
#define FOREACH_ENUM_EEOS_CLIENTTYPE(op) \
	op(EOS_ProtectedClient) \
	op(EOS_UnprotectedClient) \
	op(EOS_AIBot) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
