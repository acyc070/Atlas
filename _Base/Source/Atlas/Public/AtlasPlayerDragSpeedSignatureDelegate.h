#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerDragSpeedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasPlayerDragSpeedSignature, float, Speed);

