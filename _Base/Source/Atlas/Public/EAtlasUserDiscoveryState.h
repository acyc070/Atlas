#pragma once
#include "CoreMinimal.h"
#include "EAtlasUserDiscoveryState.generated.h"

UENUM(BlueprintType)
enum class EAtlasUserDiscoveryState : uint8 {
    NotDiscovered,
    Discovering,
    Discovered,
    DiscoveryFailed,
    DoesntWantToLogIn,
    LoggedOut,
};

