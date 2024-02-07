// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/Public/EIK_EngineSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_EngineSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_EngineSubsystem();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_EngineSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	void UEIK_EngineSubsystem::StaticRegisterNativesUEIK_EngineSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_EngineSubsystem);
	UClass* Z_Construct_UClass_UEIK_EngineSubsystem_NoRegister()
	{
		return UEIK_EngineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEIK_EngineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEIK_EngineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_EngineSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_EngineSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EIK_EngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/EIK_EngineSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIK_EngineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_EngineSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_EngineSubsystem_Statics::ClassParams = {
		&UEIK_EngineSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_EngineSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_EngineSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEIK_EngineSubsystem()
	{
		if (!Z_Registration_Info_UClass_UEIK_EngineSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_EngineSubsystem.OuterSingleton, Z_Construct_UClass_UEIK_EngineSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIK_EngineSubsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_EngineSubsystem>()
	{
		return UEIK_EngineSubsystem::StaticClass();
	}
	UEIK_EngineSubsystem::UEIK_EngineSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_EngineSubsystem);
	UEIK_EngineSubsystem::~UEIK_EngineSubsystem() {}
	struct Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIK_EngineSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIK_EngineSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_EngineSubsystem, UEIK_EngineSubsystem::StaticClass, TEXT("UEIK_EngineSubsystem"), &Z_Registration_Info_UClass_UEIK_EngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_EngineSubsystem), 1485594780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIK_EngineSubsystem_h_4266729394(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIK_EngineSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIK_EngineSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
