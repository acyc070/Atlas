#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerJumpType.generated.h"

UENUM(BlueprintType)
enum EAtlasPlayerJumpType {
    ATLAS_JUMP_Standing,
    ATLAS_JUMP_Crouching,
    ATLAS_JUMP_Walking,
    ATLAS_JUMP_Sprinting,
    ATLAS_JUMP_Swinging,
    ATLAS_JUMP_Climbing,
};

