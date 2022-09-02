// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HEXAGONMAPPING_TestActorComponent_generated_h
#error "TestActorComponent.generated.h already included, missing '#pragma once' in TestActorComponent.h"
#endif
#define HEXAGONMAPPING_TestActorComponent_generated_h

#define HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_SPARSE_DATA
#define HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateMap);


#define HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateMap);


#define HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestActorComponent(); \
	friend struct Z_Construct_UClass_UTestActorComponent_Statics; \
public: \
	DECLARE_CLASS(UTestActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HexagonMapping"), NO_API) \
	DECLARE_SERIALIZER(UTestActorComponent)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTestActorComponent(); \
	friend struct Z_Construct_UClass_UTestActorComponent_Statics; \
public: \
	DECLARE_CLASS(UTestActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HexagonMapping"), NO_API) \
	DECLARE_SERIALIZER(UTestActorComponent)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestActorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestActorComponent(UTestActorComponent&&); \
	NO_API UTestActorComponent(const UTestActorComponent&); \
public:


#define HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestActorComponent(UTestActorComponent&&); \
	NO_API UTestActorComponent(const UTestActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTestActorComponent)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HorOffset() { return STRUCT_OFFSET(UTestActorComponent, HorOffset); } \
	FORCEINLINE static uint32 __PPO__OddRowHorOffset() { return STRUCT_OFFSET(UTestActorComponent, OddRowHorOffset); } \
	FORCEINLINE static uint32 __PPO__VerOffset() { return STRUCT_OFFSET(UTestActorComponent, VerOffset); } \
	FORCEINLINE static uint32 __PPO__HexTile0() { return STRUCT_OFFSET(UTestActorComponent, HexTile0); } \
	FORCEINLINE static uint32 __PPO__HexTile1() { return STRUCT_OFFSET(UTestActorComponent, HexTile1); } \
	FORCEINLINE static uint32 __PPO__MapHeight() { return STRUCT_OFFSET(UTestActorComponent, MapHeight); } \
	FORCEINLINE static uint32 __PPO__MapWidth() { return STRUCT_OFFSET(UTestActorComponent, MapWidth); }


#define HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_12_PROLOG
#define HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_SPARSE_DATA \
	HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_RPC_WRAPPERS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_INCLASS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_SPARSE_DATA \
	HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_INCLASS_NO_PURE_DECLS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEXAGONMAPPING_API UClass* StaticClass<class UTestActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HexagonMapping_Source_HexagonMapping_Public_Earth_TestActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
