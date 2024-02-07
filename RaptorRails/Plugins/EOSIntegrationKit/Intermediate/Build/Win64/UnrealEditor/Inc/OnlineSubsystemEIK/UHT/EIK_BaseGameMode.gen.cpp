// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/Public/EIK_BaseGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_BaseGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_AEIK_BaseGameMode();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_AEIK_BaseGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	void AEIK_BaseGameMode::StaticRegisterNativesAEIK_BaseGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEIK_BaseGameMode);
	UClass* Z_Construct_UClass_AEIK_BaseGameMode_NoRegister()
	{
		return AEIK_BaseGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AEIK_BaseGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEIK_BaseGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEIK_BaseGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEIK_BaseGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EIK_BaseGameMode.h" },
		{ "ModuleRelativePath", "Public/EIK_BaseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEIK_BaseGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEIK_BaseGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEIK_BaseGameMode_Statics::ClassParams = {
		&AEIK_BaseGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEIK_BaseGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AEIK_BaseGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEIK_BaseGameMode()
	{
		if (!Z_Registration_Info_UClass_AEIK_BaseGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEIK_BaseGameMode.OuterSingleton, Z_Construct_UClass_AEIK_BaseGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEIK_BaseGameMode.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<AEIK_BaseGameMode>()
	{
		return AEIK_BaseGameMode::StaticClass();
	}
	AEIK_BaseGameMode::AEIK_BaseGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEIK_BaseGameMode);
	AEIK_BaseGameMode::~AEIK_BaseGameMode() {}
	struct Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIK_BaseGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIK_BaseGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEIK_BaseGameMode, AEIK_BaseGameMode::StaticClass, TEXT("AEIK_BaseGameMode"), &Z_Registration_Info_UClass_AEIK_BaseGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEIK_BaseGameMode), 1728155113U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIK_BaseGameMode_h_2305734319(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIK_BaseGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIK_BaseGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
