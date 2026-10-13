#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerCarryTransitionType.generated.h"

UENUM(BlueprintType)
enum class EAtlasPlayerCarryTransitionType : uint8 {
    None,
    PickingUp,
    PickingUpCrouch,
    PuttingDown,
    PuttingDownCrouch,
    PuttingIntoSlot,
    ThrowPrepare,
    Throwing,
    ThrowingHigh,
    Biting,
    MirrorFight,
    RemoveItemFromSlot,
};

