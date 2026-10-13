#pragma once
#include "CoreMinimal.h"
#include "AtlasCollectibleCollectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasCollectibleCollected, bool, bWasFirstInGroup);

