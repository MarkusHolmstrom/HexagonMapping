// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HexagonMapping/Public/Earth/GenerateMapComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateMapComponent() {}
// Cross Module References
	HEXAGONMAPPING_API UEnum* Z_Construct_UEnum_HexagonMapping_EClimateType();
	UPackage* Z_Construct_UPackage__Script_HexagonMapping();
	HEXAGONMAPPING_API UScriptStruct* Z_Construct_UScriptStruct_FClimateInfo();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_UGenerateMapComponent_NoRegister();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_UGenerateMapComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AHexagonActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
	static UEnum* EClimateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HexagonMapping_EClimateType, Z_Construct_UPackage__Script_HexagonMapping(), TEXT("EClimateType"));
		}
		return Singleton;
	}
	template<> HEXAGONMAPPING_API UEnum* StaticEnum<EClimateType>()
	{
		return EClimateType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClimateType(EClimateType_StaticEnum, TEXT("/Script/HexagonMapping"), TEXT("EClimateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HexagonMapping_EClimateType_Hash() { return 696526302U; }
	UEnum* Z_Construct_UEnum_HexagonMapping_EClimateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HexagonMapping();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClimateType"), 0, Get_Z_Construct_UEnum_HexagonMapping_EClimateType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "INVALID", (int64)INVALID },
				{ "Cold", (int64)Cold },
				{ "Timid", (int64)Timid },
				{ "Normal", (int64)Normal },
				{ "Warm", (int64)Warm },
				{ "Hot", (int64)Hot },
				{ "MAX", (int64)MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cold.Name", "Cold" },
				{ "Hot.Name", "Hot" },
				{ "INVALID.Name", "INVALID" },
				{ "MAX.Hidden", "" },
				{ "MAX.Name", "MAX" },
				{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
				{ "Normal.Name", "Normal" },
				{ "Timid.Name", "Timid" },
				{ "Warm.Name", "Warm" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HexagonMapping,
				nullptr,
				"EClimateType",
				"EClimateType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FClimateInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HEXAGONMAPPING_API uint32 Get_Z_Construct_UScriptStruct_FClimateInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClimateInfo, Z_Construct_UPackage__Script_HexagonMapping(), TEXT("ClimateInfo"), sizeof(FClimateInfo), Get_Z_Construct_UScriptStruct_FClimateInfo_Hash());
	}
	return Singleton;
}
template<> HEXAGONMAPPING_API UScriptStruct* StaticStruct<FClimateInfo>()
{
	return FClimateInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClimateInfo(FClimateInfo::StaticStruct, TEXT("/Script/HexagonMapping"), TEXT("ClimateInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HexagonMapping_StaticRegisterNativesFClimateInfo
{
	FScriptStruct_HexagonMapping_StaticRegisterNativesFClimateInfo()
	{
		UScriptStruct::DeferCppStructOps<FClimateInfo>(FName(TEXT("ClimateInfo")));
	}
} ScriptStruct_HexagonMapping_StaticRegisterNativesFClimateInfo;
	struct Z_Construct_UScriptStruct_FClimateInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinHor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinHor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxHor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegMinHor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NegMinHor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegMaxHor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NegMaxHor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimateType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClimateType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Modifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesertPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesertPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TundraPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TundraPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlainsPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlainsPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrasslandPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrasslandPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MountainPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MountainPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JunglePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JunglePercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnowPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnowPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IcePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IcePercentage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MapPercentages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapPercentages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MapPercentages;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimateInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClimateInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClimateInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MinHor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MinHor = { "MinHor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClimateInfo, MinHor), METADATA_PARAMS(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MinHor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MinHor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MaxHor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MaxHor = { "MaxHor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClimateInfo, MaxHor), METADATA_PARAMS(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MaxHor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MaxHor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_NegMinHor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_NegMinHor = { "NegMinHor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClimateInfo, NegMinHor), METADATA_PARAMS(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_NegMinHor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_NegMinHor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_NegMaxHor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_NegMaxHor = { "NegMaxHor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClimateInfo, NegMaxHor), METADATA_PARAMS(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_NegMaxHor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_NegMaxHor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_ClimateType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_ClimateType = { "ClimateType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClimateInfo, ClimateType), Z_Construct_UEnum_HexagonMapping_EClimateType, METADATA_PARAMS(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_ClimateType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_ClimateType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_Modifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClimateInfo, Modifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_Modifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_Modifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_DesertPercentage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_DesertPercentage = { "DesertPercentage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClimateInfo, DesertPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_DesertPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_DesertPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_TundraPercentage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_TundraPercentage = { "TundraPercentage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClimateInfo, TundraPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_TundraPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_TundraPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_PlainsPercentage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_PlainsPercentage = { "PlainsPercentage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClimateInfo, PlainsPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_PlainsPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_PlainsPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_GrasslandPercentage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_GrasslandPercentage = { "GrasslandPercentage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClimateInfo, GrasslandPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_GrasslandPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_GrasslandPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MountainPercentage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MountainPercentage = { "MountainPercentage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClimateInfo, MountainPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MountainPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MountainPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_JunglePercentage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_JunglePercentage = { "JunglePercentage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClimateInfo, JunglePercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_JunglePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_JunglePercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_SnowPercentage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_SnowPercentage = { "SnowPercentage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClimateInfo, SnowPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_SnowPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_SnowPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_IcePercentage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_IcePercentage = { "IcePercentage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClimateInfo, IcePercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_IcePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_IcePercentage_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MapPercentages_Inner = { "MapPercentages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MapPercentages_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MapPercentages = { "MapPercentages", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClimateInfo, MapPercentages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MapPercentages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MapPercentages_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClimateInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MinHor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MaxHor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_NegMinHor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_NegMaxHor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_ClimateType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_Modifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_DesertPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_TundraPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_PlainsPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_GrasslandPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MountainPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_JunglePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_SnowPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_IcePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MapPercentages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_MapPercentages,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClimateInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HexagonMapping,
		nullptr,
		&NewStructOps,
		"ClimateInfo",
		sizeof(FClimateInfo),
		alignof(FClimateInfo),
		Z_Construct_UScriptStruct_FClimateInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimateInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClimateInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimateInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClimateInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClimateInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HexagonMapping();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClimateInfo"), sizeof(FClimateInfo), Get_Z_Construct_UScriptStruct_FClimateInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClimateInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClimateInfo_Hash() { return 1073756888U; }
	DEFINE_FUNCTION(UGenerateMapComponent::execShootLaser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShootLaser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGenerateMapComponent::execGetEndLocation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetEndLocation(Z_Param_Height,Z_Param_Width);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGenerateMapComponent::execSetRandomList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->SetRandomList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGenerateMapComponent::execGetCorrectClimate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL(Z_Param_HigherPossLand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FClimateInfo*)Z_Param__Result=P_THIS->GetCorrectClimate(Z_Param_Index,Z_Param_HigherPossLand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGenerateMapComponent::execUpdateRandomIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CurIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UpdateRandomIndex(Z_Param_CurIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGenerateMapComponent::execSetLikelihoodLand)
	{
		P_GET_OBJECT(AHexagonActor,Z_Param_Tile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLikelihoodLand(Z_Param_Tile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGenerateMapComponent::execIsLandMoreLikely)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_UBOOL(Z_Param_Land);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLandMoreLikely(Z_Param_X,Z_Param_Y,Z_Param_Land);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGenerateMapComponent::execGetTile)
	{
		P_GET_STRUCT(FClimateInfo,Z_Param_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<AHexagonActor> *)Z_Param__Result=P_THIS->GetTile(Z_Param_Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGenerateMapComponent::execGenerateMap)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateMap(Z_Param_Height,Z_Param_Width);
		P_NATIVE_END;
	}
	void UGenerateMapComponent::StaticRegisterNativesUGenerateMapComponent()
	{
		UClass* Class = UGenerateMapComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateMap", &UGenerateMapComponent::execGenerateMap },
			{ "GetCorrectClimate", &UGenerateMapComponent::execGetCorrectClimate },
			{ "GetEndLocation", &UGenerateMapComponent::execGetEndLocation },
			{ "GetTile", &UGenerateMapComponent::execGetTile },
			{ "IsLandMoreLikely", &UGenerateMapComponent::execIsLandMoreLikely },
			{ "SetLikelihoodLand", &UGenerateMapComponent::execSetLikelihoodLand },
			{ "SetRandomList", &UGenerateMapComponent::execSetRandomList },
			{ "ShootLaser", &UGenerateMapComponent::execShootLaser },
			{ "UpdateRandomIndex", &UGenerateMapComponent::execUpdateRandomIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGenerateMapComponent_GenerateMap_Statics
	{
		struct GenerateMapComponent_eventGenerateMap_Parms
		{
			int32 Height;
			int32 Width;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGenerateMapComponent_GenerateMap_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenerateMapComponent_eventGenerateMap_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGenerateMapComponent_GenerateMap_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenerateMapComponent_eventGenerateMap_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenerateMapComponent_GenerateMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_GenerateMap_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_GenerateMap_Statics::NewProp_Width,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenerateMapComponent_GenerateMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenerateMapComponent_GenerateMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenerateMapComponent, nullptr, "GenerateMap", nullptr, nullptr, sizeof(GenerateMapComponent_eventGenerateMap_Parms), Z_Construct_UFunction_UGenerateMapComponent_GenerateMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateMapComponent_GenerateMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenerateMapComponent_GenerateMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateMapComponent_GenerateMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenerateMapComponent_GenerateMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenerateMapComponent_GenerateMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGenerateMapComponent_GetCorrectClimate_Statics
	{
		struct GenerateMapComponent_eventGetCorrectClimate_Parms
		{
			int32 Index;
			bool HigherPossLand;
			FClimateInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_HigherPossLand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HigherPossLand;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGenerateMapComponent_GetCorrectClimate_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenerateMapComponent_eventGetCorrectClimate_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGenerateMapComponent_GetCorrectClimate_Statics::NewProp_HigherPossLand_SetBit(void* Obj)
	{
		((GenerateMapComponent_eventGetCorrectClimate_Parms*)Obj)->HigherPossLand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGenerateMapComponent_GetCorrectClimate_Statics::NewProp_HigherPossLand = { "HigherPossLand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GenerateMapComponent_eventGetCorrectClimate_Parms), &Z_Construct_UFunction_UGenerateMapComponent_GetCorrectClimate_Statics::NewProp_HigherPossLand_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenerateMapComponent_GetCorrectClimate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenerateMapComponent_eventGetCorrectClimate_Parms, ReturnValue), Z_Construct_UScriptStruct_FClimateInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenerateMapComponent_GetCorrectClimate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_GetCorrectClimate_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_GetCorrectClimate_Statics::NewProp_HigherPossLand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_GetCorrectClimate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenerateMapComponent_GetCorrectClimate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenerateMapComponent_GetCorrectClimate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenerateMapComponent, nullptr, "GetCorrectClimate", nullptr, nullptr, sizeof(GenerateMapComponent_eventGetCorrectClimate_Parms), Z_Construct_UFunction_UGenerateMapComponent_GetCorrectClimate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateMapComponent_GetCorrectClimate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenerateMapComponent_GetCorrectClimate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateMapComponent_GetCorrectClimate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenerateMapComponent_GetCorrectClimate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenerateMapComponent_GetCorrectClimate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGenerateMapComponent_GetEndLocation_Statics
	{
		struct GenerateMapComponent_eventGetEndLocation_Parms
		{
			int32 Height;
			int32 Width;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGenerateMapComponent_GetEndLocation_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenerateMapComponent_eventGetEndLocation_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGenerateMapComponent_GetEndLocation_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenerateMapComponent_eventGetEndLocation_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenerateMapComponent_GetEndLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenerateMapComponent_eventGetEndLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenerateMapComponent_GetEndLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_GetEndLocation_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_GetEndLocation_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_GetEndLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenerateMapComponent_GetEndLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenerateMapComponent_GetEndLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenerateMapComponent, nullptr, "GetEndLocation", nullptr, nullptr, sizeof(GenerateMapComponent_eventGetEndLocation_Parms), Z_Construct_UFunction_UGenerateMapComponent_GetEndLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateMapComponent_GetEndLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenerateMapComponent_GetEndLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateMapComponent_GetEndLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenerateMapComponent_GetEndLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenerateMapComponent_GetEndLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGenerateMapComponent_GetTile_Statics
	{
		struct GenerateMapComponent_eventGetTile_Parms
		{
			FClimateInfo Info;
			TSubclassOf<AHexagonActor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGenerateMapComponent_GetTile_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenerateMapComponent_eventGetTile_Parms, Info), Z_Construct_UScriptStruct_FClimateInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGenerateMapComponent_GetTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenerateMapComponent_eventGetTile_Parms, ReturnValue), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenerateMapComponent_GetTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_GetTile_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_GetTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenerateMapComponent_GetTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenerateMapComponent_GetTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenerateMapComponent, nullptr, "GetTile", nullptr, nullptr, sizeof(GenerateMapComponent_eventGetTile_Parms), Z_Construct_UFunction_UGenerateMapComponent_GetTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateMapComponent_GetTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenerateMapComponent_GetTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateMapComponent_GetTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenerateMapComponent_GetTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenerateMapComponent_GetTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics
	{
		struct GenerateMapComponent_eventIsLandMoreLikely_Parms
		{
			int32 X;
			int32 Y;
			bool Land;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
		static void NewProp_Land_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Land;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenerateMapComponent_eventIsLandMoreLikely_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenerateMapComponent_eventIsLandMoreLikely_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::NewProp_Land_SetBit(void* Obj)
	{
		((GenerateMapComponent_eventIsLandMoreLikely_Parms*)Obj)->Land = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::NewProp_Land = { "Land", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GenerateMapComponent_eventIsLandMoreLikely_Parms), &Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::NewProp_Land_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GenerateMapComponent_eventIsLandMoreLikely_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GenerateMapComponent_eventIsLandMoreLikely_Parms), &Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::NewProp_Land,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenerateMapComponent, nullptr, "IsLandMoreLikely", nullptr, nullptr, sizeof(GenerateMapComponent_eventIsLandMoreLikely_Parms), Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGenerateMapComponent_SetLikelihoodLand_Statics
	{
		struct GenerateMapComponent_eventSetLikelihoodLand_Parms
		{
			AHexagonActor* Tile;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGenerateMapComponent_SetLikelihoodLand_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenerateMapComponent_eventSetLikelihoodLand_Parms, Tile), Z_Construct_UClass_AHexagonActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGenerateMapComponent_SetLikelihoodLand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GenerateMapComponent_eventSetLikelihoodLand_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGenerateMapComponent_SetLikelihoodLand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GenerateMapComponent_eventSetLikelihoodLand_Parms), &Z_Construct_UFunction_UGenerateMapComponent_SetLikelihoodLand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenerateMapComponent_SetLikelihoodLand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_SetLikelihoodLand_Statics::NewProp_Tile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_SetLikelihoodLand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenerateMapComponent_SetLikelihoodLand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenerateMapComponent_SetLikelihoodLand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenerateMapComponent, nullptr, "SetLikelihoodLand", nullptr, nullptr, sizeof(GenerateMapComponent_eventSetLikelihoodLand_Parms), Z_Construct_UFunction_UGenerateMapComponent_SetLikelihoodLand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateMapComponent_SetLikelihoodLand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenerateMapComponent_SetLikelihoodLand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateMapComponent_SetLikelihoodLand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenerateMapComponent_SetLikelihoodLand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenerateMapComponent_SetLikelihoodLand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGenerateMapComponent_SetRandomList_Statics
	{
		struct GenerateMapComponent_eventSetRandomList_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGenerateMapComponent_SetRandomList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenerateMapComponent_SetRandomList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenerateMapComponent_eventSetRandomList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenerateMapComponent_SetRandomList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_SetRandomList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_SetRandomList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenerateMapComponent_SetRandomList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenerateMapComponent_SetRandomList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenerateMapComponent, nullptr, "SetRandomList", nullptr, nullptr, sizeof(GenerateMapComponent_eventSetRandomList_Parms), Z_Construct_UFunction_UGenerateMapComponent_SetRandomList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateMapComponent_SetRandomList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenerateMapComponent_SetRandomList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateMapComponent_SetRandomList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenerateMapComponent_SetRandomList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenerateMapComponent_SetRandomList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGenerateMapComponent_ShootLaser_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenerateMapComponent_ShootLaser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenerateMapComponent_ShootLaser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenerateMapComponent, nullptr, "ShootLaser", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenerateMapComponent_ShootLaser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateMapComponent_ShootLaser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenerateMapComponent_ShootLaser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenerateMapComponent_ShootLaser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGenerateMapComponent_UpdateRandomIndex_Statics
	{
		struct GenerateMapComponent_eventUpdateRandomIndex_Parms
		{
			int32 CurIndex;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGenerateMapComponent_UpdateRandomIndex_Statics::NewProp_CurIndex = { "CurIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenerateMapComponent_eventUpdateRandomIndex_Parms, CurIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGenerateMapComponent_UpdateRandomIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenerateMapComponent_eventUpdateRandomIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenerateMapComponent_UpdateRandomIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_UpdateRandomIndex_Statics::NewProp_CurIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateMapComponent_UpdateRandomIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenerateMapComponent_UpdateRandomIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenerateMapComponent_UpdateRandomIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenerateMapComponent, nullptr, "UpdateRandomIndex", nullptr, nullptr, sizeof(GenerateMapComponent_eventUpdateRandomIndex_Parms), Z_Construct_UFunction_UGenerateMapComponent_UpdateRandomIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateMapComponent_UpdateRandomIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenerateMapComponent_UpdateRandomIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateMapComponent_UpdateRandomIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenerateMapComponent_UpdateRandomIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenerateMapComponent_UpdateRandomIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGenerateMapComponent_NoRegister()
	{
		return UGenerateMapComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateMapComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OddRowHorOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OddRowHorOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrassHexTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GrassHexTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterHexTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WaterHexTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoreHexTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ShoreHexTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlainsHexTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlainsHexTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MountainHexTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MountainHexTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesertHexTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DesertHexTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TundraHexTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TundraHexTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JungleHexTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_JungleHexTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnowHexTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SnowHexTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IceHexTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_IceHexTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapWidth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomFloatList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomFloatList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RandomFloatList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_List_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_List_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_List;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomFloatListLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomFloatListLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomFloatIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomFloatIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomIntList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomIntList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RandomIntList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomIntListLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomIntListLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomIntIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomIntIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClimateInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimateInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClimateInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimateInfoLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClimateInfoLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ColdPercentages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColdPercentages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColdPercentages;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimidPercentages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimidPercentages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TimidPercentages;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalPercentages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalPercentages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NormalPercentages;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WarmPercentages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarmPercentages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WarmPercentages;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HotPercentages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HotPercentages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HotPercentages;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandLikely_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandLikely_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LandLikely;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OceanLikely_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OceanLikely_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OceanLikely;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLandLikely_MetaData[];
#endif
		static void NewProp_bLandLikely_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLandLikely;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterLikelihood_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaterLikelihood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLandMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultLandMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncreasedLandMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IncreasedLandMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateMapComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HexagonMapping,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGenerateMapComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenerateMapComponent_GenerateMap, "GenerateMap" }, // 3521790880
		{ &Z_Construct_UFunction_UGenerateMapComponent_GetCorrectClimate, "GetCorrectClimate" }, // 3299510511
		{ &Z_Construct_UFunction_UGenerateMapComponent_GetEndLocation, "GetEndLocation" }, // 1430992825
		{ &Z_Construct_UFunction_UGenerateMapComponent_GetTile, "GetTile" }, // 640152111
		{ &Z_Construct_UFunction_UGenerateMapComponent_IsLandMoreLikely, "IsLandMoreLikely" }, // 4147419234
		{ &Z_Construct_UFunction_UGenerateMapComponent_SetLikelihoodLand, "SetLikelihoodLand" }, // 1052173778
		{ &Z_Construct_UFunction_UGenerateMapComponent_SetRandomList, "SetRandomList" }, // 511828710
		{ &Z_Construct_UFunction_UGenerateMapComponent_ShootLaser, "ShootLaser" }, // 2790374742
		{ &Z_Construct_UFunction_UGenerateMapComponent_UpdateRandomIndex, "UpdateRandomIndex" }, // 659767632
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Earth/GenerateMapComponent.h" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_HorOffset_MetaData[] = {
		{ "Category", "GenerateMapComponent" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_HorOffset = { "HorOffset", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, HorOffset), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_HorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_HorOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_OddRowHorOffset_MetaData[] = {
		{ "Category", "GenerateMapComponent" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_OddRowHorOffset = { "OddRowHorOffset", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, OddRowHorOffset), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_OddRowHorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_OddRowHorOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_VerOffset_MetaData[] = {
		{ "Category", "GenerateMapComponent" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_VerOffset = { "VerOffset", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, VerOffset), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_VerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_VerOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_GrassHexTile_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_GrassHexTile = { "GrassHexTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, GrassHexTile), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_GrassHexTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_GrassHexTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WaterHexTile_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WaterHexTile = { "WaterHexTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, WaterHexTile), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WaterHexTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WaterHexTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ShoreHexTile_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ShoreHexTile = { "ShoreHexTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, ShoreHexTile), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ShoreHexTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ShoreHexTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_PlainsHexTile_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_PlainsHexTile = { "PlainsHexTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, PlainsHexTile), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_PlainsHexTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_PlainsHexTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MountainHexTile_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MountainHexTile = { "MountainHexTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, MountainHexTile), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MountainHexTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MountainHexTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DesertHexTile_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DesertHexTile = { "DesertHexTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, DesertHexTile), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DesertHexTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DesertHexTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TundraHexTile_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TundraHexTile = { "TundraHexTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, TundraHexTile), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TundraHexTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TundraHexTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_JungleHexTile_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_JungleHexTile = { "JungleHexTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, JungleHexTile), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_JungleHexTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_JungleHexTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_SnowHexTile_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_SnowHexTile = { "SnowHexTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, SnowHexTile), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_SnowHexTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_SnowHexTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IceHexTile_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IceHexTile = { "IceHexTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, IceHexTile), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IceHexTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IceHexTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MapHeight_MetaData[] = {
		{ "Category", "GenerateMapComponent" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MapHeight = { "MapHeight", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, MapHeight), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MapHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MapHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MapWidth_MetaData[] = {
		{ "Category", "GenerateMapComponent" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MapWidth = { "MapWidth", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, MapWidth), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MapWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MapWidth_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomFloatList_Inner = { "RandomFloatList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomFloatList_MetaData[] = {
		{ "Category", "RandomFloatList" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomFloatList = { "RandomFloatList", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, RandomFloatList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomFloatList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomFloatList_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_List_Inner = { "List", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_List_MetaData[] = {
		{ "Category", "RandomFloatList" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, List), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_List_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_List_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomFloatListLength_MetaData[] = {
		{ "Category", "RandomFloatList" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomFloatListLength = { "RandomFloatListLength", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, RandomFloatListLength), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomFloatListLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomFloatListLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomFloatIndex_MetaData[] = {
		{ "Category", "RandomFloatList" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomFloatIndex = { "RandomFloatIndex", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, RandomFloatIndex), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomFloatIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomFloatIndex_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomIntList_Inner = { "RandomIntList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomIntList_MetaData[] = {
		{ "Category", "RandomFloatList" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomIntList = { "RandomIntList", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, RandomIntList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomIntList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomIntList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomIntListLength_MetaData[] = {
		{ "Category", "RandomFloatList" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomIntListLength = { "RandomIntListLength", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, RandomIntListLength), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomIntListLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomIntListLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomIntIndex_MetaData[] = {
		{ "Category", "RandomFloatList" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomIntIndex = { "RandomIntIndex", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, RandomIntIndex), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomIntIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomIntIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ClimateInfo_Inner = { "ClimateInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClimateInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ClimateInfo_MetaData[] = {
		{ "Category", "ClimateInfo" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ClimateInfo = { "ClimateInfo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, ClimateInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ClimateInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ClimateInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ClimateInfoLength_MetaData[] = {
		{ "Category", "ClimateInfo" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ClimateInfoLength = { "ClimateInfoLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, ClimateInfoLength), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ClimateInfoLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ClimateInfoLength_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ColdPercentages_Inner = { "ColdPercentages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ColdPercentages_MetaData[] = {
		{ "Category", "ClimateInfo" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ColdPercentages = { "ColdPercentages", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, ColdPercentages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ColdPercentages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ColdPercentages_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TimidPercentages_Inner = { "TimidPercentages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TimidPercentages_MetaData[] = {
		{ "Category", "ClimateInfo" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TimidPercentages = { "TimidPercentages", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, TimidPercentages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TimidPercentages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TimidPercentages_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_NormalPercentages_Inner = { "NormalPercentages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_NormalPercentages_MetaData[] = {
		{ "Category", "ClimateInfo" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_NormalPercentages = { "NormalPercentages", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, NormalPercentages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_NormalPercentages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_NormalPercentages_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WarmPercentages_Inner = { "WarmPercentages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WarmPercentages_MetaData[] = {
		{ "Category", "ClimateInfo" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WarmPercentages = { "WarmPercentages", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, WarmPercentages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WarmPercentages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WarmPercentages_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_HotPercentages_Inner = { "HotPercentages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_HotPercentages_MetaData[] = {
		{ "Category", "ClimateInfo" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_HotPercentages = { "HotPercentages", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, HotPercentages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_HotPercentages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_HotPercentages_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_LandLikely_Inner = { "LandLikely", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_LandLikely_MetaData[] = {
		{ "Category", "ClimateInfo" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_LandLikely = { "LandLikely", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, LandLikely), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_LandLikely_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_LandLikely_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_OceanLikely_Inner = { "OceanLikely", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_OceanLikely_MetaData[] = {
		{ "Category", "ClimateInfo" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_OceanLikely = { "OceanLikely", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, OceanLikely), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_OceanLikely_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_OceanLikely_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_bLandLikely_MetaData[] = {
		{ "Category", "ClimateInfo" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_bLandLikely_SetBit(void* Obj)
	{
		((UGenerateMapComponent*)Obj)->bLandLikely = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_bLandLikely = { "bLandLikely", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGenerateMapComponent), &Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_bLandLikely_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_bLandLikely_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_bLandLikely_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WaterLikelihood_MetaData[] = {
		{ "Category", "ClimateInfo" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WaterLikelihood = { "WaterLikelihood", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, WaterLikelihood), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WaterLikelihood_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WaterLikelihood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DefaultLandMultiplier_MetaData[] = {
		{ "Category", "ClimateInfo" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DefaultLandMultiplier = { "DefaultLandMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, DefaultLandMultiplier), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DefaultLandMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DefaultLandMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IncreasedLandMultiplier_MetaData[] = {
		{ "Category", "ClimateInfo" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IncreasedLandMultiplier = { "IncreasedLandMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, IncreasedLandMultiplier), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IncreasedLandMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IncreasedLandMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenerateMapComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_HorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_OddRowHorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_VerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_GrassHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WaterHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ShoreHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_PlainsHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MountainHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DesertHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TundraHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_JungleHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_SnowHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IceHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MapHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MapWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomFloatList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomFloatList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_List_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_List,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomFloatListLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomFloatIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomIntList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomIntList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomIntListLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_RandomIntIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ClimateInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ClimateInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ClimateInfoLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ColdPercentages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ColdPercentages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TimidPercentages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TimidPercentages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_NormalPercentages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_NormalPercentages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WarmPercentages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WarmPercentages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_HotPercentages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_HotPercentages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_LandLikely_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_LandLikely,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_OceanLikely_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_OceanLikely,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_bLandLikely,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WaterLikelihood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DefaultLandMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IncreasedLandMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateMapComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateMapComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenerateMapComponent_Statics::ClassParams = {
		&UGenerateMapComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGenerateMapComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateMapComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenerateMapComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenerateMapComponent, 2304537131);
	template<> HEXAGONMAPPING_API UClass* StaticClass<UGenerateMapComponent>()
	{
		return UGenerateMapComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenerateMapComponent(Z_Construct_UClass_UGenerateMapComponent, &UGenerateMapComponent::StaticClass, TEXT("/Script/HexagonMapping"), TEXT("UGenerateMapComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateMapComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
