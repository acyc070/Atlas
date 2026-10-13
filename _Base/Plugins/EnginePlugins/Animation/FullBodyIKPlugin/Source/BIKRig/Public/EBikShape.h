#pragma once
#include "CoreMinimal.h"
#include "EBikShape.generated.h"

UENUM(BlueprintType)
namespace EBikShape {
    enum Type {
        Line,
        Box,
        Sphere,
        Capsule,
    };
}

