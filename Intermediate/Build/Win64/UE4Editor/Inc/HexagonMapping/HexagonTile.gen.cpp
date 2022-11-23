// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HexagonMapping/Public/Earth/HexagonTile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHexagonTile() {}
// Cross Module References
	HEXAGONMAPPING_API UFunction* Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HexagonMapping();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AHexagonTile_NoRegister();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AHexagonTile();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_UGenerateMapComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HEXAGONMAPPING_API UEnum* Z_Construct_UEnum_HexagonMapping_EHexType();
	HEXAGONMAPPING_API UEnum* Z_Construct_UEnum_HexagonMapping_EHinder();
	HEXAGONMAPPING_API UEnum* Z_Construct_UEnum_HexagonMapping_EResource();
	HEXAGONMAPPING_API UEnum* Z_Construct_UEnum_HexagonMapping_EResourceType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics
	{
		struct _Script_HexagonMapping_eventOnTileClicked_Parms
		{
			AHexagonTile* Tile;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_HexagonMapping_eventOnTileClicked_Parms, Tile), Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::NewProp_Tile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HexagonMapping, nullptr, "OnTileClicked__DelegateSignature", nullptr, nullptr, sizeof(_Script_HexagonMapping_eventOnTileClicked_Parms), Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AHexagonTile::execRemoveLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveLight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHexagonTile::execDeActivatedByClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeActivatedByClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHexagonTile::execActivatedByClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivatedByClick();
		P_NATIVE_END;
	}
	void AHexagonTile::StaticRegisterNativesAHexagonTile()
	{
		UClass* Class = AHexagonTile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivatedByClick", &AHexagonTile::execActivatedByClick },
			{ "DeActivatedByClick", &AHexagonTile::execDeActivatedByClick },
			{ "RemoveLight", &AHexagonTile::execRemoveLight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHexagonTile_ActivatedByClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHexagonTile_ActivatedByClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHexagonTile_ActivatedByClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHexagonTile, nullptr, "ActivatedByClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHexagonTile_ActivatedByClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHexagonTile_ActivatedByClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHexagonTile_ActivatedByClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHexagonTile_ActivatedByClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHexagonTile_DeActivatedByClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHexagonTile_DeActivatedByClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHexagonTile_DeActivatedByClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHexagonTile, nullptr, "DeActivatedByClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHexagonTile_DeActivatedByClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHexagonTile_DeActivatedByClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHexagonTile_DeActivatedByClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHexagonTile_DeActivatedByClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHexagonTile_RemoveLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHexagonTile_RemoveLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHexagonTile_RemoveLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHexagonTile, nullptr, "RemoveLight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHexagonTile_RemoveLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHexagonTile_RemoveLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHexagonTile_RemoveLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHexagonTile_RemoveLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHexagonTile_NoRegister()
	{
		return AHexagonTile::StaticClass();
	}
	struct Z_Construct_UClass_AHexagonTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTileClicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTileClicked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowLightBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ShowLightBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShowLight;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hinder_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hinder_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hinder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveCost;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Resource_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Resource;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasHill_MetaData[];
#endif
		static void NewProp_bHasHill_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasHill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshTile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHexagonTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_HexagonMapping,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHexagonTile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHexagonTile_ActivatedByClick, "ActivatedByClick" }, // 305681495
		{ &Z_Construct_UFunction_AHexagonTile_DeActivatedByClick, "DeActivatedByClick" }, // 3972938440
		{ &Z_Construct_UFunction_AHexagonTile_RemoveLight, "RemoveLight" }, // 2180535533
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonTile_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Earth/HexagonTile.h" },
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonTile_Statics::NewProp_OnTileClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_OnTileClicked = { "OnTileClicked", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonTile, OnTileClicked), Z_Construct_UDelegateFunction_HexagonMapping_OnTileClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AHexagonTile_Statics::NewProp_OnTileClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonTile_Statics::NewProp_OnTileClicked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonTile_Statics::NewProp_MapComponent_MetaData[] = {
		{ "Category", "HexagonTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_MapComponent = { "MapComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonTile, MapComponent), Z_Construct_UClass_UGenerateMapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHexagonTile_Statics::NewProp_MapComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonTile_Statics::NewProp_MapComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonTile_Statics::NewProp_ShowLightBP_MetaData[] = {
		{ "Category", "HexagonTile" },
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_ShowLightBP = { "ShowLightBP", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonTile, ShowLightBP), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHexagonTile_Statics::NewProp_ShowLightBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonTile_Statics::NewProp_ShowLightBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonTile_Statics::NewProp_ShowLight_MetaData[] = {
		{ "Category", "HexagonTile" },
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_ShowLight = { "ShowLight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonTile, ShowLight), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHexagonTile_Statics::NewProp_ShowLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonTile_Statics::NewProp_ShowLight_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonTile_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "TileInformation" },
		{ "Comment", "// nsort: desert, tundra, plains, grassland, mountain, jungle, snow, ice, ocean, shore\n" },
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
		{ "ToolTip", "nsort: desert, tundra, plains, grassland, mountain, jungle, snow, ice, ocean, shore" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonTile, Type), Z_Construct_UEnum_HexagonMapping_EHexType, METADATA_PARAMS(Z_Construct_UClass_AHexagonTile_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonTile_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_Hinder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonTile_Statics::NewProp_Hinder_MetaData[] = {
		{ "Category", "TileInformation" },
		{ "Comment", "// trees/hill (def resource) string\n" },
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
		{ "ToolTip", "trees/hill (def resource) string" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_Hinder = { "Hinder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonTile, Hinder), Z_Construct_UEnum_HexagonMapping_EHinder, METADATA_PARAMS(Z_Construct_UClass_AHexagonTile_Statics::NewProp_Hinder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonTile_Statics::NewProp_Hinder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonTile_Statics::NewProp_MoveCost_MetaData[] = {
		{ "Category", "TileInformation" },
		{ "Comment", "// movement cost, float 1-3?\n" },
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
		{ "ToolTip", "movement cost, float 1-3?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_MoveCost = { "MoveCost", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonTile, MoveCost), METADATA_PARAMS(Z_Construct_UClass_AHexagonTile_Statics::NewProp_MoveCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonTile_Statics::NewProp_MoveCost_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_Resource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonTile_Statics::NewProp_Resource_MetaData[] = {
		{ "Category", "TileInformation" },
		{ "Comment", "// resource - bonus or luxury - Enum\n" },
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
		{ "ToolTip", "resource - bonus or luxury - Enum" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonTile, Resource), Z_Construct_UEnum_HexagonMapping_EResource, METADATA_PARAMS(Z_Construct_UClass_AHexagonTile_Statics::NewProp_Resource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonTile_Statics::NewProp_Resource_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonTile_Statics::NewProp_ResourceType_MetaData[] = {
		{ "Category", "TileInformation" },
		{ "Comment", "// (specific resource) enum? string\n" },
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
		{ "ToolTip", "(specific resource) enum? string" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonTile, ResourceType), Z_Construct_UEnum_HexagonMapping_EResourceType, METADATA_PARAMS(Z_Construct_UClass_AHexagonTile_Statics::NewProp_ResourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonTile_Statics::NewProp_ResourceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonTile_Statics::NewProp_DefModifier_MetaData[] = {
		{ "Category", "TileInformation" },
		{ "Comment", "// defensive modifier float or int\n" },
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
		{ "ToolTip", "defensive modifier float or int" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_DefModifier = { "DefModifier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonTile, DefModifier), METADATA_PARAMS(Z_Construct_UClass_AHexagonTile_Statics::NewProp_DefModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonTile_Statics::NewProp_DefModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonTile_Statics::NewProp_Appeal_MetaData[] = {
		{ "Category", "TileInformation" },
		{ "Comment", "// Appeal int -1 - 6\n" },
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
		{ "ToolTip", "Appeal int -1 - 6" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_Appeal = { "Appeal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonTile, Appeal), METADATA_PARAMS(Z_Construct_UClass_AHexagonTile_Statics::NewProp_Appeal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonTile_Statics::NewProp_Appeal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonTile_Statics::NewProp_Continent_MetaData[] = {
		{ "Category", "TileInformation" },
		{ "Comment", "// Continent string\n" },
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
		{ "ToolTip", "Continent string" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_Continent = { "Continent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonTile, Continent), METADATA_PARAMS(Z_Construct_UClass_AHexagonTile_Statics::NewProp_Continent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonTile_Statics::NewProp_Continent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonTile_Statics::NewProp_bHasHill_MetaData[] = {
		{ "Category", "TileInformation" },
		{ "Comment", "// basic resource(s) custom class\n" },
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
		{ "ToolTip", "basic resource(s) custom class" },
	};
#endif
	void Z_Construct_UClass_AHexagonTile_Statics::NewProp_bHasHill_SetBit(void* Obj)
	{
		((AHexagonTile*)Obj)->bHasHill = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_bHasHill = { "bHasHill", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHexagonTile), &Z_Construct_UClass_AHexagonTile_Statics::NewProp_bHasHill_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHexagonTile_Statics::NewProp_bHasHill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonTile_Statics::NewProp_bHasHill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonTile_Statics::NewProp_TileIndex_MetaData[] = {
		{ "Category", "HexagonTile" },
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonTile, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_AHexagonTile_Statics::NewProp_TileIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonTile_Statics::NewProp_TileIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonTile_Statics::NewProp_TileLocation_MetaData[] = {
		{ "Category", "HexagonTile" },
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_TileLocation = { "TileLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonTile, TileLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHexagonTile_Statics::NewProp_TileLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonTile_Statics::NewProp_TileLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexagonTile_Statics::NewProp_MeshTile_MetaData[] = {
		{ "Category", "HexagonTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Earth/HexagonTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexagonTile_Statics::NewProp_MeshTile = { "MeshTile", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHexagonTile, MeshTile), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHexagonTile_Statics::NewProp_MeshTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonTile_Statics::NewProp_MeshTile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHexagonTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_OnTileClicked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_MapComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_ShowLightBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_ShowLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_Hinder_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_Hinder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_MoveCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_Resource_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_Resource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_ResourceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_ResourceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_DefModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_Appeal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_Continent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_bHasHill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_TileIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_TileLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexagonTile_Statics::NewProp_MeshTile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHexagonTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHexagonTile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHexagonTile_Statics::ClassParams = {
		&AHexagonTile::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHexagonTile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonTile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHexagonTile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHexagonTile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHexagonTile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHexagonTile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHexagonTile, 557233699);
	template<> HEXAGONMAPPING_API UClass* StaticClass<AHexagonTile>()
	{
		return AHexagonTile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHexagonTile(Z_Construct_UClass_AHexagonTile, &AHexagonTile::StaticClass, TEXT("/Script/HexagonMapping"), TEXT("AHexagonTile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHexagonTile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
