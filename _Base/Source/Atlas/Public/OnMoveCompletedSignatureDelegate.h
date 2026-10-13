#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "OnMoveCompletedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMoveCompletedSignature, FAIRequestID, RequestID, TEnumAsByte<EPathFollowingResult::Type>, Result);

