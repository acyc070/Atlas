#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerFallType.generated.h"

UENUM(BlueprintType)
enum EAtlasPlayerFallType {
    ATLAS_PLAYER_FALL_LIGHT,
    ATLAS_PLAYER_FALL_MEDIUM,
    ATLAS_PLAYER_FALL_HEAVY,
    ATLAS_PLAYER_FALL_CONCUSSIVE,
    ATLAS_PLAYER_FALL_DEATH,
    ATLAS_PLAYER_FALL_COUNT,
};

