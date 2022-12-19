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
	HEXAGONMAPPING_API UEnum* Z_Construct_UEnum_HexagonMapping_ENodeIndex();
	UPackage* Z_Construct_UPackage__Script_HexagonMapping();
	HEXAGONMAPPING_API UEnum* Z_Construct_UEnum_HexagonMapping_EDirection();
	HEXAGONMAPPING_API UEnum* Z_Construct_UEnum_HexagonMapping_EMapType();
	HEXAGONMAPPING_API UEnum* Z_Construct_UEnum_HexagonMapping_EResourceType();
	HEXAGONMAPPING_API UEnum* Z_Construct_UEnum_HexagonMapping_EResource();
	HEXAGONMAPPING_API UEnum* Z_Construct_UEnum_HexagonMapping_EHinder();
	HEXAGONMAPPING_API UEnum* Z_Construct_UEnum_HexagonMapping_EClimateType();
	HEXAGONMAPPING_API UEnum* Z_Construct_UEnum_HexagonMapping_EHexType();
// End Cross Module References
	static UEnum* ENodeIndex_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HexagonMapping_ENodeIndex, Z_Construct_UPackage__Script_HexagonMapping(), TEXT("ENodeIndex"));
		}
		return Singleton;
	}
	template<> HEXAGONMAPPING_API UEnum* StaticEnum<ENodeIndex>()
	{
		return ENodeIndex_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENodeIndex(ENodeIndex_StaticEnum, TEXT("/Script/HexagonMapping"), TEXT("ENodeIndex"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HexagonMapping_ENodeIndex_Hash() { return 3898415556U; }
	UEnum* Z_Construct_UEnum_HexagonMapping_ENodeIndex()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HexagonMapping();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENodeIndex"), 0, Get_Z_Construct_UEnum_HexagonMapping_ENodeIndex_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENodeIndex::None", (int64)ENodeIndex::None },
				{ "ENodeIndex::Left", (int64)ENodeIndex::Left },
				{ "ENodeIndex::Middle", (int64)ENodeIndex::Middle },
				{ "ENodeIndex::Right", (int64)ENodeIndex::Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Left.Name", "ENodeIndex::Left" },
				{ "Middle.Name", "ENodeIndex::Middle" },
				{ "ModuleRelativePath", "Public/Enums.h" },
				{ "None.Name", "ENodeIndex::None" },
				{ "Right.Name", "ENodeIndex::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HexagonMapping,
				nullptr,
				"ENodeIndex",
				"ENodeIndex",
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
	static UEnum* EDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HexagonMapping_EDirection, Z_Construct_UPackage__Script_HexagonMapping(), TEXT("EDirection"));
		}
		return Singleton;
	}
	template<> HEXAGONMAPPING_API UEnum* StaticEnum<EDirection>()
	{
		return EDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDirection(EDirection_StaticEnum, TEXT("/Script/HexagonMapping"), TEXT("EDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HexagonMapping_EDirection_Hash() { return 1009709651U; }
	UEnum* Z_Construct_UEnum_HexagonMapping_EDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HexagonMapping();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDirection"), 0, Get_Z_Construct_UEnum_HexagonMapping_EDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDirection::North", (int64)EDirection::North },
				{ "EDirection::NorthEast", (int64)EDirection::NorthEast },
				{ "EDirection::East", (int64)EDirection::East },
				{ "EDirection::SouthEast", (int64)EDirection::SouthEast },
				{ "EDirection::South", (int64)EDirection::South },
				{ "EDirection::SouthWest", (int64)EDirection::SouthWest },
				{ "EDirection::West", (int64)EDirection::West },
				{ "EDirection::NorthWest", (int64)EDirection::NorthWest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "East.Name", "EDirection::East" },
				{ "ModuleRelativePath", "Public/Enums.h" },
				{ "North.Name", "EDirection::North" },
				{ "NorthEast.Name", "EDirection::NorthEast" },
				{ "NorthWest.Name", "EDirection::NorthWest" },
				{ "South.Name", "EDirection::South" },
				{ "SouthEast.Name", "EDirection::SouthEast" },
				{ "SouthWest.Name", "EDirection::SouthWest" },
				{ "West.Name", "EDirection::West" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HexagonMapping,
				nullptr,
				"EDirection",
				"EDirection",
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
	static UEnum* EMapType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HexagonMapping_EMapType, Z_Construct_UPackage__Script_HexagonMapping(), TEXT("EMapType"));
		}
		return Singleton;
	}
	template<> HEXAGONMAPPING_API UEnum* StaticEnum<EMapType>()
	{
		return EMapType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMapType(EMapType_StaticEnum, TEXT("/Script/HexagonMapping"), TEXT("EMapType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HexagonMapping_EMapType_Hash() { return 1246106117U; }
	UEnum* Z_Construct_UEnum_HexagonMapping_EMapType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HexagonMapping();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMapType"), 0, Get_Z_Construct_UEnum_HexagonMapping_EMapType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMapType::Invalid", (int64)EMapType::Invalid },
				{ "EMapType::FlatEarthIsRealDontTryToStopUsAndYesMarsIsSphericalBecauseItsBeenProvenWithPhotosThatIsNotEnoughEvidenceForTheEarthForSomeUnknownReason", (int64)EMapType::FlatEarthIsRealDontTryToStopUsAndYesMarsIsSphericalBecauseItsBeenProvenWithPhotosThatIsNotEnoughEvidenceForTheEarthForSomeUnknownReason },
				{ "EMapType::Cylinder", (int64)EMapType::Cylinder },
				{ "EMapType::Sphere", (int64)EMapType::Sphere },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cylinder.Name", "EMapType::Cylinder" },
				{ "FlatEarthIsRealDontTryToStopUsAndYesMarsIsSphericalBecauseItsBeenProvenWithPhotosThatIsNotEnoughEvidenceForTheEarthForSomeUnknownReason.Name", "EMapType::FlatEarthIsRealDontTryToStopUsAndYesMarsIsSphericalBecauseItsBeenProvenWithPhotosThatIsNotEnoughEvidenceForTheEarthForSomeUnknownReason" },
				{ "Invalid.Name", "EMapType::Invalid" },
				{ "ModuleRelativePath", "Public/Enums.h" },
				{ "Sphere.Name", "EMapType::Sphere" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HexagonMapping,
				nullptr,
				"EMapType",
				"EMapType",
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
	static UEnum* EResourceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HexagonMapping_EResourceType, Z_Construct_UPackage__Script_HexagonMapping(), TEXT("EResourceType"));
		}
		return Singleton;
	}
	template<> HEXAGONMAPPING_API UEnum* StaticEnum<EResourceType>()
	{
		return EResourceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EResourceType(EResourceType_StaticEnum, TEXT("/Script/HexagonMapping"), TEXT("EResourceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HexagonMapping_EResourceType_Hash() { return 3846036059U; }
	UEnum* Z_Construct_UEnum_HexagonMapping_EResourceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HexagonMapping();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EResourceType"), 0, Get_Z_Construct_UEnum_HexagonMapping_EResourceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EResourceType::None", (int64)EResourceType::None },
				{ "EResourceType::Banana", (int64)EResourceType::Banana },
				{ "EResourceType::Fish", (int64)EResourceType::Fish },
				{ "EResourceType::Coal", (int64)EResourceType::Coal },
				{ "EResourceType::Copper", (int64)EResourceType::Copper },
				{ "EResourceType::Horses", (int64)EResourceType::Horses },
				{ "EResourceType::Iron", (int64)EResourceType::Iron },
				{ "EResourceType::Oil", (int64)EResourceType::Oil },
				{ "EResourceType::Uranium", (int64)EResourceType::Uranium },
				{ "EResourceType::Amber", (int64)EResourceType::Amber },
				{ "EResourceType::Citrus", (int64)EResourceType::Citrus },
				{ "EResourceType::Diamonds", (int64)EResourceType::Diamonds },
				{ "EResourceType::Ivory", (int64)EResourceType::Ivory },
				{ "EResourceType::Lithium", (int64)EResourceType::Lithium },
				{ "EResourceType::Gold", (int64)EResourceType::Gold },
				{ "EResourceType::Salt", (int64)EResourceType::Salt },
				{ "EResourceType::Silver", (int64)EResourceType::Silver },
				{ "EResourceType::Tobacco", (int64)EResourceType::Tobacco },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Amber.Comment", "// Luxury:\n" },
				{ "Amber.Name", "EResourceType::Amber" },
				{ "Amber.ToolTip", "Luxury:" },
				{ "Banana.Comment", "// Basic:\n" },
				{ "Banana.Name", "EResourceType::Banana" },
				{ "Banana.ToolTip", "Basic:" },
				{ "BlueprintType", "true" },
				{ "Citrus.Name", "EResourceType::Citrus" },
				{ "Coal.Comment", "// Bonus:\n" },
				{ "Coal.Name", "EResourceType::Coal" },
				{ "Coal.ToolTip", "Bonus:" },
				{ "Copper.Name", "EResourceType::Copper" },
				{ "Diamonds.Name", "EResourceType::Diamonds" },
				{ "Fish.Name", "EResourceType::Fish" },
				{ "Gold.Name", "EResourceType::Gold" },
				{ "Horses.Name", "EResourceType::Horses" },
				{ "Iron.Name", "EResourceType::Iron" },
				{ "Ivory.Name", "EResourceType::Ivory" },
				{ "Lithium.Name", "EResourceType::Lithium" },
				{ "ModuleRelativePath", "Public/Enums.h" },
				{ "None.Name", "EResourceType::None" },
				{ "Oil.Name", "EResourceType::Oil" },
				{ "Salt.Name", "EResourceType::Salt" },
				{ "Silver.Name", "EResourceType::Silver" },
				{ "Tobacco.Name", "EResourceType::Tobacco" },
				{ "Uranium.Name", "EResourceType::Uranium" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HexagonMapping,
				nullptr,
				"EResourceType",
				"EResourceType",
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
	static UEnum* EResource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HexagonMapping_EResource, Z_Construct_UPackage__Script_HexagonMapping(), TEXT("EResource"));
		}
		return Singleton;
	}
	template<> HEXAGONMAPPING_API UEnum* StaticEnum<EResource>()
	{
		return EResource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EResource(EResource_StaticEnum, TEXT("/Script/HexagonMapping"), TEXT("EResource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HexagonMapping_EResource_Hash() { return 2007177657U; }
	UEnum* Z_Construct_UEnum_HexagonMapping_EResource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HexagonMapping();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EResource"), 0, Get_Z_Construct_UEnum_HexagonMapping_EResource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EResource::None", (int64)EResource::None },
				{ "EResource::Basic", (int64)EResource::Basic },
				{ "EResource::Bonus", (int64)EResource::Bonus },
				{ "EResource::Luxury", (int64)EResource::Luxury },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Basic.Name", "EResource::Basic" },
				{ "BlueprintType", "true" },
				{ "Bonus.Name", "EResource::Bonus" },
				{ "Luxury.Name", "EResource::Luxury" },
				{ "ModuleRelativePath", "Public/Enums.h" },
				{ "None.Name", "EResource::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HexagonMapping,
				nullptr,
				"EResource",
				"EResource",
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
	static UEnum* EHinder_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HexagonMapping_EHinder, Z_Construct_UPackage__Script_HexagonMapping(), TEXT("EHinder"));
		}
		return Singleton;
	}
	template<> HEXAGONMAPPING_API UEnum* StaticEnum<EHinder>()
	{
		return EHinder_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHinder(EHinder_StaticEnum, TEXT("/Script/HexagonMapping"), TEXT("EHinder"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HexagonMapping_EHinder_Hash() { return 2536788078U; }
	UEnum* Z_Construct_UEnum_HexagonMapping_EHinder()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HexagonMapping();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHinder"), 0, Get_Z_Construct_UEnum_HexagonMapping_EHinder_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHinder::None", (int64)EHinder::None },
				{ "EHinder::Hill", (int64)EHinder::Hill },
				{ "EHinder::Trees", (int64)EHinder::Trees },
				{ "EHinder::Mountain", (int64)EHinder::Mountain },
				{ "EHinder::Water", (int64)EHinder::Water },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Hill.Name", "EHinder::Hill" },
				{ "ModuleRelativePath", "Public/Enums.h" },
				{ "Mountain.Name", "EHinder::Mountain" },
				{ "None.Name", "EHinder::None" },
				{ "Trees.Name", "EHinder::Trees" },
				{ "Water.Name", "EHinder::Water" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HexagonMapping,
				nullptr,
				"EHinder",
				"EHinder",
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
