#pragma once
#include "CoreMinimal.h"
#include "ETarMovementMode.generated.h"

UENUM(BlueprintType)
enum ETarMovementMode {
    TAR_MOVE_None,
    TAR_MOVE_Walking,
    TAR_MOVE_Falling,
    TAR_MOVE_Swimming,
    TAR_MOVE_Flying,
    TAR_MOVE_Teleporting,
    TAR_MOVE_Custom,
};

