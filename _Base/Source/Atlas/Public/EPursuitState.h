#pragma once
#include "CoreMinimal.h"
#include "EPursuitState.generated.h"

UENUM(BlueprintType)
enum class EPursuitState : uint8 {
    Normal,
    MovingToClosestPointOnNavmesh,
    StandingNextToSurfacePlayerIsOn,
    StandingNextToSurfacePlayerIsBelow,
};

