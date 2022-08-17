// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HexagonMapping/Public/Enums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnums() {}
// Cross Module References
	HEXAGONMAPPING_API UEnum* Z_Construct_UEnum_HexagonMapping_EClimateType();
	UPackage* Z_Construct_UPackage__Script_HexagonMapping();
	HEXAGONMAPPING_API UEnum* Z_Construct_UEnum_HexagonMapping_EHexType();
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
	uint32 Get_Z_Construct_UEnum_HexagonMapping_EClimateType_Hash() { return 2094418229U; }
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
				{ "EClimateType::INVALID", (int64)EClimateType::INVALID },
				{ "EClimateType::Cold", (int64)EClimateType::Cold },
				{ "EClimateType::Timid", (int64)EClimateType::Timid },
				{ "EClimateType::Normal", (int64)EClimateType::Normal },
				{ "EClimateType::Warm", (int64)EClimateType::Warm },
				{ "EClimateType::Hot", (int64)EClimateType::Hot },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cold.Name", "EClimateType::Cold" },
				{ "Hot.Name", "EClimateType::Hot" },
				{ "INVALID.Name", "EClimateType::INVALID" },
				{ "ModuleRelativePath", "Public/Enums.h" },
				{ "Normal.Name", "EClimateType::Normal" },
				{ "Timid.Name", "EClimateType::Timid" },
				{ "Warm.Name", "EClimateType::Warm" },
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
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHexType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HexagonMapping_EHexType, Z_Construct_UPackage__Script_HexagonMapping(), TEXT("EHexType"));
		}
		return Singleton;
	}
	template<> HEXAGONMAPPING_API UEnum* StaticEnum<EHexType>()
	{
		return EHexType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHexType(EHexType_StaticEnum, TEXT("/Script/HexagonMapping"), TEXT("EHexType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HexagonMapping_EHexType_Hash() { return 632760684U; }
	UEnum* Z_Construct_UEnum_HexagonMapping_EHexType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HexagonMapping();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHexType"), 0, Get_Z_Construct_UEnum_HexagonMapping_EHexType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHexType::Desert", (int64)EHexType::Desert },
				{ "EHexType::Tundra", (int64)EHexType::Tundra },
				{ "EHexType::Plains", (int64)EHexType::Plains },
				{ "EHexType::Grassland", (int64)EHexType::Grassland },
				{ "EHexType::Mountain", (int64)EHexType::Mountain },
				{ "EHexType::Jungle", (int64)EHexType::Jungle },
				{ "EHexType::Ocean", (int64)EHexType::Ocean },
				{ "EHexType::Shore", (int64)EHexType::Shore },
				{ "EHexType::Snow", (int64)EHexType::Snow },
				{ "EHexType::Ice", (int64)EHexType::Ice },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Desert.Name", "EHexType::Desert" },
				{ "Grassland.Name", "EHexType::Grassland" },
				{ "Ice.Name", "EHexType::Ice" },
				{ "Jungle.Name", "EHexType::Jungle" },
				{ "ModuleRelativePath", "Public/Enums.h" },
				{ "Mountain.Name", "EHexType::Mountain" },
				{ "Ocean.Name", "EHexType::Ocean" },
				{ "Plains.Name", "EHexType::Plains" },
				{ "Shore.Name", "EHexType::Shore" },
				{ "Snow.Name", "EHexType::Snow" },
				{ "Tundra.Name", "EHexType::Tundra" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HexagonMapping,
				nullptr,
				"EHexType",
				"EHexType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
