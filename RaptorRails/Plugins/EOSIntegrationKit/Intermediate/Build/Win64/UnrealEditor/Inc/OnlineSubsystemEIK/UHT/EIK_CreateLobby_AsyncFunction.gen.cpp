// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h"
#include "OnlineSubsystemEIK/Subsystem/EIK_Subsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_CreateLobby_AsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_NoRegister();
	ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FCreateLobbySettings();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKAttribute();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateLobbySettings;
class UScriptStruct* FCreateLobbySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateLobbySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateLobbySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateLobbySettings, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("CreateLobbySettings"));
	}
	return Z_Registration_Info_UScriptStruct_CreateLobbySettings.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FCreateLobbySettings>()
{
	return FCreateLobbySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCreateLobbySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInvites_MetaData[];
#endif
		static void NewProp_bAllowInvites_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPrivateConnections_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPrivateConnections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAdvertise_MetaData[];
#endif
		static void NewProp_bShouldAdvertise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowJoinInProgress_MetaData[];
#endif
		static void NewProp_bAllowJoinInProgress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinInProgress;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Region_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseVoiceChat_MetaData[];
#endif
		static void NewProp_bUseVoiceChat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVoiceChat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePresence_MetaData[];
#endif
		static void NewProp_bUsePresence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePresence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BucketID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BucketID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportHostMigration_MetaData[];
#endif
		static void NewProp_bSupportHostMigration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportHostMigration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableJoinViaID_MetaData[];
#endif
		static void NewProp_bEnableJoinViaID_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableJoinViaID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyIDOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LobbyIDOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateLobbySettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowInvites_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
	{
		((FCreateLobbySettings*)Obj)->bAllowInvites = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateLobbySettings), &Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowInvites_MetaData), Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowInvites_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_NumberOfPrivateConnections_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_NumberOfPrivateConnections = { "NumberOfPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLobbySettings, NumberOfPrivateConnections), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_NumberOfPrivateConnections_MetaData), Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_NumberOfPrivateConnections_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bShouldAdvertise_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
	{
		((FCreateLobbySettings*)Obj)->bShouldAdvertise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateLobbySettings), &Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bShouldAdvertise_MetaData), Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bShouldAdvertise_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowJoinInProgress_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowJoinInProgress_SetBit(void* Obj)
	{
		((FCreateLobbySettings*)Obj)->bAllowJoinInProgress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowJoinInProgress = { "bAllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateLobbySettings), &Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowJoinInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowJoinInProgress_MetaData), Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowJoinInProgress_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_Region_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_Region_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLobbySettings, Region), Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_Region_MetaData), Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_Region_MetaData) }; // 722458386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUseVoiceChat_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUseVoiceChat_SetBit(void* Obj)
	{
		((FCreateLobbySettings*)Obj)->bUseVoiceChat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUseVoiceChat = { "bUseVoiceChat", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateLobbySettings), &Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUseVoiceChat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUseVoiceChat_MetaData), Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUseVoiceChat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUsePresence_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUsePresence_SetBit(void* Obj)
	{
		((FCreateLobbySettings*)Obj)->bUsePresence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUsePresence = { "bUsePresence", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateLobbySettings), &Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUsePresence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUsePresence_MetaData), Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUsePresence_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_BucketID_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_BucketID = { "BucketID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLobbySettings, BucketID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_BucketID_MetaData), Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_BucketID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bSupportHostMigration_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bSupportHostMigration_SetBit(void* Obj)
	{
		((FCreateLobbySettings*)Obj)->bSupportHostMigration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bSupportHostMigration = { "bSupportHostMigration", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateLobbySettings), &Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bSupportHostMigration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bSupportHostMigration_MetaData), Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bSupportHostMigration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bEnableJoinViaID_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bEnableJoinViaID_SetBit(void* Obj)
	{
		((FCreateLobbySettings*)Obj)->bEnableJoinViaID = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bEnableJoinViaID = { "bEnableJoinViaID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateLobbySettings), &Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bEnableJoinViaID_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bEnableJoinViaID_MetaData), Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bEnableJoinViaID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_LobbyIDOverride_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_LobbyIDOverride = { "LobbyIDOverride", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLobbySettings, LobbyIDOverride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_LobbyIDOverride_MetaData), Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_LobbyIDOverride_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowInvites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_NumberOfPrivateConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bShouldAdvertise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bAllowJoinInProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_Region_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_Region,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUseVoiceChat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bUsePresence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_BucketID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bSupportHostMigration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_bEnableJoinViaID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewProp_LobbyIDOverride,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		&NewStructOps,
		"CreateLobbySettings",
		Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::PropPointers),
		sizeof(FCreateLobbySettings),
		alignof(FCreateLobbySettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCreateLobbySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CreateLobbySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateLobbySettings.InnerSingleton, Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CreateLobbySettings.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventCreateLobby_Delegate_Parms
		{
			FString LobbyID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LobbyID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::NewProp_LobbyID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventCreateLobby_Delegate_Parms, LobbyID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::NewProp_LobbyID_MetaData), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::NewProp_LobbyID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::NewProp_LobbyID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "CreateLobby_Delegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventCreateLobby_Delegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventCreateLobby_Delegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCreateLobby_Delegate_DelegateWrapper(const FMulticastScriptDelegate& CreateLobby_Delegate, const FString& LobbyID)
{
	struct _Script_OnlineSubsystemEIK_eventCreateLobby_Delegate_Parms
	{
		FString LobbyID;
	};
	_Script_OnlineSubsystemEIK_eventCreateLobby_Delegate_Parms Parms;
	Parms.LobbyID=LobbyID;
	CreateLobby_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UEIK_CreateLobby_AsyncFunction::execCreateEIKLobby)
	{
		P_GET_TMAP(FString,FEIKAttribute,Z_Param_SessionSettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPublicConnections);
		P_GET_STRUCT(FCreateLobbySettings,Z_Param_ExtraSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEIK_CreateLobby_AsyncFunction**)Z_Param__Result=UEIK_CreateLobby_AsyncFunction::CreateEIKLobby(Z_Param_SessionSettings,Z_Param_NumberOfPublicConnections,Z_Param_ExtraSettings);
		P_NATIVE_END;
	}
	void UEIK_CreateLobby_AsyncFunction::StaticRegisterNativesUEIK_CreateLobby_AsyncFunction()
	{
		UClass* Class = UEIK_CreateLobby_AsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateEIKLobby", &UEIK_CreateLobby_AsyncFunction::execCreateEIKLobby },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics
	{
		struct EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms
		{
			TMap<FString,FEIKAttribute> SessionSettings;
			int32 NumberOfPublicConnections;
			FCreateLobbySettings ExtraSettings;
			UEIK_CreateLobby_AsyncFunction* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionSettings_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_SessionSettings;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPublicConnections;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FEIKAttribute, METADATA_PARAMS(0, nullptr) }; // 4110417661
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4110417661
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_NumberOfPublicConnections = { "NumberOfPublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms, NumberOfPublicConnections), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms, ExtraSettings), Z_Construct_UScriptStruct_FCreateLobbySettings, METADATA_PARAMS(0, nullptr) }; // 1204027388
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms, ReturnValue), Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_NumberOfPublicConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_ExtraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09This function is used to create a lobby with the given settings and returns a result delegate which can be used to determine if the lobby was created successfully or not.\n\x09@param SessionSettings - A map of session settings to be used when creating the lobby.\n\x09@param NumberOfPublicConnections - The number of public connections to be used when creating the lobby.\n\x09@param ExtraSettings - A struct containing extra settings to be used when creating the lobby which is completely optional.\n\x09""Documentation link: https://eik.betide.studio/multiplayer/sessions/lobbies/\n\x09*/" },
#endif
		{ "CPP_Default_ExtraSettings", "()" },
		{ "CPP_Default_NumberOfPublicConnections", "0" },
		{ "DisplayName", "Create EIK Lobby" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is used to create a lobby with the given settings and returns a result delegate which can be used to determine if the lobby was created successfully or not.\n@param SessionSettings - A map of session settings to be used when creating the lobby.\n@param NumberOfPublicConnections - The number of public connections to be used when creating the lobby.\n@param ExtraSettings - A struct containing extra settings to be used when creating the lobby which is completely optional.\nDocumentation link: https://eik.betide.studio/multiplayer/sessions/lobbies/" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction, nullptr, "CreateEIKLobby", nullptr, nullptr, Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_CreateLobby_AsyncFunction);
	UClass* Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_NoRegister()
	{
		return UEIK_CreateLobby_AsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby, "CreateEIKLobby" }, // 3915039503
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "DisplayName", "Success" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_CreateLobby_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnSuccess_MetaData), Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnSuccess_MetaData) }; // 1829256848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnFail_MetaData[] = {
		{ "DisplayName", "Failure" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_CreateLobby_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnFail_MetaData), Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnFail_MetaData) }; // 1829256848
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_CreateLobby_AsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::ClassParams = {
		&UEIK_CreateLobby_AsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UEIK_CreateLobby_AsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_CreateLobby_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIK_CreateLobby_AsyncFunction.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_CreateLobby_AsyncFunction>()
	{
		return UEIK_CreateLobby_AsyncFunction::StaticClass();
	}
	UEIK_CreateLobby_AsyncFunction::UEIK_CreateLobby_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_CreateLobby_AsyncFunction);
	UEIK_CreateLobby_AsyncFunction::~UEIK_CreateLobby_AsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_Statics::ScriptStructInfo[] = {
		{ FCreateLobbySettings::StaticStruct, Z_Construct_UScriptStruct_FCreateLobbySettings_Statics::NewStructOps, TEXT("CreateLobbySettings"), &Z_Registration_Info_UScriptStruct_CreateLobbySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateLobbySettings), 1204027388U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction, UEIK_CreateLobby_AsyncFunction::StaticClass, TEXT("UEIK_CreateLobby_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_CreateLobby_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_CreateLobby_AsyncFunction), 1923830389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_1097602217(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
