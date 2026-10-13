#pragma once
#include "CoreMinimal.h"
#include "EPlatform.generated.h"

UENUM(BlueprintType)
enum class EPlatform : uint8 {
    PC,
    PS4,
    PS5,
    XboxOne,
    XSX,
    IOS,
    Android,
    Switch,
    Sage,
    Quail,
};

