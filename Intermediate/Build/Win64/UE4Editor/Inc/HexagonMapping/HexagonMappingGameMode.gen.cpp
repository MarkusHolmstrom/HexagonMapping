// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HexagonMapping/HexagonMappingGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHexagonMappingGameMode() {}
// Cross Module References
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AHexagonMappingGameMode_NoRegister();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AHexagonMappingGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HexagonMapping();
// End Cross Module References
	void AHexagonMappingGameMode::StaticRegisterNativesAHexagonMappingGameMode()
	{
	}
	UClass* Z_Construct_UClass_AHexagonMappingGameMode_NoRegister()
	{
		return AHexagonMappingGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHexagonMappingGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHexagonMappingGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HexagonMapping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonMappingGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HexagonMappingGameMode.h" },
		{ "ModuleRelativePath", "HexagonMappingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHexagonMappingGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHexagonMappingGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHexagonMappingGameMode_Statics::ClassParams = {
		&AHexagonMappingGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHexagonMappingGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonMappingGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHexagonMappingGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHexagonMappingGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHexagonMappingGameMode, 332540598);
	template<> HEXAGONMAPPING_API UClass* StaticClass<AHexagonMappingGameMode>()
	{
		return AHexagonMappingGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHexagonMappingGameMode(Z_Construct_UClass_AHexagonMappingGameMode, &AHexagonMappingGameMode::StaticClass, TEXT("/Script/HexagonMapping"), TEXT("AHexagonMappingGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHexagonMappingGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
