#pragma once
#include "CoreMinimal.h"
#include "EAtlasDLC.generated.h"

UENUM(BlueprintType)
enum class EAtlasDLC : uint8 {
    ScarecrowMask,
    UpsideDownTeapotMask,
    TenguMask,
    Mask_4,
    Expansion_1,
    Expansion_2,
    Expansion_3,
    SeasonPass,
    None,
    MAX,
};

