#pragma once
#include "CoreMinimal.h"
#include "PlayerOnExitWaterSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerOnExitWaterSignature, bool, bClimbedOut);

