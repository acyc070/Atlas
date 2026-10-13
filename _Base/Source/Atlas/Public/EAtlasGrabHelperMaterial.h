#pragma once
#include "CoreMinimal.h"
#include "EAtlasGrabHelperMaterial.generated.h"

UENUM(BlueprintType)
enum class EAtlasGrabHelperMaterial : uint8 {
    None,
    WoodThin,
    WoodThick,
    MetalSolid,
    MetalResonant,
    MetalPipe,
    MetalSheet,
    Plastic,
    FoodWet,
    FoodDry,
    FoodMeat,
    Ceramic,
    Max,
};

