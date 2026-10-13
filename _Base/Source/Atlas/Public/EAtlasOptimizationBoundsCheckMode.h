#pragma once
#include "CoreMinimal.h"
#include "EAtlasOptimizationBoundsCheckMode.generated.h"

UENUM(BlueprintType)
enum class EAtlasOptimizationBoundsCheckMode : uint8 {
    BoundingBox,
    Cylinder,
    Point,
    Sphere,
};

