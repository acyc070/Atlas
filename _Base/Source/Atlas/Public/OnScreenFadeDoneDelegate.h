#pragma once
#include "CoreMinimal.h"
#include "EFadeState.h"
#include "OnScreenFadeDoneDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScreenFadeDone, EFadeState, fadeType);

