// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Store/EIK_GetOffers_AsyncFunction.h"
#include "OnlineSubsystemEIK/Subsystem/EIK_Subsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_GetOffers_AsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetOffers_AsyncFunction();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_NoRegister();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FOffersStruct();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventGetOffers_Delegate_Parms
		{
			TArray<FOffersStruct> Offers;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Offers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature_Statics::NewProp_Offers_Inner = { "Offers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOffersStruct, METADATA_PARAMS(0, nullptr) }; // 2255260913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature_Statics::NewProp_Offers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature_Statics::NewProp_Offers = { "Offers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventGetOffers_Delegate_Parms, Offers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature_Statics::NewProp_Offers_MetaData), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature_Statics::NewProp_Offers_MetaData) }; // 2255260913
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature_Statics::NewProp_Offers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature_Statics::NewProp_Offers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Store/EIK_GetOffers_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "GetOffers_Delegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventGetOffers_Delegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventGetOffers_Delegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGetOffers_Delegate_DelegateWrapper(const FMulticastScriptDelegate& GetOffers_Delegate, TArray<FOffersStruct> const& Offers)
{
	struct _Script_OnlineSubsystemEIK_eventGetOffers_Delegate_Parms
	{
		TArray<FOffersStruct> Offers;
	};
	_Script_OnlineSubsystemEIK_eventGetOffers_Delegate_Parms Parms;
	Parms.Offers=Offers;
	GetOffers_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UEIK_GetOffers_AsyncFunction::execGetEIKOffers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEIK_GetOffers_AsyncFunction**)Z_Param__Result=UEIK_GetOffers_AsyncFunction::GetEIKOffers();
		P_NATIVE_END;
	}
	void UEIK_GetOffers_AsyncFunction::StaticRegisterNativesUEIK_GetOffers_AsyncFunction()
	{
		UClass* Class = UEIK_GetOffers_AsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEIKOffers", &UEIK_GetOffers_AsyncFunction::execGetEIKOffers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEIK_GetOffers_AsyncFunction_GetEIKOffers_Statics
	{
		struct EIK_GetOffers_AsyncFunction_eventGetEIKOffers_Parms
		{
			UEIK_GetOffers_AsyncFunction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_GetOffers_AsyncFunction_GetEIKOffers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_GetOffers_AsyncFunction_eventGetEIKOffers_Parms, ReturnValue), Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_GetOffers_AsyncFunction_GetEIKOffers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetOffers_AsyncFunction_GetEIKOffers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_GetOffers_AsyncFunction_GetEIKOffers_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Store" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09This C++ method gets the offers in the online subsystem using the selected method and sets up a callback function to handle the response.\n\x09""Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/store/\n\x09*/" },
#endif
		{ "DisplayName", "Get EIK Offers" },
		{ "ModuleRelativePath", "AsyncFunctions/Store/EIK_GetOffers_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method gets the offers in the online subsystem using the selected method and sets up a callback function to handle the response.\nDocumentation link: https://betide-studio.gitbook.io/eos-integration-kit/store/" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_GetOffers_AsyncFunction_GetEIKOffers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_GetOffers_AsyncFunction, nullptr, "GetEIKOffers", nullptr, nullptr, Z_Construct_UFunction_UEIK_GetOffers_AsyncFunction_GetEIKOffers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetOffers_AsyncFunction_GetEIKOffers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_GetOffers_AsyncFunction_GetEIKOffers_Statics::EIK_GetOffers_AsyncFunction_eventGetEIKOffers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetOffers_AsyncFunction_GetEIKOffers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_GetOffers_AsyncFunction_GetEIKOffers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetOffers_AsyncFunction_GetEIKOffers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_GetOffers_AsyncFunction_GetEIKOffers_Statics::EIK_GetOffers_AsyncFunction_eventGetEIKOffers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_GetOffers_AsyncFunction_GetEIKOffers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_GetOffers_AsyncFunction_GetEIKOffers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_GetOffers_AsyncFunction);
	UClass* Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_NoRegister()
	{
		return UEIK_GetOffers_AsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics
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
	UObject* (*const Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_GetOffers_AsyncFunction_GetEIKOffers, "GetEIKOffers" }, // 3629264033
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AsyncFunctions/Store/EIK_GetOffers_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Store/EIK_GetOffers_AsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "DisplayName", "Success" },
		{ "ModuleRelativePath", "AsyncFunctions/Store/EIK_GetOffers_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_GetOffers_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::NewProp_OnSuccess_MetaData), Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::NewProp_OnSuccess_MetaData) }; // 3557299906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::NewProp_OnFail_MetaData[] = {
		{ "DisplayName", "Failure" },
		{ "ModuleRelativePath", "AsyncFunctions/Store/EIK_GetOffers_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_GetOffers_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetOffers_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::NewProp_OnFail_MetaData), Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::NewProp_OnFail_MetaData) }; // 3557299906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_GetOffers_AsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::ClassParams = {
		&UEIK_GetOffers_AsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEIK_GetOffers_AsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UEIK_GetOffers_AsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_GetOffers_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_GetOffers_AsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIK_GetOffers_AsyncFunction.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_GetOffers_AsyncFunction>()
	{
		return UEIK_GetOffers_AsyncFunction::StaticClass();
	}
	UEIK_GetOffers_AsyncFunction::UEIK_GetOffers_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_GetOffers_AsyncFunction);
	UEIK_GetOffers_AsyncFunction::~UEIK_GetOffers_AsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Store_EIK_GetOffers_AsyncFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Store_EIK_GetOffers_AsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_GetOffers_AsyncFunction, UEIK_GetOffers_AsyncFunction::StaticClass, TEXT("UEIK_GetOffers_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_GetOffers_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_GetOffers_AsyncFunction), 3335559504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Store_EIK_GetOffers_AsyncFunction_h_3879903785(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Store_EIK_GetOffers_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Store_EIK_GetOffers_AsyncFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
