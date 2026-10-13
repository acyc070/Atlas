#pragma once
#include "CoreMinimal.h"
#include "EActivityAvailability.generated.h"

UENUM(BlueprintType)
enum class EActivityAvailability : uint8 {
    Hidden,
    Available,
};

