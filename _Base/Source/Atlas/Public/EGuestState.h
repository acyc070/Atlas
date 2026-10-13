#pragma once
#include "CoreMinimal.h"
#include "EGuestState.generated.h"

UENUM(BlueprintType)
enum class EGuestState : uint8 {
    Idle,
    Pursuit,
    Grab,
    Alerted,
};

