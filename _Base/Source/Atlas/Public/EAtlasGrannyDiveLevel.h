#pragma once
#include "CoreMinimal.h"
#include "EAtlasGrannyDiveLevel.generated.h"

UENUM(BlueprintType)
enum class EAtlasGrannyDiveLevel : uint8 {
    Deep,
    Shallow,
    Teleport,
    Exposed,
};

