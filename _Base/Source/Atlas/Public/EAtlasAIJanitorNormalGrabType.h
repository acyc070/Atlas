#pragma once
#include "CoreMinimal.h"
#include "EAtlasAIJanitorNormalGrabType.generated.h"

UENUM(BlueprintType)
enum class EAtlasAIJanitorNormalGrabType : uint8 {
    Normal,
    TopLow,
    Close,
    None,
};

