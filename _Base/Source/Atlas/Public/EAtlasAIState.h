#pragma once
#include "CoreMinimal.h"
#include "EAtlasAIState.generated.h"

UENUM(BlueprintType)
enum class EAtlasAIState : uint8 {
    None,
    Search,
    Alerted,
    Pursuit,
    Quest,
    Investigating,
    GrabPlayer,
    PursuingPlayerOnSurface,
    PursuingPlayerUnderSurface,
    PursuingBeyondReach,
    Listening,
    HostileSearch,
    KillingSix,
    UnableToReach,
    Clapping,
    NumOfStates,
};

