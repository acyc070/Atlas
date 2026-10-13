#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerAnimDragState.generated.h"

UENUM(BlueprintType)
enum class EAtlasPlayerAnimDragState : uint8 {
    Idle,
    Moving,
    Stuck,
    Pushed,
};

