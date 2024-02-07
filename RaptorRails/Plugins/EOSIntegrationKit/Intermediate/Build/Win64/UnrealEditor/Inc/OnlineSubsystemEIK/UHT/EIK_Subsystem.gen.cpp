// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/Subsystem/EIK_Subsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "FindSessionsCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Subsystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Subsystem();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Subsystem_NoRegister();
	ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType();
	ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType();
	ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Stats();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKAttribute();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKUniqueNetId();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FFileListStruct();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FOffersStruct();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FSessionFindStruct();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEIKAttributeType;
	static UEnum* EEIKAttributeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEIKAttributeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEIKAttributeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EEIKAttributeType"));
		}
		return Z_Registration_Info_UEnum_EEIKAttributeType.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EEIKAttributeType>()
	{
		return EEIKAttributeType_StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType_Statics::Enumerators[] = {
		{ "String", (int64)String },
		{ "Bool", (int64)Bool },
		{ "Integer", (int64)Integer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bool.Name", "Bool" },
		{ "Integer.Name", "Integer" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
		{ "String.Name", "String" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		"EEIKAttributeType",
		"EEIKAttributeType",
		Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType()
	{
		if (!Z_Registration_Info_UEnum_EEIKAttributeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEIKAttributeType.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEIKAttributeType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIKAttribute;
class UScriptStruct* FEIKAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIKAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIKAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIKAttribute, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIKAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_EIKAttribute.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIKAttribute>()
{
	return FEIKAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEIKAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[];
#endif
		static void NewProp_BoolValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIKAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIKAttribute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_AttributeType_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_AttributeType = { "AttributeType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIKAttribute, AttributeType), Z_Construct_UEnum_OnlineSubsystemEIK_EEIKAttributeType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_AttributeType_MetaData), Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_AttributeType_MetaData) }; // 3941579087
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_StringValue_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIKAttribute, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_StringValue_MetaData), Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_StringValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_BoolValue_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_BoolValue_SetBit(void* Obj)
	{
		((FEIKAttribute*)Obj)->BoolValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEIKAttribute), &Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_BoolValue_MetaData), Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_BoolValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_IntValue_MetaData[] = {
		{ "Category", "EOS Integration Kit" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIKAttribute, IntValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_IntValue_MetaData), Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_IntValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIKAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_AttributeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_StringValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_BoolValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewProp_IntValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIKAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		&NewStructOps,
		"EIKAttribute",
		Z_Construct_UScriptStruct_FEIKAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKAttribute_Statics::PropPointers),
		sizeof(FEIKAttribute),
		alignof(FEIKAttribute),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIKAttribute_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKAttribute_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEIKAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_EIKAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIKAttribute.InnerSingleton, Z_Construct_UScriptStruct_FEIKAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EIKAttribute.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OffersStruct;
class UScriptStruct* FOffersStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OffersStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OffersStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOffersStruct, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("OffersStruct"));
	}
	return Z_Registration_Info_UScriptStruct_OffersStruct.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FOffersStruct>()
{
	return FOffersStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOffersStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LongDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_LongDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegularPriceText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_RegularPriceText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegularPrice_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_RegularPrice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriceText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PriceText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumericPrice_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_NumericPrice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseDate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReleaseDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpirationDate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpirationDate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOffersStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOffersStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOffersStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ItemID_MetaData), Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ItemID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ItemName_MetaData), Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ItemName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_LongDescription_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_LongDescription = { "LongDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, LongDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_LongDescription_MetaData), Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_LongDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_RegularPriceText_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_RegularPriceText = { "RegularPriceText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, RegularPriceText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_RegularPriceText_MetaData), Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_RegularPriceText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_RegularPrice_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_RegularPrice = { "RegularPrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, RegularPrice), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_RegularPrice_MetaData), Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_RegularPrice_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_PriceText_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_PriceText = { "PriceText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, PriceText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_PriceText_MetaData), Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_PriceText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_NumericPrice_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_NumericPrice = { "NumericPrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, NumericPrice), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_NumericPrice_MetaData), Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_NumericPrice_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ReleaseDate_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ReleaseDate = { "ReleaseDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, ReleaseDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ReleaseDate_MetaData), Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ReleaseDate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ExpirationDate_MetaData[] = {
		{ "Category", "EIK Nodes" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ExpirationDate = { "ExpirationDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOffersStruct, ExpirationDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ExpirationDate_MetaData), Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ExpirationDate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOffersStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_LongDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_RegularPriceText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_RegularPrice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_PriceText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_NumericPrice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ReleaseDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffersStruct_Statics::NewProp_ExpirationDate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOffersStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		&NewStructOps,
		"OffersStruct",
		Z_Construct_UScriptStruct_FOffersStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffersStruct_Statics::PropPointers),
		sizeof(FOffersStruct),
		alignof(FOffersStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffersStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOffersStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffersStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOffersStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_OffersStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OffersStruct.InnerSingleton, Z_Construct_UScriptStruct_FOffersStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OffersStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SessionFindStruct;
class UScriptStruct* FSessionFindStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SessionFindStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SessionFindStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionFindStruct, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("SessionFindStruct"));
	}
	return Z_Registration_Info_UScriptStruct_SessionFindStruct.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FSessionFindStruct>()
{
	return FSessionFindStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSessionFindStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionSettings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SessionSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNumberOfPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentNumberOfPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDedicatedServer_MetaData[];
#endif
		static void NewProp_bIsDedicatedServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDedicatedServer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionFindStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionFindStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionResult_MetaData[] = {
		{ "Category", "EOS Struct" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionResult = { "SessionResult", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionFindStruct, SessionResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionResult_MetaData), Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionResult_MetaData) }; // 3738885261
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FEIKAttribute, METADATA_PARAMS(0, nullptr) }; // 4110417661
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionSettings_MetaData[] = {
		{ "Category", "EOS Struct" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionFindStruct, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionSettings_MetaData), Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionSettings_MetaData) }; // 4110417661
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionName_MetaData[] = {
		{ "Category", "EOS Struct" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionFindStruct, SessionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionName_MetaData), Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_CurrentNumberOfPlayers_MetaData[] = {
		{ "Category", "EOS Struct" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_CurrentNumberOfPlayers = { "CurrentNumberOfPlayers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionFindStruct, CurrentNumberOfPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_CurrentNumberOfPlayers_MetaData), Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_CurrentNumberOfPlayers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_MaxNumberOfPlayers_MetaData[] = {
		{ "Category", "EOS Struct" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_MaxNumberOfPlayers = { "MaxNumberOfPlayers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionFindStruct, MaxNumberOfPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_MaxNumberOfPlayers_MetaData), Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_MaxNumberOfPlayers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_bIsDedicatedServer_MetaData[] = {
		{ "Category", "EOS Struct" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_bIsDedicatedServer_SetBit(void* Obj)
	{
		((FSessionFindStruct*)Obj)->bIsDedicatedServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_bIsDedicatedServer = { "bIsDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSessionFindStruct), &Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_bIsDedicatedServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_bIsDedicatedServer_MetaData), Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_bIsDedicatedServer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionFindStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_CurrentNumberOfPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_MaxNumberOfPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewProp_bIsDedicatedServer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionFindStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		&NewStructOps,
		"SessionFindStruct",
		Z_Construct_UScriptStruct_FSessionFindStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionFindStruct_Statics::PropPointers),
		sizeof(FSessionFindStruct),
		alignof(FSessionFindStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionFindStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSessionFindStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionFindStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSessionFindStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_SessionFindStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SessionFindStruct.InnerSingleton, Z_Construct_UScriptStruct_FSessionFindStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SessionFindStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FileListStruct;
class UScriptStruct* FFileListStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FileListStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FileListStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFileListStruct, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("FileListStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FileListStruct.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FFileListStruct>()
{
	return FFileListStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFileListStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Hash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HashType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HashType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DLName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DLName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_iChunkID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_iChunkID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalStorageIds_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalStorageIds_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalStorageIds_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExternalStorageIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileListStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFileListStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFileListStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_Hash_MetaData[] = {
		{ "Category", "EOS Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hash value, if applicable, of the given file contents */" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash value, if applicable, of the given file contents" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileListStruct, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_Hash_MetaData), Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_Hash_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_HashType_MetaData[] = {
		{ "Category", "EOS Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The hash algorithm used to sign this file */" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The hash algorithm used to sign this file" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_HashType = { "HashType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileListStruct, HashType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_HashType_MetaData), Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_HashType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_DLName_MetaData[] = {
		{ "Category", "EOS Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Filename as downloaded */" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filename as downloaded" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_DLName = { "DLName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileListStruct, DLName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_DLName_MetaData), Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_DLName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "EOS Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Logical filename, maps to the downloaded filename */" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Logical filename, maps to the downloaded filename" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileListStruct, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_FileName_MetaData), Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_FileName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_FileSize_MetaData[] = {
		{ "Category", "EOS Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** File size */" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "File size" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileListStruct, FileSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_FileSize_MetaData), Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_FileSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_URL_MetaData[] = {
		{ "Category", "EOS Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The full URL to download the file if it is stored in a CDN or separate host site */" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The full URL to download the file if it is stored in a CDN or separate host site" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileListStruct, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_URL_MetaData), Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_URL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_iChunkID_MetaData[] = {
		{ "Category", "EOS Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The chunk id this file represents */" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The chunk id this file represents" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_iChunkID = { "iChunkID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileListStruct, iChunkID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_iChunkID_MetaData), Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_iChunkID_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_ExternalStorageIds_ValueProp = { "ExternalStorageIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_ExternalStorageIds_Key_KeyProp = { "ExternalStorageIds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_ExternalStorageIds_MetaData[] = {
		{ "Category", "EOS Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointers to externally-accessible representations of this file */" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointers to externally-accessible representations of this file" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_ExternalStorageIds = { "ExternalStorageIds", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileListStruct, ExternalStorageIds), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_ExternalStorageIds_MetaData), Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_ExternalStorageIds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFileListStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_Hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_HashType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_DLName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_FileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_iChunkID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_ExternalStorageIds_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_ExternalStorageIds_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileListStruct_Statics::NewProp_ExternalStorageIds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFileListStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		&NewStructOps,
		"FileListStruct",
		Z_Construct_UScriptStruct_FFileListStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileListStruct_Statics::PropPointers),
		sizeof(FFileListStruct),
		alignof(FFileListStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileListStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFileListStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileListStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFileListStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_FileListStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FileListStruct.InnerSingleton, Z_Construct_UScriptStruct_FFileListStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FileListStruct.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERegionInfo;
	static UEnum* ERegionInfo_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERegionInfo.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERegionInfo.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("ERegionInfo"));
		}
		return Z_Registration_Info_UEnum_ERegionInfo.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<ERegionInfo>()
	{
		return ERegionInfo_StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo_Statics::Enumerators[] = {
		{ "ERegionInfo::RE_NoSelection", (int64)ERegionInfo::RE_NoSelection },
		{ "ERegionInfo::RE_Asia", (int64)ERegionInfo::RE_Asia },
		{ "ERegionInfo::RE_NorthAmerica", (int64)ERegionInfo::RE_NorthAmerica },
		{ "ERegionInfo::RE_SouthAmerica", (int64)ERegionInfo::RE_SouthAmerica },
		{ "ERegionInfo::RE_Africa", (int64)ERegionInfo::RE_Africa },
		{ "ERegionInfo::RE_Europe", (int64)ERegionInfo::RE_Europe },
		{ "ERegionInfo::RE_Australia", (int64)ERegionInfo::RE_Australia },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
		{ "RE_Africa.DisplayName", "Africa" },
		{ "RE_Africa.Name", "ERegionInfo::RE_Africa" },
		{ "RE_Asia.DisplayName", "Asia" },
		{ "RE_Asia.Name", "ERegionInfo::RE_Asia" },
		{ "RE_Australia.DisplayName", "Australia" },
		{ "RE_Australia.Name", "ERegionInfo::RE_Australia" },
		{ "RE_Europe.DisplayName", "Europe" },
		{ "RE_Europe.Name", "ERegionInfo::RE_Europe" },
		{ "RE_NorthAmerica.DisplayName", "North America" },
		{ "RE_NorthAmerica.Name", "ERegionInfo::RE_NorthAmerica" },
		{ "RE_NoSelection.DisplayName", "No Selection" },
		{ "RE_NoSelection.Name", "ERegionInfo::RE_NoSelection" },
		{ "RE_SouthAmerica.DisplayName", "South America" },
		{ "RE_SouthAmerica.Name", "ERegionInfo::RE_SouthAmerica" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		"ERegionInfo",
		"ERegionInfo",
		Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo()
	{
		if (!Z_Registration_Info_UEnum_ERegionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERegionInfo.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERegionInfo.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMatchType;
	static UEnum* EMatchType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMatchType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMatchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EMatchType"));
		}
		return Z_Registration_Info_UEnum_EMatchType.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EMatchType>()
	{
		return EMatchType_StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType_Statics::Enumerators[] = {
		{ "EMatchType::MT_MatchMakingSession", (int64)EMatchType::MT_MatchMakingSession },
		{ "EMatchType::MT_Lobby", (int64)EMatchType::MT_Lobby },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
		{ "MT_Lobby.DisplayName", "Lobby Session" },
		{ "MT_Lobby.Name", "EMatchType::MT_Lobby" },
		{ "MT_MatchMakingSession.DisplayName", "Matchmaking Session" },
		{ "MT_MatchMakingSession.Name", "EMatchType::MT_MatchMakingSession" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		"EMatchType",
		"EMatchType",
		Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType()
	{
		if (!Z_Registration_Info_UEnum_EMatchType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMatchType.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMatchType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIKUniqueNetId;
class UScriptStruct* FEIKUniqueNetId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIKUniqueNetId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIKUniqueNetId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIKUniqueNetId, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIKUniqueNetId"));
	}
	return Z_Registration_Info_UScriptStruct_EIKUniqueNetId.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIKUniqueNetId>()
{
	return FEIKUniqueNetId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEIKUniqueNetId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIKUniqueNetId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Love you VaRest for this :D\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Love you VaRest for this :D" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FEIKUniqueNetId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIKUniqueNetId>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIKUniqueNetId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		&NewStructOps,
		"EIKUniqueNetId",
		nullptr,
		0,
		sizeof(FEIKUniqueNetId),
		alignof(FEIKUniqueNetId),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKUniqueNetId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIKUniqueNetId_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEIKUniqueNetId()
	{
		if (!Z_Registration_Info_UScriptStruct_EIKUniqueNetId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIKUniqueNetId.InnerSingleton, Z_Construct_UScriptStruct_FEIKUniqueNetId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EIKUniqueNetId.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_Stats;
class UScriptStruct* FEIK_Stats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_Stats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_Stats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_Stats, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_Stats"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_Stats.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_Stats>()
{
	return FEIK_Stats::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEIK_Stats_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatsName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StatsName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatsValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StatsValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIK_Stats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEIK_Stats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_Stats>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIK_Stats_Statics::NewProp_StatsName_MetaData[] = {
		{ "Category", "EIK Struct" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Stats_Statics::NewProp_StatsName = { "StatsName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Stats, StatsName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Stats_Statics::NewProp_StatsName_MetaData), Z_Construct_UScriptStruct_FEIK_Stats_Statics::NewProp_StatsName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIK_Stats_Statics::NewProp_StatsValue_MetaData[] = {
		{ "Category", "EIK Struct" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_Stats_Statics::NewProp_StatsValue = { "StatsValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEIK_Stats, StatsValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Stats_Statics::NewProp_StatsValue_MetaData), Z_Construct_UScriptStruct_FEIK_Stats_Statics::NewProp_StatsValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_Stats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Stats_Statics::NewProp_StatsName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_Stats_Statics::NewProp_StatsValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_Stats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		&NewStructOps,
		"EIK_Stats",
		Z_Construct_UScriptStruct_FEIK_Stats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Stats_Statics::PropPointers),
		sizeof(FEIK_Stats),
		alignof(FEIK_Stats),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Stats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEIK_Stats_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_Stats_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEIK_Stats()
	{
		if (!Z_Registration_Info_UScriptStruct_EIK_Stats.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_Stats.InnerSingleton, Z_Construct_UScriptStruct_FEIK_Stats_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EIK_Stats.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventBP_Login_Callback_Parms
		{
			bool bWasSuccess;
			FString Error;
		};
		static void NewProp_bWasSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventBP_Login_Callback_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_Login_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_Login_Callback_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::NewProp_Error_MetaData), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::NewProp_Error_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Delegates for callbacks in BP\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates for callbacks in BP" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_Login_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_Login_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_Login_Callback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBP_Login_Callback_DelegateWrapper(const FScriptDelegate& BP_Login_Callback, bool bWasSuccess, const FString& Error)
{
	struct _Script_OnlineSubsystemEIK_eventBP_Login_Callback_Parms
	{
		bool bWasSuccess;
		FString Error;
	};
	_Script_OnlineSubsystemEIK_eventBP_Login_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.Error=Error;
	BP_Login_Callback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventBP_Logout_Callback_Parms
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
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventBP_Logout_Callback_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_Logout_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_Logout_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_Logout_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_Logout_Callback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBP_Logout_Callback_DelegateWrapper(const FScriptDelegate& BP_Logout_Callback, bool bWasSuccess)
{
	struct _Script_OnlineSubsystemEIK_eventBP_Logout_Callback_Parms
	{
		bool bWasSuccess;
	};
	_Script_OnlineSubsystemEIK_eventBP_Logout_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	BP_Logout_Callback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventBP_CreateSession_Callback_Parms
		{
			bool bWasSuccess;
			FName SessionName;
		};
		static void NewProp_bWasSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventBP_CreateSession_Callback_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_CreateSession_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::NewProp_SessionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_CreateSession_Callback_Parms, SessionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::NewProp_SessionName_MetaData), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::NewProp_SessionName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::NewProp_SessionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_CreateSession_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_CreateSession_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_CreateSession_Callback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBP_CreateSession_Callback_DelegateWrapper(const FScriptDelegate& BP_CreateSession_Callback, bool bWasSuccess, FName const& SessionName)
{
	struct _Script_OnlineSubsystemEIK_eventBP_CreateSession_Callback_Parms
	{
		bool bWasSuccess;
		FName SessionName;
	};
	_Script_OnlineSubsystemEIK_eventBP_CreateSession_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.SessionName=SessionName;
	BP_CreateSession_Callback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventBP_CreateLobby_Callback_Parms
		{
			bool bWasSuccess;
			FName SessionName;
		};
		static void NewProp_bWasSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventBP_CreateLobby_Callback_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_CreateLobby_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::NewProp_SessionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_CreateLobby_Callback_Parms, SessionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::NewProp_SessionName_MetaData), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::NewProp_SessionName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::NewProp_SessionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_CreateLobby_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_CreateLobby_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_CreateLobby_Callback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBP_CreateLobby_Callback_DelegateWrapper(const FScriptDelegate& BP_CreateLobby_Callback, bool bWasSuccess, FName const& SessionName)
{
	struct _Script_OnlineSubsystemEIK_eventBP_CreateLobby_Callback_Parms
	{
		bool bWasSuccess;
		FName SessionName;
	};
	_Script_OnlineSubsystemEIK_eventBP_CreateLobby_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.SessionName=SessionName;
	BP_CreateLobby_Callback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventBP_DestroySession_Callback_Parms
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
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventBP_DestroySession_Callback_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_DestroySession_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_DestroySession_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_DestroySession_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_DestroySession_Callback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBP_DestroySession_Callback_DelegateWrapper(const FScriptDelegate& BP_DestroySession_Callback, bool bWasSuccess)
{
	struct _Script_OnlineSubsystemEIK_eventBP_DestroySession_Callback_Parms
	{
		bool bWasSuccess;
	};
	_Script_OnlineSubsystemEIK_eventBP_DestroySession_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	BP_DestroySession_Callback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventBP_PurchaseOffer_Callback_Parms
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
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventBP_PurchaseOffer_Callback_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_PurchaseOffer_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_PurchaseOffer_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_PurchaseOffer_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_PurchaseOffer_Callback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBP_PurchaseOffer_Callback_DelegateWrapper(const FScriptDelegate& BP_PurchaseOffer_Callback, bool bWasSuccess)
{
	struct _Script_OnlineSubsystemEIK_eventBP_PurchaseOffer_Callback_Parms
	{
		bool bWasSuccess;
	};
	_Script_OnlineSubsystemEIK_eventBP_PurchaseOffer_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	BP_PurchaseOffer_Callback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventBP_JoinSession_Callback_Parms
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
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventBP_JoinSession_Callback_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_JoinSession_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_JoinSession_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_JoinSession_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_JoinSession_Callback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBP_JoinSession_Callback_DelegateWrapper(const FScriptDelegate& BP_JoinSession_Callback, bool bWasSuccess)
{
	struct _Script_OnlineSubsystemEIK_eventBP_JoinSession_Callback_Parms
	{
		bool bWasSuccess;
	};
	_Script_OnlineSubsystemEIK_eventBP_JoinSession_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	BP_JoinSession_Callback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventBP_GetTitleFile_Callback_Parms
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
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventBP_GetTitleFile_Callback_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_GetTitleFile_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_GetTitleFile_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetTitleFile_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetTitleFile_Callback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBP_GetTitleFile_Callback_DelegateWrapper(const FScriptDelegate& BP_GetTitleFile_Callback, bool bWasSuccess)
{
	struct _Script_OnlineSubsystemEIK_eventBP_GetTitleFile_Callback_Parms
	{
		bool bWasSuccess;
	};
	_Script_OnlineSubsystemEIK_eventBP_GetTitleFile_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	BP_GetTitleFile_Callback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventBP_UpdateStat_Callback_Parms
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
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventBP_UpdateStat_Callback_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_UpdateStat_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_UpdateStat_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_UpdateStat_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_UpdateStat_Callback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBP_UpdateStat_Callback_DelegateWrapper(const FScriptDelegate& BP_UpdateStat_Callback, bool bWasSuccess)
{
	struct _Script_OnlineSubsystemEIK_eventBP_UpdateStat_Callback_Parms
	{
		bool bWasSuccess;
	};
	_Script_OnlineSubsystemEIK_eventBP_UpdateStat_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	BP_UpdateStat_Callback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventBP_GetStats_Callback_Parms
		{
			bool bWasSuccess;
			TArray<FEIK_Stats> Stats;
		};
		static void NewProp_bWasSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Stats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventBP_GetStats_Callback_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_GetStats_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::NewProp_Stats_Inner = { "Stats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEIK_Stats, METADATA_PARAMS(0, nullptr) }; // 2866746710
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::NewProp_Stats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_GetStats_Callback_Parms, Stats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::NewProp_Stats_MetaData), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::NewProp_Stats_MetaData) }; // 2866746710
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::NewProp_Stats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::NewProp_Stats,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_GetStats_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetStats_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetStats_Callback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBP_GetStats_Callback_DelegateWrapper(const FScriptDelegate& BP_GetStats_Callback, bool bWasSuccess, TArray<FEIK_Stats> const& Stats)
{
	struct _Script_OnlineSubsystemEIK_eventBP_GetStats_Callback_Parms
	{
		bool bWasSuccess;
		TArray<FEIK_Stats> Stats;
	};
	_Script_OnlineSubsystemEIK_eventBP_GetStats_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.Stats=Stats;
	BP_GetStats_Callback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventBP_FindSession_Callback_Parms
		{
			bool bWasSuccess;
			TArray<FSessionFindStruct> SessionResults;
		};
		static void NewProp_bWasSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
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
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventBP_FindSession_Callback_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_FindSession_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::NewProp_SessionResults_Inner = { "SessionResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionFindStruct, METADATA_PARAMS(0, nullptr) }; // 3001502516
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::NewProp_SessionResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::NewProp_SessionResults = { "SessionResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_FindSession_Callback_Parms, SessionResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::NewProp_SessionResults_MetaData), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::NewProp_SessionResults_MetaData) }; // 3001502516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::NewProp_SessionResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::NewProp_SessionResults,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_FindSession_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_FindSession_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_FindSession_Callback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBP_FindSession_Callback_DelegateWrapper(const FScriptDelegate& BP_FindSession_Callback, bool bWasSuccess, TArray<FSessionFindStruct> const& SessionResults)
{
	struct _Script_OnlineSubsystemEIK_eventBP_FindSession_Callback_Parms
	{
		bool bWasSuccess;
		TArray<FSessionFindStruct> SessionResults;
	};
	_Script_OnlineSubsystemEIK_eventBP_FindSession_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.SessionResults=SessionResults;
	BP_FindSession_Callback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventBP_WriteFile_Callback_Parms
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
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventBP_WriteFile_Callback_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_WriteFile_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_WriteFile_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_WriteFile_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_WriteFile_Callback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBP_WriteFile_Callback_DelegateWrapper(const FScriptDelegate& BP_WriteFile_Callback, bool bWasSuccess)
{
	struct _Script_OnlineSubsystemEIK_eventBP_WriteFile_Callback_Parms
	{
		bool bWasSuccess;
	};
	_Script_OnlineSubsystemEIK_eventBP_WriteFile_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	BP_WriteFile_Callback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventBP_GetOffers_Callback_Parms
		{
			bool bWasSuccess;
			TArray<FOffersStruct> Offers;
		};
		static void NewProp_bWasSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
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
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventBP_GetOffers_Callback_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_GetOffers_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::NewProp_Offers_Inner = { "Offers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOffersStruct, METADATA_PARAMS(0, nullptr) }; // 2255260913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::NewProp_Offers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::NewProp_Offers = { "Offers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_GetOffers_Callback_Parms, Offers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::NewProp_Offers_MetaData), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::NewProp_Offers_MetaData) }; // 2255260913
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::NewProp_Offers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::NewProp_Offers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_GetOffers_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetOffers_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetOffers_Callback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBP_GetOffers_Callback_DelegateWrapper(const FScriptDelegate& BP_GetOffers_Callback, bool bWasSuccess, TArray<FOffersStruct> const& Offers)
{
	struct _Script_OnlineSubsystemEIK_eventBP_GetOffers_Callback_Parms
	{
		bool bWasSuccess;
		TArray<FOffersStruct> Offers;
	};
	_Script_OnlineSubsystemEIK_eventBP_GetOffers_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.Offers=Offers;
	BP_GetOffers_Callback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventBP_GetOwnedItems_Callback_Parms
		{
			bool bWasSuccess;
			TArray<FString> OwnedItemNames;
		};
		static void NewProp_bWasSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OwnedItemNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnedItemNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OwnedItemNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventBP_GetOwnedItems_Callback_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_GetOwnedItems_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::NewProp_OwnedItemNames_Inner = { "OwnedItemNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::NewProp_OwnedItemNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::NewProp_OwnedItemNames = { "OwnedItemNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_GetOwnedItems_Callback_Parms, OwnedItemNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::NewProp_OwnedItemNames_MetaData), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::NewProp_OwnedItemNames_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::NewProp_OwnedItemNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::NewProp_OwnedItemNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_GetOwnedItems_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetOwnedItems_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetOwnedItems_Callback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBP_GetOwnedItems_Callback_DelegateWrapper(const FScriptDelegate& BP_GetOwnedItems_Callback, bool bWasSuccess, TArray<FString> const& OwnedItemNames)
{
	struct _Script_OnlineSubsystemEIK_eventBP_GetOwnedItems_Callback_Parms
	{
		bool bWasSuccess;
		TArray<FString> OwnedItemNames;
	};
	_Script_OnlineSubsystemEIK_eventBP_GetOwnedItems_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.OwnedItemNames=OwnedItemNames;
	BP_GetOwnedItems_Callback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventBP_GetFile_Callback_Parms
		{
			bool bWasSuccess;
			USaveGame* SaveGame;
		};
		static void NewProp_bWasSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventBP_GetFile_Callback_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_GetFile_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_GetFile_Callback_Parms, SaveGame), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::NewProp_SaveGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_GetFile_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetFile_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_GetFile_Callback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBP_GetFile_Callback_DelegateWrapper(const FScriptDelegate& BP_GetFile_Callback, bool bWasSuccess, USaveGame* SaveGame)
{
	struct _Script_OnlineSubsystemEIK_eventBP_GetFile_Callback_Parms
	{
		bool bWasSuccess;
		USaveGame* SaveGame;
	};
	_Script_OnlineSubsystemEIK_eventBP_GetFile_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.SaveGame=SaveGame;
	BP_GetFile_Callback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventBP_ConnectEOSAndPlayFab_Callback_Parms
		{
			bool bWasSuccess;
			FString Error;
		};
		static void NewProp_bWasSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventBP_ConnectEOSAndPlayFab_Callback_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_ConnectEOSAndPlayFab_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_ConnectEOSAndPlayFab_Callback_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::NewProp_Error_MetaData), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::NewProp_Error_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_ConnectEOSAndPlayFab_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_ConnectEOSAndPlayFab_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_ConnectEOSAndPlayFab_Callback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBP_ConnectEOSAndPlayFab_Callback_DelegateWrapper(const FScriptDelegate& BP_ConnectEOSAndPlayFab_Callback, bool bWasSuccess, const FString& Error)
{
	struct _Script_OnlineSubsystemEIK_eventBP_ConnectEOSAndPlayFab_Callback_Parms
	{
		bool bWasSuccess;
		FString Error;
	};
	_Script_OnlineSubsystemEIK_eventBP_ConnectEOSAndPlayFab_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.Error=Error;
	BP_ConnectEOSAndPlayFab_Callback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventBP_TitleFileList_Callback_Parms
		{
			bool bWasSuccess;
			FString Error;
		};
		static void NewProp_bWasSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventBP_TitleFileList_Callback_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_TitleFileList_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_TitleFileList_Callback_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::NewProp_Error_MetaData), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::NewProp_Error_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::NewProp_bWasSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_TitleFileList_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_TitleFileList_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_TitleFileList_Callback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBP_TitleFileList_Callback_DelegateWrapper(const FScriptDelegate& BP_TitleFileList_Callback, bool bWasSuccess, const FString& Error)
{
	struct _Script_OnlineSubsystemEIK_eventBP_TitleFileList_Callback_Parms
	{
		bool bWasSuccess;
		FString Error;
	};
	_Script_OnlineSubsystemEIK_eventBP_TitleFileList_Callback_Parms Parms;
	Parms.bWasSuccess=bWasSuccess ? true : false;
	Parms.Error=Error;
	BP_TitleFileList_Callback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventBP_HostMigration_Callback_Parms
		{
			bool bLocalHost;
			FString PromotedMember;
			FString JoinAddress;
		};
		static void NewProp_bLocalHost_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalHost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PromotedMember_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PromotedMember;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoinAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JoinAddress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_bLocalHost_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemEIK_eventBP_HostMigration_Callback_Parms*)Obj)->bLocalHost = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_bLocalHost = { "bLocalHost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemEIK_eventBP_HostMigration_Callback_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_bLocalHost_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_PromotedMember_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_PromotedMember = { "PromotedMember", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_HostMigration_Callback_Parms, PromotedMember), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_PromotedMember_MetaData), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_PromotedMember_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_JoinAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_JoinAddress = { "JoinAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventBP_HostMigration_Callback_Parms, JoinAddress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_JoinAddress_MetaData), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_JoinAddress_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_bLocalHost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_PromotedMember,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::NewProp_JoinAddress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "BP_HostMigration_Callback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_HostMigration_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventBP_HostMigration_Callback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBP_HostMigration_Callback_DelegateWrapper(const FScriptDelegate& BP_HostMigration_Callback, bool bLocalHost, const FString& PromotedMember, const FString& JoinAddress)
{
	struct _Script_OnlineSubsystemEIK_eventBP_HostMigration_Callback_Parms
	{
		bool bLocalHost;
		FString PromotedMember;
		FString JoinAddress;
	};
	_Script_OnlineSubsystemEIK_eventBP_HostMigration_Callback_Parms Parms;
	Parms.bLocalHost=bLocalHost ? true : false;
	Parms.PromotedMember=PromotedMember;
	Parms.JoinAddress=JoinAddress;
	BP_HostMigration_Callback.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UEIK_Subsystem::execOnHostMigrated)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEIK_Subsystem::OnHostMigrated(FBP_HostMigration_Callback(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execGenerateSessionCode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CodeLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GenerateSessionCode(Z_Param_CodeLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execGetOwnedItems)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOwnedItems(FBP_GetOwnedItems_Callback(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execQueryOffers)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueryOffers(FBP_GetOffers_Callback(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execPurchaseItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PurchaseItem(FBP_PurchaseOffer_Callback(Z_Param_Out_Result),Z_Param_ItemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execConnectEosAndPlayFab)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectEosAndPlayFab(FBP_ConnectEOSAndPlayFab_Callback(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execGetLeaderboard)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_GET_PROPERTY(FNameProperty,Z_Param_LeaderboardName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Rank);
		P_GET_PROPERTY(FIntProperty,Z_Param_Range);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboard(FBP_GetFile_Callback(Z_Param_Out_Result),Z_Param_LeaderboardName,Z_Param_Rank,Z_Param_Range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execGetTitleFileContent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetTitleFileContent(Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execGetTitleFile)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTitleFile(FBP_GetTitleFile_Callback(Z_Param_Out_Result),Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execGetTitleFileList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FFileListStruct>*)Z_Param__Result=P_THIS->GetTitleFileList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execEnumerateTitleFiles)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnumerateTitleFiles(FBP_TitleFileList_Callback(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execGetPlayerData)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayerData(FBP_GetFile_Callback(Z_Param_Out_Result),Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execSetPlayerData)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_OBJECT(USaveGame,Z_Param_SavedGame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerData(FBP_WriteFile_Callback(Z_Param_Out_Result),Z_Param_FileName,Z_Param_SavedGame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execGetStats)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_GET_TARRAY(FString,Z_Param_StatName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetStats(FBP_GetStats_Callback(Z_Param_Out_Result),Z_Param_StatName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execUpdateStats)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateStats(FBP_UpdateStat_Callback(Z_Param_Out_Result),Z_Param_StatName,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execShowFriendUserInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShowFriendUserInterface();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execEndSession)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndSession(Z_Param_SessionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execStartSession)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSession(Z_Param_SessionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execRegisterPlayer)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_GET_UBOOL(Z_Param_bWasInvited);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterPlayer(Z_Param_SessionName,Z_Param_bWasInvited);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execUnRegisterPlayer)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnRegisterPlayer(Z_Param_SessionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execGetEpicID)
	{
		P_GET_STRUCT_REF(FEIKUniqueNetId,Z_Param_Out_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEIK_Subsystem::GetEpicID(Z_Param_Out_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execGetProductUserID)
	{
		P_GET_STRUCT_REF(FEIKUniqueNetId,Z_Param_Out_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEIK_Subsystem::GetProductUserID(Z_Param_Out_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execGetUserUniqueID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEIKUniqueNetId*)Z_Param__Result=P_THIS->GetUserUniqueID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execJoinEosSession)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_GET_UBOOL(Z_Param_bIsDedicatedServerSession);
		P_GET_STRUCT(FBlueprintSessionResult,Z_Param_SessionResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinEosSession(FBP_JoinSession_Callback(Z_Param_Out_Result),Z_Param_SessionName,Z_Param_bIsDedicatedServerSession,Z_Param_SessionResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execDestroyEosSession)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyEosSession(FBP_DestroySession_Callback(Z_Param_Out_Result),Z_Param_SessionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execFindEOSSession)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_GET_TMAP(FString,FString,Z_Param_Search_Settings);
		P_GET_ENUM(EMatchType,Z_Param_MatchType);
		P_GET_ENUM(ERegionInfo,Z_Param_RegionToSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindEOSSession(FBP_FindSession_Callback(Z_Param_Out_Result),Z_Param_Search_Settings,EMatchType(Z_Param_MatchType),ERegionInfo(Z_Param_RegionToSearch));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execCreateEOSLobby)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_GET_TMAP(FString,FString,Z_Param_Custom_Settings);
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
		P_GET_UBOOL(Z_Param_bUseVoiceChat);
		P_GET_UBOOL(Z_Param_bUsePresence);
		P_GET_UBOOL(Z_Param_bAllowInvites);
		P_GET_UBOOL(Z_Param_bAdvertise);
		P_GET_UBOOL(Z_Param_bAllowJoinInProgress);
		P_GET_UBOOL(Z_Param_bIsLan);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPublicConnections);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPrivateConnections);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateEOSLobby(FBP_CreateLobby_Callback(Z_Param_Out_Result),Z_Param_Custom_Settings,Z_Param_SessionName,Z_Param_bUseVoiceChat,Z_Param_bUsePresence,Z_Param_bAllowInvites,Z_Param_bAdvertise,Z_Param_bAllowJoinInProgress,Z_Param_bIsLan,Z_Param_NumberOfPublicConnections,Z_Param_NumberOfPrivateConnections);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execCreateEOSSession)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_GET_TMAP(FString,FString,Z_Param_Custom_Settings);
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
		P_GET_UBOOL(Z_Param_bIsDedicatedServer);
		P_GET_UBOOL(Z_Param_bIsLan);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPublicConnections);
		P_GET_ENUM(ERegionInfo,Z_Param_Region);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateEOSSession(FBP_CreateSession_Callback(Z_Param_Out_Result),Z_Param_Custom_Settings,Z_Param_SessionName,Z_Param_bIsDedicatedServer,Z_Param_bIsLan,Z_Param_NumberOfPublicConnections,ERegionInfo(Z_Param_Region));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execGetLoginStatus)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEIK_Subsystem::GetLoginStatus(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execGetPlayerNickname)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEIK_Subsystem::GetPlayerNickname(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execLogout)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Logout(Z_Param_LocalUserNum,FBP_Logout_Callback(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execLoginWithEpicLauncher)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoginWithEpicLauncher(Z_Param_LocalUserNum,FBP_Login_Callback(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execLoginWithDeveloperTool)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_PROPERTY(FStrProperty,Z_Param_LocalIP);
		P_GET_PROPERTY(FStrProperty,Z_Param_Credential);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoginWithDeveloperTool(Z_Param_LocalUserNum,Z_Param_LocalIP,Z_Param_Credential,FBP_Login_Callback(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execLoginWithPersistantAuth)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoginWithPersistantAuth(Z_Param_LocalUserNum,FBP_Login_Callback(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execLoginWithSteam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoginWithSteam(Z_Param_LocalUserNum,FBP_Login_Callback(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execLoginWithAccountPortal)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoginWithAccountPortal(Z_Param_LocalUserNum,FBP_Login_Callback(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execLoginWithDeviceID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoginWithDeviceID(Z_Param_LocalUserNum,Z_Param_DisplayName,Z_Param_DeviceName,FBP_Login_Callback(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Subsystem::execInitializeEIK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitializeEIK();
		P_NATIVE_END;
	}
	void UEIK_Subsystem::StaticRegisterNativesUEIK_Subsystem()
	{
		UClass* Class = UEIK_Subsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectEosAndPlayFab", &UEIK_Subsystem::execConnectEosAndPlayFab },
			{ "CreateEOSLobby", &UEIK_Subsystem::execCreateEOSLobby },
			{ "CreateEOSSession", &UEIK_Subsystem::execCreateEOSSession },
			{ "DestroyEosSession", &UEIK_Subsystem::execDestroyEosSession },
			{ "EndSession", &UEIK_Subsystem::execEndSession },
			{ "EnumerateTitleFiles", &UEIK_Subsystem::execEnumerateTitleFiles },
			{ "FindEOSSession", &UEIK_Subsystem::execFindEOSSession },
			{ "GenerateSessionCode", &UEIK_Subsystem::execGenerateSessionCode },
			{ "GetEpicID", &UEIK_Subsystem::execGetEpicID },
			{ "GetLeaderboard", &UEIK_Subsystem::execGetLeaderboard },
			{ "GetLoginStatus", &UEIK_Subsystem::execGetLoginStatus },
			{ "GetOwnedItems", &UEIK_Subsystem::execGetOwnedItems },
			{ "GetPlayerData", &UEIK_Subsystem::execGetPlayerData },
			{ "GetPlayerNickname", &UEIK_Subsystem::execGetPlayerNickname },
			{ "GetProductUserID", &UEIK_Subsystem::execGetProductUserID },
			{ "GetStats", &UEIK_Subsystem::execGetStats },
			{ "GetTitleFile", &UEIK_Subsystem::execGetTitleFile },
			{ "GetTitleFileContent", &UEIK_Subsystem::execGetTitleFileContent },
			{ "GetTitleFileList", &UEIK_Subsystem::execGetTitleFileList },
			{ "GetUserUniqueID", &UEIK_Subsystem::execGetUserUniqueID },
			{ "InitializeEIK", &UEIK_Subsystem::execInitializeEIK },
			{ "JoinEosSession", &UEIK_Subsystem::execJoinEosSession },
			{ "LoginWithAccountPortal", &UEIK_Subsystem::execLoginWithAccountPortal },
			{ "LoginWithDeveloperTool", &UEIK_Subsystem::execLoginWithDeveloperTool },
			{ "LoginWithDeviceID", &UEIK_Subsystem::execLoginWithDeviceID },
			{ "LoginWithEpicLauncher", &UEIK_Subsystem::execLoginWithEpicLauncher },
			{ "LoginWithPersistantAuth", &UEIK_Subsystem::execLoginWithPersistantAuth },
			{ "LoginWithSteam", &UEIK_Subsystem::execLoginWithSteam },
			{ "Logout", &UEIK_Subsystem::execLogout },
			{ "OnHostMigrated", &UEIK_Subsystem::execOnHostMigrated },
			{ "PurchaseItem", &UEIK_Subsystem::execPurchaseItem },
			{ "QueryOffers", &UEIK_Subsystem::execQueryOffers },
			{ "RegisterPlayer", &UEIK_Subsystem::execRegisterPlayer },
			{ "SetPlayerData", &UEIK_Subsystem::execSetPlayerData },
			{ "ShowFriendUserInterface", &UEIK_Subsystem::execShowFriendUserInterface },
			{ "StartSession", &UEIK_Subsystem::execStartSession },
			{ "UnRegisterPlayer", &UEIK_Subsystem::execUnRegisterPlayer },
			{ "UpdateStats", &UEIK_Subsystem::execUpdateStats },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics
	{
		struct EIK_Subsystem_eventConnectEosAndPlayFab_Parms
		{
			FScriptDelegate Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventConnectEosAndPlayFab_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_ConnectEOSAndPlayFab_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::NewProp_Result_MetaData) }; // 2741091684
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || PlayFab" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is a C++ method definition for finding Epic Online Services Sessions\n" },
#endif
		{ "DisplayName", "Connect EOS And PlayFab" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for finding Epic Online Services Sessions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "ConnectEosAndPlayFab", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::EIK_Subsystem_eventConnectEosAndPlayFab_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::EIK_Subsystem_eventConnectEosAndPlayFab_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics
	{
		struct EIK_Subsystem_eventCreateEOSLobby_Parms
		{
			FScriptDelegate Result;
			TMap<FString,FString> Custom_Settings;
			FString SessionName;
			bool bUseVoiceChat;
			bool bUsePresence;
			bool bAllowInvites;
			bool bAdvertise;
			bool bAllowJoinInProgress;
			bool bIsLan;
			int32 NumberOfPublicConnections;
			int32 NumberOfPrivateConnections;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Custom_Settings_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Custom_Settings_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_Custom_Settings;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
		static void NewProp_bUseVoiceChat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVoiceChat;
		static void NewProp_bUsePresence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePresence;
		static void NewProp_bAllowInvites_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
		static void NewProp_bAdvertise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvertise;
		static void NewProp_bAllowJoinInProgress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinInProgress;
		static void NewProp_bIsLan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLan;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPublicConnections;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPrivateConnections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSLobby_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateLobby_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_Result_MetaData) }; // 3210194284
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_Custom_Settings_ValueProp = { "Custom_Settings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_Custom_Settings_Key_KeyProp = { "Custom_Settings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_Custom_Settings = { "Custom_Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSLobby_Parms, Custom_Settings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSLobby_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bUseVoiceChat_SetBit(void* Obj)
	{
		((EIK_Subsystem_eventCreateEOSLobby_Parms*)Obj)->bUseVoiceChat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bUseVoiceChat = { "bUseVoiceChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventCreateEOSLobby_Parms), &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bUseVoiceChat_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bUsePresence_SetBit(void* Obj)
	{
		((EIK_Subsystem_eventCreateEOSLobby_Parms*)Obj)->bUsePresence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bUsePresence = { "bUsePresence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventCreateEOSLobby_Parms), &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bUsePresence_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
	{
		((EIK_Subsystem_eventCreateEOSLobby_Parms*)Obj)->bAllowInvites = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventCreateEOSLobby_Parms), &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAdvertise_SetBit(void* Obj)
	{
		((EIK_Subsystem_eventCreateEOSLobby_Parms*)Obj)->bAdvertise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAdvertise = { "bAdvertise", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventCreateEOSLobby_Parms), &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAdvertise_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAllowJoinInProgress_SetBit(void* Obj)
	{
		((EIK_Subsystem_eventCreateEOSLobby_Parms*)Obj)->bAllowJoinInProgress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAllowJoinInProgress = { "bAllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventCreateEOSLobby_Parms), &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAllowJoinInProgress_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bIsLan_SetBit(void* Obj)
	{
		((EIK_Subsystem_eventCreateEOSLobby_Parms*)Obj)->bIsLan = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bIsLan = { "bIsLan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventCreateEOSLobby_Parms), &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bIsLan_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_NumberOfPublicConnections = { "NumberOfPublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSLobby_Parms, NumberOfPublicConnections), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_NumberOfPrivateConnections = { "NumberOfPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSLobby_Parms, NumberOfPrivateConnections), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_Custom_Settings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_Custom_Settings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_Custom_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bUseVoiceChat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bUsePresence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAllowInvites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAdvertise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bAllowJoinInProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_bIsLan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_NumberOfPublicConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::NewProp_NumberOfPrivateConnections,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is a C++ method definition for creating Epic Online Services Lobbies\n" },
#endif
		{ "CPP_Default_bAdvertise", "true" },
		{ "CPP_Default_bAllowInvites", "true" },
		{ "CPP_Default_bAllowJoinInProgress", "true" },
		{ "CPP_Default_bIsLan", "false" },
		{ "CPP_Default_bUsePresence", "true" },
		{ "CPP_Default_bUseVoiceChat", "true" },
		{ "CPP_Default_NumberOfPrivateConnections", "4" },
		{ "CPP_Default_NumberOfPublicConnections", "4" },
		{ "CPP_Default_SessionName", "Modified_EOS_Session" },
		{ "DisplayName", "Create EOS Lobby" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for creating Epic Online Services Lobbies" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "CreateEOSLobby", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::EIK_Subsystem_eventCreateEOSLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::EIK_Subsystem_eventCreateEOSLobby_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics
	{
		struct EIK_Subsystem_eventCreateEOSSession_Parms
		{
			FScriptDelegate Result;
			TMap<FString,FString> Custom_Settings;
			FString SessionName;
			bool bIsDedicatedServer;
			bool bIsLan;
			int32 NumberOfPublicConnections;
			ERegionInfo Region;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Custom_Settings_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Custom_Settings_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_Custom_Settings;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
		static void NewProp_bIsDedicatedServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDedicatedServer;
		static void NewProp_bIsLan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLan;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPublicConnections;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Region_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Region;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSSession_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_CreateSession_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Result_MetaData) }; // 1903908783
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Custom_Settings_ValueProp = { "Custom_Settings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Custom_Settings_Key_KeyProp = { "Custom_Settings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Custom_Settings = { "Custom_Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSSession_Parms, Custom_Settings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_bIsDedicatedServer_SetBit(void* Obj)
	{
		((EIK_Subsystem_eventCreateEOSSession_Parms*)Obj)->bIsDedicatedServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_bIsDedicatedServer = { "bIsDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventCreateEOSSession_Parms), &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_bIsDedicatedServer_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_bIsLan_SetBit(void* Obj)
	{
		((EIK_Subsystem_eventCreateEOSSession_Parms*)Obj)->bIsLan = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_bIsLan = { "bIsLan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventCreateEOSSession_Parms), &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_bIsLan_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_NumberOfPublicConnections = { "NumberOfPublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSSession_Parms, NumberOfPublicConnections), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Region_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventCreateEOSSession_Parms, Region), Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo, METADATA_PARAMS(0, nullptr) }; // 722458386
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Custom_Settings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Custom_Settings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Custom_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_bIsDedicatedServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_bIsLan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_NumberOfPublicConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Region_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::NewProp_Region,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is a C++ method definition for creating Epic Online Services Sessions\n" },
#endif
		{ "CPP_Default_bIsDedicatedServer", "false" },
		{ "CPP_Default_bIsLan", "false" },
		{ "CPP_Default_NumberOfPublicConnections", "4" },
		{ "CPP_Default_Region", "RE_NoSelection" },
		{ "CPP_Default_SessionName", "Modified_EOS_Session" },
		{ "DisplayName", "Create EOS Session" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for creating Epic Online Services Sessions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "CreateEOSSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::EIK_Subsystem_eventCreateEOSSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::EIK_Subsystem_eventCreateEOSSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics
	{
		struct EIK_Subsystem_eventDestroyEosSession_Parms
		{
			FScriptDelegate Result;
			FName SessionName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventDestroyEosSession_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_DestroySession_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::NewProp_Result_MetaData) }; // 1672983605
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventDestroyEosSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::NewProp_SessionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for destroying Epic Online Services Sessions\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/sessions/destroy-sessions\n" },
#endif
		{ "DisplayName", "Destroy EOS Session" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for destroying Epic Online Services Sessions\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/sessions/destroy-sessions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "DestroyEosSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::EIK_Subsystem_eventDestroyEosSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::EIK_Subsystem_eventDestroyEosSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics
	{
		struct EIK_Subsystem_eventEndSession_Parms
		{
			FName SessionName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventEndSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::NewProp_SessionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for starting lobbies and sessions\n" },
#endif
		{ "DisplayName", "End EOS Session" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for starting lobbies and sessions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "EndSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::EIK_Subsystem_eventEndSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::EIK_Subsystem_eventEndSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_EndSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_EndSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics
	{
		struct EIK_Subsystem_eventEnumerateTitleFiles_Parms
		{
			FScriptDelegate Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventEnumerateTitleFiles_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_TitleFileList_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::NewProp_Result_MetaData) }; // 108604378
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Data" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "EnumerateTitleFiles", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::EIK_Subsystem_eventEnumerateTitleFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::EIK_Subsystem_eventEnumerateTitleFiles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics
	{
		struct EIK_Subsystem_eventFindEOSSession_Parms
		{
			FScriptDelegate Result;
			TMap<FString,FString> Search_Settings;
			EMatchType MatchType;
			ERegionInfo RegionToSearch;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Search_Settings_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Search_Settings_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_Search_Settings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RegionToSearch_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RegionToSearch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventFindEOSSession_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_FindSession_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_Result_MetaData) }; // 1992134538
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_Search_Settings_ValueProp = { "Search_Settings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_Search_Settings_Key_KeyProp = { "Search_Settings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_Search_Settings = { "Search_Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventFindEOSSession_Parms, Search_Settings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventFindEOSSession_Parms, MatchType), Z_Construct_UEnum_OnlineSubsystemEIK_EMatchType, METADATA_PARAMS(0, nullptr) }; // 396764989
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_RegionToSearch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_RegionToSearch = { "RegionToSearch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventFindEOSSession_Parms, RegionToSearch), Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo, METADATA_PARAMS(0, nullptr) }; // 722458386
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_Search_Settings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_Search_Settings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_Search_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_MatchType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_MatchType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_RegionToSearch_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::NewProp_RegionToSearch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for finding Epic Online Services Sessions\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/sessions/find-sessions-and-lobbies\n" },
#endif
		{ "CPP_Default_MatchType", "MT_Lobby" },
		{ "CPP_Default_RegionToSearch", "RE_NoSelection" },
		{ "DisplayName", "Find EOS Session" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for finding Epic Online Services Sessions\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/sessions/find-sessions-and-lobbies" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "FindEOSSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::EIK_Subsystem_eventFindEOSSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::EIK_Subsystem_eventFindEOSSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics
	{
		struct EIK_Subsystem_eventGenerateSessionCode_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::NewProp_CodeLength = { "CodeLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGenerateSessionCode_Parms, CodeLength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGenerateSessionCode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::NewProp_CodeLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for purchasing an item from the store. - Switch to Async Nodes\n" },
#endif
		{ "CPP_Default_CodeLength", "9" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for purchasing an item from the store. - Switch to Async Nodes" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GenerateSessionCode", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::EIK_Subsystem_eventGenerateSessionCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::EIK_Subsystem_eventGenerateSessionCode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics
	{
		struct EIK_Subsystem_eventGetEpicID_Parms
		{
			FEIKUniqueNetId UniqueNetId;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetEpicID_Parms, UniqueNetId), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::NewProp_UniqueNetId_MetaData), Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::NewProp_UniqueNetId_MetaData) }; // 1627776817
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetEpicID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::NewProp_UniqueNetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for getting the Epic ID\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/extra-functions/get-epicid\n" },
#endif
		{ "DisplayName", "Get Epic ID" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for getting the Epic ID\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/extra-functions/get-epicid" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetEpicID", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::EIK_Subsystem_eventGetEpicID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::EIK_Subsystem_eventGetEpicID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetEpicID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetEpicID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics
	{
		struct EIK_Subsystem_eventGetLeaderboard_Parms
		{
			FScriptDelegate Result;
			FName LeaderboardName;
			int32 Rank;
			int32 Range;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LeaderboardName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Rank;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Range;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetLeaderboard_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::NewProp_Result_MetaData) }; // 3723014772
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetLeaderboard_Parms, LeaderboardName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetLeaderboard_Parms, Rank), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetLeaderboard_Parms, Range), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::NewProp_LeaderboardName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::NewProp_Rank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::NewProp_Range,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Leaderboard" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetLeaderboard", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::EIK_Subsystem_eventGetLeaderboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::EIK_Subsystem_eventGetLeaderboard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics
	{
		struct EIK_Subsystem_eventGetLoginStatus_Parms
		{
			int32 LocalUserNum;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::NewProp_LocalUserNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetLoginStatus_Parms, LocalUserNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::NewProp_LocalUserNum_MetaData), Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::NewProp_LocalUserNum_MetaData) };
	void Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIK_Subsystem_eventGetLoginStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventGetLoginStatus_Parms), &Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for getting the login status of a player from an online subsystem.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/extra-functions/getloginstatus\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for getting the login status of a player from an online subsystem.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/extra-functions/getloginstatus" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetLoginStatus", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::EIK_Subsystem_eventGetLoginStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::EIK_Subsystem_eventGetLoginStatus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics
	{
		struct EIK_Subsystem_eventGetOwnedItems_Parms
		{
			FScriptDelegate Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetOwnedItems_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOwnedItems_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::NewProp_Result_MetaData) }; // 1083897605
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Store" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for purchasing an item from the store.\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for purchasing an item from the store." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetOwnedItems", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::EIK_Subsystem_eventGetOwnedItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::EIK_Subsystem_eventGetOwnedItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics
	{
		struct EIK_Subsystem_eventGetPlayerData_Parms
		{
			FScriptDelegate Result;
			FString FileName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetPlayerData_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetFile_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::NewProp_Result_MetaData) }; // 3723014772
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetPlayerData_Parms, FileName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Data" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetPlayerData", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::EIK_Subsystem_eventGetPlayerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::EIK_Subsystem_eventGetPlayerData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics
	{
		struct EIK_Subsystem_eventGetPlayerNickname_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::NewProp_LocalUserNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetPlayerNickname_Parms, LocalUserNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::NewProp_LocalUserNum_MetaData), Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::NewProp_LocalUserNum_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetPlayerNickname_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for getting the nickname of a player from an online subsystem.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/extra-functions/getplayernickname\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for getting the nickname of a player from an online subsystem.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/extra-functions/getplayernickname" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetPlayerNickname", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::EIK_Subsystem_eventGetPlayerNickname_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::EIK_Subsystem_eventGetPlayerNickname_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics
	{
		struct EIK_Subsystem_eventGetProductUserID_Parms
		{
			FEIKUniqueNetId UniqueNetId;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetProductUserID_Parms, UniqueNetId), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::NewProp_UniqueNetId_MetaData), Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::NewProp_UniqueNetId_MetaData) }; // 1627776817
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetProductUserID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::NewProp_UniqueNetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for getting the Product UserID\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/extra-functions/get-productuserid\n" },
#endif
		{ "DisplayName", "Get Product UserID" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for getting the Product UserID\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/extra-functions/get-productuserid" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetProductUserID", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::EIK_Subsystem_eventGetProductUserID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::EIK_Subsystem_eventGetProductUserID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics
	{
		struct EIK_Subsystem_eventGetStats_Parms
		{
			FScriptDelegate Result;
			TArray<FString> StatName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StatName_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StatName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetStats_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetStats_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::NewProp_Result_MetaData) }; // 271376535
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::NewProp_StatName_Inner = { "StatName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetStats_Parms, StatName), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::NewProp_StatName_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::NewProp_StatName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Statistics" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetStats", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::EIK_Subsystem_eventGetStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::EIK_Subsystem_eventGetStats_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics
	{
		struct EIK_Subsystem_eventGetTitleFile_Parms
		{
			FScriptDelegate Result;
			FString FileName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetTitleFile_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetTitleFile_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::NewProp_Result_MetaData) }; // 3630697384
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetTitleFile_Parms, FileName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Data" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetTitleFile", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::EIK_Subsystem_eventGetTitleFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::EIK_Subsystem_eventGetTitleFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics
	{
		struct EIK_Subsystem_eventGetTitleFileContent_Parms
		{
			FString FileName;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetTitleFileContent_Parms, FileName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetTitleFileContent_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Data" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetTitleFileContent", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::EIK_Subsystem_eventGetTitleFileContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::EIK_Subsystem_eventGetTitleFileContent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics
	{
		struct EIK_Subsystem_eventGetTitleFileList_Parms
		{
			TArray<FFileListStruct> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFileListStruct, METADATA_PARAMS(0, nullptr) }; // 2822107266
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetTitleFileList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2822107266
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Data" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetTitleFileList", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::EIK_Subsystem_eventGetTitleFileList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::EIK_Subsystem_eventGetTitleFileList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics
	{
		struct EIK_Subsystem_eventGetUserUniqueID_Parms
		{
			FEIKUniqueNetId ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventGetUserUniqueID_Parms, ReturnValue), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 1627776817
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for getting the User Unique NetID\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/extra-functions/get-useruniqueid\n" },
#endif
		{ "DisplayName", "Get User Unique NetID" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for getting the User Unique NetID\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/extra-functions/get-useruniqueid" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "GetUserUniqueID", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::EIK_Subsystem_eventGetUserUniqueID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::EIK_Subsystem_eventGetUserUniqueID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_InitializeEIK_Statics
	{
		struct EIK_Subsystem_eventInitializeEIK_Parms
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
	void Z_Construct_UFunction_UEIK_Subsystem_InitializeEIK_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIK_Subsystem_eventInitializeEIK_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_InitializeEIK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventInitializeEIK_Parms), &Z_Construct_UFunction_UEIK_Subsystem_InitializeEIK_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_InitializeEIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_InitializeEIK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_InitializeEIK_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Login" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_InitializeEIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "InitializeEIK", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_InitializeEIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_InitializeEIK_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_InitializeEIK_Statics::EIK_Subsystem_eventInitializeEIK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_InitializeEIK_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_InitializeEIK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_InitializeEIK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_InitializeEIK_Statics::EIK_Subsystem_eventInitializeEIK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_InitializeEIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_InitializeEIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics
	{
		struct EIK_Subsystem_eventJoinEosSession_Parms
		{
			FScriptDelegate Result;
			FName SessionName;
			bool bIsDedicatedServerSession;
			FBlueprintSessionResult SessionResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static void NewProp_bIsDedicatedServerSession_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDedicatedServerSession;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventJoinEosSession_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_JoinSession_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_Result_MetaData) }; // 1722491192
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventJoinEosSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_bIsDedicatedServerSession_SetBit(void* Obj)
	{
		((EIK_Subsystem_eventJoinEosSession_Parms*)Obj)->bIsDedicatedServerSession = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_bIsDedicatedServerSession = { "bIsDedicatedServerSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventJoinEosSession_Parms), &Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_bIsDedicatedServerSession_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_SessionResult = { "SessionResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventJoinEosSession_Parms, SessionResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(0, nullptr) }; // 3738885261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_bIsDedicatedServerSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::NewProp_SessionResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for joining Epic Online Services Sessions\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/sessions/join-sessions\n" },
#endif
		{ "DisplayName", "Join EOS Session" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for joining Epic Online Services Sessions\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/sessions/join-sessions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "JoinEosSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::EIK_Subsystem_eventJoinEosSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::EIK_Subsystem_eventJoinEosSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics
	{
		struct EIK_Subsystem_eventLoginWithAccountPortal_Parms
		{
			int32 LocalUserNum;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithAccountPortal_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithAccountPortal_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::NewProp_Result_MetaData) }; // 2152259509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This C++ method logs in a user to an online subsystem through an account portal and sets up a callback function to handle the login response.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/with-account-portal\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method logs in a user to an online subsystem through an account portal and sets up a callback function to handle the login response.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/authentication/with-account-portal" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "LoginWithAccountPortal", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::EIK_Subsystem_eventLoginWithAccountPortal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::EIK_Subsystem_eventLoginWithAccountPortal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics
	{
		struct EIK_Subsystem_eventLoginWithDeveloperTool_Parms
		{
			int32 LocalUserNum;
			FString LocalIP;
			FString Credential;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalIP;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Credential;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithDeveloperTool_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::NewProp_LocalIP = { "LocalIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithDeveloperTool_Parms, LocalIP), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::NewProp_Credential = { "Credential", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithDeveloperTool_Parms, Credential), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithDeveloperTool_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::NewProp_Result_MetaData) }; // 2152259509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::NewProp_LocalIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::NewProp_Credential,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This C++ method logs in a user to an online subsystem using a developer tool and sets up a callback function to handle the login response.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/with-devtool\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method logs in a user to an online subsystem using a developer tool and sets up a callback function to handle the login response.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/authentication/with-devtool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "LoginWithDeveloperTool", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::EIK_Subsystem_eventLoginWithDeveloperTool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::EIK_Subsystem_eventLoginWithDeveloperTool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics
	{
		struct EIK_Subsystem_eventLoginWithDeviceID_Parms
		{
			int32 LocalUserNum;
			FString DisplayName;
			FString DeviceName;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithDeviceID_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithDeviceID_Parms, DisplayName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithDeviceID_Parms, DeviceName), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithDeviceID_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::NewProp_Result_MetaData) }; // 2152259509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Switch to Async Nodes\n// This C++ method logs in a user to an online subsystem using their device ID and sets up a callback function to handle the login response.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/with-device-id\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switch to Async Nodes\n This C++ method logs in a user to an online subsystem using their device ID and sets up a callback function to handle the login response.\n Documentation link: https:betide-studio.gitbook.io/eos-integration-kit/authentication/with-device-id" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "LoginWithDeviceID", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::EIK_Subsystem_eventLoginWithDeviceID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::EIK_Subsystem_eventLoginWithDeviceID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics
	{
		struct EIK_Subsystem_eventLoginWithEpicLauncher_Parms
		{
			int32 LocalUserNum;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithEpicLauncher_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithEpicLauncher_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::NewProp_Result_MetaData) }; // 2152259509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This C++ method logs in a user to an online subsystem using the Epic Launcher and sets up a callback function to handle the login response.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/with-epic-launcher\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method logs in a user to an online subsystem using the Epic Launcher and sets up a callback function to handle the login response.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/authentication/with-epic-launcher" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "LoginWithEpicLauncher", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::EIK_Subsystem_eventLoginWithEpicLauncher_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::EIK_Subsystem_eventLoginWithEpicLauncher_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics
	{
		struct EIK_Subsystem_eventLoginWithPersistantAuth_Parms
		{
			int32 LocalUserNum;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithPersistantAuth_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithPersistantAuth_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::NewProp_Result_MetaData) }; // 2152259509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This C++ method logs in a user to an online subsystem using persistent authentication and sets up a callback function to handle the login response.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/with-persistent-auth\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method logs in a user to an online subsystem using persistent authentication and sets up a callback function to handle the login response.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/authentication/with-persistent-auth" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "LoginWithPersistantAuth", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::EIK_Subsystem_eventLoginWithPersistantAuth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::EIK_Subsystem_eventLoginWithPersistantAuth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics
	{
		struct EIK_Subsystem_eventLoginWithSteam_Parms
		{
			int32 LocalUserNum;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithSteam_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLoginWithSteam_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Login_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::NewProp_Result_MetaData) }; // 2152259509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This C++ method logs in a user to an online subsystem through an account portal and sets up a callback function to handle the login response.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/with-steam\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ method logs in a user to an online subsystem through an account portal and sets up a callback function to handle the login response.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/authentication/with-steam" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "LoginWithSteam", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::EIK_Subsystem_eventLoginWithSteam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::EIK_Subsystem_eventLoginWithSteam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics
	{
		struct EIK_Subsystem_eventLogout_Parms
		{
			int32 LocalUserNum;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLogout_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventLogout_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_Logout_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::NewProp_Result_MetaData) }; // 2627487276
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for logging out a user from an online subsystem, and it sets up a callback function to handle the logout response.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/logout\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for logging out a user from an online subsystem, and it sets up a callback function to handle the logout response.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/authentication/logout" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "Logout", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::EIK_Subsystem_eventLogout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::EIK_Subsystem_eventLogout_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_Logout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_Logout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics
	{
		struct EIK_Subsystem_eventOnHostMigrated_Parms
		{
			FScriptDelegate Result;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventOnHostMigrated_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_HostMigration_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::NewProp_Result_MetaData) }; // 2498286200
	void Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIK_Subsystem_eventOnHostMigrated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventOnHostMigrated_Parms), &Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "OnHostMigrated", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::EIK_Subsystem_eventOnHostMigrated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::EIK_Subsystem_eventOnHostMigrated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics
	{
		struct EIK_Subsystem_eventPurchaseItem_Parms
		{
			FScriptDelegate Result;
			FString ItemID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventPurchaseItem_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_PurchaseOffer_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::NewProp_Result_MetaData) }; // 4055590212
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventPurchaseItem_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::NewProp_ItemID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Store" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for purchasing an item from the store.\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for purchasing an item from the store." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "PurchaseItem", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::EIK_Subsystem_eventPurchaseItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::EIK_Subsystem_eventPurchaseItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics
	{
		struct EIK_Subsystem_eventQueryOffers_Parms
		{
			FScriptDelegate Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventQueryOffers_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_GetOffers_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::NewProp_Result_MetaData) }; // 2722321259
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Store" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for purchasing an item from the store.\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for purchasing an item from the store." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "QueryOffers", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::EIK_Subsystem_eventQueryOffers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::EIK_Subsystem_eventQueryOffers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_QueryOffers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_QueryOffers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics
	{
		struct EIK_Subsystem_eventRegisterPlayer_Parms
		{
			FName SessionName;
			bool bWasInvited;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static void NewProp_bWasInvited_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasInvited;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventRegisterPlayer_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::NewProp_bWasInvited_SetBit(void* Obj)
	{
		((EIK_Subsystem_eventRegisterPlayer_Parms*)Obj)->bWasInvited = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::NewProp_bWasInvited = { "bWasInvited", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventRegisterPlayer_Parms), &Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::NewProp_bWasInvited_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::NewProp_bWasInvited,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for registering Players into the session\n" },
#endif
		{ "DisplayName", "Register Players" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for registering Players into the session" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "RegisterPlayer", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::EIK_Subsystem_eventRegisterPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::EIK_Subsystem_eventRegisterPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics
	{
		struct EIK_Subsystem_eventSetPlayerData_Parms
		{
			FScriptDelegate Result;
			FString FileName;
			USaveGame* SavedGame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SavedGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventSetPlayerData_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_WriteFile_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::NewProp_Result_MetaData) }; // 4279015967
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventSetPlayerData_Parms, FileName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::NewProp_SavedGame = { "SavedGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventSetPlayerData_Parms, SavedGame), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::NewProp_SavedGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Data" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "SetPlayerData", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::EIK_Subsystem_eventSetPlayerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::EIK_Subsystem_eventSetPlayerData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics
	{
		struct EIK_Subsystem_eventShowFriendUserInterface_Parms
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
	void Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIK_Subsystem_eventShowFriendUserInterface_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EIK_Subsystem_eventShowFriendUserInterface_Parms), &Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Friend" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is a C++ method definition for getting the auth token of a player from an online subsystem.\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for getting the auth token of a player from an online subsystem." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "ShowFriendUserInterface", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::EIK_Subsystem_eventShowFriendUserInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::EIK_Subsystem_eventShowFriendUserInterface_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics
	{
		struct EIK_Subsystem_eventStartSession_Parms
		{
			FName SessionName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventStartSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::NewProp_SessionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for starting lobbies and sessions\n" },
#endif
		{ "DisplayName", "Start EOS Session" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for starting lobbies and sessions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "StartSession", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::EIK_Subsystem_eventStartSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::EIK_Subsystem_eventStartSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_StartSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_StartSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics
	{
		struct EIK_Subsystem_eventUnRegisterPlayer_Parms
		{
			FName SessionName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventUnRegisterPlayer_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::NewProp_SessionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a C++ method definition for unregistering Players into the session\n" },
#endif
		{ "DisplayName", "Unregister Players" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a C++ method definition for unregistering Players into the session" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "UnRegisterPlayer", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::EIK_Subsystem_eventUnRegisterPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::EIK_Subsystem_eventUnRegisterPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics
	{
		struct EIK_Subsystem_eventUpdateStats_Parms
		{
			FScriptDelegate Result;
			FString StatName;
			int32 Amount;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventUpdateStats_Parms, Result), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_BP_UpdateStat_Callback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::NewProp_Result_MetaData) }; // 1455873753
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventUpdateStats_Parms, StatName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EIK_Subsystem_eventUpdateStats_Parms, Amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::NewProp_StatName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Statistics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stat Functions\n" },
#endif
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stat Functions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Subsystem, nullptr, "UpdateStats", nullptr, nullptr, Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::EIK_Subsystem_eventUpdateStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::EIK_Subsystem_eventUpdateStats_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEIK_Subsystem_UpdateStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Subsystem_UpdateStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Subsystem);
	UClass* Z_Construct_UClass_UEIK_Subsystem_NoRegister()
	{
		return UEIK_Subsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEIK_Subsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEIK_Subsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Subsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEIK_Subsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Subsystem_ConnectEosAndPlayFab, "ConnectEosAndPlayFab" }, // 2959792359
		{ &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSLobby, "CreateEOSLobby" }, // 3721086881
		{ &Z_Construct_UFunction_UEIK_Subsystem_CreateEOSSession, "CreateEOSSession" }, // 687517244
		{ &Z_Construct_UFunction_UEIK_Subsystem_DestroyEosSession, "DestroyEosSession" }, // 2552994614
		{ &Z_Construct_UFunction_UEIK_Subsystem_EndSession, "EndSession" }, // 4151510712
		{ &Z_Construct_UFunction_UEIK_Subsystem_EnumerateTitleFiles, "EnumerateTitleFiles" }, // 3663153264
		{ &Z_Construct_UFunction_UEIK_Subsystem_FindEOSSession, "FindEOSSession" }, // 949254581
		{ &Z_Construct_UFunction_UEIK_Subsystem_GenerateSessionCode, "GenerateSessionCode" }, // 2610035811
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetEpicID, "GetEpicID" }, // 3956317601
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetLeaderboard, "GetLeaderboard" }, // 4180881996
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetLoginStatus, "GetLoginStatus" }, // 2525427825
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetOwnedItems, "GetOwnedItems" }, // 2242571923
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetPlayerData, "GetPlayerData" }, // 2646908587
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetPlayerNickname, "GetPlayerNickname" }, // 7709111
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetProductUserID, "GetProductUserID" }, // 547892287
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetStats, "GetStats" }, // 3720829066
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetTitleFile, "GetTitleFile" }, // 1476187120
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileContent, "GetTitleFileContent" }, // 2480545620
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetTitleFileList, "GetTitleFileList" }, // 4082125083
		{ &Z_Construct_UFunction_UEIK_Subsystem_GetUserUniqueID, "GetUserUniqueID" }, // 542873788
		{ &Z_Construct_UFunction_UEIK_Subsystem_InitializeEIK, "InitializeEIK" }, // 729199005
		{ &Z_Construct_UFunction_UEIK_Subsystem_JoinEosSession, "JoinEosSession" }, // 699027142
		{ &Z_Construct_UFunction_UEIK_Subsystem_LoginWithAccountPortal, "LoginWithAccountPortal" }, // 1791666853
		{ &Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeveloperTool, "LoginWithDeveloperTool" }, // 3932386435
		{ &Z_Construct_UFunction_UEIK_Subsystem_LoginWithDeviceID, "LoginWithDeviceID" }, // 1264832455
		{ &Z_Construct_UFunction_UEIK_Subsystem_LoginWithEpicLauncher, "LoginWithEpicLauncher" }, // 4033132798
		{ &Z_Construct_UFunction_UEIK_Subsystem_LoginWithPersistantAuth, "LoginWithPersistantAuth" }, // 1373289551
		{ &Z_Construct_UFunction_UEIK_Subsystem_LoginWithSteam, "LoginWithSteam" }, // 3021142134
		{ &Z_Construct_UFunction_UEIK_Subsystem_Logout, "Logout" }, // 1860328780
		{ &Z_Construct_UFunction_UEIK_Subsystem_OnHostMigrated, "OnHostMigrated" }, // 2866513250
		{ &Z_Construct_UFunction_UEIK_Subsystem_PurchaseItem, "PurchaseItem" }, // 94940378
		{ &Z_Construct_UFunction_UEIK_Subsystem_QueryOffers, "QueryOffers" }, // 4089994330
		{ &Z_Construct_UFunction_UEIK_Subsystem_RegisterPlayer, "RegisterPlayer" }, // 301651622
		{ &Z_Construct_UFunction_UEIK_Subsystem_SetPlayerData, "SetPlayerData" }, // 3074165014
		{ &Z_Construct_UFunction_UEIK_Subsystem_ShowFriendUserInterface, "ShowFriendUserInterface" }, // 203802548
		{ &Z_Construct_UFunction_UEIK_Subsystem_StartSession, "StartSession" }, // 906666412
		{ &Z_Construct_UFunction_UEIK_Subsystem_UnRegisterPlayer, "UnRegisterPlayer" }, // 1429574433
		{ &Z_Construct_UFunction_UEIK_Subsystem_UpdateStats, "UpdateStats" }, // 863777767
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Subsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_Subsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystem/EIK_Subsystem.h" },
		{ "ModuleRelativePath", "Subsystem/EIK_Subsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIK_Subsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Subsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Subsystem_Statics::ClassParams = {
		&UEIK_Subsystem::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Subsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEIK_Subsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEIK_Subsystem()
	{
		if (!Z_Registration_Info_UClass_UEIK_Subsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Subsystem.OuterSingleton, Z_Construct_UClass_UEIK_Subsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIK_Subsystem.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Subsystem>()
	{
		return UEIK_Subsystem::StaticClass();
	}
	UEIK_Subsystem::UEIK_Subsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Subsystem);
	UEIK_Subsystem::~UEIK_Subsystem() {}
	struct Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_Statics::EnumInfo[] = {
		{ EEIKAttributeType_StaticEnum, TEXT("EEIKAttributeType"), &Z_Registration_Info_UEnum_EEIKAttributeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3941579087U) },
		{ ERegionInfo_StaticEnum, TEXT("ERegionInfo"), &Z_Registration_Info_UEnum_ERegionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 722458386U) },
		{ EMatchType_StaticEnum, TEXT("EMatchType"), &Z_Registration_Info_UEnum_EMatchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 396764989U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_Statics::ScriptStructInfo[] = {
		{ FEIKAttribute::StaticStruct, Z_Construct_UScriptStruct_FEIKAttribute_Statics::NewStructOps, TEXT("EIKAttribute"), &Z_Registration_Info_UScriptStruct_EIKAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIKAttribute), 4110417661U) },
		{ FOffersStruct::StaticStruct, Z_Construct_UScriptStruct_FOffersStruct_Statics::NewStructOps, TEXT("OffersStruct"), &Z_Registration_Info_UScriptStruct_OffersStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOffersStruct), 2255260913U) },
		{ FSessionFindStruct::StaticStruct, Z_Construct_UScriptStruct_FSessionFindStruct_Statics::NewStructOps, TEXT("SessionFindStruct"), &Z_Registration_Info_UScriptStruct_SessionFindStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSessionFindStruct), 3001502516U) },
		{ FFileListStruct::StaticStruct, Z_Construct_UScriptStruct_FFileListStruct_Statics::NewStructOps, TEXT("FileListStruct"), &Z_Registration_Info_UScriptStruct_FileListStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFileListStruct), 2822107266U) },
		{ FEIKUniqueNetId::StaticStruct, Z_Construct_UScriptStruct_FEIKUniqueNetId_Statics::NewStructOps, TEXT("EIKUniqueNetId"), &Z_Registration_Info_UScriptStruct_EIKUniqueNetId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIKUniqueNetId), 1627776817U) },
		{ FEIK_Stats::StaticStruct, Z_Construct_UScriptStruct_FEIK_Stats_Statics::NewStructOps, TEXT("EIK_Stats"), &Z_Registration_Info_UScriptStruct_EIK_Stats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_Stats), 2866746710U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Subsystem, UEIK_Subsystem::StaticClass, TEXT("UEIK_Subsystem"), &Z_Registration_Info_UClass_UEIK_Subsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Subsystem), 29215567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_651950535(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaptorRails_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
