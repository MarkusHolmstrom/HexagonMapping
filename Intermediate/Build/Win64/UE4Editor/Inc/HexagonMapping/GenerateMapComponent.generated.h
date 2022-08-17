// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FClimateInfo;
class AHexagonActor;
#ifdef HEXAGONMAPPING_GenerateMapComponent_generated_h
#error "GenerateMapComponent.generated.h already included, missing '#pragma once' in GenerateMapComponent.h"
#endif
#define HEXAGONMAPPING_GenerateMapComponent_generated_h

#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClimateInfo_Statics; \
	HEXAGONMAPPING_API static class UScriptStruct* StaticStruct();


template<> HEXAGONMAPPING_API UScriptStruct* StaticStruct<struct FClimateInfo>();

#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_SPARSE_DATA
#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShootLaser); \
	DECLARE_FUNCTION(execGetEndLocation); \
	DECLARE_FUNCTION(execSetRandomList); \
	DECLARE_FUNCTION(execGetCorrectClimate); \
	DECLARE_FUNCTION(execUpdateRandomIndex); \
	DECLARE_FUNCTION(execSetLikelihoodLand); \
	DECLARE_FUNCTION(execIsLandMoreLikely); \
	DECLARE_FUNCTION(execSetShoreTilesAround); \
	DECLARE_FUNCTION(execGetTile); \
	DECLARE_FUNCTION(execCheckTileForCoast); \
	DECLARE_FUNCTION(execSetWaterTile); \
	DECLARE_FUNCTION(execSetHexagonInfo); \
	DECLARE_FUNCTION(execSetTile); \
	DECLARE_FUNCTION(execGenerateMap);


#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShootLaser); \
	DECLARE_FUNCTION(execGetEndLocation); \
	DECLARE_FUNCTION(execSetRandomList); \
	DECLARE_FUNCTION(execGetCorrectClimate); \
	DECLARE_FUNCTION(execUpdateRandomIndex); \
	DECLARE_FUNCTION(execSetLikelihoodLand); \
	DECLARE_FUNCTION(execIsLandMoreLikely); \
	DECLARE_FUNCTION(execSetShoreTilesAround); \
	DECLARE_FUNCTION(execGetTile); \
	DECLARE_FUNCTION(execCheckTileForCoast); \
	DECLARE_FUNCTION(execSetWaterTile); \
	DECLARE_FUNCTION(execSetHexagonInfo); \
	DECLARE_FUNCTION(execSetTile); \
	DECLARE_FUNCTION(execGenerateMap);


#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenerateMapComponent(); \
	friend struct Z_Construct_UClass_UGenerateMapComponent_Statics; \
public: \
	DECLARE_CLASS(UGenerateMapComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HexagonMapping"), NO_API) \
	DECLARE_SERIALIZER(UGenerateMapComponent)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_INCLASS \
private: \
	static void StaticRegisterNativesUGenerateMapComponent(); \
	friend struct Z_Construct_UClass_UGenerateMapComponent_Statics; \
public: \
	DECLARE_CLASS(UGenerateMapComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HexagonMapping"), NO_API) \
	DECLARE_SERIALIZER(UGenerateMapComponent)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_STANDARD_CONSTRUCTORS \
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


#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGenerateMapComponent(UGenerateMapComponent&&); \
	NO_API UGenerateMapComponent(const UGenerateMapComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenerateMapComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenerateMapComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGenerateMapComponent)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HorOffset() { return STRUCT_OFFSET(UGenerateMapComponent, HorOffset); } \
	FORCEINLINE static uint32 __PPO__OddRowHorOffset() { return STRUCT_OFFSET(UGenerateMapComponent, OddRowHorOffset); } \
	FORCEINLINE static uint32 __PPO__VerOffset() { return STRUCT_OFFSET(UGenerateMapComponent, VerOffset); } \
	FORCEINLINE static uint32 __PPO__GrassHexTile() { return STRUCT_OFFSET(UGenerateMapComponent, GrassHexTile); } \
	FORCEINLINE static uint32 __PPO__WaterHexTile() { return STRUCT_OFFSET(UGenerateMapComponent, WaterHexTile); } \
	FORCEINLINE static uint32 __PPO__ShoreHexTile() { return STRUCT_OFFSET(UGenerateMapComponent, ShoreHexTile); } \
	FORCEINLINE static uint32 __PPO__PlainsHexTile() { return STRUCT_OFFSET(UGenerateMapComponent, PlainsHexTile); } \
	FORCEINLINE static uint32 __PPO__MountainHexTile() { return STRUCT_OFFSET(UGenerateMapComponent, MountainHexTile); } \
	FORCEINLINE static uint32 __PPO__DesertHexTile() { return STRUCT_OFFSET(UGenerateMapComponent, DesertHexTile); } \
	FORCEINLINE static uint32 __PPO__TundraHexTile() { return STRUCT_OFFSET(UGenerateMapComponent, TundraHexTile); } \
	FORCEINLINE static uint32 __PPO__JungleHexTile() { return STRUCT_OFFSET(UGenerateMapComponent, JungleHexTile); } \
	FORCEINLINE static uint32 __PPO__SnowHexTile() { return STRUCT_OFFSET(UGenerateMapComponent, SnowHexTile); } \
	FORCEINLINE static uint32 __PPO__IceHexTile() { return STRUCT_OFFSET(UGenerateMapComponent, IceHexTile); } \
	FORCEINLINE static uint32 __PPO__MapHeight() { return STRUCT_OFFSET(UGenerateMapComponent, MapHeight); } \
	FORCEINLINE static uint32 __PPO__MapWidth() { return STRUCT_OFFSET(UGenerateMapComponent, MapWidth); } \
	FORCEINLINE static uint32 __PPO__RandomFloatList() { return STRUCT_OFFSET(UGenerateMapComponent, RandomFloatList); } \
	FORCEINLINE static uint32 __PPO__List() { return STRUCT_OFFSET(UGenerateMapComponent, List); } \
	FORCEINLINE static uint32 __PPO__RandomFloatListLength() { return STRUCT_OFFSET(UGenerateMapComponent, RandomFloatListLength); } \
	FORCEINLINE static uint32 __PPO__RandomFloatIndex() { return STRUCT_OFFSET(UGenerateMapComponent, RandomFloatIndex); } \
	FORCEINLINE static uint32 __PPO__RandomIntList() { return STRUCT_OFFSET(UGenerateMapComponent, RandomIntList); } \
	FORCEINLINE static uint32 __PPO__RandomIntListLength() { return STRUCT_OFFSET(UGenerateMapComponent, RandomIntListLength); } \
	FORCEINLINE static uint32 __PPO__RandomIntIndex() { return STRUCT_OFFSET(UGenerateMapComponent, RandomIntIndex); }


#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_127_PROLOG
#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_PRIVATE_PROPERTY_OFFSET \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_SPARSE_DATA \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_RPC_WRAPPERS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_INCLASS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_PRIVATE_PROPERTY_OFFSET \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_SPARSE_DATA \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_INCLASS_NO_PURE_DECLS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h_130_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEXAGONMAPPING_API UClass* StaticClass<class UGenerateMapComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HexagonMapping_Source_HexagonMapping_Public_Earth_GenerateMapComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
