#pragma once
#include "CoreMinimal.h"
#include "EFSRQuality.generated.h"

UENUM(BlueprintType)
enum class EFSRQuality : uint8 {
    Off,
    Performance,
    Balanced,
    Quality,
    UltraQuality,
};

