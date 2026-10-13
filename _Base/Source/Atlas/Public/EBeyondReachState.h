#pragma once
#include "CoreMinimal.h"
#include "EBeyondReachState.generated.h"

UENUM(BlueprintType)
enum class EBeyondReachState : uint8 {
    GetInPosition,
    Upset,
    Roaming,
    Reach,
};

