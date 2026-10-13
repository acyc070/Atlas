#pragma once
#include "CoreMinimal.h"
#include "EAtlasPhysicsInterfaceState.generated.h"

UENUM(BlueprintType)
enum class EAtlasPhysicsInterfaceState : uint8 {
    NONE,
    ROLLING,
    SLIDING,
};

