#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerHungerChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasPlayerHungerChanged, int32, hungerLevel);

