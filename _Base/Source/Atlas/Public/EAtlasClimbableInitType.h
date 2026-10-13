#pragma once
#include "CoreMinimal.h"
#include "EAtlasClimbableInitType.generated.h"

UENUM(BlueprintType)
enum class EAtlasClimbableInitType : uint8 {
    None,
    FromStanding,
    FromFalling,
    FromTop,
};

