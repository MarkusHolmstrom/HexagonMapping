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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AHexagonActor_NoRegister();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OceanPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OceanPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShorePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShorePercentage;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_OceanPercentage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_OceanPercentage = { "OceanPercentage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClimateInfo, OceanPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_OceanPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_OceanPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_ShorePercentage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_ShorePercentage = { "ShorePercentage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClimateInfo, ShorePercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_ShorePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_ShorePercentage_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_OceanPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimateInfo_Statics::NewProp_ShorePercentage,
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
	uint32 Get_Z_Construct_UScriptStruct_FClimateInfo_Hash() { return 3667224091U; }
	void UGenerateMapComponent::StaticRegisterNativesUGenerateMapComponent()
	{
	}
	UClass* Z_Construct_UClass_UGenerateMapComponent_NoRegister()
	{
		return UGenerateMapComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateMapComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaterChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlainsHexTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlainsHexTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlainsChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlainsChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MountainHexTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MountainHexTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MountainChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MountainChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesertHexTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DesertHexTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesertChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesertChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TundraHexTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TundraHexTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TundraChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TundraChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JungleHexTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_JungleHexTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JungleChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JungleChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnowHexTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SnowHexTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnowChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnowChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IceHexTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_IceHexTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IceChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IceChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapWidth;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateMapComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HexagonMapping,
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WaterChance_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WaterChance = { "WaterChance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, WaterChance), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WaterChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WaterChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_PlainsHexTile_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_PlainsHexTile = { "PlainsHexTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, PlainsHexTile), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_PlainsHexTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_PlainsHexTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_PlainsChance_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_PlainsChance = { "PlainsChance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, PlainsChance), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_PlainsChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_PlainsChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MountainHexTile_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MountainHexTile = { "MountainHexTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, MountainHexTile), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MountainHexTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MountainHexTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MountainChance_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MountainChance = { "MountainChance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, MountainChance), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MountainChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MountainChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DesertHexTile_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DesertHexTile = { "DesertHexTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, DesertHexTile), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DesertHexTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DesertHexTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DesertChance_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DesertChance = { "DesertChance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, DesertChance), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DesertChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DesertChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TundraHexTile_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TundraHexTile = { "TundraHexTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, TundraHexTile), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TundraHexTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TundraHexTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TundraChance_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TundraChance = { "TundraChance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, TundraChance), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TundraChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TundraChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_JungleHexTile_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_JungleHexTile = { "JungleHexTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, JungleHexTile), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_JungleHexTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_JungleHexTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_JungleChance_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_JungleChance = { "JungleChance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, JungleChance), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_JungleChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_JungleChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_SnowHexTile_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_SnowHexTile = { "SnowHexTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, SnowHexTile), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_SnowHexTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_SnowHexTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_SnowChance_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_SnowChance = { "SnowChance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, SnowChance), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_SnowChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_SnowChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IceHexTile_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IceHexTile = { "IceHexTile", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, IceHexTile), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IceHexTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IceHexTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IceChance_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/GenerateMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IceChance = { "IceChance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateMapComponent, IceChance), METADATA_PARAMS(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IceChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IceChance_MetaData)) };
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenerateMapComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_HorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_OddRowHorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_VerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_GrassHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WaterHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_ShoreHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_WaterChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_PlainsHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_PlainsChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MountainHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MountainChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DesertHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_DesertChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TundraHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_TundraChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_JungleHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_JungleChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_SnowHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_SnowChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IceHexTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_IceChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MapHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateMapComponent_Statics::NewProp_MapWidth,
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
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateMapComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateMapComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenerateMapComponent_Statics::ClassParams = {
		&UGenerateMapComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGenerateMapComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(UGenerateMapComponent, 595536062);
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
