// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AHexagonTile;
class ADetailActor;
struct FClimateInfo;
struct FIntPoint;
enum class EHinder : uint8;
#ifdef HEXAGONMAPPING_GenerateMapComponent_generated_h
#error "GenerateMapComponent.generated.h already included, missing '#pragma once' in GenerateMapComponent.h"
#endif
#define HEXAGONMAPPING_GenerateMapComponent_generated_h

#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClimateInfo_Statics; \
	HEXAGONMAPPING_API static class UScriptStruct* StaticStruct();


template<> HEXAGONMAPPING_API UScriptStruct* StaticStruct<struct FClimateInfo>();

#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_SPARSE_DATA
#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRandomLCGfloatPercentage); \
	DECLARE_FUNCTION(execOnTileClicked); \
	DECLARE_FUNCTION(execGetHill); \
	DECLARE_FUNCTION(execGetTrees); \
	DECLARE_FUNCTION(execGetCorrectClimate); \
	DECLARE_FUNCTION(execSetLikelihoodLand); \
	DECLARE_FUNCTION(execCheckListContains); \
	DECLARE_FUNCTION(execAddLikeliHoodList); \
	DECLARE_FUNCTION(execAddToList); \
	DECLARE_FUNCTION(execIsLandMoreLikely); \
	DECLARE_FUNCTION(execSetShoreTilesAround); \
	DECLARE_FUNCTION(execGetTile); \
	DECLARE_FUNCTION(execCheckTileForCoast); \
	DECLARE_FUNCTION(execSetWaterTile); \
	DECLARE_FUNCTION(execSetHexagonInfo); \
	DECLARE_FUNCTION(execGetPercentage); \
	DECLARE_FUNCTION(execGetTotalPercentages); \
	DECLARE_FUNCTION(execGetTilePercentages); \
	DECLARE_FUNCTION(execSetTile); \
	DECLARE_FUNCTION(execGenerateMap);


#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRandomLCGfloatPercentage); \
	DECLARE_FUNCTION(execOnTileClicked); \
	DECLARE_FUNCTION(execGetHill); \
	DECLARE_FUNCTION(execGetTrees); \
	DECLARE_FUNCTION(execGetCorrectClimate); \
	DECLARE_FUNCTION(execSetLikelihoodLand); \
	DECLARE_FUNCTION(execCheckListContains); \
	DECLARE_FUNCTION(execAddLikeliHoodList); \
	DECLARE_FUNCTION(execAddToList); \
	DECLARE_FUNCTION(execIsLandMoreLikely); \
	DECLARE_FUNCTION(execSetShoreTilesAround); \
	DECLARE_FUNCTION(execGetTile); \
	DECLARE_FUNCTION(execCheckTileForCoast); \
	DECLARE_FUNCTION(execSetWaterTile); \
	DECLARE_FUNCTION(execSetHexagonInfo); \
	DECLARE_FUNCTION(execGetPercentage); \
	DECLARE_FUNCTION(execGetTotalPercentages); \
	DECLARE_FUNCTION(execGetTilePercentages); \
	DECLARE_FUNCTION(execSetTile); \
	DECLARE_FUNCTION(execGenerateMap);


#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenerateMapComponent(); \
	friend struct Z_Construct_UClass_UGenerateMapComponent_Statics; \
public: \
	DECLARE_CLASS(UGenerateMapComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HexagonMapping"), NO_API) \
	DECLARE_SERIALIZER(UGenerateMapComponent)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_INCLASS \
private: \
	static void StaticRegisterNativesUGenerateMapComponent(); \
	friend struct Z_Construct_UClass_UGenerateMapComponent_Statics; \
public: \
	DECLARE_CLASS(UGenerateMapComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HexagonMapping"), NO_API) \
	DECLARE_SERIALIZER(UGenerateMapComponent)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenerateMapComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenerateMapComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenerateMapComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenerateMapComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGenerateMapComponent(UGenerateMapComponent&&); \
	NO_API UGenerateMapComponent(const UGenerateMapComponent&); \
public:


#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGenerateMapComponent(UGenerateMapComponent&&); \
	NO_API UGenerateMapComponent(const UGenerateMapComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenerateMapComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenerateMapComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGenerateMapComponent)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_PRIVATE_PROPERTY_OFFSET
#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_124_PROLOG
#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_PRIVATE_PROPERTY_OFFSET \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_SPARSE_DATA \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_RPC_WRAPPERS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_INCLASS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_PRIVATE_PROPERTY_OFFSET \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_SPARSE_DATA \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_INCLASS_NO_PURE_DECLS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEXAGONMAPPING_API UClass* StaticClass<class UGenerateMapComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
