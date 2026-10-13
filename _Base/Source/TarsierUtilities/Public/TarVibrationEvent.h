#pragma once
#include "CoreMinimal.h"
#include "TarCountdownTimer.h"
#include "TarVibrationEvent.generated.h"

USTRUCT(BlueprintType)
struct TARSIERUTILITIES_API FTarVibrationEvent : public FTarCountdownTimer {
    GENERATED_BODY()
public:
    FTarVibrationEvent();
};

