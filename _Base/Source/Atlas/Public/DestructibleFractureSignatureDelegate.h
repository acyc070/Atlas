#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DestructibleFractureSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDestructibleFractureSignature, const FVector&, HitPoint, const FVector&, HitDirection);

