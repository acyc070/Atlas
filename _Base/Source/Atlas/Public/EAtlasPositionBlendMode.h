#pragma once
#include "CoreMinimal.h"
#include "EAtlasPositionBlendMode.generated.h"

UENUM(BlueprintType)
enum class EAtlasPositionBlendMode : uint8 {
    NONE,
    NESTED,
    JOIN,
};

