#pragma once
#include "CoreMinimal.h"
#include "AtlasCollectibleDestroyedDelegate.generated.h"

class UAtlasCollectibleComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasCollectibleDestroyed, UAtlasCollectibleComponent*, collectible);

