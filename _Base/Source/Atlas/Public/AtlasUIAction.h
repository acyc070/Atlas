#pragma once
#include "CoreMinimal.h"
#include "AtlasUIAction.generated.h"

UENUM(BlueprintType)
enum class AtlasUIAction : uint8 {
    None,
    Select,
    Back,
    Left,
    Right,
    Up,
    Down,
    TabLeft,
    TabRight,
    Pause,
    DollhouseZoom,
};

