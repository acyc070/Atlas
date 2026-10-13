#pragma once
#include "CoreMinimal.h"
#include "EAtlasClimbIdlePose.generated.h"

UENUM(BlueprintType)
enum class EAtlasClimbIdlePose : uint8 {
    None,
    LeftHand,
    RightHand,
    BothHands,
};

