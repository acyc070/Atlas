#pragma once
#include "CoreMinimal.h"
#include "AtlasCrankIdleBehaviour.generated.h"

UENUM(BlueprintType)
enum class AtlasCrankIdleBehaviour : uint8 {
    StayInPosition,
    UnwindCounterClockwise,
    UnwindClockwise,
};

