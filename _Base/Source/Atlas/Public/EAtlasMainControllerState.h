#pragma once
#include "CoreMinimal.h"
#include "EAtlasMainControllerState.generated.h"

UENUM(BlueprintType)
enum class EAtlasMainControllerState : uint8 {
    None,
    Connected,
    Lost,
};

