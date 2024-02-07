// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Sessions/EIK_DestroySession_AsyncFunction.h"
#include "OnlineSubsystemEIK/Subsystem/EIK_Subsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_DestroySession_AsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_DestroySession_AsyncFunction();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_NoRegister();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_DestroySession_Delegate__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKUniqueNetId();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_DestroySession_Delegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_DestroySession_Delegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_DestroySession_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_DestroySession_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "DestroySession_Delegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_DestroySession_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_DestroySession_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_DestroySession_Delegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_DestroySession_Delegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDestroySession_Delegate_DelegateWrapper(const FMulticastScriptDelegate& DestroySession_Delegate)
{
	DestroySession_Delegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UEIK_DestroySession_AsyncFunction::execDestroyEIKSessions)
	{
		P_GET_STRUCT(FEIKUniqueNetId,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEIK_DestroySession_AsyncFunction**)Z_Param__Result=UEIK_DestroySession_AsyncFunction::DestroyEIKSessions(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	void UEIK_DestroySession_AsyncFunction::StaticRegisterNativesUEIK_DestroySession_AsyncFunction()
	{
		UClass* Class = UEIK_DestroySession_AsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyEIKSessions", &UEIK_DestroySession_AsyncFunction::execDestroyEIKSessions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEIK_DestroySession_AsyncFunction_DestroyEIKSessions_Statics
	{
		struct EIK_DestroySession_AsyncFunction_eventDestroyEIKSessions_Parms
		{
			FEIKUniqueNetId PlayerId;
			UEIK_DestroySession_AsyncFunction* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_DestroySession_AsyncFunction_DestroyEIKSessions_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_DestroySession_AsyncFunction_eventDestroyEIKSessions_Parms, PlayerId), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 1627776817
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_DestroySession_AsyncFunction_DestroyEIKSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_DestroySession_AsyncFunction_eventDestroyEIKSessions_Parms, ReturnValue), Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_DestroySession_AsyncFunction_DestroyEIKSessions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_DestroySession_AsyncFunction_DestroyEIKSessions_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_DestroySession_AsyncFunction_DestroyEIKSessions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_DestroySession_AsyncFunction_DestroyEIKSessions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 *This C++ method destroys a session using the EOS SDK and sets up a callback function to handle the destroy session response.\n\x09 *Documentation link: https://eik.betide.studio/multiplayer/sessions/matchmaking-sessions/\n\x09 *For Input Parameters, please refer to the documentation link above.\n\x09 */" },
#endif
		{ "DisplayName", "Destroy EIK Session" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_DestroySession_AsyncFunction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*This C++ method destroys a session using the EOS SDK and sets up a callback function to handle the destroy session response.\n*Documentation link: https://eik.betide.studio/multiplayer/sessions/matchmaking-sessions/\n*For Input Parameters, please refer to the documentation link above." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_DestroySession_AsyncFunction_DestroyEIKSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_DestroySession_AsyncFunction, nullptr, "DestroyEIKSessions", nullptr, nullptr, Z_Construct_UFunction_UEIK_DestroySession_AsyncFunction_DestroyEIKSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_DestroySession_AsyncFunction_DestroyEIKSessions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_DestroySession_AsyncFunction_DestroyEIKSessions_Statics::EIK_DestroySession_AsyncFunction_eventDestroyEIKSessions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_DestroySession_AsyncFunction_DestroyEIKSessions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_DestroySession_AsyncFunction_DestroyEIKSessions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_DestroySession_AsyncFunction_DestroyEIKSessions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_DestroySession_AsyncFunction_DestroyEIKSessions_Statics::EIK_DestroySession_AsyncFunction_eventDestroyEIKSessions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_DestroySession_AsyncFunction_DestroyEIKSessions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_DestroySession_AsyncFunction_DestroyEIKSessions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_DestroySession_AsyncFunction);
	UClass* Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_NoRegister()
	{
		return UEIK_DestroySession_AsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics
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
	UObject* (*const Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_DestroySession_AsyncFunction_DestroyEIKSessions, "DestroyEIKSessions" }, // 2171389075
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Sessions/EIK_DestroySession_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_DestroySession_AsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "DisplayName", "Success" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_DestroySession_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_DestroySession_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_DestroySession_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::NewProp_OnSuccess_MetaData), Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::NewProp_OnSuccess_MetaData) }; // 1334244497
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::NewProp_OnFail_MetaData[] = {
		{ "DisplayName", "Failure" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_DestroySession_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEIK_DestroySession_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_DestroySession_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::NewProp_OnFail_MetaData), Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::NewProp_OnFail_MetaData) }; // 1334244497
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_DestroySession_AsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::ClassParams = {
		&UEIK_DestroySession_AsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEIK_DestroySession_AsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UEIK_DestroySession_AsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_DestroySession_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_DestroySession_AsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIK_DestroySession_AsyncFunction.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_DestroySession_AsyncFunction>()
	{
		return UEIK_DestroySession_AsyncFunction::StaticClass();
	}
	UEIK_DestroySession_AsyncFunction::UEIK_DestroySession_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_DestroySession_AsyncFunction);
	UEIK_DestroySession_AsyncFunction::~UEIK_DestroySession_AsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_DestroySession_AsyncFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_DestroySession_AsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_DestroySession_AsyncFunction, UEIK_DestroySession_AsyncFunction::StaticClass, TEXT("UEIK_DestroySession_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_DestroySession_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_DestroySession_AsyncFunction), 4069259094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_DestroySession_AsyncFunction_h_1331967823(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_DestroySession_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_DestroySession_AsyncFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
