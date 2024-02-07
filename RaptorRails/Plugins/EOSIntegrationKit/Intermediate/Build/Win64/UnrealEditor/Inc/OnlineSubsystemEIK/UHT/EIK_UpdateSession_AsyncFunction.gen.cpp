// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Sessions/EIK_UpdateSession_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_UpdateSession_AsyncFunction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_NoRegister();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_UpdateSessionDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_UpdateSessionDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_UpdateSessionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_UpdateSession_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_UpdateSessionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "UpdateSessionDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_UpdateSessionDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_UpdateSessionDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_UpdateSessionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_UpdateSessionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FUpdateSessionDelegate_DelegateWrapper(const FMulticastScriptDelegate& UpdateSessionDelegate)
{
	UpdateSessionDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UEIK_UpdateSession_AsyncFunction::execUpdateEIKSessions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TMAP(FString,FString,Z_Param_SessionSettings);
		P_GET_UBOOL(Z_Param_bShouldAdvertise);
		P_GET_UBOOL(Z_Param_bAllowJoinInProgress);
		P_GET_UBOOL(Z_Param_bAllowInvites);
		P_GET_UBOOL(Z_Param_bUsesPresence);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPublicConnections);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPrivateConnections);
		P_GET_UBOOL(Z_Param_bRefreshOnlineData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEIK_UpdateSession_AsyncFunction**)Z_Param__Result=UEIK_UpdateSession_AsyncFunction::UpdateEIKSessions(Z_Param_WorldContextObject,Z_Param_SessionSettings,Z_Param_bShouldAdvertise,Z_Param_bAllowJoinInProgress,Z_Param_bAllowInvites,Z_Param_bUsesPresence,Z_Param_NumberOfPublicConnections,Z_Param_NumberOfPrivateConnections,Z_Param_bRefreshOnlineData);
		P_NATIVE_END;
	}
	void UEIK_UpdateSession_AsyncFunction::StaticRegisterNativesUEIK_UpdateSession_AsyncFunction()
	{
		UClass* Class = UEIK_UpdateSession_AsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateEIKSessions", &UEIK_UpdateSession_AsyncFunction::execUpdateEIKSessions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics
	{
		struct EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms
		{
			UObject* WorldContextObject;
			TMap<FString,FString> SessionSettings;
			bool bShouldAdvertise;
			bool bAllowJoinInProgress;
			bool bAllowInvites;
			bool bUsesPresence;
			int32 NumberOfPublicConnections;
			int32 NumberOfPrivateConnections;
			bool bRefreshOnlineData;
			UEIK_UpdateSession_AsyncFunction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionSettings_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionSettings_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_SessionSettings;
		static void NewProp_bShouldAdvertise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
		static void NewProp_bAllowJoinInProgress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinInProgress;
		static void NewProp_bAllowInvites_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
		static void NewProp_bUsesPresence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesPresence;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPublicConnections;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPrivateConnections;
		static void NewProp_bRefreshOnlineData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefreshOnlineData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
	{
		((EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms*)Obj)->bShouldAdvertise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms), &Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bAllowJoinInProgress_SetBit(void* Obj)
	{
		((EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms*)Obj)->bAllowJoinInProgress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bAllowJoinInProgress = { "bAllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms), &Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bAllowJoinInProgress_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
	{
		((EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms*)Obj)->bAllowInvites = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms), &Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bUsesPresence_SetBit(void* Obj)
	{
		((EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms*)Obj)->bUsesPresence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bUsesPresence = { "bUsesPresence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms), &Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bUsesPresence_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_NumberOfPublicConnections = { "NumberOfPublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms, NumberOfPublicConnections), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_NumberOfPrivateConnections = { "NumberOfPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms, NumberOfPrivateConnections), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bRefreshOnlineData_SetBit(void* Obj)
	{
		((EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms*)Obj)->bRefreshOnlineData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bRefreshOnlineData = { "bRefreshOnlineData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms), &Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bRefreshOnlineData_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms, ReturnValue), Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_SessionSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_SessionSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_SessionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bShouldAdvertise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bAllowJoinInProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bAllowInvites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bUsesPresence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_NumberOfPublicConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_NumberOfPrivateConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_bRefreshOnlineData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "CPP_Default_bAllowInvites", "true" },
		{ "CPP_Default_bAllowJoinInProgress", "true" },
		{ "CPP_Default_bRefreshOnlineData", "true" },
		{ "CPP_Default_bShouldAdvertise", "true" },
		{ "CPP_Default_bUsesPresence", "false" },
		{ "CPP_Default_NumberOfPrivateConnections", "10" },
		{ "CPP_Default_NumberOfPublicConnections", "10" },
		{ "DisplayName", "Update EIK Session" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_UpdateSession_AsyncFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction, nullptr, "UpdateEIKSessions", nullptr, nullptr, Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::EIK_UpdateSession_AsyncFunction_eventUpdateEIKSessions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_UpdateSession_AsyncFunction);
	UClass* Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_NoRegister()
	{
		return UEIK_UpdateSession_AsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_UpdateSession_AsyncFunction_UpdateEIKSessions, "UpdateEIKSessions" }, // 2122506635
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Sessions/EIK_UpdateSession_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_UpdateSession_AsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_UpdateSession_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_UpdateSession_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_UpdateSessionDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::NewProp_OnSuccess_MetaData), Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::NewProp_OnSuccess_MetaData) }; // 2126335247
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_UpdateSession_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_UpdateSession_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_UpdateSessionDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::NewProp_OnFailure_MetaData), Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::NewProp_OnFailure_MetaData) }; // 2126335247
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_UpdateSession_AsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::ClassParams = {
		&UEIK_UpdateSession_AsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UEIK_UpdateSession_AsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_UpdateSession_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIK_UpdateSession_AsyncFunction.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_UpdateSession_AsyncFunction>()
	{
		return UEIK_UpdateSession_AsyncFunction::StaticClass();
	}
	UEIK_UpdateSession_AsyncFunction::UEIK_UpdateSession_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_UpdateSession_AsyncFunction);
	UEIK_UpdateSession_AsyncFunction::~UEIK_UpdateSession_AsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_UpdateSession_AsyncFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_UpdateSession_AsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_UpdateSession_AsyncFunction, UEIK_UpdateSession_AsyncFunction::StaticClass, TEXT("UEIK_UpdateSession_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_UpdateSession_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_UpdateSession_AsyncFunction), 1978460610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_UpdateSession_AsyncFunction_h_1755229012(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_UpdateSession_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_UpdateSession_AsyncFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
