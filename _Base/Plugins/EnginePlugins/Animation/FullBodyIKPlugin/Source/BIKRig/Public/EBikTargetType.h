#pragma once
#include "CoreMinimal.h"
#include "EBikTargetType.generated.h"

UENUM(BlueprintType)
namespace EBikTargetType {
    enum Type {
        BlendToTarget,
        BlendWithTarget,
        BlendWithOffset,
    };
}

