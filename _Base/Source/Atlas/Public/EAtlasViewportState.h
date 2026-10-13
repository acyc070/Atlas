#pragma once
#include "CoreMinimal.h"
#include "EAtlasViewportState.generated.h"

UENUM(BlueprintType)
enum class EAtlasViewportState : uint8 {
    SplashScreen,
    Game,
    Transitioning,
};

