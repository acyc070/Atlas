#pragma once
#include "CoreMinimal.h"
#include "EAtlasHDRumbleType.generated.h"

UENUM(BlueprintType)
enum class EAtlasHDRumbleType : uint8 {
    Lighter,
    General,
    FlashLight,
    HungerRumbleLeft,
    HungerRumbleRight,
    HungerHeartbeatLeft,
    HungerHeartbeatRight,
    PlaceHandsDefault,
    RemoveHandsDefault,
    RemoveHandsHangable,
    RemoveHandsWallSwitch,
    ClimbLeftHand,
    ClimbRightHand,
    None = 255,
};

