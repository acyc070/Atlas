#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerMaterialSection.generated.h"

UENUM(BlueprintType)
enum class EAtlasPlayerMaterialSection : uint8 {
    Body,
    Coat1,
    Coat2,
    Hair,
    All,
};

