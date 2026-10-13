#pragma once
#include "CoreMinimal.h"
#include "EAtlasHideawayAnimationState.generated.h"

UENUM(BlueprintType)
enum class EAtlasHideawayAnimationState : uint8 {
    Closed,
    Open,
    EnterFromOpen,
    EnterFromClosed,
    Hidden,
    Exit,
};

