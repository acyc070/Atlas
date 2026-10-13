#pragma once
#include "CoreMinimal.h"
#include "AtlasDoorMoveSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAtlasDoorMoveSignature, float, currentAngle, float, angularVelocity);

