#pragma once
#include "CoreMinimal.h"
#include "EFadeState.h"
#include "OnScreenFadeBegunDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnScreenFadeBegun, float, Duration, float, startDelay, EFadeState, fadeType);

