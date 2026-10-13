#pragma once
#include "CoreMinimal.h"
#include "EBikTaskIdentifier.generated.h"

UENUM(BlueprintType)
enum class EBikTaskIdentifier : uint8 {
    IK_TARGET_LEFT_FOOT,
    IK_TARGET_RIGHT_FOOT,
    IK_TARGET_PELVIS,
    IK_TARGET_UPPER_BODY,
    IK_TARGET_LEFT_HAND,
    IK_TARGET_RIGHT_HAND,
};

