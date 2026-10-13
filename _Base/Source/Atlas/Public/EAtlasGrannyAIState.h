#pragma once
#include "CoreMinimal.h"
#include "EAtlasGrannyAIState.generated.h"

UENUM(BlueprintType)
enum class EAtlasGrannyAIState : uint8 {
    Lurk,
    Attack,
    Bump,
    Scripted,
    Teleporting,
    Waiting,
    Ambush,
    Killed,
};

