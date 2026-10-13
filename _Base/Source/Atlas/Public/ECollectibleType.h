#pragma once
#include "CoreMinimal.h"
#include "ECollectibleType.generated.h"

UENUM(BlueprintType)
enum class ECollectibleType : uint8 {
    Nome,
    Statue,
    Lantern,
    DLC1,
    DLC2,
    DLC3,
};

