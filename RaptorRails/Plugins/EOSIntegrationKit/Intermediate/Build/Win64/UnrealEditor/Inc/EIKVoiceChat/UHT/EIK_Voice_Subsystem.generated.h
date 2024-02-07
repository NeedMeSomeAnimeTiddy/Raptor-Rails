// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystem/EIK_Voice_Subsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEVIKResultCodes : uint8;
struct FEVIKPlayerList;
#ifdef EIKVOICECHAT_EIK_Voice_Subsystem_generated_h
#error "EIK_Voice_Subsystem.generated.h already included, missing '#pragma once' in EIK_Voice_Subsystem.h"
#endif
#define EIKVOICECHAT_EIK_Voice_Subsystem_generated_h

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics; \
	EIKVOICECHAT_API static class UScriptStruct* StaticStruct();


template<> EIKVOICECHAT_API UScriptStruct* StaticStruct<struct FDeviceEVIKSettings>();

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEVIKPlayerList_Statics; \
	EIKVOICECHAT_API static class UScriptStruct* StaticStruct();


template<> EIKVOICECHAT_API UScriptStruct* StaticStruct<struct FEVIKPlayerList>();

#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_67_DELEGATE \
EIKVOICECHAT_API void FEIKResultDelegate_DelegateWrapper(const FScriptDelegate& EIKResultDelegate, bool bWasSuccess, EEVIKResultCodes Result);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_68_DELEGATE \
EIKVOICECHAT_API void FEIKRoomTokenResultDelegate_DelegateWrapper(const FScriptDelegate& EIKRoomTokenResultDelegate, bool bWasSuccess, const FString& RoomData);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_76_SPARSE_DATA
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_76_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_76_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetupPlayerList_Implementation(TArray<FEVIKPlayerList> const& PlayerList); \
 \
	DECLARE_FUNCTION(execPlayerListUpdated); \
	DECLARE_FUNCTION(execForceUpdateOutputVolume); \
	DECLARE_FUNCTION(execUpdatePositionalVoiceChat); \
	DECLARE_FUNCTION(execSetupPlayerList); \
	DECLARE_FUNCTION(execEVIK_Local_Connect); \
	DECLARE_FUNCTION(execEVIK_Local_Initialize);


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_76_ACCESSORS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_76_CALLBACK_WRAPPERS
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Voice_Subsystem(); \
	friend struct Z_Construct_UClass_UEIK_Voice_Subsystem_Statics; \
public: \
	DECLARE_CLASS(UEIK_Voice_Subsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EIKVoiceChat"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Voice_Subsystem) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerListVar=NETFIELD_REP_START, \
		NETFIELD_REP_END=PlayerListVar	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UEIK_Voice_Subsystem) \
public:


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Voice_Subsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_Voice_Subsystem(UEIK_Voice_Subsystem&&); \
	NO_API UEIK_Voice_Subsystem(const UEIK_Voice_Subsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Voice_Subsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Voice_Subsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEIK_Voice_Subsystem) \
	NO_API virtual ~UEIK_Voice_Subsystem();


#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_73_PROLOG
#define FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_76_SPARSE_DATA \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_76_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_76_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_76_ACCESSORS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_76_CALLBACK_WRAPPERS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_76_INCLASS_NO_PURE_DECLS \
	FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EIKVOICECHAT_API UClass* StaticClass<class UEIK_Voice_Subsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h


#define FOREACH_ENUM_EEVIKRESULTCODES(op) \
	op(EEVIKResultCodes::Success) \
	op(EEVIKResultCodes::Failed) 

enum class EEVIKResultCodes : uint8;
template<> struct TIsUEnumClass<EEVIKResultCodes> { enum { Value = true }; };
template<> EIKVOICECHAT_API UEnum* StaticEnum<EEVIKResultCodes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
