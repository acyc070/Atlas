#pragma once
#include "CoreMinimal.h"
#include "EAtlasPresetGraphicsQualityLevel.generated.h"

UENUM(BlueprintType)
enum class EAtlasPresetGraphicsQualityLevel : uint8 {
    Low,
    Medium,
    High,
    Ultra,
    Custom,
};

