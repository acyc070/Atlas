#pragma once
#include "CoreMinimal.h"
#include "EAtlasLimb.generated.h"

UENUM(BlueprintType)
enum EAtlasLimb {
    ATLAS_LIMB_LEFT_HAND,
    ATLAS_LIMB_RIGHT_HAND,
    ATLAS_LIMB_LEFT_FOOT,
    ATLAS_LIMB_RIGHT_FOOT,
    ATLAS_LIMB_COUNT,
    ATLAS_LIMB_BOTH_HANDS,
};

