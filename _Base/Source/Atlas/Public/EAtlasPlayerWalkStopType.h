#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerWalkStopType.generated.h"

UENUM(BlueprintType)
enum class EAtlasPlayerWalkStopType : uint8 {
    None,
    Normal,
    Sprint,
    PlatformEdge,
};

