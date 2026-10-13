#pragma once
#include "CoreMinimal.h"
#include "ESavingEvent.generated.h"

UENUM(BlueprintType)
enum class ESavingEvent : uint8 {
    StartedSaving,
    FinishedSaving,
    SavingFailed,
};

