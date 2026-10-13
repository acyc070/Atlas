#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerGrabPhase.generated.h"

UENUM(BlueprintType)
enum EAtlasPlayerGrabPhase {
    ATLAS_GRAB_INTERFACE_INACTIVE,
    ATLAS_GRAB_INTERFACE_READY,
    ATLAS_GRAB_INTERFACE_INIT,
    ATLAS_GRAB_INTERFACE_GRABBED,
    ATLAS_GRAB_INTERFACE_RELEASING,
};

