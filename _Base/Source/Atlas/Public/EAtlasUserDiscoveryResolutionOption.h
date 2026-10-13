#pragma once
#include "CoreMinimal.h"
#include "EAtlasUserDiscoveryResolutionOption.generated.h"

UENUM(BlueprintType)
enum class EAtlasUserDiscoveryResolutionOption : uint8 {
    ResetDicoveryProcess,
    ResetUserOnly,
    GiveUpDiscovery,
    TryToLogSameUser,
};

