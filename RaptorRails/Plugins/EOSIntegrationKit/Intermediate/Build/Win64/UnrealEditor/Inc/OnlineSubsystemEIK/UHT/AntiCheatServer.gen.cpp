// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AntiCheat/AntiCheatServer.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAntiCheatServer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UAntiCheatServer();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UAntiCheatServer_NoRegister();
	ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEOS_ClientType();
	ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EUserPlatform();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUserPlatform;
	static UEnum* EUserPlatform_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUserPlatform.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUserPlatform.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_EUserPlatform, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EUserPlatform"));
		}
		return Z_Registration_Info_UEnum_EUserPlatform.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EUserPlatform>()
	{
		return EUserPlatform_StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemEIK_EUserPlatform_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemEIK_EUserPlatform_Statics::Enumerators[] = {
		{ "EOS_Unknown", (int64)EOS_Unknown },
		{ "EOS_Windows", (int64)EOS_Windows },
		{ "EOS_Mac", (int64)EOS_Mac },
		{ "EOS_Linux", (int64)EOS_Linux },
		{ "EOS_Xbox", (int64)EOS_Xbox },
		{ "EOS_PlayStation", (int64)EOS_PlayStation },
		{ "EOS_Nintendo", (int64)EOS_Nintendo },
		{ "EOS_IOS", (int64)EOS_IOS },
		{ "EOS_Android", (int64)EOS_Android },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemEIK_EUserPlatform_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EOS_Android.Comment", "/** The client is playing on Android */" },
		{ "EOS_Android.DisplayName", "Android" },
		{ "EOS_Android.Name", "EOS_Android" },
		{ "EOS_Android.ToolTip", "The client is playing on Android" },
		{ "EOS_IOS.Comment", "/** The client is playing on iOS */" },
		{ "EOS_IOS.DisplayName", "IOS" },
		{ "EOS_IOS.Name", "EOS_IOS" },
		{ "EOS_IOS.ToolTip", "The client is playing on iOS" },
		{ "EOS_Linux.Comment", "/** The client is playing on Linux */" },
		{ "EOS_Linux.DisplayName", "Linux" },
		{ "EOS_Linux.Name", "EOS_Linux" },
		{ "EOS_Linux.ToolTip", "The client is playing on Linux" },
		{ "EOS_Mac.Comment", "/** The client is playing on Mac */" },
		{ "EOS_Mac.DisplayName", "Mac" },
		{ "EOS_Mac.Name", "EOS_Mac" },
		{ "EOS_Mac.ToolTip", "The client is playing on Mac" },
		{ "EOS_Nintendo.Comment", "/** The client is playing on a Nintendo device */" },
		{ "EOS_Nintendo.DisplayName", "Nintendo" },
		{ "EOS_Nintendo.Name", "EOS_Nintendo" },
		{ "EOS_Nintendo.ToolTip", "The client is playing on a Nintendo device" },
		{ "EOS_PlayStation.Comment", "/** The client is playing on a PlayStation device */" },
		{ "EOS_PlayStation.DisplayName", "PlayStation" },
		{ "EOS_PlayStation.Name", "EOS_PlayStation" },
		{ "EOS_PlayStation.ToolTip", "The client is playing on a PlayStation device" },
		{ "EOS_Unknown.Comment", "/** Unknown platform */" },
		{ "EOS_Unknown.DisplayName", "Unknown" },
		{ "EOS_Unknown.Name", "EOS_Unknown" },
		{ "EOS_Unknown.ToolTip", "Unknown platform" },
		{ "EOS_Windows.Comment", "/** The client is playing on Windows */" },
		{ "EOS_Windows.DisplayName", "Windows" },
		{ "EOS_Windows.Name", "EOS_Windows" },
		{ "EOS_Windows.ToolTip", "The client is playing on Windows" },
		{ "EOS_Xbox.Comment", "/** The client is playing on an Xbox device */" },
		{ "EOS_Xbox.DisplayName", "Xbox" },
		{ "EOS_Xbox.Name", "EOS_Xbox" },
		{ "EOS_Xbox.ToolTip", "The client is playing on an Xbox device" },
		{ "ModuleRelativePath", "AntiCheat/AntiCheatServer.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_EUserPlatform_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		"EUserPlatform",
		"EUserPlatform",
		Z_Construct_UEnum_OnlineSubsystemEIK_EUserPlatform_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EUserPlatform_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EUserPlatform_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_EUserPlatform_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EUserPlatform()
	{
		if (!Z_Registration_Info_UEnum_EUserPlatform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUserPlatform.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_EUserPlatform_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUserPlatform.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEOS_ClientType;
	static UEnum* EEOS_ClientType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEOS_ClientType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEOS_ClientType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_EEOS_ClientType, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EEOS_ClientType"));
		}
		return Z_Registration_Info_UEnum_EEOS_ClientType.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EEOS_ClientType>()
	{
		return EEOS_ClientType_StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemEIK_EEOS_ClientType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemEIK_EEOS_ClientType_Statics::Enumerators[] = {
		{ "EOS_ProtectedClient", (int64)EOS_ProtectedClient },
		{ "EOS_UnprotectedClient", (int64)EOS_UnprotectedClient },
		{ "EOS_AIBot", (int64)EOS_AIBot },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemEIK_EEOS_ClientType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EOS_AIBot.Comment", "/** The client is an AI bot, not an actual human */" },
		{ "EOS_AIBot.DisplayName", "AIBot" },
		{ "EOS_AIBot.Name", "EOS_AIBot" },
		{ "EOS_AIBot.ToolTip", "The client is an AI bot, not an actual human" },
		{ "EOS_ProtectedClient.Comment", "/** An ordinary player that requires anti-cheat client protection to play */" },
		{ "EOS_ProtectedClient.DisplayName", "ProtectedClient" },
		{ "EOS_ProtectedClient.Name", "EOS_ProtectedClient" },
		{ "EOS_ProtectedClient.ToolTip", "An ordinary player that requires anti-cheat client protection to play" },
		{ "EOS_UnprotectedClient.Comment", "/** The player does not need the anti-cheat client to play because of their platform or other factors */" },
		{ "EOS_UnprotectedClient.DisplayName", "UnprotectedClient" },
		{ "EOS_UnprotectedClient.Name", "EOS_UnprotectedClient" },
		{ "EOS_UnprotectedClient.ToolTip", "The player does not need the anti-cheat client to play because of their platform or other factors" },
		{ "ModuleRelativePath", "AntiCheat/AntiCheatServer.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_EEOS_ClientType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		"EEOS_ClientType",
		"EEOS_ClientType",
		Z_Construct_UEnum_OnlineSubsystemEIK_EEOS_ClientType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEOS_ClientType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEOS_ClientType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_EEOS_ClientType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEOS_ClientType()
	{
		if (!Z_Registration_Info_UEnum_EEOS_ClientType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEOS_ClientType.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_EEOS_ClientType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEOS_ClientType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventAntiCheatActionRequired_Parms
		{
			APlayerController* ControllerRef;
			bool bRemoveFromSession;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerRef;
		static void NewProp_bRemoveFromSession_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveFromSession;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature_Statics::NewProp_ControllerRef = { "ControllerRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventAntiCheatActionRequired_Parms, ControllerRef), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature_Statics::NewProp_bRemoveFromSession_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventAntiCheatActionRequired_Parms*)Obj)->bRemoveFromSession = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature_Statics::NewProp_bRemoveFromSession = { "bRemoveFromSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventAntiCheatActionRequired_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature_Statics::NewProp_bRemoveFromSession_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature_Statics::NewProp_ControllerRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature_Statics::NewProp_bRemoveFromSession,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AntiCheat/AntiCheatServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "AntiCheatActionRequired__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventAntiCheatActionRequired_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventAntiCheatActionRequired_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAntiCheatActionRequired_DelegateWrapper(const FMulticastScriptDelegate& AntiCheatActionRequired, APlayerController* ControllerRef, bool bRemoveFromSession)
{
	struct _Script_OnlineSubsystemEIK_eventAntiCheatActionRequired_Parms
	{
		APlayerController* ControllerRef;
		bool bRemoveFromSession;
	};
	_Script_OnlineSubsystemEIK_eventAntiCheatActionRequired_Parms Parms;
	Parms.ControllerRef=ControllerRef;
	Parms.bRemoveFromSession=bRemoveFromSession ? true : false;
	AntiCheatActionRequired.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventAntiCheatRegisterClient_Parms
		{
			APlayerController* ControllerRef;
			TArray<uint8> ClientData;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerRef;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClientData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClientData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::NewProp_ControllerRef = { "ControllerRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventAntiCheatRegisterClient_Parms, ControllerRef), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::NewProp_ClientData_Inner = { "ClientData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::NewProp_ClientData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::NewProp_ClientData = { "ClientData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventAntiCheatRegisterClient_Parms, ClientData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::NewProp_ClientData_MetaData), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::NewProp_ClientData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::NewProp_ControllerRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::NewProp_ClientData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::NewProp_ClientData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AntiCheat/AntiCheatServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "AntiCheatRegisterClient__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventAntiCheatRegisterClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventAntiCheatRegisterClient_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAntiCheatRegisterClient_DelegateWrapper(const FMulticastScriptDelegate& AntiCheatRegisterClient, APlayerController* ControllerRef, TArray<uint8> const& ClientData)
{
	struct _Script_OnlineSubsystemEIK_eventAntiCheatRegisterClient_Parms
	{
		APlayerController* ControllerRef;
		TArray<uint8> ClientData;
	};
	_Script_OnlineSubsystemEIK_eventAntiCheatRegisterClient_Parms Parms;
	Parms.ControllerRef=ControllerRef;
	Parms.ClientData=ClientData;
	AntiCheatRegisterClient.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAntiCheatServer::execRecievedMessageFromClient)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Controller);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RecievedMessageFromClient(Z_Param_Controller,Z_Param_Out_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAntiCheatServer::execRegisterClientForAntiCheat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ClientProductID);
		P_GET_OBJECT(APlayerController,Z_Param_ControllerRef);
		P_GET_PROPERTY(FByteProperty,Z_Param_UserPlatform);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegisterClientForAntiCheat(Z_Param_ClientProductID,Z_Param_ControllerRef,EUserPlatform(Z_Param_UserPlatform),EEOS_ClientType(Z_Param_ClientType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAntiCheatServer::execRegisterAntiCheatServer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ClientProductID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegisterAntiCheatServer(Z_Param_ClientProductID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAntiCheatServer::execPrintAdvancedLogs)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Log);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAntiCheatServer::PrintAdvancedLogs(Z_Param_Log);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAntiCheatServer::execIsAntiCheatServerAvailable)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAntiCheatServer::IsAntiCheatServerAvailable(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UAntiCheatServer::StaticRegisterNativesUAntiCheatServer()
	{
		UClass* Class = UAntiCheatServer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsAntiCheatServerAvailable", &UAntiCheatServer::execIsAntiCheatServerAvailable },
			{ "PrintAdvancedLogs", &UAntiCheatServer::execPrintAdvancedLogs },
			{ "RecievedMessageFromClient", &UAntiCheatServer::execRecievedMessageFromClient },
			{ "RegisterAntiCheatServer", &UAntiCheatServer::execRegisterAntiCheatServer },
			{ "RegisterClientForAntiCheat", &UAntiCheatServer::execRegisterClientForAntiCheat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics
	{
		struct AntiCheatServer_eventIsAntiCheatServerAvailable_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AntiCheatServer_eventIsAntiCheatServerAvailable_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::NewProp_WorldContextObject_MetaData) };
	void Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AntiCheatServer_eventIsAntiCheatServerAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AntiCheatServer_eventIsAntiCheatServerAvailable_Parms), &Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit|AntiCheat" },
		{ "ModuleRelativePath", "AntiCheat/AntiCheatServer.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAntiCheatServer, nullptr, "IsAntiCheatServerAvailable", nullptr, nullptr, Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::AntiCheatServer_eventIsAntiCheatServerAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::AntiCheatServer_eventIsAntiCheatServerAvailable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAntiCheatServer_PrintAdvancedLogs_Statics
	{
		struct AntiCheatServer_eventPrintAdvancedLogs_Parms
		{
			FString Log;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Log;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAntiCheatServer_PrintAdvancedLogs_Statics::NewProp_Log = { "Log", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AntiCheatServer_eventPrintAdvancedLogs_Parms, Log), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAntiCheatServer_PrintAdvancedLogs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAntiCheatServer_PrintAdvancedLogs_Statics::NewProp_Log,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAntiCheatServer_PrintAdvancedLogs_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit|AntiCheat" },
		{ "ModuleRelativePath", "AntiCheat/AntiCheatServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAntiCheatServer_PrintAdvancedLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAntiCheatServer, nullptr, "PrintAdvancedLogs", nullptr, nullptr, Z_Construct_UFunction_UAntiCheatServer_PrintAdvancedLogs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCheatServer_PrintAdvancedLogs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAntiCheatServer_PrintAdvancedLogs_Statics::AntiCheatServer_eventPrintAdvancedLogs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCheatServer_PrintAdvancedLogs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAntiCheatServer_PrintAdvancedLogs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCheatServer_PrintAdvancedLogs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAntiCheatServer_PrintAdvancedLogs_Statics::AntiCheatServer_eventPrintAdvancedLogs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAntiCheatServer_PrintAdvancedLogs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAntiCheatServer_PrintAdvancedLogs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics
	{
		struct AntiCheatServer_eventRecievedMessageFromClient_Parms
		{
			APlayerController* Controller;
			TArray<uint8> Message;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Message_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Message;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AntiCheatServer_eventRecievedMessageFromClient_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::NewProp_Message_Inner = { "Message", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AntiCheatServer_eventRecievedMessageFromClient_Parms, Message), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::NewProp_Message_MetaData), Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::NewProp_Message_MetaData) };
	void Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AntiCheatServer_eventRecievedMessageFromClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AntiCheatServer_eventRecievedMessageFromClient_Parms), &Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::NewProp_Message_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit|AntiCheat" },
		{ "ModuleRelativePath", "AntiCheat/AntiCheatServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAntiCheatServer, nullptr, "RecievedMessageFromClient", nullptr, nullptr, Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::AntiCheatServer_eventRecievedMessageFromClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::AntiCheatServer_eventRecievedMessageFromClient_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer_Statics
	{
		struct AntiCheatServer_eventRegisterAntiCheatServer_Parms
		{
			FString ClientProductID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientProductID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer_Statics::NewProp_ClientProductID = { "ClientProductID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AntiCheatServer_eventRegisterAntiCheatServer_Parms, ClientProductID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AntiCheatServer_eventRegisterAntiCheatServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AntiCheatServer_eventRegisterAntiCheatServer_Parms), &Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer_Statics::NewProp_ClientProductID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit|AntiCheat" },
		{ "ModuleRelativePath", "AntiCheat/AntiCheatServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAntiCheatServer, nullptr, "RegisterAntiCheatServer", nullptr, nullptr, Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer_Statics::AntiCheatServer_eventRegisterAntiCheatServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer_Statics::AntiCheatServer_eventRegisterAntiCheatServer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics
	{
		struct AntiCheatServer_eventRegisterClientForAntiCheat_Parms
		{
			FString ClientProductID;
			APlayerController* ControllerRef;
			TEnumAsByte<EUserPlatform> UserPlatform;
			TEnumAsByte<EEOS_ClientType> ClientType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientProductID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerRef;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UserPlatform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClientType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::NewProp_ClientProductID = { "ClientProductID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AntiCheatServer_eventRegisterClientForAntiCheat_Parms, ClientProductID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::NewProp_ControllerRef = { "ControllerRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AntiCheatServer_eventRegisterClientForAntiCheat_Parms, ControllerRef), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::NewProp_UserPlatform = { "UserPlatform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AntiCheatServer_eventRegisterClientForAntiCheat_Parms, UserPlatform), Z_Construct_UEnum_OnlineSubsystemEIK_EUserPlatform, METADATA_PARAMS(0, nullptr) }; // 1311938225
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::NewProp_ClientType = { "ClientType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AntiCheatServer_eventRegisterClientForAntiCheat_Parms, ClientType), Z_Construct_UEnum_OnlineSubsystemEIK_EEOS_ClientType, METADATA_PARAMS(0, nullptr) }; // 4193121673
	void Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AntiCheatServer_eventRegisterClientForAntiCheat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AntiCheatServer_eventRegisterClientForAntiCheat_Parms), &Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::NewProp_ClientProductID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::NewProp_ControllerRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::NewProp_UserPlatform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::NewProp_ClientType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit|AntiCheat" },
		{ "ModuleRelativePath", "AntiCheat/AntiCheatServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAntiCheatServer, nullptr, "RegisterClientForAntiCheat", nullptr, nullptr, Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::AntiCheatServer_eventRegisterClientForAntiCheat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::AntiCheatServer_eventRegisterClientForAntiCheat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAntiCheatServer);
	UClass* Z_Construct_UClass_UAntiCheatServer_NoRegister()
	{
		return UAntiCheatServer::StaticClass();
	}
	struct Z_Construct_UClass_UAntiCheatServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAntiCheatActionRequired_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAntiCheatActionRequired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAntiCheatRegisterClient_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAntiCheatRegisterClient;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAntiCheatServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAntiCheatServer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAntiCheatServer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAntiCheatServer_IsAntiCheatServerAvailable, "IsAntiCheatServerAvailable" }, // 1496528048
		{ &Z_Construct_UFunction_UAntiCheatServer_PrintAdvancedLogs, "PrintAdvancedLogs" }, // 717159145
		{ &Z_Construct_UFunction_UAntiCheatServer_RecievedMessageFromClient, "RecievedMessageFromClient" }, // 2597774287
		{ &Z_Construct_UFunction_UAntiCheatServer_RegisterAntiCheatServer, "RegisterAntiCheatServer" }, // 1242546053
		{ &Z_Construct_UFunction_UAntiCheatServer_RegisterClientForAntiCheat, "RegisterClientForAntiCheat" }, // 2723356657
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAntiCheatServer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAntiCheatServer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AntiCheat/AntiCheatServer.h" },
		{ "ModuleRelativePath", "AntiCheat/AntiCheatServer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAntiCheatServer_Statics::NewProp_OnAntiCheatActionRequired_MetaData[] = {
		{ "Category", "EOS Integration Kit|AntiCheat" },
		{ "ModuleRelativePath", "AntiCheat/AntiCheatServer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAntiCheatServer_Statics::NewProp_OnAntiCheatActionRequired = { "OnAntiCheatActionRequired", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAntiCheatServer, OnAntiCheatActionRequired), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatActionRequired__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAntiCheatServer_Statics::NewProp_OnAntiCheatActionRequired_MetaData), Z_Construct_UClass_UAntiCheatServer_Statics::NewProp_OnAntiCheatActionRequired_MetaData) }; // 2535315615
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAntiCheatServer_Statics::NewProp_OnAntiCheatRegisterClient_MetaData[] = {
		{ "Category", "EOS Integration Kit|AntiCheat" },
		{ "ModuleRelativePath", "AntiCheat/AntiCheatServer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAntiCheatServer_Statics::NewProp_OnAntiCheatRegisterClient = { "OnAntiCheatRegisterClient", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAntiCheatServer, OnAntiCheatRegisterClient), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AntiCheatRegisterClient__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAntiCheatServer_Statics::NewProp_OnAntiCheatRegisterClient_MetaData), Z_Construct_UClass_UAntiCheatServer_Statics::NewProp_OnAntiCheatRegisterClient_MetaData) }; // 2753809976
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAntiCheatServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAntiCheatServer_Statics::NewProp_OnAntiCheatActionRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAntiCheatServer_Statics::NewProp_OnAntiCheatRegisterClient,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAntiCheatServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAntiCheatServer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAntiCheatServer_Statics::ClassParams = {
		&UAntiCheatServer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAntiCheatServer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAntiCheatServer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAntiCheatServer_Statics::Class_MetaDataParams), Z_Construct_UClass_UAntiCheatServer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAntiCheatServer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAntiCheatServer()
	{
		if (!Z_Registration_Info_UClass_UAntiCheatServer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAntiCheatServer.OuterSingleton, Z_Construct_UClass_UAntiCheatServer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAntiCheatServer.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UAntiCheatServer>()
	{
		return UAntiCheatServer::StaticClass();
	}
	UAntiCheatServer::UAntiCheatServer() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAntiCheatServer);
	UAntiCheatServer::~UAntiCheatServer() {}
	struct Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_Statics::EnumInfo[] = {
		{ EUserPlatform_StaticEnum, TEXT("EUserPlatform"), &Z_Registration_Info_UEnum_EUserPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1311938225U) },
		{ EEOS_ClientType_StaticEnum, TEXT("EEOS_ClientType"), &Z_Registration_Info_UEnum_EEOS_ClientType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4193121673U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAntiCheatServer, UAntiCheatServer::StaticClass, TEXT("UAntiCheatServer"), &Z_Registration_Info_UClass_UAntiCheatServer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAntiCheatServer), 331335213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_2500332390(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AntiCheat_AntiCheatServer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
