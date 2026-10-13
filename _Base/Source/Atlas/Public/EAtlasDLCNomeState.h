#pragma once
#include "CoreMinimal.h"
#include "EAtlasDLCNomeState.generated.h"

UENUM(BlueprintType)
enum class EAtlasDLCNomeState : uint8 {
    Idle,
    Roam,
    Follow,
    Carried,
    Flying,
    Landing,
    Action,
    Grabbing,
    Cower,
    Max,
};

