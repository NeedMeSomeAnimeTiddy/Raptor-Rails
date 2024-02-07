// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/TitleStorage/EIK_GetTitleData_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_GetTitleData_AsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_NoRegister();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventGetTitleDataResult_Parms
		{
			bool bWasSuccess;
			TArray<uint8> Data;
		};
		static void NewProp_bWasSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventGetTitleDataResult_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventGetTitleDataResult_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventGetTitleDataResult_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::NewProp_Data_MetaData), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::NewProp_bWasSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/TitleStorage/EIK_GetTitleData_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "GetTitleDataResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventGetTitleDataResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventGetTitleDataResult_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGetTitleDataResult_DelegateWrapper(const FMulticastScriptDelegate& GetTitleDataResult, bool bWasSuccess, TArray<uint8> const& Data)
{
	struct _Script_OnlineSubsystemEIK_eventGetTitleDataResult_Parms
	{
		bool bWasSuccess;
		TArray<uint8> Data;
	};
	_Script_OnlineSubsystemEIK_eventGetTitleDataResult_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.Data=Data;
	GetTitleDataResult.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UEIK_GetTitleData_AsyncFunction::execGetTitleData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEIK_GetTitleData_AsyncFunction**)Z_Param__Result=UEIK_GetTitleData_AsyncFunction::GetTitleData(Z_Param_FileName);
		P_NATIVE_END;
	}
	void UEIK_GetTitleData_AsyncFunction::StaticRegisterNativesUEIK_GetTitleData_AsyncFunction()
	{
		UClass* Class = UEIK_GetTitleData_AsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTitleData", &UEIK_GetTitleData_AsyncFunction::execGetTitleData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEIK_GetTitleData_AsyncFunction_GetTitleData_Statics
	{
		struct EIK_GetTitleData_AsyncFunction_eventGetTitleData_Parms
		{
			FString FileName;
			UEIK_GetTitleData_AsyncFunction* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_GetTitleData_AsyncFunction_GetTitleData_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetTitleData_AsyncFunction_eventGetTitleData_Parms, FileName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_GetTitleData_AsyncFunction_GetTitleData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetTitleData_AsyncFunction_eventGetTitleData_Parms, ReturnValue), Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_GetTitleData_AsyncFunction_GetTitleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetTitleData_AsyncFunction_GetTitleData_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetTitleData_AsyncFunction_GetTitleData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_GetTitleData_AsyncFunction_GetTitleData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Storage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09This C++ method gets the player data in the online subsystem using the selected method and sets up a callback function to handle the response.\n\x09""Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/playerdata/\n\x09""For Input Parameters, please refer to the documentation link above.\n\x09*/" },
#endif
		{ "DisplayName", "Get EIK Title Data" },
		{ "ModuleRelativePath", "AsyncFunctions/TitleStorage/EIK_GetTitleData_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method gets the player data in the online subsystem using the selected method and sets up a callback function to handle the response.\nDocumentation link: https://betide-studio.gitbook.io/eos-integration-kit/playerdata/\nFor Input Parameters, please refer to the documentation link above." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_GetTitleData_AsyncFunction_GetTitleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction, nullptr, "GetTitleData", nullptr, nullptr, Z_Construct_UFunction_UEIK_GetTitleData_AsyncFunction_GetTitleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetTitleData_AsyncFunction_GetTitleData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_GetTitleData_AsyncFunction_GetTitleData_Statics::EIK_GetTitleData_AsyncFunction_eventGetTitleData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetTitleData_AsyncFunction_GetTitleData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_GetTitleData_AsyncFunction_GetTitleData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetTitleData_AsyncFunction_GetTitleData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_GetTitleData_AsyncFunction_GetTitleData_Statics::EIK_GetTitleData_AsyncFunction_eventGetTitleData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_GetTitleData_AsyncFunction_GetTitleData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_GetTitleData_AsyncFunction_GetTitleData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_GetTitleData_AsyncFunction);
	UClass* Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_NoRegister()
	{
		return UEIK_GetTitleData_AsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics
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
	UObject* (*const Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_GetTitleData_AsyncFunction_GetTitleData, "GetTitleData" }, // 534191681
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AsyncFunctions/TitleStorage/EIK_GetTitleData_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/TitleStorage/EIK_GetTitleData_AsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/TitleStorage/EIK_GetTitleData_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_GetTitleData_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::NewProp_OnSuccess_MetaData), Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::NewProp_OnSuccess_MetaData) }; // 938012350
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/TitleStorage/EIK_GetTitleData_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_GetTitleData_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetTitleDataResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::NewProp_OnFail_MetaData), Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::NewProp_OnFail_MetaData) }; // 938012350
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_GetTitleData_AsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::ClassParams = {
		&UEIK_GetTitleData_AsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UEIK_GetTitleData_AsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_GetTitleData_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIK_GetTitleData_AsyncFunction.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_GetTitleData_AsyncFunction>()
	{
		return UEIK_GetTitleData_AsyncFunction::StaticClass();
	}
	UEIK_GetTitleData_AsyncFunction::UEIK_GetTitleData_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_GetTitleData_AsyncFunction);
	UEIK_GetTitleData_AsyncFunction::~UEIK_GetTitleData_AsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_TitleStorage_EIK_GetTitleData_AsyncFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_TitleStorage_EIK_GetTitleData_AsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_GetTitleData_AsyncFunction, UEIK_GetTitleData_AsyncFunction::StaticClass, TEXT("UEIK_GetTitleData_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_GetTitleData_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_GetTitleData_AsyncFunction), 1159767280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_TitleStorage_EIK_GetTitleData_AsyncFunction_h_1621277727(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_TitleStorage_EIK_GetTitleData_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_TitleStorage_EIK_GetTitleData_AsyncFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
