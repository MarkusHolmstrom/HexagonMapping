// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HEXAGONMAPPING_HexagonActor_generated_h
#error "HexagonActor.generated.h already included, missing '#pragma once' in HexagonActor.h"
#endif
#define HEXAGONMAPPING_HexagonActor_generated_h

#define HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_SPARSE_DATA
#define HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_RPC_WRAPPERS
#define HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHexagonActor(); \
	friend struct Z_Construct_UClass_AHexagonActor_Statics; \
public: \
	DECLARE_CLASS(AHexagonActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HexagonMapping"), NO_API) \
	DECLARE_SERIALIZER(AHexagonActor)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAHexagonActor(); \
	friend struct Z_Construct_UClass_AHexagonActor_Statics; \
public: \
	DECLARE_CLASS(AHexagonActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HexagonMapping"), NO_API) \
	DECLARE_SERIALIZER(AHexagonActor)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHexagonActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHexagonActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHexagonActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHexagonActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHexagonActor(AHexagonActor&&); \
	NO_API AHexagonActor(const AHexagonActor&); \
public:


#define HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHexagonActor(AHexagonActor&&); \
	NO_API AHexagonActor(const AHexagonActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHexagonActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHexagonActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHexagonActor)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_PRIVATE_PROPERTY_OFFSET
#define HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_21_PROLOG
#define HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_PRIVATE_PROPERTY_OFFSET \
	HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_SPARSE_DATA \
	HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_RPC_WRAPPERS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_INCLASS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_PRIVATE_PROPERTY_OFFSET \
	HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_SPARSE_DATA \
	HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_INCLASS_NO_PURE_DECLS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEXAGONMAPPING_API UClass* StaticClass<class AHexagonActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HexagonMapping_Source_HexagonMapping_Public_Earth_HexagonActor_h


#define FOREACH_ENUM_EHEXTYPE(op) \
	op(EHexType::INVALID) \
	op(EHexType::Desert) \
	op(EHexType::Tundra) \
	op(EHexType::Plains) \
	op(EHexType::Grassland) \
	op(EHexType::Mountain) \
	op(EHexType::Jungle) \
	op(EHexType::Ocean) \
	op(EHexType::Shore) \
	op(EHexType::Snow) \
	op(EHexType::Ice) 

enum class EHexType : uint8;
template<> HEXAGONMAPPING_API UEnum* StaticEnum<EHexType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
