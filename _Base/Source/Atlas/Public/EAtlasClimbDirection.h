#pragma once
#include "CoreMinimal.h"
#include "EAtlasClimbDirection.generated.h"

UENUM(BlueprintType)
enum class EAtlasClimbDirection : uint8 {
    Idle,
    Vertical,
    VerticalHalfStep,
    Horizontal,
};

