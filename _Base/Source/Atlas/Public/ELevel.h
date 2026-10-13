#pragma once
#include "CoreMinimal.h"
#include "ELevel.generated.h"

UENUM(BlueprintType)
enum class ELevel : uint8 {
    Prison,
    Hull,
    Lair,
    Kitchen,
    Guest_Area,
    Ladys_Quarters,
    Depths,
    Hideaway,
    Eyrie,
};

