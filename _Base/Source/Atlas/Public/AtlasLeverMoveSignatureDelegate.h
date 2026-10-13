#pragma once
#include "CoreMinimal.h"
#include "AtlasLeverMoveSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAtlasLeverMoveSignature, float, currentAngle, float, angularVelocity);

