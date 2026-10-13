#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerClimbInitAnimType.generated.h"

UENUM(BlueprintType)
enum class EAtlasPlayerClimbInitAnimType : uint8 {
    None,
    FromBottomStanding,
    FromBottomCrouching,
    FromTop,
    FromAirNormal,
    FromAirRising,
    FromAirFalling,
    FromAirFallingFast,
};

