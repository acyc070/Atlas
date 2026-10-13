#pragma once
#include "CoreMinimal.h"
#include "ETarVibrationEventCurve.generated.h"

UENUM(BlueprintType)
enum ETarVibrationEventCurve {
    TAR_VIBRATION_CONSTANT,
    TAR_VIBRATION_DECAY_LINEAR,
    TAR_VIBRATION_TRIANGLE,
};

