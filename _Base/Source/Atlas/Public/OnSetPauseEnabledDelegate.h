#pragma once
#include "CoreMinimal.h"
#include "OnSetPauseEnabledDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSetPauseEnabled, bool, bEnabled);

