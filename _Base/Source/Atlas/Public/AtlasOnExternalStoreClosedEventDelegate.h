#pragma once
#include "CoreMinimal.h"
#include "AtlasOnExternalStoreClosedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAtlasOnExternalStoreClosedEvent, bool, bSuccessful, bool, bPurchased);

