#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerCrouchMode.generated.h"

UENUM(BlueprintType)
enum class EAtlasPlayerCrouchMode : uint8 {
    Default,
    SleepIdle,
    SleepAwaken,
    Sliding,
    SlideExitToCrouch,
    SlideExitToCrawl,
    HeavyLandingRecovery,
    Crawling,
};

