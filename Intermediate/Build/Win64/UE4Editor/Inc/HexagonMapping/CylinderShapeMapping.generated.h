// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef HEXAGONMAPPING_CylinderShapeMapping_generated_h
#error "CylinderShapeMapping.generated.h already included, missing '#pragma once' in CylinderShapeMapping.h"
#endif
#define HEXAGONMAPPING_CylinderShapeMapping_generated_h

#define HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_SPARSE_DATA
#define HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShootLaser); \
	DECLARE_FUNCTION(execGetAngle); \
	DECLARE_FUNCTION(execGetHexLocation); \
	DECLARE_FUNCTION(execSetShape);


#define HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShootLaser); \
	DECLARE_FUNCTION(execGetAngle); \
	DECLARE_FUNCTION(execGetHexLocation); \
	DECLARE_FUNCTION(execSetShape);


#define HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShapeMapping(); \
	friend struct Z_Construct_UClass_AShapeMapping_Statics; \
public: \
	DECLARE_CLASS(AShapeMapping, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HexagonMapping"), NO_API) \
	DECLARE_SERIALIZER(AShapeMapping)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAShapeMapping(); \
	friend struct Z_Construct_UClass_AShapeMapping_Statics; \
public: \
	DECLARE_CLASS(AShapeMapping, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HexagonMapping"), NO_API) \
	DECLARE_SERIALIZER(AShapeMapping)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShapeMapping(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShapeMapping) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShapeMapping); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShapeMapping); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShapeMapping(AShapeMapping&&); \
	NO_API AShapeMapping(const AShapeMapping&); \
public:


#define HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShapeMapping(AShapeMapping&&); \
	NO_API AShapeMapping(const AShapeMapping&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShapeMapping); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShapeMapping); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShapeMapping)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_PRIVATE_PROPERTY_OFFSET
#define HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_10_PROLOG
#define HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_PRIVATE_PROPERTY_OFFSET \
	HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_SPARSE_DATA \
	HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_RPC_WRAPPERS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_INCLASS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_PRIVATE_PROPERTY_OFFSET \
	HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_SPARSE_DATA \
	HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_INCLASS_NO_PURE_DECLS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEXAGONMAPPING_API UClass* StaticClass<class AShapeMapping>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HexagonMapping_Source_HexagonMapping_Public_Earth_CylinderShapeMapping_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
