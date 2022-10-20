// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HexagonMapping/Public/Earth/AStarPathfinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAStarPathfinding() {}
// Cross Module References
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AAStarPathfinding_NoRegister();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AAStarPathfinding();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HexagonMapping();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AHexagonActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_UGenerateMapComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAStarPathfinding::execGetAdjacentTiles)
	{
		P_GET_OBJECT(AHexagonActor,Z_Param_Hexagon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AHexagonActor*>*)Z_Param__Result=P_THIS->GetAdjacentTiles(Z_Param_Hexagon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAStarPathfinding::execSetTargetCoordinates)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_NewTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetCoordinates(Z_Param_NewTarget);
		P_NATIVE_END;
	}
	void AAStarPathfinding::StaticRegisterNativesAAStarPathfinding()
	{
		UClass* Class = AAStarPathfinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAdjacentTiles", &AAStarPathfinding::execGetAdjacentTiles },
			{ "SetTargetCoordinates", &AAStarPathfinding::execSetTargetCoordinates },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics
	{
		struct AStarPathfinding_eventGetAdjacentTiles_Parms
		{
			AHexagonActor* Hexagon;
			TArray<AHexagonActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hexagon;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::NewProp_Hexagon = { "Hexagon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetAdjacentTiles_Parms, Hexagon), Z_Construct_UClass_AHexagonActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHexagonActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetAdjacentTiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::NewProp_Hexagon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "GetAdjacentTiles", nullptr, nullptr, sizeof(AStarPathfinding_eventGetAdjacentTiles_Parms), Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics
	{
		struct AStarPathfinding_eventSetTargetCoordinates_Parms
		{
			FIntPoint NewTarget;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventSetTargetCoordinates_Parms, NewTarget), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::NewProp_NewTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "SetTargetCoordinates", nullptr, nullptr, sizeof(AStarPathfinding_eventSetTargetCoordinates_Parms), Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAStarPathfinding_NoRegister()
	{
		return AAStarPathfinding::StaticClass();
	}
	struct Z_Construct_UClass_AAStarPathfinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Planet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Planet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanTravelWater_MetaData[];
#endif
		static void NewProp_bCanTravelWater_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanTravelWater;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManhattanDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManhattanDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalMovementCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalMovementCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCoordinates_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetCoordinates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAStarPathfinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HexagonMapping,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAStarPathfinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles, "GetAdjacentTiles" }, // 2300603666
		{ &Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates, "SetTargetCoordinates" }, // 1735980467
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Earth/AStarPathfinding.h" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Planet_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "Comment", "// The actor that contains GenerateMapComponent class\n" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
		{ "ToolTip", "The actor that contains GenerateMapComponent class" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Planet = { "Planet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, Planet), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Planet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Planet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_MapGenerator_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_MapGenerator = { "MapGenerator", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, MapGenerator), Z_Construct_UClass_UGenerateMapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_MapGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_MapGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bCanTravelWater_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	void Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bCanTravelWater_SetBit(void* Obj)
	{
		((AAStarPathfinding*)Obj)->bCanTravelWater = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bCanTravelWater = { "bCanTravelWater", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAStarPathfinding), &Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bCanTravelWater_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bCanTravelWater_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bCanTravelWater_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ManhattanDistance_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "Comment", "// H:\n" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
		{ "ToolTip", "H:" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ManhattanDistance = { "ManhattanDistance", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, ManhattanDistance), METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ManhattanDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ManhattanDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TotalMovementCost_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "Comment", "// G:\n" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
		{ "ToolTip", "G:" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TotalMovementCost = { "TotalMovementCost", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, TotalMovementCost), METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TotalMovementCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TotalMovementCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TotalScore_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "Comment", "// F:\n" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
		{ "ToolTip", "F:" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TotalScore = { "TotalScore", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, TotalScore), METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TotalScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TotalScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_CurrentTile_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_CurrentTile = { "CurrentTile", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, CurrentTile), Z_Construct_UClass_AHexagonActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_CurrentTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_CurrentTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ParentTile_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ParentTile = { "ParentTile", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, ParentTile), Z_Construct_UClass_AHexagonActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ParentTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ParentTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TargetCoordinates_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TargetCoordinates = { "TargetCoordinates", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, TargetCoordinates), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TargetCoordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TargetCoordinates_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAStarPathfinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Planet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_MapGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bCanTravelWater,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ManhattanDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TotalMovementCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TotalScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_CurrentTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ParentTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TargetCoordinates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAStarPathfinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAStarPathfinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAStarPathfinding_Statics::ClassParams = {
		&AAStarPathfinding::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAStarPathfinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAStarPathfinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAStarPathfinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAStarPathfinding, 3565769915);
	template<> HEXAGONMAPPING_API UClass* StaticClass<AAStarPathfinding>()
	{
		return AAStarPathfinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAStarPathfinding(Z_Construct_UClass_AAStarPathfinding, &AAStarPathfinding::StaticClass, TEXT("/Script/HexagonMapping"), TEXT("AAStarPathfinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAStarPathfinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
