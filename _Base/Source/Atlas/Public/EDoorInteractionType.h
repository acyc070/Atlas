#pragma once
#include "CoreMinimal.h"
#include "EDoorInteractionType.generated.h"

UENUM(BlueprintType)
enum class EDoorInteractionType : uint8 {
    EnterRight,
    EnterLeft,
    EnterRightTowards,
    EnterLeftTowards,
    ExitRight,
    ExitLeft,
    ExitRightTowards,
    ExitLeftTowards,
    None,
};

