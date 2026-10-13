#pragma once
#include "CoreMinimal.h"
#include "ETarMovementMode.h"
#include "TarCharacterMovementModeChangedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTarCharacterMovementModeChangedSignature, TEnumAsByte<ETarMovementMode>, previousMovementMode, TEnumAsByte<ETarMovementMode>, movementMode);

