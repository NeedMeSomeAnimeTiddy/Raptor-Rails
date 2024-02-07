// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Sessions/EIK_FindSessions_AsyncFunction.h"
#include "OnlineSubsystemEIK/Subsystem/EIK_Subsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_FindSessions_AsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_FindSessions_AsyncFunction();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_NoRegister();
	ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType();
	ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKAttribute();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FSessionFindStruct();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventFindSession_Delegate_Parms
		{
			TArray<FSessionFindStruct> SessionResults;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionResults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionResults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SessionResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature_Statics::NewProp_SessionResults_Inner = { "SessionResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionFindStruct, METADATA_PARAMS(0, nullptr) }; // 3001502516
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature_Statics::NewProp_SessionResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature_Statics::NewProp_SessionResults = { "SessionResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventFindSession_Delegate_Parms, SessionResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature_Statics::NewProp_SessionResults_MetaData), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature_Statics::NewProp_SessionResults_MetaData) }; // 3001502516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature_Statics::NewProp_SessionResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature_Statics::NewProp_SessionResults,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_FindSessions_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "FindSession_Delegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventFindSession_Delegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventFindSession_Delegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FFindSession_Delegate_DelegateWrapper(const FMulticastScriptDelegate& FindSession_Delegate, TArray<FSessionFindStruct> const& SessionResults)
{
	struct _Script_OnlineSubsystemEIK_eventFindSession_Delegate_Parms
	{
		TArray<FSessionFindStruct> SessionResults;
	};
	_Script_OnlineSubsystemEIK_eventFindSession_Delegate_Parms Parms;
	Parms.SessionResults=SessionResults;
	FindSession_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UEIK_FindSessions_AsyncFunction::execFindEIKSessions)
	{
		P_GET_TMAP(FName,FEIKAttribute,Z_Param_SessionSettings);
		P_GET_ENUM(EMatchType,Z_Param_MatchType);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_ENUM(ERegionInfo,Z_Param_RegionToSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEIK_FindSessions_AsyncFunction**)Z_Param__Result=UEIK_FindSessions_AsyncFunction::FindEIKSessions(Z_Param_SessionSettings,EMatchType(Z_Param_MatchType),Z_Param_MaxResults,ERegionInfo(Z_Param_RegionToSearch));
		P_NATIVE_END;
	}
	void UEIK_FindSessions_AsyncFunction::StaticRegisterNativesUEIK_FindSessions_AsyncFunction()
	{
		UClass* Class = UEIK_FindSessions_AsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindEIKSessions", &UEIK_FindSessions_AsyncFunction::execFindEIKSessions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics
	{
		struct EIK_FindSessions_AsyncFunction_eventFindEIKSessions_Parms
		{
			TMap<FName,FEIKAttribute> SessionSettings;
			EMatchType MatchType;
			int32 MaxResults;
			ERegionInfo RegionToSearch;
			UEIK_FindSessions_AsyncFunction* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionSettings_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_SessionSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RegionToSearch_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RegionToSearch;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FEIKAttribute, METADATA_PARAMS(0, nullptr) }; // 4110417661
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FindSessions_AsyncFunction_eventFindEIKSessions_Parms, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4110417661
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FindSessions_AsyncFunction_eventFindEIKSessions_Parms, MatchType), Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType, METADATA_PARAMS(0, nullptr) }; // 396764989
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FindSessions_AsyncFunction_eventFindEIKSessions_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::NewProp_RegionToSearch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::NewProp_RegionToSearch = { "RegionToSearch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FindSessions_AsyncFunction_eventFindEIKSessions_Parms, RegionToSearch), Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo, METADATA_PARAMS(0, nullptr) }; // 722458386
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_FindSessions_AsyncFunction_eventFindEIKSessions_Parms, ReturnValue), Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::NewProp_SessionSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::NewProp_SessionSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::NewProp_SessionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::NewProp_MatchType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::NewProp_MatchType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::NewProp_MaxResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::NewProp_RegionToSearch_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::NewProp_RegionToSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09This C++ method searches for sessions in an online subsystem using the selected method and sets up a callback function to handle the search response.\n\x09""Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/sessions/\n\x09""For Input Parameters, please refer to the documentation link above.\n\x09*/" },
#endif
		{ "CPP_Default_MatchType", "MT_Lobby" },
		{ "CPP_Default_MaxResults", "15" },
		{ "CPP_Default_RegionToSearch", "RE_NoSelection" },
		{ "DisplayName", "Find EIK Sessions" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_FindSessions_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method searches for sessions in an online subsystem using the selected method and sets up a callback function to handle the search response.\nDocumentation link: https://betide-studio.gitbook.io/eos-integration-kit/sessions/\nFor Input Parameters, please refer to the documentation link above." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_FindSessions_AsyncFunction, nullptr, "FindEIKSessions", nullptr, nullptr, Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::EIK_FindSessions_AsyncFunction_eventFindEIKSessions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::EIK_FindSessions_AsyncFunction_eventFindEIKSessions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_FindSessions_AsyncFunction);
	UClass* Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_NoRegister()
	{
		return UEIK_FindSessions_AsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics
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
	UObject* (*const Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_FindSessions_AsyncFunction_FindEIKSessions, "FindEIKSessions" }, // 800348957
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AsyncFunctions/Sessions/EIK_FindSessions_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_FindSessions_AsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "DisplayName", "Success" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_FindSessions_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_FindSessions_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::NewProp_OnSuccess_MetaData), Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::NewProp_OnSuccess_MetaData) }; // 574287612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::NewProp_OnFail_MetaData[] = {
		{ "DisplayName", "Failure" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_FindSessions_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_FindSessions_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_FindSession_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::NewProp_OnFail_MetaData), Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::NewProp_OnFail_MetaData) }; // 574287612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_FindSessions_AsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::ClassParams = {
		&UEIK_FindSessions_AsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEIK_FindSessions_AsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UEIK_FindSessions_AsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_FindSessions_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_FindSessions_AsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIK_FindSessions_AsyncFunction.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_FindSessions_AsyncFunction>()
	{
		return UEIK_FindSessions_AsyncFunction::StaticClass();
	}
	UEIK_FindSessions_AsyncFunction::UEIK_FindSessions_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_FindSessions_AsyncFunction);
	UEIK_FindSessions_AsyncFunction::~UEIK_FindSessions_AsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_FindSessions_AsyncFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_FindSessions_AsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_FindSessions_AsyncFunction, UEIK_FindSessions_AsyncFunction::StaticClass, TEXT("UEIK_FindSessions_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_FindSessions_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_FindSessions_AsyncFunction), 1598822786U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_FindSessions_AsyncFunction_h_1175717593(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_FindSessions_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_FindSessions_AsyncFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
