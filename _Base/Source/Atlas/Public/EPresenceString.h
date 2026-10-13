#pragma once
#include "CoreMinimal.h"
#include "EPresenceString.generated.h"

UENUM(BlueprintType)
enum class EPresenceString : uint8 {
    Main_Menu,
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

