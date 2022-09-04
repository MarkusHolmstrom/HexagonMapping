// MarkusHolmstrom no rights reserved

#pragma once

#include "CoreMinimal.h"
UENUM(BlueprintType)
enum class EHexType : uint8
{
	Desert, Tundra, Plains, Grassland, Mountain, 
	Jungle, Ocean, Shore, Snow, Ice
};

UENUM(BlueprintType)
enum class EClimateType : uint8
{
	INVALID,
	Cold, Timid, Normal, Warm, Hot
};

UENUM(BlueprintType)
enum class EHinder : uint8
{
	None, Hill, Trees
};

UENUM(BlueprintType)
enum class EResource : uint8
{
	None, Basic, Bonus, Luxury
};

UENUM(BlueprintType)
enum class EResourceType : uint8
{
	None,
	// Basic:
	Banana, Fish, 
	// Bonus:
	Coal, Copper, Horses, Iron, Oil, Uranium,
	// Luxury:
	Amber, Citrus, Diamonds, Ivory, Lithium, Gold, Salt, Silver, Tobacco 
};

UENUM(BlueprintType)
enum class EMapType : uint8
{
	Invalid, FlatEarthIsRealDontTryToStopUsAndYesMarsIsSphericalBecauseItsBeenProvenWithPhotosThatIsNotEnoughEvidenceForTheEarthForSomeUnknownReason,
	Cylinder, Sphere
};

class HEXAGONMAPPING_API Enums
{
public:
	Enums();
	~Enums();
};
