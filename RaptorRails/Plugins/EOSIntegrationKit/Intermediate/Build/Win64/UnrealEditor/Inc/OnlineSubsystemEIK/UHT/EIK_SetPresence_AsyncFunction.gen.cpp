// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Presence/EIK_SetPresence_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_SetPresence_AsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SetPresence_AsyncFunction();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	DEFINE_FUNCTION(UEIK_SetPresence_AsyncFunction::execSetEOSPresence)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RichPresense);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEIK_SetPresence_AsyncFunction**)Z_Param__Result=UEIK_SetPresence_AsyncFunction::SetEOSPresence(Z_Param_RichPresense);
		P_NATIVE_END;
	}
	void UEIK_SetPresence_AsyncFunction::StaticRegisterNativesUEIK_SetPresence_AsyncFunction()
	{
		UClass* Class = UEIK_SetPresence_AsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetEOSPresence", &UEIK_SetPresence_AsyncFunction::execSetEOSPresence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics
	{
		struct EIK_SetPresence_AsyncFunction_eventSetEOSPresence_Parms
		{
			FString RichPresense;
			UEIK_SetPresence_AsyncFunction* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_RichPresense;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::NewProp_RichPresense = { "RichPresense", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SetPresence_AsyncFunction_eventSetEOSPresence_Parms, RichPresense), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_SetPresence_AsyncFunction_eventSetEOSPresence_Parms, ReturnValue), Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::NewProp_RichPresense,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Presence" },
		{ "DisplayName", "Set EOS Presence" },
		{ "ModuleRelativePath", "AsyncFunctions/Presence/EIK_SetPresence_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_SetPresence_AsyncFunction, nullptr, "SetEOSPresence", nullptr, nullptr, Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::EIK_SetPresence_AsyncFunction_eventSetEOSPresence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::EIK_SetPresence_AsyncFunction_eventSetEOSPresence_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_SetPresence_AsyncFunction);
	UClass* Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_NoRegister()
	{
		return UEIK_SetPresence_AsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_SetPresence_AsyncFunction_SetEOSPresence, "SetEOSPresence" }, // 3678093573
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AsyncFunctions/Presence/EIK_SetPresence_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Presence/EIK_SetPresence_AsyncFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_SetPresence_AsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::ClassParams = {
		&UEIK_SetPresence_AsyncFunction::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEIK_SetPresence_AsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UEIK_SetPresence_AsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_SetPresence_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_SetPresence_AsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIK_SetPresence_AsyncFunction.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_SetPresence_AsyncFunction>()
	{
		return UEIK_SetPresence_AsyncFunction::StaticClass();
	}
	UEIK_SetPresence_AsyncFunction::UEIK_SetPresence_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_SetPresence_AsyncFunction);
	UEIK_SetPresence_AsyncFunction::~UEIK_SetPresence_AsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Presence_EIK_SetPresence_AsyncFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Presence_EIK_SetPresence_AsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_SetPresence_AsyncFunction, UEIK_SetPresence_AsyncFunction::StaticClass, TEXT("UEIK_SetPresence_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_SetPresence_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_SetPresence_AsyncFunction), 1345440394U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Presence_EIK_SetPresence_AsyncFunction_h_314129193(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Presence_EIK_SetPresence_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Presence_EIK_SetPresence_AsyncFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
