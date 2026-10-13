#pragma once
#include "CoreMinimal.h"
#include "EGuestTransitionDirection.generated.h"

UENUM(BlueprintType)
enum class EGuestTransitionDirection : uint8 {
    Any,
    Left,
    Right,
};

