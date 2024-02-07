// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Functions/EVIK_Functions.h"
#include "../Subsystem/EIK_Voice_Subsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEVIK_Functions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EIKVOICECHAT_API UClass* Z_Construct_UClass_UEVIK_Functions();
	EIKVOICECHAT_API UClass* Z_Construct_UClass_UEVIK_Functions_NoRegister();
	EIKVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature();
	EIKVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature();
	EIKVOICECHAT_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceEVIKSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EIKVoiceChat();
// End Cross Module References
	DEFINE_FUNCTION(UEVIK_Functions::execSetInputMethods)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_MethodID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::SetInputMethods(Z_Param_WorldContextObject,Z_Param_MethodID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execSetOutputMethods)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_MethodID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::SetOutputMethods(Z_Param_WorldContextObject,Z_Param_MethodID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execGetOutputMethods)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDeviceEVIKSettings>*)Z_Param__Result=UEVIK_Functions::GetOutputMethods(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execGetInputMethods)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDeviceEVIKSettings>*)Z_Param__Result=UEVIK_Functions::GetInputMethods(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execTransmitToNoRoom)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::TransmitToNoRoom(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execTransmitToSelectedRoom)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::TransmitToSelectedRoom(Z_Param_WorldContextObject,Z_Param_RoomName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execTransmitToAllRooms)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::TransmitToAllRooms(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execSetPlayerMuted)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_GET_UBOOL(Z_Param_MutePlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::SetPlayerMuted(Z_Param_WorldContextObject,Z_Param_PlayerName,Z_Param_MutePlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execIsPlayerMuted)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::IsPlayerMuted(Z_Param_WorldContextObject,Z_Param_PlayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execSetPlayerVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::SetPlayerVolume(Z_Param_WorldContextObject,Z_Param_PlayerName,Z_Param_NewVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execGetPlayerVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UEVIK_Functions::GetPlayerVolume(Z_Param_WorldContextObject,Z_Param_PlayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execGetAllRooms)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UEVIK_Functions::GetAllRooms(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execGetPlayersInRoom)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_VoiceRoomName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UEVIK_Functions::GetPlayersInRoom(Z_Param_WorldContextObject,Z_Param_VoiceRoomName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execLeaveEOSRoom)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_VoiceRoomName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEVIK_Functions::LeaveEOSRoom(Z_Param_WorldContextObject,Z_Param_VoiceRoomName,FEIKResultDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execJoinEOSRoom)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_VoiceRoomName);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomData);
		P_GET_UBOOL(Z_Param_bEnableEcho);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEVIK_Functions::JoinEOSRoom(Z_Param_WorldContextObject,Z_Param_VoiceRoomName,Z_Param_RoomData,Z_Param_bEnableEcho,FEIKResultDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execEOSRoomToken)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VoiceRoomName);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ClientIP);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEVIK_Functions::EOSRoomToken(Z_Param_VoiceRoomName,Z_Param_PlayerName,Z_Param_ClientIP,FEIKRoomTokenResultDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execLoggedInUser)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEVIK_Functions::LoggedInUser(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execIsEOSVoiceChatLoggedIn)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::IsEOSVoiceChatLoggedIn(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execIsEOSVoiceChatLoggingIn)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::IsEOSVoiceChatLoggingIn(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execLogoutEOSVoiceChat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEVIK_Functions::LogoutEOSVoiceChat(Z_Param_WorldContextObject,Z_Param_PlayerName,FEIKResultDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execLoginEOSVoiceChat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEVIK_Functions::LoginEOSVoiceChat(Z_Param_WorldContextObject,Z_Param_PlayerName,FEIKResultDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execIsVoiceChatConnected)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::IsVoiceChatConnected(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execConnectVoiceChat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEVIK_Functions::ConnectVoiceChat(Z_Param_WorldContextObject,FEIKResultDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execInitializeEOSVoiceChat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::InitializeEOSVoiceChat(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UEVIK_Functions::StaticRegisterNativesUEVIK_Functions()
	{
		UClass* Class = UEVIK_Functions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectVoiceChat", &UEVIK_Functions::execConnectVoiceChat },
			{ "EOSRoomToken", &UEVIK_Functions::execEOSRoomToken },
			{ "GetAllRooms", &UEVIK_Functions::execGetAllRooms },
			{ "GetInputMethods", &UEVIK_Functions::execGetInputMethods },
			{ "GetOutputMethods", &UEVIK_Functions::execGetOutputMethods },
			{ "GetPlayersInRoom", &UEVIK_Functions::execGetPlayersInRoom },
			{ "GetPlayerVolume", &UEVIK_Functions::execGetPlayerVolume },
			{ "InitializeEOSVoiceChat", &UEVIK_Functions::execInitializeEOSVoiceChat },
			{ "IsEOSVoiceChatLoggedIn", &UEVIK_Functions::execIsEOSVoiceChatLoggedIn },
			{ "IsEOSVoiceChatLoggingIn", &UEVIK_Functions::execIsEOSVoiceChatLoggingIn },
			{ "IsPlayerMuted", &UEVIK_Functions::execIsPlayerMuted },
			{ "IsVoiceChatConnected", &UEVIK_Functions::execIsVoiceChatConnected },
			{ "JoinEOSRoom", &UEVIK_Functions::execJoinEOSRoom },
			{ "LeaveEOSRoom", &UEVIK_Functions::execLeaveEOSRoom },
			{ "LoggedInUser", &UEVIK_Functions::execLoggedInUser },
			{ "LoginEOSVoiceChat", &UEVIK_Functions::execLoginEOSVoiceChat },
			{ "LogoutEOSVoiceChat", &UEVIK_Functions::execLogoutEOSVoiceChat },
			{ "SetInputMethods", &UEVIK_Functions::execSetInputMethods },
			{ "SetOutputMethods", &UEVIK_Functions::execSetOutputMethods },
			{ "SetPlayerMuted", &UEVIK_Functions::execSetPlayerMuted },
			{ "SetPlayerVolume", &UEVIK_Functions::execSetPlayerVolume },
			{ "TransmitToAllRooms", &UEVIK_Functions::execTransmitToAllRooms },
			{ "TransmitToNoRoom", &UEVIK_Functions::execTransmitToNoRoom },
			{ "TransmitToSelectedRoom", &UEVIK_Functions::execTransmitToSelectedRoom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics
	{
		struct EVIK_Functions_eventConnectVoiceChat_Parms
		{
			const UObject* WorldContextObject;
			FScriptDelegate Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventConnectVoiceChat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventConnectVoiceChat_Parms, Result), Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::NewProp_Result_MetaData) }; // 3673246975
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Result" },
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Connects the player to the EOS Voice Chat system.\n" },
#endif
		{ "DisplayName", "Connect to EOS Voice Chat" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Connects the player to the EOS Voice Chat system." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "ConnectVoiceChat", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::EVIK_Functions_eventConnectVoiceChat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::EVIK_Functions_eventConnectVoiceChat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics
	{
		struct EVIK_Functions_eventEOSRoomToken_Parms
		{
			FString VoiceRoomName;
			FString PlayerName;
			FString ClientIP;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_VoiceRoomName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientIP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_VoiceRoomName = { "VoiceRoomName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventEOSRoomToken_Parms, VoiceRoomName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventEOSRoomToken_Parms, PlayerName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_ClientIP = { "ClientIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventEOSRoomToken_Parms, ClientIP), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventEOSRoomToken_Parms, Result), Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_Result_MetaData) }; // 734065453
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_VoiceRoomName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_ClientIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Result" },
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Requests a room token for the specified voice room.\n" },
#endif
		{ "DisplayName", "Get EOS Voice Room Token" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests a room token for the specified voice room." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "EOSRoomToken", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::EVIK_Functions_eventEOSRoomToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::EVIK_Functions_eventEOSRoomToken_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics
	{
		struct EVIK_Functions_eventGetAllRooms_Parms
		{
			const UObject* WorldContextObject;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventGetAllRooms_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventGetAllRooms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets a list of all joined voice rooms.\n" },
#endif
		{ "DisplayName", "Get Joined EOS Voice Rooms" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a list of all joined voice rooms." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "GetAllRooms", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::EVIK_Functions_eventGetAllRooms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::EVIK_Functions_eventGetAllRooms_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_GetAllRooms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics
	{
		struct EVIK_Functions_eventGetInputMethods_Parms
		{
			const UObject* WorldContextObject;
			TArray<FDeviceEVIKSettings> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventGetInputMethods_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDeviceEVIKSettings, METADATA_PARAMS(0, nullptr) }; // 2612908794
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventGetInputMethods_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2612908794
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Retrieves all available input methods for EOS Voice Chat.\n" },
#endif
		{ "DisplayName", "Get All EOS Voice Input Methods" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves all available input methods for EOS Voice Chat." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "GetInputMethods", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::EVIK_Functions_eventGetInputMethods_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::EVIK_Functions_eventGetInputMethods_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_GetInputMethods()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics
	{
		struct EVIK_Functions_eventGetOutputMethods_Parms
		{
			const UObject* WorldContextObject;
			TArray<FDeviceEVIKSettings> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventGetOutputMethods_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDeviceEVIKSettings, METADATA_PARAMS(0, nullptr) }; // 2612908794
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventGetOutputMethods_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2612908794
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Retrieves all available output methods for EOS Voice Chat.\n" },
#endif
		{ "DisplayName", "Get All EOS Voice Output Methods" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves all available output methods for EOS Voice Chat." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "GetOutputMethods", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::EVIK_Functions_eventGetOutputMethods_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::EVIK_Functions_eventGetOutputMethods_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics
	{
		struct EVIK_Functions_eventGetPlayersInRoom_Parms
		{
			const UObject* WorldContextObject;
			FString VoiceRoomName;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VoiceRoomName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventGetPlayersInRoom_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::NewProp_VoiceRoomName = { "VoiceRoomName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventGetPlayersInRoom_Parms, VoiceRoomName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventGetPlayersInRoom_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::NewProp_VoiceRoomName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets a list of players in the specified voice room.\n" },
#endif
		{ "DisplayName", "Get Players in EOS Voice Room" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a list of players in the specified voice room." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "GetPlayersInRoom", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::EVIK_Functions_eventGetPlayersInRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::EVIK_Functions_eventGetPlayersInRoom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics
	{
		struct EVIK_Functions_eventGetPlayerVolume_Parms
		{
			const UObject* WorldContextObject;
			FString PlayerName;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventGetPlayerVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventGetPlayerVolume_Parms, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_PlayerName_MetaData), Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_PlayerName_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventGetPlayerVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the volume for the specified player.\n" },
#endif
		{ "DisplayName", "Get EOS Voice Player Volume" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the volume for the specified player." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "GetPlayerVolume", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::EVIK_Functions_eventGetPlayerVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::EVIK_Functions_eventGetPlayerVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics
	{
		struct EVIK_Functions_eventInitializeEOSVoiceChat_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventInitializeEOSVoiceChat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::NewProp_WorldContextObject_MetaData) };
	void Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventInitializeEOSVoiceChat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EVIK_Functions_eventInitializeEOSVoiceChat_Parms), &Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initializes the EOS Voice Chat system.\n" },
#endif
		{ "DisplayName", "Initialize EOS Voice Chat" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initializes the EOS Voice Chat system." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "InitializeEOSVoiceChat", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::EVIK_Functions_eventInitializeEOSVoiceChat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::EVIK_Functions_eventInitializeEOSVoiceChat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics
	{
		struct EVIK_Functions_eventIsEOSVoiceChatLoggedIn_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventIsEOSVoiceChatLoggedIn_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::NewProp_WorldContextObject_MetaData) };
	void Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventIsEOSVoiceChatLoggedIn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EVIK_Functions_eventIsEOSVoiceChatLoggedIn_Parms), &Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns whether the EOS Voice Chat system is logged-in.\n" },
#endif
		{ "DisplayName", "Is EOS Voice Chat Logged-In?" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the EOS Voice Chat system is logged-in." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "IsEOSVoiceChatLoggedIn", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::EVIK_Functions_eventIsEOSVoiceChatLoggedIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::EVIK_Functions_eventIsEOSVoiceChatLoggedIn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics
	{
		struct EVIK_Functions_eventIsEOSVoiceChatLoggingIn_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventIsEOSVoiceChatLoggingIn_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::NewProp_WorldContextObject_MetaData) };
	void Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventIsEOSVoiceChatLoggingIn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EVIK_Functions_eventIsEOSVoiceChatLoggingIn_Parms), &Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns whether the EOS Voice Chat system is currently logging-in.\n" },
#endif
		{ "DisplayName", "Is EOS Voice Chat Logging-In?" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the EOS Voice Chat system is currently logging-in." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "IsEOSVoiceChatLoggingIn", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::EVIK_Functions_eventIsEOSVoiceChatLoggingIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::EVIK_Functions_eventIsEOSVoiceChatLoggingIn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics
	{
		struct EVIK_Functions_eventIsPlayerMuted_Parms
		{
			const UObject* WorldContextObject;
			FString PlayerName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventIsPlayerMuted_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventIsPlayerMuted_Parms, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_PlayerName_MetaData), Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_PlayerName_MetaData) };
	void Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventIsPlayerMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EVIK_Functions_eventIsPlayerMuted_Parms), &Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Checks if the specified player is muted in EOS Voice Chat.\n" },
#endif
		{ "DisplayName", "Is EOS Voice Player Muted" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the specified player is muted in EOS Voice Chat." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "IsPlayerMuted", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::EVIK_Functions_eventIsPlayerMuted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::EVIK_Functions_eventIsPlayerMuted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics
	{
		struct EVIK_Functions_eventIsVoiceChatConnected_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventIsVoiceChatConnected_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::NewProp_WorldContextObject_MetaData) };
	void Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventIsVoiceChatConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EVIK_Functions_eventIsVoiceChatConnected_Parms), &Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns whether the EOS Voice Chat system is connected.\n" },
#endif
		{ "DisplayName", "Is EOS Voice Chat Connected?" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the EOS Voice Chat system is connected." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "IsVoiceChatConnected", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::EVIK_Functions_eventIsVoiceChatConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::EVIK_Functions_eventIsVoiceChatConnected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics
	{
		struct EVIK_Functions_eventJoinEOSRoom_Parms
		{
			const UObject* WorldContextObject;
			FString VoiceRoomName;
			FString RoomData;
			bool bEnableEcho;
			FScriptDelegate Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VoiceRoomName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoomData;
		static void NewProp_bEnableEcho_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableEcho;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventJoinEOSRoom_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_VoiceRoomName = { "VoiceRoomName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventJoinEOSRoom_Parms, VoiceRoomName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventJoinEOSRoom_Parms, RoomData), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_bEnableEcho_SetBit(void* Obj)
	{
		((EVIK_Functions_eventJoinEOSRoom_Parms*)Obj)->bEnableEcho = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_bEnableEcho = { "bEnableEcho", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EVIK_Functions_eventJoinEOSRoom_Parms), &Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_bEnableEcho_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventJoinEOSRoom_Parms, Result), Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_Result_MetaData) }; // 3673246975
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_VoiceRoomName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_RoomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_bEnableEcho,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Result" },
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Joins the specified voice room.\n" },
#endif
		{ "DisplayName", "Join EOS Voice Room" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Joins the specified voice room." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "JoinEOSRoom", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::EVIK_Functions_eventJoinEOSRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::EVIK_Functions_eventJoinEOSRoom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics
	{
		struct EVIK_Functions_eventLeaveEOSRoom_Parms
		{
			const UObject* WorldContextObject;
			FString VoiceRoomName;
			FScriptDelegate Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VoiceRoomName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventLeaveEOSRoom_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_VoiceRoomName = { "VoiceRoomName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventLeaveEOSRoom_Parms, VoiceRoomName), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventLeaveEOSRoom_Parms, Result), Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_Result_MetaData) }; // 3673246975
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_VoiceRoomName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Result" },
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Leaves the specified voice room.\n" },
#endif
		{ "DisplayName", "Leave EOS Voice Room" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leaves the specified voice room." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "LeaveEOSRoom", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::EVIK_Functions_eventLeaveEOSRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::EVIK_Functions_eventLeaveEOSRoom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics
	{
		struct EVIK_Functions_eventLoggedInUser_Parms
		{
			const UObject* WorldContextObject;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventLoggedInUser_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventLoggedInUser_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the logged-in user's name for the EOS Voice Chat system.\n" },
#endif
		{ "DisplayName", "Get Logged in EOS Voice Chat User" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the logged-in user's name for the EOS Voice Chat system." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "LoggedInUser", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::EVIK_Functions_eventLoggedInUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::EVIK_Functions_eventLoggedInUser_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_LoggedInUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics
	{
		struct EVIK_Functions_eventLoginEOSVoiceChat_Parms
		{
			const UObject* WorldContextObject;
			FString PlayerName;
			FScriptDelegate Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventLoginEOSVoiceChat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventLoginEOSVoiceChat_Parms, PlayerName), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventLoginEOSVoiceChat_Parms, Result), Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_Result_MetaData) }; // 3673246975
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Result" },
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Logs the player into the EOS Voice Chat system.\n" },
#endif
		{ "DisplayName", "Login to EOS Voice Chat" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Logs the player into the EOS Voice Chat system." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "LoginEOSVoiceChat", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::EVIK_Functions_eventLoginEOSVoiceChat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::EVIK_Functions_eventLoginEOSVoiceChat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics
	{
		struct EVIK_Functions_eventLogoutEOSVoiceChat_Parms
		{
			const UObject* WorldContextObject;
			FString PlayerName;
			FScriptDelegate Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventLogoutEOSVoiceChat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventLogoutEOSVoiceChat_Parms, PlayerName), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventLogoutEOSVoiceChat_Parms, Result), Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_Result_MetaData) }; // 3673246975
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Result" },
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Logs the player out of the EOS Voice Chat system.\n" },
#endif
		{ "DisplayName", "Logout from EOS Voice Chat" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Logs the player out of the EOS Voice Chat system." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "LogoutEOSVoiceChat", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::EVIK_Functions_eventLogoutEOSVoiceChat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::EVIK_Functions_eventLogoutEOSVoiceChat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics
	{
		struct EVIK_Functions_eventSetInputMethods_Parms
		{
			const UObject* WorldContextObject;
			FString MethodID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MethodID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventSetInputMethods_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_MethodID = { "MethodID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventSetInputMethods_Parms, MethodID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventSetInputMethods_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EVIK_Functions_eventSetInputMethods_Parms), &Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_MethodID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the EOS Voice Chat input method based on the provided method ID.\n" },
#endif
		{ "DisplayName", "Set EOS Voice Input Method" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the EOS Voice Chat input method based on the provided method ID." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "SetInputMethods", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::EVIK_Functions_eventSetInputMethods_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::EVIK_Functions_eventSetInputMethods_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_SetInputMethods()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics
	{
		struct EVIK_Functions_eventSetOutputMethods_Parms
		{
			const UObject* WorldContextObject;
			FString MethodID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MethodID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventSetOutputMethods_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_MethodID = { "MethodID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventSetOutputMethods_Parms, MethodID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventSetOutputMethods_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EVIK_Functions_eventSetOutputMethods_Parms), &Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_MethodID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the EOS Voice Chat output method based on the provided method ID.\n" },
#endif
		{ "DisplayName", "Set EOS Voice Output Method" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the EOS Voice Chat output method based on the provided method ID." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "SetOutputMethods", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::EVIK_Functions_eventSetOutputMethods_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::EVIK_Functions_eventSetOutputMethods_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics
	{
		struct EVIK_Functions_eventSetPlayerMuted_Parms
		{
			const UObject* WorldContextObject;
			FString PlayerName;
			bool MutePlayer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static void NewProp_MutePlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MutePlayer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventSetPlayerMuted_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventSetPlayerMuted_Parms, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_PlayerName_MetaData), Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_PlayerName_MetaData) };
	void Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_MutePlayer_SetBit(void* Obj)
	{
		((EVIK_Functions_eventSetPlayerMuted_Parms*)Obj)->MutePlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_MutePlayer = { "MutePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EVIK_Functions_eventSetPlayerMuted_Parms), &Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_MutePlayer_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventSetPlayerMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EVIK_Functions_eventSetPlayerMuted_Parms), &Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_MutePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the specified player's mute status in EOS Voice Chat.\n" },
#endif
		{ "DisplayName", "Set EOS Voice Player Muted" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the specified player's mute status in EOS Voice Chat." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "SetPlayerMuted", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::EVIK_Functions_eventSetPlayerMuted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::EVIK_Functions_eventSetPlayerMuted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics
	{
		struct EVIK_Functions_eventSetPlayerVolume_Parms
		{
			const UObject* WorldContextObject;
			FString PlayerName;
			float NewVolume;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVolume;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventSetPlayerVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventSetPlayerVolume_Parms, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_PlayerName_MetaData), Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_PlayerName_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_NewVolume = { "NewVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventSetPlayerVolume_Parms, NewVolume), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventSetPlayerVolume_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EVIK_Functions_eventSetPlayerVolume_Parms), &Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_NewVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the volume for the specified player.\n" },
#endif
		{ "DisplayName", "Set EOS Voice Player Volume" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the volume for the specified player." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "SetPlayerVolume", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::EVIK_Functions_eventSetPlayerVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::EVIK_Functions_eventSetPlayerVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics
	{
		struct EVIK_Functions_eventTransmitToAllRooms_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventTransmitToAllRooms_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::NewProp_WorldContextObject_MetaData) };
	void Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventTransmitToAllRooms_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EVIK_Functions_eventTransmitToAllRooms_Parms), &Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transmits the player's voice to all joined EOS Voice Rooms.\n" },
#endif
		{ "DisplayName", "Transmit Voice To All EOS Voice Rooms" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transmits the player's voice to all joined EOS Voice Rooms." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "TransmitToAllRooms", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::EVIK_Functions_eventTransmitToAllRooms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::EVIK_Functions_eventTransmitToAllRooms_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics
	{
		struct EVIK_Functions_eventTransmitToNoRoom_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventTransmitToNoRoom_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::NewProp_WorldContextObject_MetaData) };
	void Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventTransmitToNoRoom_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EVIK_Functions_eventTransmitToNoRoom_Parms), &Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stops transmitting the player's voice to any EOS Voice Room.\n" },
#endif
		{ "DisplayName", "Transmit Voice To No EOS Voice Room" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops transmitting the player's voice to any EOS Voice Room." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "TransmitToNoRoom", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::EVIK_Functions_eventTransmitToNoRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::EVIK_Functions_eventTransmitToNoRoom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics
	{
		struct EVIK_Functions_eventTransmitToSelectedRoom_Parms
		{
			const UObject* WorldContextObject;
			FString RoomName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoomName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventTransmitToSelectedRoom_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_RoomName = { "RoomName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EVIK_Functions_eventTransmitToSelectedRoom_Parms, RoomName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventTransmitToSelectedRoom_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EVIK_Functions_eventTransmitToSelectedRoom_Parms), &Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_RoomName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transmits the player's voice to a selected EOS Voice Room.\n" },
#endif
		{ "DisplayName", "Transmit Voice To Selected EOS Voice Room" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transmits the player's voice to a selected EOS Voice Room." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "TransmitToSelectedRoom", nullptr, nullptr, Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::EVIK_Functions_eventTransmitToSelectedRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::EVIK_Functions_eventTransmitToSelectedRoom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEVIK_Functions);
	UClass* Z_Construct_UClass_UEVIK_Functions_NoRegister()
	{
		return UEVIK_Functions::StaticClass();
	}
	struct Z_Construct_UClass_UEVIK_Functions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEVIK_Functions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EIKVoiceChat,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEVIK_Functions_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEVIK_Functions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat, "ConnectVoiceChat" }, // 1880601915
		{ &Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken, "EOSRoomToken" }, // 3857454714
		{ &Z_Construct_UFunction_UEVIK_Functions_GetAllRooms, "GetAllRooms" }, // 856459443
		{ &Z_Construct_UFunction_UEVIK_Functions_GetInputMethods, "GetInputMethods" }, // 3049361033
		{ &Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods, "GetOutputMethods" }, // 1730485147
		{ &Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom, "GetPlayersInRoom" }, // 2998907179
		{ &Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume, "GetPlayerVolume" }, // 2204169214
		{ &Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat, "InitializeEOSVoiceChat" }, // 2374635197
		{ &Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggedIn, "IsEOSVoiceChatLoggedIn" }, // 3235653037
		{ &Z_Construct_UFunction_UEVIK_Functions_IsEOSVoiceChatLoggingIn, "IsEOSVoiceChatLoggingIn" }, // 2501189590
		{ &Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted, "IsPlayerMuted" }, // 3546319025
		{ &Z_Construct_UFunction_UEVIK_Functions_IsVoiceChatConnected, "IsVoiceChatConnected" }, // 1728279989
		{ &Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom, "JoinEOSRoom" }, // 1464628430
		{ &Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom, "LeaveEOSRoom" }, // 496761800
		{ &Z_Construct_UFunction_UEVIK_Functions_LoggedInUser, "LoggedInUser" }, // 1847978071
		{ &Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat, "LoginEOSVoiceChat" }, // 128894773
		{ &Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat, "LogoutEOSVoiceChat" }, // 3882430905
		{ &Z_Construct_UFunction_UEVIK_Functions_SetInputMethods, "SetInputMethods" }, // 3409910585
		{ &Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods, "SetOutputMethods" }, // 3047441080
		{ &Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted, "SetPlayerMuted" }, // 1554310978
		{ &Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume, "SetPlayerVolume" }, // 1301118836
		{ &Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms, "TransmitToAllRooms" }, // 1201879096
		{ &Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom, "TransmitToNoRoom" }, // 4088899597
		{ &Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom, "TransmitToSelectedRoom" }, // 2136391075
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEVIK_Functions_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEVIK_Functions_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Functions/EVIK_Functions.h" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEVIK_Functions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEVIK_Functions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEVIK_Functions_Statics::ClassParams = {
		&UEVIK_Functions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEVIK_Functions_Statics::Class_MetaDataParams), Z_Construct_UClass_UEVIK_Functions_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEVIK_Functions()
	{
		if (!Z_Registration_Info_UClass_UEVIK_Functions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEVIK_Functions.OuterSingleton, Z_Construct_UClass_UEVIK_Functions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEVIK_Functions.OuterSingleton;
	}
	template<> EIKVOICECHAT_API UClass* StaticClass<UEVIK_Functions>()
	{
		return UEVIK_Functions::StaticClass();
	}
	UEVIK_Functions::UEVIK_Functions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEVIK_Functions);
	UEVIK_Functions::~UEVIK_Functions() {}
	struct Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEVIK_Functions, UEVIK_Functions::StaticClass, TEXT("UEVIK_Functions"), &Z_Registration_Info_UClass_UEVIK_Functions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEVIK_Functions), 1892157904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_3823797830(TEXT("/Script/EIKVoiceChat"),
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
