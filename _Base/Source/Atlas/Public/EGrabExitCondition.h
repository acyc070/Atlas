#pragma once
#include "CoreMinimal.h"
#include "EGrabExitCondition.generated.h"

UENUM(BlueprintType)
enum class EGrabExitCondition : uint8 {
    None,
    Idle,
    Killing,
};

