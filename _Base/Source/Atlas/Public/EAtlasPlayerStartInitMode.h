#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerStartInitMode.generated.h"

UENUM(BlueprintType)
enum class EAtlasPlayerStartInitMode : uint8 {
    Sleep,
    Stand,
    CustomAnimation,
};

