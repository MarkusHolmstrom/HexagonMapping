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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_UGenerateMapComponent_NoRegister();
	HEXAGONMAPPING_API UClass* Z_Construct_UClass_AWorldPawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAStarPathfinding::execRemoveTilesLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTilesLight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAStarPathfinding::execClearClosedList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearClosedList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAStarPathfinding::execDelayedCleanUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DelayedCleanUp(Z_Param_Delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAStarPathfinding::execCleanUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CleanUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAStarPathfinding::execGetGScore)
	{
		P_GET_OBJECT(AHexagonTile,Z_Param_Start);
		P_GET_OBJECT(AHexagonTile,Z_Param_Goal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGScore(Z_Param_Start,Z_Param_Goal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAStarPathfinding::execGetManhattanDistance)
	{
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_Goal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetManhattanDistance(Z_Param_Start,Z_Param_Goal);
		P_NATIVE_END;
	}
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
	DEFINE_FUNCTION(AAStarPathfinding::execGetDirection)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_Start);
		P_GET_STRUCT(FIntPoint,Z_Param_Goal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDirection*)Z_Param__Result=P_THIS->GetDirection(Z_Param_Start,Z_Param_Goal);
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
	DEFINE_FUNCTION(AAStarPathfinding::execGetViableTiles)
	{
		P_GET_TARRAY(AHexagonTile*,Z_Param_Tiles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AHexagonTile*>*)Z_Param__Result=P_THIS->GetViableTiles(Z_Param_Tiles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAStarPathfinding::execGetBestTile)
	{
		P_GET_TARRAY(AHexagonTile*,Z_Param_Tiles);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TopScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AHexagonTile**)Z_Param__Result=P_THIS->GetBestTile(Z_Param_Tiles,Z_Param_TopScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAStarPathfinding::execPathfindingLoop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PathfindingLoop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAStarPathfinding::execGetChildren)
	{
		P_GET_TARRAY(AHexagonTile*,Z_Param_Tiles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AHexagonTile*>*)Z_Param__Result=P_THIS->GetChildren(Z_Param_Tiles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAStarPathfinding::execLookForMoreOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookForMoreOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAStarPathfinding::execStartCalculatePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCalculatePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAStarPathfinding::execIsValidTile)
	{
		P_GET_OBJECT(AHexagonTile,Z_Param_Tile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidTile(Z_Param_Tile);
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
			{ "CleanUp", &AAStarPathfinding::execCleanUp },
			{ "ClearClosedList", &AAStarPathfinding::execClearClosedList },
			{ "DelayedCleanUp", &AAStarPathfinding::execDelayedCleanUp },
			{ "GetAdjacentTiles", &AAStarPathfinding::execGetAdjacentTiles },
			{ "GetAdjacentTilesBasedOnDirections", &AAStarPathfinding::execGetAdjacentTilesBasedOnDirections },
			{ "GetBestTile", &AAStarPathfinding::execGetBestTile },
			{ "GetChildren", &AAStarPathfinding::execGetChildren },
			{ "GetDirection", &AAStarPathfinding::execGetDirection },
			{ "GetDirections", &AAStarPathfinding::execGetDirections },
			{ "GetGScore", &AAStarPathfinding::execGetGScore },
			{ "GetManhattanDistance", &AAStarPathfinding::execGetManhattanDistance },
			{ "GetViableTiles", &AAStarPathfinding::execGetViableTiles },
			{ "IsValidTile", &AAStarPathfinding::execIsValidTile },
			{ "LookForMoreOptions", &AAStarPathfinding::execLookForMoreOptions },
			{ "PathfindingLoop", &AAStarPathfinding::execPathfindingLoop },
			{ "RemoveTilesLight", &AAStarPathfinding::execRemoveTilesLight },
			{ "SetTargetCoordinates", &AAStarPathfinding::execSetTargetCoordinates },
			{ "StartCalculatePath", &AAStarPathfinding::execStartCalculatePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAStarPathfinding_CleanUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_CleanUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_CleanUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "CleanUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_CleanUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_CleanUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_CleanUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_CleanUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAStarPathfinding_ClearClosedList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_ClearClosedList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_ClearClosedList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "ClearClosedList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_ClearClosedList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_ClearClosedList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_ClearClosedList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_ClearClosedList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAStarPathfinding_DelayedCleanUp_Statics
	{
		struct AStarPathfinding_eventDelayedCleanUp_Parms
		{
			float Delay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAStarPathfinding_DelayedCleanUp_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventDelayedCleanUp_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAStarPathfinding_DelayedCleanUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_DelayedCleanUp_Statics::NewProp_Delay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_DelayedCleanUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_DelayedCleanUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "DelayedCleanUp", nullptr, nullptr, sizeof(AStarPathfinding_eventDelayedCleanUp_Parms), Z_Construct_UFunction_AAStarPathfinding_DelayedCleanUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_DelayedCleanUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_DelayedCleanUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_DelayedCleanUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_DelayedCleanUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_DelayedCleanUp_Statics::FuncParams);
		}
		return ReturnFunction;
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
		{ "Comment", "/*UFUNCTION()\n\x09TArray<AHexagonTile*> GetAdjacentTiles(AHexagonTile* Tile, int AdjLimit);*/" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
		{ "ToolTip", "UFUNCTION()\n       TArray<AHexagonTile*> GetAdjacentTiles(AHexagonTile* Tile, int AdjLimit);" },
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
	struct Z_Construct_UFunction_AAStarPathfinding_GetBestTile_Statics
	{
		struct AStarPathfinding_eventGetBestTile_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetBestTile_Statics::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetBestTile_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetBestTile_Parms, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetBestTile_Statics::NewProp_TopScore = { "TopScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetBestTile_Parms, TopScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetBestTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetBestTile_Parms, ReturnValue), Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAStarPathfinding_GetBestTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetBestTile_Statics::NewProp_Tiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetBestTile_Statics::NewProp_Tiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetBestTile_Statics::NewProp_TopScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetBestTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_GetBestTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_GetBestTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "GetBestTile", nullptr, nullptr, sizeof(AStarPathfinding_eventGetBestTile_Parms), Z_Construct_UFunction_AAStarPathfinding_GetBestTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetBestTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_GetBestTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetBestTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_GetBestTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_GetBestTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAStarPathfinding_GetChildren_Statics
	{
		struct AStarPathfinding_eventGetChildren_Parms
		{
			TArray<AHexagonTile*> Tiles;
			TArray<AHexagonTile*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tiles_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tiles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetChildren_Statics::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetChildren_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetChildren_Parms, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetChildren_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetChildren_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAStarPathfinding_GetChildren_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetChildren_Statics::NewProp_Tiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetChildren_Statics::NewProp_Tiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetChildren_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_GetChildren_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_GetChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "GetChildren", nullptr, nullptr, sizeof(AStarPathfinding_eventGetChildren_Parms), Z_Construct_UFunction_AAStarPathfinding_GetChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_GetChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_GetChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_GetChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAStarPathfinding_GetDirection_Statics
	{
		struct AStarPathfinding_eventGetDirection_Parms
		{
			FIntPoint Start;
			FIntPoint Goal;
			EDirection ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Goal;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetDirection_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetDirection_Parms, Start), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetDirection_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetDirection_Parms, Goal), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAStarPathfinding_GetDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetDirection_Parms, ReturnValue), Z_Construct_UEnum_HexagonMapping_EDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAStarPathfinding_GetDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetDirection_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetDirection_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetDirection_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_GetDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_GetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "GetDirection", nullptr, nullptr, sizeof(AStarPathfinding_eventGetDirection_Parms), Z_Construct_UFunction_AAStarPathfinding_GetDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_GetDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_GetDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_GetDirection_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AAStarPathfinding_GetGScore_Statics
	{
		struct AStarPathfinding_eventGetGScore_Parms
		{
			AHexagonTile* Start;
			AHexagonTile* Goal;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Goal;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetGScore_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetGScore_Parms, Start), Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetGScore_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetGScore_Parms, Goal), Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetGScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetGScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAStarPathfinding_GetGScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetGScore_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetGScore_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetGScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_GetGScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_GetGScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "GetGScore", nullptr, nullptr, sizeof(AStarPathfinding_eventGetGScore_Parms), Z_Construct_UFunction_AAStarPathfinding_GetGScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetGScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_GetGScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetGScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_GetGScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_GetGScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAStarPathfinding_GetManhattanDistance_Statics
	{
		struct AStarPathfinding_eventGetManhattanDistance_Parms
		{
			FVector Start;
			FVector Goal;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Goal;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetManhattanDistance_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetManhattanDistance_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetManhattanDistance_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetManhattanDistance_Parms, Goal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetManhattanDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetManhattanDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAStarPathfinding_GetManhattanDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetManhattanDistance_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetManhattanDistance_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetManhattanDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_GetManhattanDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_GetManhattanDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "GetManhattanDistance", nullptr, nullptr, sizeof(AStarPathfinding_eventGetManhattanDistance_Parms), Z_Construct_UFunction_AAStarPathfinding_GetManhattanDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetManhattanDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_GetManhattanDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetManhattanDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_GetManhattanDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_GetManhattanDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAStarPathfinding_GetViableTiles_Statics
	{
		struct AStarPathfinding_eventGetViableTiles_Parms
		{
			TArray<AHexagonTile*> Tiles;
			TArray<AHexagonTile*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tiles_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tiles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetViableTiles_Statics::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetViableTiles_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetViableTiles_Parms, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetViableTiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAStarPathfinding_GetViableTiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventGetViableTiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAStarPathfinding_GetViableTiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetViableTiles_Statics::NewProp_Tiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetViableTiles_Statics::NewProp_Tiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetViableTiles_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_GetViableTiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_GetViableTiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_GetViableTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "GetViableTiles", nullptr, nullptr, sizeof(AStarPathfinding_eventGetViableTiles_Parms), Z_Construct_UFunction_AAStarPathfinding_GetViableTiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetViableTiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_GetViableTiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_GetViableTiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_GetViableTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_GetViableTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAStarPathfinding_IsValidTile_Statics
	{
		struct AStarPathfinding_eventIsValidTile_Parms
		{
			AHexagonTile* Tile;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAStarPathfinding_IsValidTile_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarPathfinding_eventIsValidTile_Parms, Tile), Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAStarPathfinding_IsValidTile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AStarPathfinding_eventIsValidTile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAStarPathfinding_IsValidTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStarPathfinding_eventIsValidTile_Parms), &Z_Construct_UFunction_AAStarPathfinding_IsValidTile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAStarPathfinding_IsValidTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_IsValidTile_Statics::NewProp_Tile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAStarPathfinding_IsValidTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_IsValidTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_IsValidTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "IsValidTile", nullptr, nullptr, sizeof(AStarPathfinding_eventIsValidTile_Parms), Z_Construct_UFunction_AAStarPathfinding_IsValidTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_IsValidTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_IsValidTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_IsValidTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_IsValidTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_IsValidTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAStarPathfinding_LookForMoreOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_LookForMoreOptions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_LookForMoreOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "LookForMoreOptions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_LookForMoreOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_LookForMoreOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_LookForMoreOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_LookForMoreOptions_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AAStarPathfinding_RemoveTilesLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAStarPathfinding_RemoveTilesLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAStarPathfinding_RemoveTilesLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAStarPathfinding, nullptr, "RemoveTilesLight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAStarPathfinding_RemoveTilesLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAStarPathfinding_RemoveTilesLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAStarPathfinding_RemoveTilesLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAStarPathfinding_RemoveTilesLight_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_test_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_test;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SearchWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tries_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Tries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTries_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxTries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManhattanDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManhattanDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalMovementCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TotalMovementCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Depth;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildTiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildTiles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpenList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OpenList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClosedList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosedList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClosedList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheckedList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CheckedList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedPathFinding_MetaData[];
#endif
		static void NewProp_bNeedPathFinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedPathFinding;
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
		{ &Z_Construct_UFunction_AAStarPathfinding_CleanUp, "CleanUp" }, // 1349669793
		{ &Z_Construct_UFunction_AAStarPathfinding_ClearClosedList, "ClearClosedList" }, // 3994226457
		{ &Z_Construct_UFunction_AAStarPathfinding_DelayedCleanUp, "DelayedCleanUp" }, // 1418485430
		{ &Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTiles, "GetAdjacentTiles" }, // 1826869634
		{ &Z_Construct_UFunction_AAStarPathfinding_GetAdjacentTilesBasedOnDirections, "GetAdjacentTilesBasedOnDirections" }, // 2657874572
		{ &Z_Construct_UFunction_AAStarPathfinding_GetBestTile, "GetBestTile" }, // 78749451
		{ &Z_Construct_UFunction_AAStarPathfinding_GetChildren, "GetChildren" }, // 4167641074
		{ &Z_Construct_UFunction_AAStarPathfinding_GetDirection, "GetDirection" }, // 3357636568
		{ &Z_Construct_UFunction_AAStarPathfinding_GetDirections, "GetDirections" }, // 1649989943
		{ &Z_Construct_UFunction_AAStarPathfinding_GetGScore, "GetGScore" }, // 1237381134
		{ &Z_Construct_UFunction_AAStarPathfinding_GetManhattanDistance, "GetManhattanDistance" }, // 1503327264
		{ &Z_Construct_UFunction_AAStarPathfinding_GetViableTiles, "GetViableTiles" }, // 92324947
		{ &Z_Construct_UFunction_AAStarPathfinding_IsValidTile, "IsValidTile" }, // 1454825985
		{ &Z_Construct_UFunction_AAStarPathfinding_LookForMoreOptions, "LookForMoreOptions" }, // 2958908955
		{ &Z_Construct_UFunction_AAStarPathfinding_PathfindingLoop, "PathfindingLoop" }, // 1286123119
		{ &Z_Construct_UFunction_AAStarPathfinding_RemoveTilesLight, "RemoveTilesLight" }, // 290680433
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_test_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_test = { "test", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, test), METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_test_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_test_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_SearchWidth_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "Comment", "// Default for Birdpath is 3, 5 for Astar\n" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
		{ "ToolTip", "Default for Birdpath is 3, 5 for Astar" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_SearchWidth = { "SearchWidth", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, SearchWidth), METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_SearchWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_SearchWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Tries_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Tries = { "Tries", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, Tries), METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Tries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Tries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_MaxTries_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "Comment", "// This adds some kind of limit in case the pathfinding \n// gets stuck in a never ending while loop\n" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
		{ "ToolTip", "This adds some kind of limit in case the pathfinding\ngets stuck in a never ending while loop" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_MaxTries = { "MaxTries", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, MaxTries), METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_MaxTries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_MaxTries_MetaData)) };
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TotalMovementCost = { "TotalMovementCost", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, TotalMovementCost), METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TotalMovementCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TotalMovementCost_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Depth_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, Depth), METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Depth_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ChildTiles_Inner = { "ChildTiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ChildTiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ChildTiles = { "ChildTiles", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, ChildTiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ChildTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ChildTiles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_OpenList_Inner = { "OpenList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_OpenList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_OpenList = { "OpenList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, OpenList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_OpenList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_OpenList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ClosedList_Inner = { "ClosedList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ClosedList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ClosedList = { "ClosedList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, ClosedList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ClosedList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ClosedList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_CheckedList_Inner = { "CheckedList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHexagonTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_CheckedList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_CheckedList = { "CheckedList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarPathfinding, CheckedList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_CheckedList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_CheckedList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bNeedPathFinding_MetaData[] = {
		{ "Category", "AStarPathfinding" },
		{ "ModuleRelativePath", "Public/Earth/AStarPathfinding.h" },
	};
#endif
	void Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bNeedPathFinding_SetBit(void* Obj)
	{
		((AAStarPathfinding*)Obj)->bNeedPathFinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bNeedPathFinding = { "bNeedPathFinding", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAStarPathfinding), &Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bNeedPathFinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bNeedPathFinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bNeedPathFinding_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_test,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bCanTravelWater,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bWaterVessel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bSearchingForPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_SearchWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Tries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_MaxTries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ManhattanDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TotalMovementCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_TotalScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_Depth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ChildTiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ChildTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_OpenList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_OpenList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ClosedList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_ClosedList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_CheckedList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_CheckedList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarPathfinding_Statics::NewProp_bNeedPathFinding,
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
	IMPLEMENT_CLASS(AAStarPathfinding, 2706914813);
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
