// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHexagonTile;
#ifdef HEXAGONMAPPING_AStarPathfinding_generated_h
#error "AStarPathfinding.generated.h already included, missing '#pragma once' in AStarPathfinding.h"
#endif
#define HEXAGONMAPPING_AStarPathfinding_generated_h

#define HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPathFindingAStar_Statics; \
	HEXAGONMAPPING_API static class UScriptStruct* StaticStruct();


template<> HEXAGONMAPPING_API UScriptStruct* StaticStruct<struct FPathFindingAStar>();

#define HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_SPARSE_DATA
#define HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAdjacentTiles); \
	DECLARE_FUNCTION(execSetTargetCoordinates);


#define HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAdjacentTiles); \
	DECLARE_FUNCTION(execSetTargetCoordinates);


#define HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAStarPathfinding(); \
	friend struct Z_Construct_UClass_AAStarPathfinding_Statics; \
public: \
	DECLARE_CLASS(AAStarPathfinding, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HexagonMapping"), NO_API) \
	DECLARE_SERIALIZER(AAStarPathfinding)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAAStarPathfinding(); \
	friend struct Z_Construct_UClass_AAStarPathfinding_Statics; \
public: \
	DECLARE_CLASS(AAStarPathfinding, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HexagonMapping"), NO_API) \
	DECLARE_SERIALIZER(AAStarPathfinding)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAStarPathfinding(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAStarPathfinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAStarPathfinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAStarPathfinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAStarPathfinding(AAStarPathfinding&&); \
	NO_API AAStarPathfinding(const AAStarPathfinding&); \
public:


#define HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAStarPathfinding(AAStarPathfinding&&); \
	NO_API AAStarPathfinding(const AAStarPathfinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAStarPathfinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAStarPathfinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAStarPathfinding)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentTile() { return STRUCT_OFFSET(AAStarPathfinding, CurrentTile); } \
	FORCEINLINE static uint32 __PPO__ParentTile() { return STRUCT_OFFSET(AAStarPathfinding, ParentTile); } \
	FORCEINLINE static uint32 __PPO__TargetCoordinates() { return STRUCT_OFFSET(AAStarPathfinding, TargetCoordinates); } \
	FORCEINLINE static uint32 __PPO__TargetCount() { return STRUCT_OFFSET(AAStarPathfinding, TargetCount); }


#define HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_23_PROLOG
#define HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_PRIVATE_PROPERTY_OFFSET \
	HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_SPARSE_DATA \
	HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_RPC_WRAPPERS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_INCLASS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_PRIVATE_PROPERTY_OFFSET \
	HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_SPARSE_DATA \
	HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_INCLASS_NO_PURE_DECLS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEXAGONMAPPING_API UClass* StaticClass<class AAStarPathfinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HexagonMapping_Source_HexagonMapping_Public_Earth_AStarPathfinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
