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


#define FOREACH_ENUM_ENODEINDEX(op) \
	op(ENodeIndex::None) \
	op(ENodeIndex::Left) \
	op(ENodeIndex::Middle) \
	op(ENodeIndex::Right) 

enum class ENodeIndex : uint8;
template<> HEXAGONMAPPING_API UEnum* StaticEnum<ENodeIndex>();

#define FOREACH_ENUM_EDIRECTION(op) \
	op(EDirection::North) \
	op(EDirection::NorthEast) \
	op(EDirection::East) \
	op(EDirection::SouthEast) \
	op(EDirection::South) \
	op(EDirection::SouthWest) \
	op(EDirection::West) \
	op(EDirection::NorthWest) 

enum class EDirection : uint8;
template<> HEXAGONMAPPING_API UEnum* StaticEnum<EDirection>();

#define FOREACH_ENUM_EMAPTYPE(op) \
	op(EMapType::Invalid) \
	op(EMapType::FlatEarthIsRealDontTryToStopUsAndYesMarsIsSphericalBecauseItsBeenProvenWithPhotosThatIsNotEnoughEvidenceForTheEarthForSomeUnknownReason) \
	op(EMapType::Cylinder) \
	op(EMapType::Sphere) 

enum class EMapType : uint8;
template<> HEXAGONMAPPING_API UEnum* StaticEnum<EMapType>();

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
	op(EHinder::Trees) \
	op(EHinder::Mountain) \
	op(EHinder::Water) 

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
