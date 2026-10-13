#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerAnimationOverrideEventType.generated.h"

UENUM(BlueprintType)
enum class EAtlasPlayerAnimationOverrideEventType : uint8 {
    None,
    SprintIntoWall,
    DizzyStumble,
    PetrifyAttack,
    ElectricityGrabKnockBack,
    MakeNoise,
    JumpFail,
};

