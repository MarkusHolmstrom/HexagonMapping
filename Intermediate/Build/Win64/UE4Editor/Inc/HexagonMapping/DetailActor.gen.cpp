// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HexagonMapping/Public/Earth/DetailActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetailActor() {}
// Cross Module References
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_ADetailActor_NoRegister();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_ADetailActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HexagonMapping();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ADetailActor::StaticRegisterNativesADetailActor()
	{
	}
	UClass* Z_Construct_UClass_ADetailActor_NoRegister()
	{
		return ADetailActor::StaticClass();
	}
	struct Z_Construct_UClass_ADetailActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshHill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshHill;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADetailActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HexagonMapping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADetailActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Earth/DetailActor.h" },
		{ "ModuleRelativePath", "Public/Earth/DetailActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADetailActor_Statics::NewProp_MeshHill_MetaData[] = {
		{ "Category", "DetailActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Earth/DetailActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADetailActor_Statics::NewProp_MeshHill = { "MeshHill", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADetailActor, MeshHill), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADetailActor_Statics::NewProp_MeshHill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADetailActor_Statics::NewProp_MeshHill_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADetailActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADetailActor_Statics::NewProp_MeshHill,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADetailActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADetailActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADetailActor_Statics::ClassParams = {
		&ADetailActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADetailActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADetailActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADetailActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADetailActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADetailActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADetailActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADetailActor, 2728391608);
	template<> HEXAGONMAPPING_API UClass* StaticClass<ADetailActor>()
	{
		return ADetailActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADetailActor(Z_Construct_UClass_ADetailActor, &ADetailActor::StaticClass, TEXT("/Script/HexagonMapping"), TEXT("ADetailActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADetailActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
