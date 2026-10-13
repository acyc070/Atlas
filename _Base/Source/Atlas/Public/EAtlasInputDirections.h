#pragma once
#include "CoreMinimal.h"
#include "EAtlasInputDirections.generated.h"

UENUM(BlueprintType)
enum class EAtlasInputDirections : uint8 {
    Up,
    Left,
    Down,
    Right,
};

