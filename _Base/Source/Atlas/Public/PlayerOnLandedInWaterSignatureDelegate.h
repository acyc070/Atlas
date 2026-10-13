#pragma once
#include "CoreMinimal.h"
#include "PlayerOnLandedInWaterSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerOnLandedInWaterSignature, float, fallHeight);

