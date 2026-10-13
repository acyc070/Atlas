#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerWalkStartType.generated.h"

UENUM()
enum class EAtlasPlayerWalkStartType : int32 {
    None,
    Normal,
    TurnOnTheSpot,
    StaticTurn,
    QuickTurn,
    QuickTurnSprint,
    PlatformEdge,
};

