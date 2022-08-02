// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HexagonMapping/Public/Earth/WorldPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPawn() {}
// Cross Module References
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AWorldPawn_NoRegister();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AWorldPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_HexagonMapping();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AWorldPawn::StaticRegisterNativesAWorldPawn()
	{
	}
	UClass* Z_Construct_UClass_AWorldPawn_NoRegister()
	{
		return AWorldPawn::StaticClass();
	}
	struct Z_Construct_UClass_AWorldPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Surface_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Surface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarthRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EarthRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_HexagonMapping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Earth/WorldPawn.h" },
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPawn_Statics::NewProp_Surface_MetaData[] = {
		{ "Category", "WorldPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldPawn_Statics::NewProp_Surface = { "Surface", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPawn, Surface), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldPawn_Statics::NewProp_Surface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::NewProp_Surface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPawn_Statics::NewProp_EarthRadius_MetaData[] = {
		{ "Category", "WorldPawn" },
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWorldPawn_Statics::NewProp_EarthRadius = { "EarthRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPawn, EarthRadius), METADATA_PARAMS(Z_Construct_UClass_AWorldPawn_Statics::NewProp_EarthRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::NewProp_EarthRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPawn_Statics::NewProp_SphereMesh_MetaData[] = {
		{ "Category", "WorldPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Earth/WorldPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldPawn_Statics::NewProp_SphereMesh = { "SphereMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPawn, SphereMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldPawn_Statics::NewProp_SphereMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::NewProp_SphereMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPawn_Statics::NewProp_Surface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPawn_Statics::NewProp_EarthRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPawn_Statics::NewProp_SphereMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWorldPawn_Statics::ClassParams = {
		&AWorldPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWorldPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWorldPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWorldPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWorldPawn, 1163587356);
	template<> HEXAGONMAPPING_API UClass* StaticClass<AWorldPawn>()
	{
		return AWorldPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorldPawn(Z_Construct_UClass_AWorldPawn, &AWorldPawn::StaticClass, TEXT("/Script/HexagonMapping"), TEXT("AWorldPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
