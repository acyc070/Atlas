#pragma once
#include "CoreMinimal.h"
#include "EActivityEndReason.generated.h"

UENUM(BlueprintType)
enum class EActivityEndReason : uint8 {
    Completed,
    Failed,
    Abandoned,
};

