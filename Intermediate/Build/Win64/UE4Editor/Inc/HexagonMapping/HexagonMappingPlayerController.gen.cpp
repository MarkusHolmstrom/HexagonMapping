// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HexagonMapping/HexagonMappingPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHexagonMappingPlayerController() {}
// Cross Module References
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AHexagonMappingPlayerController_NoRegister();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AHexagonMappingPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_HexagonMapping();
// End Cross Module References
	void AHexagonMappingPlayerController::StaticRegisterNativesAHexagonMappingPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AHexagonMappingPlayerController_NoRegister()
	{
		return AHexagonMappingPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AHexagonMappingPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHexagonMappingPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_HexagonMapping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonMappingPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HexagonMappingPlayerController.h" },
		{ "ModuleRelativePath", "HexagonMappingPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHexagonMappingPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHexagonMappingPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHexagonMappingPlayerController_Statics::ClassParams = {
		&AHexagonMappingPlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHexagonMappingPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonMappingPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHexagonMappingPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHexagonMappingPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHexagonMappingPlayerController, 2474784874);
	template<> HEXAGONMAPPING_API UClass* StaticClass<AHexagonMappingPlayerController>()
	{
		return AHexagonMappingPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHexagonMappingPlayerController(Z_Construct_UClass_AHexagonMappingPlayerController, &AHexagonMappingPlayerController::StaticClass, TEXT("/Script/HexagonMapping"), TEXT("AHexagonMappingPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHexagonMappingPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
