#pragma once
#include "CoreMinimal.h"
#include "EPlayerSurfaceState.generated.h"

UENUM(BlueprintType)
enum class EPlayerSurfaceState : uint8 {
    Normal,
    OnTop,
    Below,
    BeyondReach,
    BelowReach,
    None,
};

