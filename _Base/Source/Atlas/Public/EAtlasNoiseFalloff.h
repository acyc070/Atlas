#pragma once
#include "CoreMinimal.h"
#include "EAtlasNoiseFalloff.generated.h"

UENUM(BlueprintType)
namespace EAtlasNoiseFalloff {
    enum Type {
        Linear,
        InvSquareLaw,
    };
}

