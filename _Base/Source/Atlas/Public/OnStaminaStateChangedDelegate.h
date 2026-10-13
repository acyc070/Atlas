#pragma once
#include "CoreMinimal.h"
#include "EAtlasStaminaState.h"
#include "OnStaminaStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStaminaStateChanged, TEnumAsByte<EAtlasStaminaState>, aNewStaminaState);

