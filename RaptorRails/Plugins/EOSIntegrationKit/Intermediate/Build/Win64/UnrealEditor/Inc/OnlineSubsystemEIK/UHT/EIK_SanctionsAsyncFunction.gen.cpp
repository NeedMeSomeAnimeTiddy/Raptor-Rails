// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_SanctionsAsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SanctionsAsyncFunction();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SanctionsAsyncFunction_NoRegister();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FSanctionsStruct();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SanctionsStruct;
class UScriptStruct* FSanctionsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SanctionsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SanctionsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSanctionsStruct, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("SanctionsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_SanctionsStruct.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FSanctionsStruct>()
{
	return FSanctionsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSanctionsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApiVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ApiVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimePlaced_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_TimePlaced;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeExpires_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_TimeExpires;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReferenceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSanctionsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSanctionsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_ApiVersion_MetaData[] = {
		{ "Category", "EOS Integration Kit | Sanctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** API Version: This will be set to EOS_SANCTIONS_PLAYERSANCTION_API_LATEST. */" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "API Version: This will be set to EOS_SANCTIONS_PLAYERSANCTION_API_LATEST." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_ApiVersion = { "ApiVersion", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSanctionsStruct, ApiVersion), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_ApiVersion_MetaData), Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_ApiVersion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_TimePlaced_MetaData[] = {
		{ "Category", "EOS Integration Kit | Sanctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The POSIX timestamp when the sanction was placed */" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The POSIX timestamp when the sanction was placed" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_TimePlaced = { "TimePlaced", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSanctionsStruct, TimePlaced), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_TimePlaced_MetaData), Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_TimePlaced_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "EOS Integration Kit | Sanctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The action associated with this sanction */" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The action associated with this sanction" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSanctionsStruct, Action), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_Action_MetaData), Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_Action_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_TimeExpires_MetaData[] = {
		{ "Category", "EOS Integration Kit | Sanctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The POSIX timestamp when the sanction will expire. If the sanction is permanent, this will be 0. */" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The POSIX timestamp when the sanction will expire. If the sanction is permanent, this will be 0." },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_TimeExpires = { "TimeExpires", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSanctionsStruct, TimeExpires), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_TimeExpires_MetaData), Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_TimeExpires_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_ReferenceId_MetaData[] = {
		{ "Category", "EOS Integration Kit | Sanctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A unique identifier for this specific sanction */" },
#endif
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A unique identifier for this specific sanction" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_ReferenceId = { "ReferenceId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSanctionsStruct, ReferenceId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_ReferenceId_MetaData), Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_ReferenceId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSanctionsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_ApiVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_TimePlaced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_TimeExpires,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewProp_ReferenceId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSanctionsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		&NewStructOps,
		"SanctionsStruct",
		Z_Construct_UScriptStruct_FSanctionsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSanctionsStruct_Statics::PropPointers),
		sizeof(FSanctionsStruct),
		alignof(FSanctionsStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSanctionsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSanctionsStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSanctionsStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSanctionsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_SanctionsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SanctionsStruct.InnerSingleton, Z_Construct_UScriptStruct_FSanctionsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SanctionsStruct.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventSanctionsDelegate_Parms
		{
			TArray<FSanctionsStruct> Sanctions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sanctions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sanctions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sanctions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::NewProp_Sanctions_Inner = { "Sanctions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSanctionsStruct, METADATA_PARAMS(0, nullptr) }; // 3071610172
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::NewProp_Sanctions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::NewProp_Sanctions = { "Sanctions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventSanctionsDelegate_Parms, Sanctions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::NewProp_Sanctions_MetaData), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::NewProp_Sanctions_MetaData) }; // 3071610172
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::NewProp_Sanctions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::NewProp_Sanctions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "SanctionsDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventSanctionsDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventSanctionsDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSanctionsDelegate_DelegateWrapper(const FMulticastScriptDelegate& SanctionsDelegate, TArray<FSanctionsStruct> const& Sanctions)
{
	struct _Script_OnlineSubsystemEIK_eventSanctionsDelegate_Parms
	{
		TArray<FSanctionsStruct> Sanctions;
	};
	_Script_OnlineSubsystemEIK_eventSanctionsDelegate_Parms Parms;
	Parms.Sanctions=Sanctions;
	SanctionsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UEIK_SanctionsAsyncFunction::execGetEikPlayerSanctionsAsyncFunction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LocalProductUserID);
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEIK_SanctionsAsyncFunction**)Z_Param__Result=UEIK_SanctionsAsyncFunction::GetEikPlayerSanctionsAsyncFunction(Z_Param_LocalProductUserID,Z_Param_TargetProductUserID);
		P_NATIVE_END;
	}
	void UEIK_SanctionsAsyncFunction::StaticRegisterNativesUEIK_SanctionsAsyncFunction()
	{
		UClass* Class = UEIK_SanctionsAsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEikPlayerSanctionsAsyncFunction", &UEIK_SanctionsAsyncFunction::execGetEikPlayerSanctionsAsyncFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics
	{
		struct EIK_SanctionsAsyncFunction_eventGetEikPlayerSanctionsAsyncFunction_Parms
		{
			FString LocalProductUserID;
			FString TargetProductUserID;
			UEIK_SanctionsAsyncFunction* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalProductUserID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetProductUserID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::NewProp_LocalProductUserID = { "LocalProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SanctionsAsyncFunction_eventGetEikPlayerSanctionsAsyncFunction_Parms, LocalProductUserID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::NewProp_TargetProductUserID = { "TargetProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SanctionsAsyncFunction_eventGetEikPlayerSanctionsAsyncFunction_Parms, TargetProductUserID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SanctionsAsyncFunction_eventGetEikPlayerSanctionsAsyncFunction_Parms, ReturnValue), Z_Construct_UClass_UEIK_SanctionsAsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::NewProp_LocalProductUserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::NewProp_TargetProductUserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Others" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09This C++ method gets the logged in user's achievements from the EOS backend.\n\x09""Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/\n\x09*/" },
#endif
		{ "DisplayName", "Get EIK Player Sanctions" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method gets the logged in user's achievements from the EOS backend.\nDocumentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SanctionsAsyncFunction, nullptr, "GetEikPlayerSanctionsAsyncFunction", nullptr, nullptr, Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::EIK_SanctionsAsyncFunction_eventGetEikPlayerSanctionsAsyncFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::EIK_SanctionsAsyncFunction_eventGetEikPlayerSanctionsAsyncFunction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_SanctionsAsyncFunction);
	UClass* Z_Construct_UClass_UEIK_SanctionsAsyncFunction_NoRegister()
	{
		return UEIK_SanctionsAsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_SanctionsAsyncFunction_GetEikPlayerSanctionsAsyncFunction, "GetEikPlayerSanctionsAsyncFunction" }, // 1534354449
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::NewProp_Success_MetaData[] = {
		{ "Category", "EOS Integration Kit | Sanctions" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_SanctionsAsyncFunction, Success), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::NewProp_Success_MetaData), Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::NewProp_Success_MetaData) }; // 2309516517
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::NewProp_Failure_MetaData[] = {
		{ "Category", "EOS Integration Kit | Sanctions" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_SanctionsAsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_SanctionsAsyncFunction, Failure), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_SanctionsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::NewProp_Failure_MetaData), Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::NewProp_Failure_MetaData) }; // 2309516517
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::NewProp_Failure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_SanctionsAsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::ClassParams = {
		&UEIK_SanctionsAsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEIK_SanctionsAsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UEIK_SanctionsAsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_SanctionsAsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_SanctionsAsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIK_SanctionsAsyncFunction.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_SanctionsAsyncFunction>()
	{
		return UEIK_SanctionsAsyncFunction::StaticClass();
	}
	UEIK_SanctionsAsyncFunction::UEIK_SanctionsAsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_SanctionsAsyncFunction);
	UEIK_SanctionsAsyncFunction::~UEIK_SanctionsAsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_SanctionsAsyncFunction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_SanctionsAsyncFunction_h_Statics::ScriptStructInfo[] = {
		{ FSanctionsStruct::StaticStruct, Z_Construct_UScriptStruct_FSanctionsStruct_Statics::NewStructOps, TEXT("SanctionsStruct"), &Z_Registration_Info_UScriptStruct_SanctionsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSanctionsStruct), 3071610172U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_SanctionsAsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_SanctionsAsyncFunction, UEIK_SanctionsAsyncFunction::StaticClass, TEXT("UEIK_SanctionsAsyncFunction"), &Z_Registration_Info_UClass_UEIK_SanctionsAsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_SanctionsAsyncFunction), 2099857628U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_SanctionsAsyncFunction_h_892695893(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_SanctionsAsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_SanctionsAsyncFunction_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_SanctionsAsyncFunction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_SanctionsAsyncFunction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
