// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HexagonMapping/Public/Earth/HexagonActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHexagonActor() {}
// Cross Module References
	HEXAGONMAPPING_API UEnum* Z_Construct_UEnum_HexagonMapping_EHexType();
	UPackage* Z_Construct_UPackage__Script_HexagonMapping();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AHexagonActor_NoRegister();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AHexagonActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
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
	uint32 Get_Z_Construct_UEnum_HexagonMapping_EHexType_Hash() { return 1712888034U; }
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
				{ "Desert", (int64)Desert },
				{ "Tundra", (int64)Tundra },
				{ "Plains", (int64)Plains },
				{ "Grassland", (int64)Grassland },
				{ "Mountain", (int64)Mountain },
				{ "Jungle", (int64)Jungle },
				{ "Ocean", (int64)Ocean },
				{ "Shore", (int64)Shore },
				{ "Snow", (int64)Snow },
				{ "Ice", (int64)Ice },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Desert.Name", "Desert" },
				{ "Grassland.Name", "Grassland" },
				{ "Ice.Name", "Ice" },
				{ "Jungle.Name", "Jungle" },
				{ "ModuleRelativePath", "Public/Earth/HexagonActor.h" },
				{ "Mountain.Name", "Mountain" },
				{ "Ocean.Name", "Ocean" },
				{ "Plains.Name", "Plains" },
				{ "Shore.Name", "Shore" },
				{ "Snow.Name", "Snow" },
				{ "Tundra.Name", "Tundra" },
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
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AHexagonActor::StaticRegisterNativesAHexagonActor()
	{
	}
	UClass* Z_Construct_UClass_AHexagonActor_NoRegister()
	{
		return AHexagonActor::StaticClass();
	}
	struct Z_Construct_UClass_AHexagonActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hinder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Hinder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Resource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResourceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Appeal_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Appeal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Continent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Continent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshTile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHexagonActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HexagonMapping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Earth/HexagonActor.h" },
		{ "ModuleRelativePath", "Public/Earth/HexagonActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonActor_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "TileInformation" },
		{ "Comment", "// nsort: desert, tundra, plains, grassland, mountain, jungle - string, enum\n" },
		{ "ModuleRelativePath", "Public/Earth/HexagonActor.h" },
		{ "ToolTip", "nsort: desert, tundra, plains, grassland, mountain, jungle - string, enum" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHexagonActor_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonActor, Type), Z_Construct_UEnum_HexagonMapping_EHexType, METADATA_PARAMS(Z_Construct_UClass_AHexagonActor_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonActor_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonActor_Statics::NewProp_Hinder_MetaData[] = {
		{ "Category", "TileInformation" },
		{ "Comment", "// trees/hill (def resource) string\n" },
		{ "ModuleRelativePath", "Public/Earth/HexagonActor.h" },
		{ "ToolTip", "trees/hill (def resource) string" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHexagonActor_Statics::NewProp_Hinder = { "Hinder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonActor, Hinder), METADATA_PARAMS(Z_Construct_UClass_AHexagonActor_Statics::NewProp_Hinder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonActor_Statics::NewProp_Hinder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonActor_Statics::NewProp_MoveCost_MetaData[] = {
		{ "Category", "TileInformation" },
		{ "Comment", "// movement cost, float 1-3?\n" },
		{ "ModuleRelativePath", "Public/Earth/HexagonActor.h" },
		{ "ToolTip", "movement cost, float 1-3?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHexagonActor_Statics::NewProp_MoveCost = { "MoveCost", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonActor, MoveCost), METADATA_PARAMS(Z_Construct_UClass_AHexagonActor_Statics::NewProp_MoveCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonActor_Statics::NewProp_MoveCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonActor_Statics::NewProp_Resource_MetaData[] = {
		{ "Category", "TileInformation" },
		{ "Comment", "// resource - bonus or luxury - Enum\n" },
		{ "ModuleRelativePath", "Public/Earth/HexagonActor.h" },
		{ "ToolTip", "resource - bonus or luxury - Enum" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHexagonActor_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonActor, Resource), METADATA_PARAMS(Z_Construct_UClass_AHexagonActor_Statics::NewProp_Resource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonActor_Statics::NewProp_Resource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonActor_Statics::NewProp_ResourceType_MetaData[] = {
		{ "Category", "TileInformation" },
		{ "Comment", "// (specific resource) enum? string\n" },
		{ "ModuleRelativePath", "Public/Earth/HexagonActor.h" },
		{ "ToolTip", "(specific resource) enum? string" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHexagonActor_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonActor, ResourceType), METADATA_PARAMS(Z_Construct_UClass_AHexagonActor_Statics::NewProp_ResourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonActor_Statics::NewProp_ResourceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonActor_Statics::NewProp_DefModifier_MetaData[] = {
		{ "Category", "TileInformation" },
		{ "Comment", "// defensive modifier float or int\n" },
		{ "ModuleRelativePath", "Public/Earth/HexagonActor.h" },
		{ "ToolTip", "defensive modifier float or int" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHexagonActor_Statics::NewProp_DefModifier = { "DefModifier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonActor, DefModifier), METADATA_PARAMS(Z_Construct_UClass_AHexagonActor_Statics::NewProp_DefModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonActor_Statics::NewProp_DefModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonActor_Statics::NewProp_Appeal_MetaData[] = {
		{ "Category", "TileInformation" },
		{ "Comment", "// Appeal int -1 - 6\n" },
		{ "ModuleRelativePath", "Public/Earth/HexagonActor.h" },
		{ "ToolTip", "Appeal int -1 - 6" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AHexagonActor_Statics::NewProp_Appeal = { "Appeal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonActor, Appeal), METADATA_PARAMS(Z_Construct_UClass_AHexagonActor_Statics::NewProp_Appeal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonActor_Statics::NewProp_Appeal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonActor_Statics::NewProp_Continent_MetaData[] = {
		{ "Category", "TileInformation" },
		{ "Comment", "// Continent string\n" },
		{ "ModuleRelativePath", "Public/Earth/HexagonActor.h" },
		{ "ToolTip", "Continent string" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHexagonActor_Statics::NewProp_Continent = { "Continent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonActor, Continent), METADATA_PARAMS(Z_Construct_UClass_AHexagonActor_Statics::NewProp_Continent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonActor_Statics::NewProp_Continent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonActor_Statics::NewProp_TileIndex_MetaData[] = {
		{ "Category", "HexagonActor" },
		{ "Comment", "// basic resource(s) custom class\n" },
		{ "ModuleRelativePath", "Public/Earth/HexagonActor.h" },
		{ "ToolTip", "basic resource(s) custom class" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHexagonActor_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonActor, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_AHexagonActor_Statics::NewProp_TileIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonActor_Statics::NewProp_TileIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonActor_Statics::NewProp_MeshTile_MetaData[] = {
		{ "Category", "HexagonActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Earth/HexagonActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexagonActor_Statics::NewProp_MeshTile = { "MeshTile", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonActor, MeshTile), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHexagonActor_Statics::NewProp_MeshTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonActor_Statics::NewProp_MeshTile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHexagonActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonActor_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonActor_Statics::NewProp_Hinder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonActor_Statics::NewProp_MoveCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonActor_Statics::NewProp_Resource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonActor_Statics::NewProp_ResourceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonActor_Statics::NewProp_DefModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonActor_Statics::NewProp_Appeal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonActor_Statics::NewProp_Continent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonActor_Statics::NewProp_TileIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonActor_Statics::NewProp_MeshTile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHexagonActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHexagonActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHexagonActor_Statics::ClassParams = {
		&AHexagonActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHexagonActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHexagonActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHexagonActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHexagonActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHexagonActor, 128942988);
	template<> HEXAGONMAPPING_API UClass* StaticClass<AHexagonActor>()
	{
		return AHexagonActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHexagonActor(Z_Construct_UClass_AHexagonActor, &AHexagonActor::StaticClass, TEXT("/Script/HexagonMapping"), TEXT("AHexagonActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHexagonActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
