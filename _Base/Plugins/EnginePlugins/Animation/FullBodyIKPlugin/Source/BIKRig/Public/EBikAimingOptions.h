#pragma once
#include "CoreMinimal.h"
#include "EBikAimingOptions.generated.h"

UENUM(BlueprintType)
namespace EBikAimingOptions {
    enum Type {
        SingleHand,
        TwoHand,
        DualWield,
    };
}

