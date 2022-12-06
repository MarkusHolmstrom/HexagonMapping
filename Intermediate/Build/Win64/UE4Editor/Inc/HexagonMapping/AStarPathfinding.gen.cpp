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
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AHexagonTile_NoRegister();
	HEXAGONMAPPING_API UEnum* Z_Construct_UEnum_HexagonMapping_EDirection();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_UGenerateMapComponent_NoRegister();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AWorldPawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAStarPathfinding::execGetAdjacentTilesBasedOnDirections)
	{
		P_GET_OBJECT(AHexagonTile,Z_Param_Tile);
		P_GET_TARRAY(EDirection,Z_Param_Directions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AHexagonTile*>*)Z_Param__Result=P_THIS->GetAdjacentTilesBasedOnDirections(Z_Param_Tile,Z_Param_Directions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAStarPathfinding::execGetDirections)
	{
		P_GET_ENUM(EDirection,Z_Param_MainDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<EDirection>*)Z_Param__Result=P_THIS->GetDirections(EDirection(Z_Param_MainDirection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAStarPathfinding::execGetAdjacentTiles)
	{
		P_GET_OBJECT(AHexagonTile,Z_Param_Tile);
		P_GET_ENUM(EDirection,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AHexagonTile*>*)Z_Param__Result=P_THIS->GetAdjacentTiles(Z_Param_Tile,EDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAStarPathfinding::execGetScore)
	{
		P_GET_OBJECT(AHexagonTile,Z_Param_Start);
		P_GET_OBJECT(AHexagonTile,Z_Param_Goal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScore(Z_Param_Start,Z_Param_Goal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAStarPathfinding::execGetBestScore)
	{
		P_GET_TARRAY(AHexagonTile*,Z_Param_Tiles);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TopScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AHexagonTile**)Z_Param__Result=P_THIS->GetBestScore(Z_Param_Tiles,Z_Param_TopScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAStarPathfinding::execPathfindingLoop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PathfindingLoop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAStarPathfinding::execStartCalculatePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCalculatePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAStarPathfinding::execSetTargetCoordinates)
	{
		P_GET_OBJECT(AActor,Z_Param_Tile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetCoordinates(Z_Param_Tile);
		P_NATIVE_END;
	}
	void AAStarPathfinding::StaticRegisterNativesAAStarPathfinding()
	{
		UClass* Class = AAStarPathfinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAdjacentTiles", &AAStarPathfinding::execGetAdjacentTiles },
			{ "GetAdjacentTilesBasedOnDirections", &AAStarPathfinding::execGetAdjacentTilesBasedOnDirections },
			{ "GetBestScore", &AAStarPathfinding::execGetBestScore },
			{ "GetDirections", &AAStarPathfinding::execGetDirections },
			{ "GetScore", &AAStarPathfinding::execGetScore },
			{ "PathfindingLoop", &AAStarPathfinding::execPathfindingLoop },
			{ "SetTargetCoordinates", &AAStarPathfinding::execSetTargetCoordinates },
			{ "StartCalculatePath", &AAStarPathfinding::execStartCalculatePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics
	{
		struct AStarPathfinding_eventGetAdjacentTiles_Parms
		{
			AHexagonTile* Tile;
			EDirection Direction;
			TArray<AHexagonTile*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tile;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetAdjacentTiles_Parms, Tile), Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetAdjacentTiles_Parms, Direction), Z_Construct_UEnum_HexagonMapping_EDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetAdjacentTiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::NewProp_Tile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::NewProp_Direction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*UFUNCTION()\n\x09TArray<AHexagonTile*> GetAdjacentTiles(AHexagonTile* Tile);*/" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
		{ "ToolTip", "UFUNCTION()\n       TArray<AHexagonTile*> GetAdjacentTiles(AHexagonTile* Tile);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "GetAdjacentTiles", nullptr, nullptr, sizeof(AStarPathfinding_eventGetAdjacentTiles_Parms), Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics
	{
		struct AStarPathfinding_eventGetAdjacentTilesBasedOnDirections_Parms
		{
			AHexagonTile* Tile;
			TArray<EDirection> Directions;
			TArray<AHexagonTile*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tile;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Directions_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Directions_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Directions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetAdjacentTilesBasedOnDirections_Parms, Tile), Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::NewProp_Directions_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::NewProp_Directions_Inner = { "Directions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_HexagonMapping_EDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::NewProp_Directions = { "Directions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetAdjacentTilesBasedOnDirections_Parms, Directions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetAdjacentTilesBasedOnDirections_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::NewProp_Tile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::NewProp_Directions_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::NewProp_Directions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::NewProp_Directions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "GetAdjacentTilesBasedOnDirections", nullptr, nullptr, sizeof(AStarPathfinding_eventGetAdjacentTilesBasedOnDirections_Parms), Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAStarPathfinding_GetBestScore_Statics
	{
		struct AStarPathfinding_eventGetBestScore_Parms
		{
			TArray<AHexagonTile*> Tiles;
			float TopScore;
			AHexagonTile* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tiles_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tiles;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TopScore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetBestScore_Statics::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetBestScore_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetBestScore_Parms, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetBestScore_Statics::NewProp_TopScore = { "TopScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetBestScore_Parms, TopScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetBestScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetBestScore_Parms, ReturnValue), Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAStarPathfinding_GetBestScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetBestScore_Statics::NewProp_Tiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetBestScore_Statics::NewProp_Tiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetBestScore_Statics::NewProp_TopScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetBestScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_GetBestScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_GetBestScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "GetBestScore", nullptr, nullptr, sizeof(AStarPathfinding_eventGetBestScore_Parms), Z_Construct_UFunction_AAStarPathfinding_GetBestScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetBestScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_GetBestScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetBestScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_GetBestScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_GetBestScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAStarPathfinding_GetDirections_Statics
	{
		struct AStarPathfinding_eventGetDirections_Parms
		{
			EDirection MainDirection;
			TArray<EDirection> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MainDirection_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MainDirection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAStarPathfinding_GetDirections_Statics::NewProp_MainDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetDirections_Statics::NewProp_MainDirection = { "MainDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetDirections_Parms, MainDirection), Z_Construct_UEnum_HexagonMapping_EDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAStarPathfinding_GetDirections_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetDirections_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_HexagonMapping_EDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetDirections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetDirections_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAStarPathfinding_GetDirections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetDirections_Statics::NewProp_MainDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetDirections_Statics::NewProp_MainDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetDirections_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetDirections_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetDirections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_GetDirections_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_GetDirections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "GetDirections", nullptr, nullptr, sizeof(AStarPathfinding_eventGetDirections_Parms), Z_Construct_UFunction_AAStarPathfinding_GetDirections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetDirections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_GetDirections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetDirections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_GetDirections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_GetDirections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAStarPathfinding_GetScore_Statics
	{
		struct AStarPathfinding_eventGetScore_Parms
		{
			AHexagonTile* Start;
			AHexagonTile* Goal;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Goal;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetScore_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetScore_Parms, Start), Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetScore_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetScore_Parms, Goal), Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAStarPathfinding_GetScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetScore_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetScore_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_GetScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "GetScore", nullptr, nullptr, sizeof(AStarPathfinding_eventGetScore_Parms), Z_Construct_UFunction_AAStarPathfinding_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_GetScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_GetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_GetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAStarPathfinding_PathfindingLoop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_PathfindingLoop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_PathfindingLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "PathfindingLoop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_PathfindingLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_PathfindingLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_PathfindingLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_PathfindingLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics
	{
		struct AStarPathfinding_eventSetTargetCoordinates_Parms
		{
			AActor* Tile;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventSetTargetCoordinates_Parms, Tile), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::NewProp_Tile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "SetTargetCoordinates", nullptr, nullptr, sizeof(AStarPathfinding_eventSetTargetCoordinates_Parms), Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAStarPathfinding_StartCalculatePath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_StartCalculatePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_StartCalculatePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "StartCalculatePath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_StartCalculatePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_StartCalculatePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_StartCalculatePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_StartCalculatePath_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanTravelWater_MetaData[];
#endif
		static void NewProp_bCanTravelWater_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanTravelWater;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaterVessel_MetaData[];
#endif
		static void NewProp_bWaterVessel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaterVessel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSearchingForPath_MetaData[];
#endif
		static void NewProp_bSearchingForPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSearchingForPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tries_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Tries;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentTile;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetCoordinates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCoordinates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetCoordinates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetCount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GoalDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GoalDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAStarPathfinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HexagonMapping,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAStarPathfinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles, "GetAdjacentTiles" }, // 1208114942
		{ &Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections, "GetAdjacentTilesBasedOnDirections" }, // 2657874572
		{ &Z_Construct_UFunction_AAStarPathfinding_GetBestScore, "GetBestScore" }, // 2177980461
		{ &Z_Construct_UFunction_AAStarPathfinding_GetDirections, "GetDirections" }, // 1649989943
		{ &Z_Construct_UFunction_AAStarPathfinding_GetScore, "GetScore" }, // 3216769093
		{ &Z_Construct_UFunction_AAStarPathfinding_PathfindingLoop, "PathfindingLoop" }, // 1286123119
		{ &Z_Construct_UFunction_AAStarPathfinding_SetTargetCoordinates, "SetTargetCoordinates" }, // 3683494987
		{ &Z_Construct_UFunction_AAStarPathfinding_StartCalculatePath, "StartCalculatePath" }, // 2846797080
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_MapGenerator = { "MapGenerator", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, MapGenerator), Z_Construct_UClass_UGenerateMapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_MapGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_MapGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_World_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, World), Z_Construct_UClass_AWorldPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_World_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bWaterVessel_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	void Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bWaterVessel_SetBit(void* Obj)
	{
		((AAStarPathfinding*)Obj)->bWaterVessel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bWaterVessel = { "bWaterVessel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAStarPathfinding), &Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bWaterVessel_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bWaterVessel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bWaterVessel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bSearchingForPath_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	void Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bSearchingForPath_SetBit(void* Obj)
	{
		((AAStarPathfinding*)Obj)->bSearchingForPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bSearchingForPath = { "bSearchingForPath", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAStarPathfinding), &Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bSearchingForPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bSearchingForPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bSearchingForPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Tries_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Tries = { "Tries", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, Tries), METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Tries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Tries_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_StartTile_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_StartTile = { "StartTile", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, StartTile), Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_StartTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_StartTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_GoalTile_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_GoalTile = { "GoalTile", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, GoalTile), Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_GoalTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_GoalTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_CurrentTile_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_CurrentTile = { "CurrentTile", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, CurrentTile), Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_CurrentTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_CurrentTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ParentTile_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ParentTile = { "ParentTile", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, ParentTile), Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ParentTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ParentTile_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TargetCoordinates_Inner = { "TargetCoordinates", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TargetCoordinates_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TargetCoordinates = { "TargetCoordinates", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, TargetCoordinates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TargetCoordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TargetCoordinates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TargetCount_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TargetCount = { "TargetCount", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, TargetCount), METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TargetCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TargetCount_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_GoalDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_GoalDirection_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_GoalDirection = { "GoalDirection", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, GoalDirection), Z_Construct_UEnum_HexagonMapping_EDirection, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_GoalDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_GoalDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAStarPathfinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Planet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_MapGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bCanTravelWater,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bWaterVessel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bSearchingForPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Tries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ManhattanDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TotalMovementCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TotalScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_StartTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_GoalTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_CurrentTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ParentTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TargetCoordinates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TargetCoordinates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TargetCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_GoalDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_GoalDirection,
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
	IMPLEMENT_CLASS(AAStarPathfinding, 3672418715);
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
