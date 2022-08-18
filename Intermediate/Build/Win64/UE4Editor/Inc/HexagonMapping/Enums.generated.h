// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HEXAGONMAPPING_Enums_generated_h
#error "Enums.generated.h already included, missing '#pragma once' in Enums.h"
#endif
#define HEXAGONMAPPING_Enums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HexagonMapping_Source_HexagonMapping_Public_Enums_h


#define FOREACH_ENUM_ERESOURCETYPE(op) \
	op(EResourceType::None) \
	op(EResourceType::Banana) \
	op(EResourceType::Fish) \
	op(EResourceType::Coal) \
	op(EResourceType::Copper) \
	op(EResourceType::Horses) \
	op(EResourceType::Iron) \
	op(EResourceType::Oil) \
	op(EResourceType::Uranium) \
	op(EResourceType::Amber) \
	op(EResourceType::Citrus) \
	op(EResourceType::Diamonds) \
	op(EResourceType::Ivory) \
	op(EResourceType::Lithium) \
	op(EResourceType::Gold) \
	op(EResourceType::Salt) \
	op(EResourceType::Silver) \
	op(EResourceType::Tobacco) 

enum class EResourceType : uint8;
template<> HEXAGONMAPPING_API UEnum* StaticEnum<EResourceType>();

#define FOREACH_ENUM_ERESOURCE(op) \
	op(EResource::None) \
	op(EResource::Basic) \
	op(EResource::Bonus) \
	op(EResource::Luxury) 

enum class EResource : uint8;
template<> HEXAGONMAPPING_API UEnum* StaticEnum<EResource>();

#define FOREACH_ENUM_EHINDER(op) \
	op(EHinder::None) \
	op(EHinder::Hill) \
	op(EHinder::Trees) 

enum class EHinder : uint8;
template<> HEXAGONMAPPING_API UEnum* StaticEnum<EHinder>();

#define FOREACH_ENUM_ECLIMATETYPE(op) \
	op(EClimateType::INVALID) \
	op(EClimateType::Cold) \
	op(EClimateType::Timid) \
	op(EClimateType::Normal) \
	op(EClimateType::Warm) \
	op(EClimateType::Hot) 

enum class EClimateType : uint8;
template<> HEXAGONMAPPING_API UEnum* StaticEnum<EClimateType>();

#define FOREACH_ENUM_EHEXTYPE(op) \
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