#pragma once
#include "CoreMinimal.h"
#include "EGuestType.generated.h"

UENUM(BlueprintType)
enum class EGuestType : uint8 {
    Stationary,
    Mobile,
};

