#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerMoveModTypes.generated.h"

UENUM(BlueprintType)
enum class EAtlasPlayerMoveModTypes : uint8 {
    PainfulFloor,
    ElectricFloor,
    HighFloor,
    BalanceBeam,
    ShoePit,
    LeechGoo,
    CoolWalk,
    NoisyFloor,
    Max,
    ThroughShards,
    Stumble,
    Wading,
    Swimming,
};

