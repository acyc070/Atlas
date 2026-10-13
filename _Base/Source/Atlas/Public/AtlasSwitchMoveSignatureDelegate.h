#pragma once
#include "CoreMinimal.h"
#include "ESwitchPlayDirection.h"
#include "AtlasSwitchMoveSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAtlasSwitchMoveSignature, float, currentAngle, float, alpha, ESwitchPlayDirection, PlayDirection);

