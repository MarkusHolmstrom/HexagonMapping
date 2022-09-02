// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HexagonMapping/Public/Earth/TestActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestActorComponent() {}
// Cross Module References
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_UTestActorComponent_NoRegister();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_UTestActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_HexagonMapping();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AHexagonActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTestActorComponent::execGenerateMap)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateMap(Z_Param_Height,Z_Param_Width);
		P_NATIVE_END;
	}
	void UTestActorComponent::StaticRegisterNativesUTestActorComponent()
	{
		UClass* Class = UTestActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateMap", &UTestActorComponent::execGenerateMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTestActorComponent_GenerateMap_Statics
	{
		struct TestActorComponent_eventGenerateMap_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTestActorComponent_GenerateMap_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestActorComponent_eventGenerateMap_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTestActorComponent_GenerateMap_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestActorComponent_eventGenerateMap_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestActorComponent_GenerateMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestActorComponent_GenerateMap_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestActorComponent_GenerateMap_Statics::NewProp_Width,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestActorComponent_GenerateMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/TestActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestActorComponent_GenerateMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestActorComponent, nullptr, "GenerateMap", nullptr, nullptr, sizeof(TestActorComponent_eventGenerateMap_Parms), Z_Construct_UFunction_UTestActorComponent_GenerateMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestActorComponent_GenerateMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestActorComponent_GenerateMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestActorComponent_GenerateMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestActorComponent_GenerateMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTestActorComponent_GenerateMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTestActorComponent_NoRegister()
	{
		return UTestActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTestActorComponent_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HexTile0_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HexTile0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HexTile1_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HexTile1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HexagonMapping,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTestActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestActorComponent_GenerateMap, "GenerateMap" }, // 975450748
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Earth/TestActorComponent.h" },
		{ "ModuleRelativePath", "Public/Earth/TestActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestActorComponent_Statics::NewProp_HorOffset_MetaData[] = {
		{ "Category", "TestActorComponent" },
		{ "ModuleRelativePath", "Public/Earth/TestActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTestActorComponent_Statics::NewProp_HorOffset = { "HorOffset", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestActorComponent, HorOffset), METADATA_PARAMS(Z_Construct_UClass_UTestActorComponent_Statics::NewProp_HorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestActorComponent_Statics::NewProp_HorOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestActorComponent_Statics::NewProp_OddRowHorOffset_MetaData[] = {
		{ "Category", "TestActorComponent" },
		{ "ModuleRelativePath", "Public/Earth/TestActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTestActorComponent_Statics::NewProp_OddRowHorOffset = { "OddRowHorOffset", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestActorComponent, OddRowHorOffset), METADATA_PARAMS(Z_Construct_UClass_UTestActorComponent_Statics::NewProp_OddRowHorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestActorComponent_Statics::NewProp_OddRowHorOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestActorComponent_Statics::NewProp_VerOffset_MetaData[] = {
		{ "Category", "TestActorComponent" },
		{ "ModuleRelativePath", "Public/Earth/TestActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTestActorComponent_Statics::NewProp_VerOffset = { "VerOffset", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestActorComponent, VerOffset), METADATA_PARAMS(Z_Construct_UClass_UTestActorComponent_Statics::NewProp_VerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestActorComponent_Statics::NewProp_VerOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestActorComponent_Statics::NewProp_HexTile0_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/TestActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTestActorComponent_Statics::NewProp_HexTile0 = { "HexTile0", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestActorComponent, HexTile0), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTestActorComponent_Statics::NewProp_HexTile0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestActorComponent_Statics::NewProp_HexTile0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestActorComponent_Statics::NewProp_HexTile1_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Public/Earth/TestActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTestActorComponent_Statics::NewProp_HexTile1 = { "HexTile1", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestActorComponent, HexTile1), Z_Construct_UClass_AHexagonActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTestActorComponent_Statics::NewProp_HexTile1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestActorComponent_Statics::NewProp_HexTile1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestActorComponent_Statics::NewProp_MapHeight_MetaData[] = {
		{ "Category", "TestActorComponent" },
		{ "ModuleRelativePath", "Public/Earth/TestActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestActorComponent_Statics::NewProp_MapHeight = { "MapHeight", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestActorComponent, MapHeight), METADATA_PARAMS(Z_Construct_UClass_UTestActorComponent_Statics::NewProp_MapHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestActorComponent_Statics::NewProp_MapHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestActorComponent_Statics::NewProp_MapWidth_MetaData[] = {
		{ "Category", "TestActorComponent" },
		{ "ModuleRelativePath", "Public/Earth/TestActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestActorComponent_Statics::NewProp_MapWidth = { "MapWidth", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestActorComponent, MapWidth), METADATA_PARAMS(Z_Construct_UClass_UTestActorComponent_Statics::NewProp_MapWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestActorComponent_Statics::NewProp_MapWidth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestActorComponent_Statics::NewProp_HorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestActorComponent_Statics::NewProp_OddRowHorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestActorComponent_Statics::NewProp_VerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestActorComponent_Statics::NewProp_HexTile0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestActorComponent_Statics::NewProp_HexTile1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestActorComponent_Statics::NewProp_MapHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestActorComponent_Statics::NewProp_MapWidth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestActorComponent_Statics::ClassParams = {
		&UTestActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTestActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTestActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestActorComponent, 417528472);
	template<> HEXAGONMAPPING_API UClass* StaticClass<UTestActorComponent>()
	{
		return UTestActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestActorComponent(Z_Construct_UClass_UTestActorComponent, &UTestActorComponent::StaticClass, TEXT("/Script/HexagonMapping"), TEXT("UTestActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
