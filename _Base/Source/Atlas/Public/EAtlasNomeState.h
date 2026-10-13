#pragma once
#include "CoreMinimal.h"
#include "EAtlasNomeState.generated.h"

UENUM(BlueprintType)
enum class EAtlasNomeState : uint8 {
    IDLEROAM,
    IDLESTILL,
    FLEE,
    CARRIED,
    FLYING,
    LANDING,
    FOLLOWSIX,
    COWER,
    CUSTOM,
    MAX,
};

