// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef HEXAGONMAPPING_WorldPawn_generated_h
#error "WorldPawn.generated.h already included, missing '#pragma once' in WorldPawn.h"
#endif
#define HEXAGONMAPPING_WorldPawn_generated_h

#define HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_14_DELEGATE \
struct _Script_HexagonMapping_eventOnTileClicked_Parms \
{ \
	AActor* Tile; \
}; \
static inline void FOnTileClicked_DelegateWrapper(const FMulticastScriptDelegate& OnTileClicked, AActor* Tile) \
{ \
	_Script_HexagonMapping_eventOnTileClicked_Parms Parms; \
	Parms.Tile=Tile; \
	OnTileClicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_SPARSE_DATA
#define HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveLights); \
	DECLARE_FUNCTION(execSetZooming); \
	DECLARE_FUNCTION(execAddPitchInput); \
	DECLARE_FUNCTION(execAddYawInput); \
	DECLARE_FUNCTION(execDeActivateRotation); \
	DECLARE_FUNCTION(execActivateRotation); \
	DECLARE_FUNCTION(execOnTileChosen); \
	DECLARE_FUNCTION(execGetTile);


#define HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveLights); \
	DECLARE_FUNCTION(execSetZooming); \
	DECLARE_FUNCTION(execAddPitchInput); \
	DECLARE_FUNCTION(execAddYawInput); \
	DECLARE_FUNCTION(execDeActivateRotation); \
	DECLARE_FUNCTION(execActivateRotation); \
	DECLARE_FUNCTION(execOnTileChosen); \
	DECLARE_FUNCTION(execGetTile);


#define HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldPawn(); \
	friend struct Z_Construct_UClass_AWorldPawn_Statics; \
public: \
	DECLARE_CLASS(AWorldPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HexagonMapping"), NO_API) \
	DECLARE_SERIALIZER(AWorldPawn)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAWorldPawn(); \
	friend struct Z_Construct_UClass_AWorldPawn_Statics; \
public: \
	DECLARE_CLASS(AWorldPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HexagonMapping"), NO_API) \
	DECLARE_SERIALIZER(AWorldPawn)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldPawn(AWorldPawn&&); \
	NO_API AWorldPawn(const AWorldPawn&); \
public:


#define HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldPawn(AWorldPawn&&); \
	NO_API AWorldPawn(const AWorldPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorldPawn)


#define HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_PRIVATE_PROPERTY_OFFSET
#define HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_16_PROLOG
#define HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_SPARSE_DATA \
	HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_RPC_WRAPPERS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_INCLASS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_SPARSE_DATA \
	HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_INCLASS_NO_PURE_DECLS \
	HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEXAGONMAPPING_API UClass* StaticClass<class AWorldPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HexagonMapping_Source_HexagonMapping_Public_Earth_WorldPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
