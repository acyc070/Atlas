#pragma once
#include "CoreMinimal.h"
#include "EAtlasGameViewportFocus.generated.h"

UENUM(BlueprintType)
enum class EAtlasGameViewportFocus : uint8 {
    FocusLost,
    FocusReceived,
};

