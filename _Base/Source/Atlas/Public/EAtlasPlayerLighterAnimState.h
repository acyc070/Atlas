#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerLighterAnimState.generated.h"

UENUM(BlueprintType)
enum class EAtlasPlayerLighterAnimState : uint8 {
    None,
    Normal,
    Sprinting,
    Falling,
    Stamina,
    NearWall,
    LighterIgnite,
    LighterIgniteRightHandOnly,
    Sliding,
    Strafing,
};

