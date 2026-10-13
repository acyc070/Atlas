#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerLookAroundAnimState.generated.h"

UENUM(BlueprintType)
enum class EAtlasPlayerLookAroundAnimState : uint8 {
    None,
    Normal,
    Carry,
    HeadOnly,
    Exhausted,
    Hungry,
    Climbing,
};

