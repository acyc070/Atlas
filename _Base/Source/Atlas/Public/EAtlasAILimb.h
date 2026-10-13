#pragma once
#include "CoreMinimal.h"
#include "EAtlasAILimb.generated.h"

UENUM(BlueprintType)
enum class EAtlasAILimb : uint8 {
    Left,
    Right,
    Both,
    None,
    Custom,
};

