#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerAnimDragInitType.generated.h"

UENUM(BlueprintType)
enum class EAtlasPlayerAnimDragInitType : uint8 {
    Stand,
    Crouch,
    Jog,
    Sprint,
};

