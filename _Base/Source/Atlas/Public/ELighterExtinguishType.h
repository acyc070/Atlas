#pragma once
#include "CoreMinimal.h"
#include "ELighterExtinguishType.generated.h"

UENUM(BlueprintType)
enum ELighterExtinguishType {
    ATLAS_LIGHTER_EXTINGUISH_Wind,
    ATLAS_LIGHTER_EXTINGUISH_Water,
    ATLAS_LIGHTER_EXTINGUISH_Close,
    ATLAS_LIGHTER_EXTINGUISH_BurnOut,
    ATLAS_LIGHTER_EXTINGUISH_Death,
};

