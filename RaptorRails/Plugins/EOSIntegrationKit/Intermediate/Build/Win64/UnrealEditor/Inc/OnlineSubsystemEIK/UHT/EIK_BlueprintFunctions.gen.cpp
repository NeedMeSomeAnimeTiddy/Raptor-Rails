// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Extra/EIK_BlueprintFunctions.h"
#include "OnlineSubsystemEIK/Subsystem/EIK_Subsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_BlueprintFunctions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_BlueprintFunctions();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_BlueprintFunctions_NoRegister();
	ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus();
	ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType();
	ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ELoginTypes();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKUniqueNetId();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FSessionFindStruct();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventOnResponseFromSanctions_Parms
		{
			bool bWasSuccess;
		};
		static void NewProp_bWasSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventOnResponseFromSanctions_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventOnResponseFromSanctions_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::NewProp_bWasSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "OnResponseFromSanctions__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnResponseFromSanctions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnResponseFromSanctions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnResponseFromSanctions_DelegateWrapper(const FScriptDelegate& OnResponseFromSanctions, bool bWasSuccess)
{
	struct _Script_OnlineSubsystemEIK_eventOnResponseFromSanctions_Parms
	{
		bool bWasSuccess;
	};
	_Script_OnlineSubsystemEIK_eventOnResponseFromSanctions_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	OnResponseFromSanctions.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventOnResponseFromEpicForAccessToken_Parms
		{
			bool bWasSuccess;
			FString AccessToken;
		};
		static void NewProp_bWasSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccessToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AccessToken;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventOnResponseFromEpicForAccessToken_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventOnResponseFromEpicForAccessToken_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::NewProp_AccessToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::NewProp_AccessToken = { "AccessToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventOnResponseFromEpicForAccessToken_Parms, AccessToken), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::NewProp_AccessToken_MetaData), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::NewProp_AccessToken_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::NewProp_bWasSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::NewProp_AccessToken,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "OnResponseFromEpicForAccessToken__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnResponseFromEpicForAccessToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventOnResponseFromEpicForAccessToken_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnResponseFromEpicForAccessToken_DelegateWrapper(const FScriptDelegate& OnResponseFromEpicForAccessToken, bool bWasSuccess, const FString& AccessToken)
{
	struct _Script_OnlineSubsystemEIK_eventOnResponseFromEpicForAccessToken_Parms
	{
		bool bWasSuccess;
		FString AccessToken;
	};
	_Script_OnlineSubsystemEIK_eventOnResponseFromEpicForAccessToken_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.AccessToken=AccessToken;
	OnResponseFromEpicForAccessToken.ProcessDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEOSSanctionType;
	static UEnum* EEOSSanctionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEOSSanctionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEOSSanctionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EEOSSanctionType"));
		}
		return Z_Registration_Info_UEnum_EEOSSanctionType.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EEOSSanctionType>()
	{
		return EEOSSanctionType_StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType_Statics::Enumerators[] = {
		{ "EEOSSanctionType::IncorrectSanction", (int64)EEOSSanctionType::IncorrectSanction },
		{ "EEOSSanctionType::CompromisedAccount", (int64)EEOSSanctionType::CompromisedAccount },
		{ "EEOSSanctionType::UnfairPunishment", (int64)EEOSSanctionType::UnfairPunishment },
		{ "EEOSSanctionType::AppealForForgiveness", (int64)EEOSSanctionType::AppealForForgiveness },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType_Statics::Enum_MetaDataParams[] = {
		{ "AppealForForgiveness.Name", "EEOSSanctionType::AppealForForgiveness" },
		{ "BlueprintType", "true" },
		{ "CompromisedAccount.Name", "EEOSSanctionType::CompromisedAccount" },
		{ "IncorrectSanction.Name", "EEOSSanctionType::IncorrectSanction" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "UnfairPunishment.Name", "EEOSSanctionType::UnfairPunishment" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		"EEOSSanctionType",
		"EEOSSanctionType",
		Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType()
	{
		if (!Z_Registration_Info_UEnum_EEOSSanctionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEOSSanctionType.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEOSSanctionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEIK_LoginStatus;
	static UEnum* EEIK_LoginStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEIK_LoginStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEIK_LoginStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EEIK_LoginStatus"));
		}
		return Z_Registration_Info_UEnum_EEIK_LoginStatus.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EEIK_LoginStatus>()
	{
		return EEIK_LoginStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::Enumerators[] = {
		{ "EEIK_LoginStatus::NotLoggedIn", (int64)EEIK_LoginStatus::NotLoggedIn },
		{ "EEIK_LoginStatus::UsingLocalProfile", (int64)EEIK_LoginStatus::UsingLocalProfile },
		{ "EEIK_LoginStatus::LoggedIn", (int64)EEIK_LoginStatus::LoggedIn },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LoggedIn.Comment", "/** Player has been validated by the platform specific authentication service */" },
		{ "LoggedIn.Name", "EEIK_LoginStatus::LoggedIn" },
		{ "LoggedIn.ToolTip", "Player has been validated by the platform specific authentication service" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "NotLoggedIn.Comment", "/** Player has not logged in or chosen a local profile */" },
		{ "NotLoggedIn.Name", "EEIK_LoginStatus::NotLoggedIn" },
		{ "NotLoggedIn.ToolTip", "Player has not logged in or chosen a local profile" },
		{ "UsingLocalProfile.Comment", "/** Player is using a local profile but is not logged in */" },
		{ "UsingLocalProfile.Name", "EEIK_LoginStatus::UsingLocalProfile" },
		{ "UsingLocalProfile.ToolTip", "Player is using a local profile but is not logged in" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		"EEIK_LoginStatus",
		"EEIK_LoginStatus",
		Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus()
	{
		if (!Z_Registration_Info_UEnum_EEIK_LoginStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEIK_LoginStatus.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEIK_LoginStatus.InnerSingleton;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execRequestEOSAccessToken)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Response);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEIK_BlueprintFunctions::RequestEOSAccessToken(FOnResponseFromEpicForAccessToken(Z_Param_Out_Response));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execMakeSanctionAppeal)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AccessToken);
		P_GET_ENUM(EEOSSanctionType,Z_Param_Reason);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnResponseFromSanctions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEIK_BlueprintFunctions::MakeSanctionAppeal(Z_Param_AccessToken,EEOSSanctionType(Z_Param_Reason),FOnResponseFromSanctions(Z_Param_Out_OnResponseFromSanctions));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetCurrentPort)
	{
		P_GET_OBJECT(AGameModeBase,Z_Param_CurrentGameMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEIK_BlueprintFunctions::GetCurrentPort(Z_Param_CurrentGameMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execInitialize_EIK_For_Friends)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::Initialize_EIK_For_Friends(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execIsValidSession)
	{
		P_GET_STRUCT(FSessionFindStruct,Z_Param_Session);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::IsValidSession(Z_Param_Session);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetEOSSDKVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEIK_BlueprintFunctions::GetEOSSDKVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetUserUniqueID)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEIKUniqueNetId*)Z_Param__Result=UEIK_BlueprintFunctions::GetUserUniqueID(Z_Param_PlayerController,Z_Param_Out_bIsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execSaveGameObjectToByteArray)
	{
		P_GET_OBJECT(USaveGame,Z_Param_DataToConvert);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UEIK_BlueprintFunctions::SaveGameObjectToByteArray(Z_Param_DataToConvert);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execByteArrayToSaveGameObject)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DataToConvert);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USaveGame**)Z_Param__Result=UEIK_BlueprintFunctions::ByteArrayToSaveGameObject(Z_Param_Out_DataToConvert);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execStringToByteArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DataToConvert);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UEIK_BlueprintFunctions::StringToByteArray(Z_Param_DataToConvert);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execByteArrayToString)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DataToConvert);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEIK_BlueprintFunctions::ByteArrayToString(Z_Param_Out_DataToConvert);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetActivePlatformSubsystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELoginTypes*)Z_Param__Result=UEIK_BlueprintFunctions::GetActivePlatformSubsystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetActiveSubsystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UEIK_BlueprintFunctions::GetActiveSubsystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execIsEIKActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::IsEIKActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGenerateSessionCode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CodeLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEIK_BlueprintFunctions::GenerateSessionCode(Z_Param_CodeLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetLoginStatus)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEIK_LoginStatus*)Z_Param__Result=UEIK_BlueprintFunctions::GetLoginStatus(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetPlayerNickname)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEIK_BlueprintFunctions::GetPlayerNickname(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execIsInSession)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_GET_STRUCT(FEIKUniqueNetId,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::IsInSession(Z_Param_SessionName,Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execEndSession)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::EndSession(Z_Param_SessionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execUnRegisterPlayer)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_GET_STRUCT(FEIKUniqueNetId,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::UnRegisterPlayer(Z_Param_SessionName,Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execRegisterPlayer)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_GET_STRUCT(FEIKUniqueNetId,Z_Param_PlayerId);
		P_GET_UBOOL(Z_Param_bWasInvited);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::RegisterPlayer(Z_Param_SessionName,Z_Param_PlayerId,Z_Param_bWasInvited);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execStartSession)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::StartSession(Z_Param_SessionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execShowFriendsList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::ShowFriendsList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetProductUserID)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEIK_BlueprintFunctions::GetProductUserID(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetEpicAccountId)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEIK_BlueprintFunctions::GetEpicAccountId(Z_Param_Context);
		P_NATIVE_END;
	}
	void UEIK_BlueprintFunctions::StaticRegisterNativesUEIK_BlueprintFunctions()
	{
		UClass* Class = UEIK_BlueprintFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ByteArrayToSaveGameObject", &UEIK_BlueprintFunctions::execByteArrayToSaveGameObject },
			{ "ByteArrayToString", &UEIK_BlueprintFunctions::execByteArrayToString },
			{ "EndSession", &UEIK_BlueprintFunctions::execEndSession },
			{ "GenerateSessionCode", &UEIK_BlueprintFunctions::execGenerateSessionCode },
			{ "GetActivePlatformSubsystem", &UEIK_BlueprintFunctions::execGetActivePlatformSubsystem },
			{ "GetActiveSubsystem", &UEIK_BlueprintFunctions::execGetActiveSubsystem },
			{ "GetCurrentPort", &UEIK_BlueprintFunctions::execGetCurrentPort },
			{ "GetEOSSDKVersion", &UEIK_BlueprintFunctions::execGetEOSSDKVersion },
			{ "GetEpicAccountId", &UEIK_BlueprintFunctions::execGetEpicAccountId },
			{ "GetLoginStatus", &UEIK_BlueprintFunctions::execGetLoginStatus },
			{ "GetPlayerNickname", &UEIK_BlueprintFunctions::execGetPlayerNickname },
			{ "GetProductUserID", &UEIK_BlueprintFunctions::execGetProductUserID },
			{ "GetUserUniqueID", &UEIK_BlueprintFunctions::execGetUserUniqueID },
			{ "Initialize_EIK_For_Friends", &UEIK_BlueprintFunctions::execInitialize_EIK_For_Friends },
			{ "IsEIKActive", &UEIK_BlueprintFunctions::execIsEIKActive },
			{ "IsInSession", &UEIK_BlueprintFunctions::execIsInSession },
			{ "IsValidSession", &UEIK_BlueprintFunctions::execIsValidSession },
			{ "MakeSanctionAppeal", &UEIK_BlueprintFunctions::execMakeSanctionAppeal },
			{ "RegisterPlayer", &UEIK_BlueprintFunctions::execRegisterPlayer },
			{ "RequestEOSAccessToken", &UEIK_BlueprintFunctions::execRequestEOSAccessToken },
			{ "SaveGameObjectToByteArray", &UEIK_BlueprintFunctions::execSaveGameObjectToByteArray },
			{ "ShowFriendsList", &UEIK_BlueprintFunctions::execShowFriendsList },
			{ "StartSession", &UEIK_BlueprintFunctions::execStartSession },
			{ "StringToByteArray", &UEIK_BlueprintFunctions::execStringToByteArray },
			{ "UnRegisterPlayer", &UEIK_BlueprintFunctions::execUnRegisterPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics
	{
		struct EIK_BlueprintFunctions_eventByteArrayToSaveGameObject_Parms
		{
			TArray<uint8> DataToConvert;
			USaveGame* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataToConvert_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataToConvert_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToConvert;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::NewProp_DataToConvert_Inner = { "DataToConvert", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::NewProp_DataToConvert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::NewProp_DataToConvert = { "DataToConvert", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventByteArrayToSaveGameObject_Parms, DataToConvert), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::NewProp_DataToConvert_MetaData), Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::NewProp_DataToConvert_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventByteArrayToSaveGameObject_Parms, ReturnValue), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::NewProp_DataToConvert_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::NewProp_DataToConvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra || Conversions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert a TArray<uint8> to a SaveGame object.\n// The TArray<uint8> is deserialized to construct the SaveGame object.\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert a TArray<uint8> to a SaveGame object.\nThe TArray<uint8> is deserialized to construct the SaveGame object." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "ByteArrayToSaveGameObject", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::EIK_BlueprintFunctions_eventByteArrayToSaveGameObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::EIK_BlueprintFunctions_eventByteArrayToSaveGameObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics
	{
		struct EIK_BlueprintFunctions_eventByteArrayToString_Parms
		{
			TArray<uint8> DataToConvert;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataToConvert_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataToConvert_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToConvert;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::NewProp_DataToConvert_Inner = { "DataToConvert", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::NewProp_DataToConvert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::NewProp_DataToConvert = { "DataToConvert", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventByteArrayToString_Parms, DataToConvert), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::NewProp_DataToConvert_MetaData), Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::NewProp_DataToConvert_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventByteArrayToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::NewProp_DataToConvert_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::NewProp_DataToConvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra || Conversions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert a TArray<uint8> to a FString using Base64 encoding.\n// This is useful for converting binary data to a human-readable string format.\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert a TArray<uint8> to a FString using Base64 encoding.\nThis is useful for converting binary data to a human-readable string format." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "ByteArrayToString", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::EIK_BlueprintFunctions_eventByteArrayToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::EIK_BlueprintFunctions_eventByteArrayToString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics
	{
		struct EIK_BlueprintFunctions_eventEndSession_Parms
		{
			FName SessionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventEndSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIK_BlueprintFunctions_eventEndSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventEndSession_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for ending lobbies and sessions\n" },
#endif
		{ "DisplayName", "End EIK Session" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for ending lobbies and sessions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "EndSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::EIK_BlueprintFunctions_eventEndSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::EIK_BlueprintFunctions_eventEndSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics
	{
		struct EIK_BlueprintFunctions_eventGenerateSessionCode_Parms
		{
			int32 CodeLength;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CodeLength;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::NewProp_CodeLength = { "CodeLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGenerateSessionCode_Parms, CodeLength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGenerateSessionCode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::NewProp_CodeLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generate a session code of the specified length.\n// This function returns a randomly generated alphanumeric session code.\n// The 'CodeLength' parameter determines the length of the generated code (default: 9).\n" },
#endif
		{ "CPP_Default_CodeLength", "9" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate a session code of the specified length.\nThis function returns a randomly generated alphanumeric session code.\nThe 'CodeLength' parameter determines the length of the generated code (default: 9)." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GenerateSessionCode", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::EIK_BlueprintFunctions_eventGenerateSessionCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::EIK_BlueprintFunctions_eventGenerateSessionCode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActivePlatformSubsystem_Statics
	{
		struct EIK_BlueprintFunctions_eventGetActivePlatformSubsystem_Parms
		{
			ELoginTypes ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActivePlatformSubsystem_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActivePlatformSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetActivePlatformSubsystem_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_ELoginTypes, METADATA_PARAMS(0, nullptr) }; // 713274251
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActivePlatformSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActivePlatformSubsystem_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActivePlatformSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActivePlatformSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the active platform's login type for EOS subsystem.\n// This function returns the active platform's login type (e.g., Epic, Steam) as an ELoginTypes enum.\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the active platform's login type for EOS subsystem.\nThis function returns the active platform's login type (e.g., Epic, Steam) as an ELoginTypes enum." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActivePlatformSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetActivePlatformSubsystem", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActivePlatformSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActivePlatformSubsystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActivePlatformSubsystem_Statics::EIK_BlueprintFunctions_eventGetActivePlatformSubsystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActivePlatformSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActivePlatformSubsystem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActivePlatformSubsystem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActivePlatformSubsystem_Statics::EIK_BlueprintFunctions_eventGetActivePlatformSubsystem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActivePlatformSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActivePlatformSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics
	{
		struct EIK_BlueprintFunctions_eventGetActiveSubsystem_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetActiveSubsystem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the active EOS subsystem name.\n// This function returns the name of the active EOS subsystem as a FName.\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the active EOS subsystem name.\nThis function returns the name of the active EOS subsystem as a FName." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetActiveSubsystem", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::EIK_BlueprintFunctions_eventGetActiveSubsystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::EIK_BlueprintFunctions_eventGetActiveSubsystem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics
	{
		struct EIK_BlueprintFunctions_eventGetCurrentPort_Parms
		{
			AGameModeBase* CurrentGameMode;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentGameMode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::NewProp_CurrentGameMode = { "CurrentGameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetCurrentPort_Parms, CurrentGameMode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetCurrentPort_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::NewProp_CurrentGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetCurrentPort", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::EIK_BlueprintFunctions_eventGetCurrentPort_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::EIK_BlueprintFunctions_eventGetCurrentPort_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics
	{
		struct EIK_BlueprintFunctions_eventGetEOSSDKVersion_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetEOSSDKVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "DisplayName", "EOS SDK Version" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetEOSSDKVersion", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::EIK_BlueprintFunctions_eventGetEOSSDKVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::EIK_BlueprintFunctions_eventGetEOSSDKVersion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics
	{
		struct EIK_BlueprintFunctions_eventGetEpicAccountId_Parms
		{
			UObject* Context;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetEpicAccountId_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetEpicAccountId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetEpicAccountId", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::EIK_BlueprintFunctions_eventGetEpicAccountId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::EIK_BlueprintFunctions_eventGetEpicAccountId_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics
	{
		struct EIK_BlueprintFunctions_eventGetLoginStatus_Parms
		{
			int32 LocalUserNum;
			EEIK_LoginStatus ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_LocalUserNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetLoginStatus_Parms, LocalUserNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_LocalUserNum_MetaData), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_LocalUserNum_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetLoginStatus_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus, METADATA_PARAMS(0, nullptr) }; // 3575382360
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for getting the login status of a player from an online subsystem.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/extra-functions/getloginstatus\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for getting the login status of a player from an online subsystem.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/extra-functions/getloginstatus" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetLoginStatus", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::EIK_BlueprintFunctions_eventGetLoginStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::EIK_BlueprintFunctions_eventGetLoginStatus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics
	{
		struct EIK_BlueprintFunctions_eventGetPlayerNickname_Parms
		{
			int32 LocalUserNum;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::NewProp_LocalUserNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetPlayerNickname_Parms, LocalUserNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::NewProp_LocalUserNum_MetaData), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::NewProp_LocalUserNum_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetPlayerNickname_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for getting the nickname of a player from an online subsystem.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/extra-functions/getplayernickname\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for getting the nickname of a player from an online subsystem.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/extra-functions/getplayernickname" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetPlayerNickname", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::EIK_BlueprintFunctions_eventGetPlayerNickname_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::EIK_BlueprintFunctions_eventGetPlayerNickname_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics
	{
		struct EIK_BlueprintFunctions_eventGetProductUserID_Parms
		{
			UObject* Context;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetProductUserID_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetProductUserID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetProductUserID", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::EIK_BlueprintFunctions_eventGetProductUserID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::EIK_BlueprintFunctions_eventGetProductUserID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics
	{
		struct EIK_BlueprintFunctions_eventGetUserUniqueID_Parms
		{
			const APlayerController* PlayerController;
			bool bIsValid;
			FEIKUniqueNetId ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetUserUniqueID_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::NewProp_PlayerController_MetaData), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::NewProp_PlayerController_MetaData) };
	void Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((EIK_BlueprintFunctions_eventGetUserUniqueID_Parms*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventGetUserUniqueID_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetUserUniqueID_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 1627776817
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for getting the User Unique NetID\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/extra-functions/get-useruniqueid\n" },
#endif
		{ "DisplayName", "Get User Unique NetID" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for getting the User Unique NetID\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/extra-functions/get-useruniqueid" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetUserUniqueID", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::EIK_BlueprintFunctions_eventGetUserUniqueID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::EIK_BlueprintFunctions_eventGetUserUniqueID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends_Statics
	{
		struct EIK_BlueprintFunctions_eventInitialize_EIK_For_Friends_Parms
		{
			APlayerController* PlayerController;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventInitialize_EIK_For_Friends_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIK_BlueprintFunctions_eventInitialize_EIK_For_Friends_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventInitialize_EIK_For_Friends_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "Initialize_EIK_For_Friends", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends_Statics::EIK_BlueprintFunctions_eventInitialize_EIK_For_Friends_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends_Statics::EIK_BlueprintFunctions_eventInitialize_EIK_For_Friends_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics
	{
		struct EIK_BlueprintFunctions_eventIsEIKActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIK_BlueprintFunctions_eventIsEIKActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventIsEIKActive_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if EOS (Epic Online Services) is active or not.\n// This function returns true if EOS is active, false otherwise.\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if EOS (Epic Online Services) is active or not.\nThis function returns true if EOS is active, false otherwise." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "IsEIKActive", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::EIK_BlueprintFunctions_eventIsEIKActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::EIK_BlueprintFunctions_eventIsEIKActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics
	{
		struct EIK_BlueprintFunctions_eventIsInSession_Parms
		{
			FName SessionName;
			FEIKUniqueNetId PlayerId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventIsInSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventIsInSession_Parms, PlayerId), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 1627776817
	void Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIK_BlueprintFunctions_eventIsInSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventIsInSession_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for checking if user is in a lobby or session\n" },
#endif
		{ "DisplayName", "Is In EIK Session" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for checking if user is in a lobby or session" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "IsInSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::EIK_BlueprintFunctions_eventIsInSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::EIK_BlueprintFunctions_eventIsInSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics
	{
		struct EIK_BlueprintFunctions_eventIsValidSession_Parms
		{
			FSessionFindStruct Session;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Session;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::NewProp_Session = { "Session", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventIsValidSession_Parms, Session), Z_Construct_UScriptStruct_FSessionFindStruct, METADATA_PARAMS(0, nullptr) }; // 3001502516
	void Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIK_BlueprintFunctions_eventIsValidSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventIsValidSession_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::NewProp_Session,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "IsValidSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::EIK_BlueprintFunctions_eventIsValidSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::EIK_BlueprintFunctions_eventIsValidSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics
	{
		struct EIK_BlueprintFunctions_eventMakeSanctionAppeal_Parms
		{
			FString AccessToken;
			EEOSSanctionType Reason;
			FScriptDelegate OnResponseFromSanctions;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AccessToken;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Reason;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnResponseFromSanctions_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponseFromSanctions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::NewProp_AccessToken = { "AccessToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventMakeSanctionAppeal_Parms, AccessToken), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventMakeSanctionAppeal_Parms, Reason), Z_Construct_UEnum_OnlineSubsystemEIK_EEOSSanctionType, METADATA_PARAMS(0, nullptr) }; // 3888968399
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::NewProp_OnResponseFromSanctions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::NewProp_OnResponseFromSanctions = { "OnResponseFromSanctions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventMakeSanctionAppeal_Parms, OnResponseFromSanctions), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromSanctions__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::NewProp_OnResponseFromSanctions_MetaData), Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::NewProp_OnResponseFromSanctions_MetaData) }; // 1516367697
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::NewProp_AccessToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::NewProp_Reason_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::NewProp_Reason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::NewProp_OnResponseFromSanctions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "MakeSanctionAppeal", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::EIK_BlueprintFunctions_eventMakeSanctionAppeal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::EIK_BlueprintFunctions_eventMakeSanctionAppeal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics
	{
		struct EIK_BlueprintFunctions_eventRegisterPlayer_Parms
		{
			FName SessionName;
			FEIKUniqueNetId PlayerId;
			bool bWasInvited;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static void NewProp_bWasInvited_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasInvited;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventRegisterPlayer_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventRegisterPlayer_Parms, PlayerId), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 1627776817
	void Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_bWasInvited_SetBit(void* Obj)
	{
		((EIK_BlueprintFunctions_eventRegisterPlayer_Parms*)Obj)->bWasInvited = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_bWasInvited = { "bWasInvited", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventRegisterPlayer_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_bWasInvited_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIK_BlueprintFunctions_eventRegisterPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventRegisterPlayer_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_bWasInvited,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for registering players in lobbies and sessions\n" },
#endif
		{ "CPP_Default_bWasInvited", "false" },
		{ "DisplayName", "Register EIK Player In Session" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for registering players in lobbies and sessions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "RegisterPlayer", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::EIK_BlueprintFunctions_eventRegisterPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::EIK_BlueprintFunctions_eventRegisterPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics
	{
		struct EIK_BlueprintFunctions_eventRequestEOSAccessToken_Parms
		{
			FScriptDelegate Response;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventRequestEOSAccessToken_Parms, Response), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_OnResponseFromEpicForAccessToken__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::NewProp_Response_MetaData), Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::NewProp_Response_MetaData) }; // 3078777238
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "DisplayName", "Request EOS Access Token" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "RequestEOSAccessToken", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::EIK_BlueprintFunctions_eventRequestEOSAccessToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::EIK_BlueprintFunctions_eventRequestEOSAccessToken_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics
	{
		struct EIK_BlueprintFunctions_eventSaveGameObjectToByteArray_Parms
		{
			USaveGame* DataToConvert;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataToConvert;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::NewProp_DataToConvert = { "DataToConvert", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventSaveGameObjectToByteArray_Parms, DataToConvert), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventSaveGameObjectToByteArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::NewProp_DataToConvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra || Conversions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert a SaveGame object to a TArray<uint8>.\n// The SaveGame object is serialized into a binary data array (TArray<uint8>).\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert a SaveGame object to a TArray<uint8>.\nThe SaveGame object is serialized into a binary data array (TArray<uint8>)." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "SaveGameObjectToByteArray", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::EIK_BlueprintFunctions_eventSaveGameObjectToByteArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::EIK_BlueprintFunctions_eventSaveGameObjectToByteArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics
	{
		struct EIK_BlueprintFunctions_eventShowFriendsList_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIK_BlueprintFunctions_eventShowFriendsList_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventShowFriendsList_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Friends" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "ShowFriendsList", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::EIK_BlueprintFunctions_eventShowFriendsList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::EIK_BlueprintFunctions_eventShowFriendsList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics
	{
		struct EIK_BlueprintFunctions_eventStartSession_Parms
		{
			FName SessionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventStartSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIK_BlueprintFunctions_eventStartSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventStartSession_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for starting lobbies and sessions\n" },
#endif
		{ "DisplayName", "Start EIK Session" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for starting lobbies and sessions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "StartSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::EIK_BlueprintFunctions_eventStartSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::EIK_BlueprintFunctions_eventStartSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics
	{
		struct EIK_BlueprintFunctions_eventStringToByteArray_Parms
		{
			FString DataToConvert;
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataToConvert_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataToConvert;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::NewProp_DataToConvert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::NewProp_DataToConvert = { "DataToConvert", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventStringToByteArray_Parms, DataToConvert), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::NewProp_DataToConvert_MetaData), Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::NewProp_DataToConvert_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventStringToByteArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::NewProp_DataToConvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra || Conversions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert an FString to a TArray<uint8> using Base64 decoding.\n// This is useful for converting a string back to its original binary data representation.\n" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert an FString to a TArray<uint8> using Base64 decoding.\nThis is useful for converting a string back to its original binary data representation." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "StringToByteArray", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::EIK_BlueprintFunctions_eventStringToByteArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::EIK_BlueprintFunctions_eventStringToByteArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics
	{
		struct EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms
		{
			FName SessionName;
			FEIKUniqueNetId PlayerId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms, PlayerId), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 1627776817
	void Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for unregistering players from lobbies and sessions\n" },
#endif
		{ "DisplayName", "Unregister EIK Player In Session" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for unregistering players from lobbies and sessions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "UnRegisterPlayer", nullptr, nullptr, Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_BlueprintFunctions);
	UClass* Z_Construct_UClass_UEIK_BlueprintFunctions_NoRegister()
	{
		return UEIK_BlueprintFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UEIK_BlueprintFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToSaveGameObject, "ByteArrayToSaveGameObject" }, // 1208749782
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_ByteArrayToString, "ByteArrayToString" }, // 4143310301
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession, "EndSession" }, // 2021281232
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode, "GenerateSessionCode" }, // 1582479809
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActivePlatformSubsystem, "GetActivePlatformSubsystem" }, // 2004309275
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetActiveSubsystem, "GetActiveSubsystem" }, // 3407710232
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetCurrentPort, "GetCurrentPort" }, // 435534818
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEOSSDKVersion, "GetEOSSDKVersion" }, // 511488660
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId, "GetEpicAccountId" }, // 11265679
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus, "GetLoginStatus" }, // 3734171961
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname, "GetPlayerNickname" }, // 1197080363
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID, "GetProductUserID" }, // 3727000651
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetUserUniqueID, "GetUserUniqueID" }, // 465880461
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_Initialize_EIK_For_Friends, "Initialize_EIK_For_Friends" }, // 928490557
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_IsEIKActive, "IsEIKActive" }, // 2608426616
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_IsInSession, "IsInSession" }, // 3752085676
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_IsValidSession, "IsValidSession" }, // 2052353698
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_MakeSanctionAppeal, "MakeSanctionAppeal" }, // 3380652186
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer, "RegisterPlayer" }, // 2077840858
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_RequestEOSAccessToken, "RequestEOSAccessToken" }, // 3303879618
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_SaveGameObjectToByteArray, "SaveGameObjectToByteArray" }, // 1007699878
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList, "ShowFriendsList" }, // 1858429553
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession, "StartSession" }, // 2258824804
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_StringToByteArray, "StringToByteArray" }, // 2918993720
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer, "UnRegisterPlayer" }, // 1407159090
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_BlueprintFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::ClassParams = {
		&UEIK_BlueprintFunctions::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEIK_BlueprintFunctions()
	{
		if (!Z_Registration_Info_UClass_UEIK_BlueprintFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_BlueprintFunctions.OuterSingleton, Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIK_BlueprintFunctions.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_BlueprintFunctions>()
	{
		return UEIK_BlueprintFunctions::StaticClass();
	}
	UEIK_BlueprintFunctions::UEIK_BlueprintFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_BlueprintFunctions);
	UEIK_BlueprintFunctions::~UEIK_BlueprintFunctions() {}
	struct Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics::EnumInfo[] = {
		{ EEOSSanctionType_StaticEnum, TEXT("EEOSSanctionType"), &Z_Registration_Info_UEnum_EEOSSanctionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3888968399U) },
		{ EEIK_LoginStatus_StaticEnum, TEXT("EEIK_LoginStatus"), &Z_Registration_Info_UEnum_EEIK_LoginStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3575382360U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_BlueprintFunctions, UEIK_BlueprintFunctions::StaticClass, TEXT("UEIK_BlueprintFunctions"), &Z_Registration_Info_UClass_UEIK_BlueprintFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_BlueprintFunctions), 478101172U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_446448039(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
