// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/EVIK_Functions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FDeviceEVIKSettings;
#ifdef EIKVOICECHAT_EVIK_Functions_generated_h
#error "EVIK_Functions.generated.h already included, missing '#pragma once' in EVIK_Functions.h"
#endif
#define EIKVOICECHAT_EVIK_Functions_generated_h

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_19_SPARSE_DATA
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInputMethods); \
	DECLARE_FUNCTION(execSetOutputMethods); \
	DECLARE_FUNCTION(execGetOutputMethods); \
	DECLARE_FUNCTION(execGetInputMethods); \
	DECLARE_FUNCTION(execTransmitToNoRoom); \
	DECLARE_FUNCTION(execTransmitToSelectedRoom); \
	DECLARE_FUNCTION(execTransmitToAllRooms); \
	DECLARE_FUNCTION(execSetPlayerMuted); \
	DECLARE_FUNCTION(execIsPlayerMuted); \
	DECLARE_FUNCTION(execSetPlayerVolume); \
	DECLARE_FUNCTION(execGetPlayerVolume); \
	DECLARE_FUNCTION(execGetAllRooms); \
	DECLARE_FUNCTION(execGetPlayersInRoom); \
	DECLARE_FUNCTION(execLeaveEOSRoom); \
	DECLARE_FUNCTION(execJoinEOSRoom); \
	DECLARE_FUNCTION(execEOSRoomToken); \
	DECLARE_FUNCTION(execLoggedInUser); \
	DECLARE_FUNCTION(execIsEOSVoiceChatLoggedIn); \
	DECLARE_FUNCTION(execIsEOSVoiceChatLoggingIn); \
	DECLARE_FUNCTION(execLogoutEOSVoiceChat); \
	DECLARE_FUNCTION(execLoginEOSVoiceChat); \
	DECLARE_FUNCTION(execIsVoiceChatConnected); \
	DECLARE_FUNCTION(execConnectVoiceChat); \
	DECLARE_FUNCTION(execInitializeEOSVoiceChat);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_19_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEVIK_Functions(); \
	friend struct Z_Construct_UClass_UEVIK_Functions_Statics; \
public: \
	DECLARE_CLASS(UEVIK_Functions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EIKVoiceChat"), NO_API) \
	DECLARE_SERIALIZER(UEVIK_Functions)


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEVIK_Functions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEVIK_Functions(UEVIK_Functions&&); \
	NO_API UEVIK_Functions(const UEVIK_Functions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEVIK_Functions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEVIK_Functions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEVIK_Functions) \
	NO_API virtual ~UEVIK_Functions();


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_15_PROLOG
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_19_SPARSE_DATA \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_19_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_19_INCLASS_NO_PURE_DECLS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EIKVOICECHAT_API UClass* StaticClass<class UEVIK_Functions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
