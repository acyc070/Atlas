#pragma once
#include "CoreMinimal.h"
#include "PhysicsInterfaceOnHitSignatureDelegate.generated.h"

class AActor;
class UPrimitiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FPhysicsInterfaceOnHitSignature, AActor*, OtherActor, UPrimitiveComponent*, OtherComponent, float, Force, float, ForceRaw, FName, Material);

