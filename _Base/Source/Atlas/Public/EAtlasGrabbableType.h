#pragma once
#include "CoreMinimal.h"
#include "EAtlasGrabbableType.generated.h"

UENUM(BlueprintType)
enum EAtlasGrabbableType {
    ATLAS_GRAB_TYPE_NONE,
    ATLAS_GRAB_TYPE_CLIMBABLE,
    ATLAS_GRAB_TYPE_DRAGGABLE,
    ATLAS_GRAB_TYPE_CARRYABLE,
    ATLAS_GRAB_TYPE_LEVER,
    ATLAS_GRAB_TYPE_CRANK,
    ATLAS_GRAB_TYPE_LEDGE,
    ATLAS_GRAB_TYPE_HANGABLE,
    ATLAS_GRAB_TYPE_HIDEAWAY,
};

