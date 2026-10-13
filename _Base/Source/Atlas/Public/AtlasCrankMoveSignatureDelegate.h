#pragma once
#include "CoreMinimal.h"
#include "AtlasCrankMoveSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAtlasCrankMoveSignature, float, currentAngle, float, angularVelocity);

