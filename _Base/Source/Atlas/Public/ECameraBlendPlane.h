#pragma once
#include "CoreMinimal.h"
#include "ECameraBlendPlane.generated.h"

UENUM(BlueprintType)
enum class ECameraBlendPlane : uint8 {
    XY,
    YZ,
    XZ,
};

