#pragma once
#include "CoreMinimal.h"
#include "EAtlasGraphicsQualityLevel.generated.h"

UENUM(BlueprintType)
enum class EAtlasGraphicsQualityLevel : uint8 {
    Off,
    Low,
    Medium,
    High,
    VeryHigh,
    Ultra,
};

